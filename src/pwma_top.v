`timescale 1ns / 1ps

module pwma_top (
    input  wire clk,
    input  wire rst,
    input  wire start,

    // Read A and S (NTT domain pairs)
    output reg  [7:0] ram0_addr,
    input  wire signed [15:0] ram0_dout_a0,
    input  wire signed [15:0] ram0_dout_a1,
    input  wire signed [15:0] ram0_dout_b0,
    input  wire signed [15:0] ram0_dout_b1,

    // Read zeta
    output reg  [6:0] zeta_addr,
    input  wire signed [15:0] zeta_in,
    input  wire use_tomont,

    // Read/write t_i (accumulator)
    output reg  [7:0] ram1_addr,
    input  wire signed [15:0] ram1_dout_c0,
    input  wire signed [15:0] ram1_dout_c1,
    output wire signed [15:0] ram1_din_c0,
    output wire signed [15:0] ram1_din_c1,
    output reg  ram1_we,

    output reg  done,

    // Debug taps (values actually captured/used in PWMA pipeline)
    output wire [7:0] dbg_pair,
    output wire signed [15:0] dbg_a0,
    output wire signed [15:0] dbg_a1,
    output wire signed [15:0] dbg_b0,
    output wire signed [15:0] dbg_b1,
    output wire signed [15:0] dbg_zeta,
    output wire signed [15:0] dbg_base_c0,
    output wire signed [15:0] dbg_base_c1,
    output wire signed [15:0] dbg_t_old0,
    output wire signed [15:0] dbg_t_old1,
    output wire signed [15:0] dbg_t_new0,
    output wire signed [15:0] dbg_t_new1
);

    // Keep state/cnt names for existing debug hooks in TB.
    localparam IDLE    = 4'd0;
    localparam ISSUE   = 4'd1;
    localparam WAIT_D  = 4'd2;
    localparam CAPTURE = 4'd3;
    localparam WAIT_M1 = 4'd4;
    localparam WAIT_M2 = 4'd5;
    localparam WAIT_M3 = 4'd6;
    //localparam WRITE   = 4'd7;
    //localparam DONE_S  = 4'd8;
    localparam PREWRITE= 4'd7;
    localparam WRITE   = 4'd8;
    localparam DONE_S  = 4'd9;

    reg [3:0] state;
    reg [7:0] cnt;
    reg [7:0] pair_hold;

    // Basemul input registers (sampled at CAPTURE, produced at WRITE)
    reg signed [15:0] bm_a0, bm_a1, bm_b0, bm_b1, bm_zeta;

    // Debug-visible stage registers (used by TB prints)
    reg [7:0] s1_pair;
    reg signed [15:0] s1_zeta_base;
    reg signed [15:0] s1_zeta_eff;
    reg signed [15:0] s1_c0_old, s1_c1_old;

    reg signed [15:0] s3_c0_old, s3_c1_old;

    wire signed [15:0] base_c0, base_c1;
    localparam signed [15:0] TOMONT_F = 16'sd1353; // (2^32 mod 3329)
    wire signed [31:0] base_c0_tomont_mul = base_c0 * TOMONT_F;
    wire signed [31:0] base_c1_tomont_mul = base_c1 * TOMONT_F;
    wire signed [15:0] base_c0_tomont, base_c1_tomont;

    wire signed [15:0] base_c0_sel = use_tomont ? base_c0_tomont : base_c0;
    wire signed [15:0] base_c1_sel = use_tomont ? base_c1_tomont : base_c1;
    wire signed [15:0] acc_c0_raw = base_c0_sel + s3_c0_old;
    wire signed [15:0] acc_c1_raw = base_c1_sel + s3_c1_old;
    reg  signed [15:0] ram1_din_c0_r, ram1_din_c1_r;

    basemul u_basemul (
        .clk(clk), .rst(rst),
        .a0(bm_a0), .a1(bm_a1),
        .b0(bm_b0), .b1(bm_b1),
        .zeta(bm_zeta),
        .c0(base_c0), .c1(base_c1)
    );

    montgomery_reduce u_mont_tomont_c0 ( .a(base_c0_tomont_mul), .t(base_c0_tomont) );
    montgomery_reduce u_mont_tomont_c1 ( .a(base_c1_tomont_mul), .t(base_c1_tomont) );

    //barrett_reduce u_barrett_acc_c0 ( .a(acc_c0_raw), .out(ram1_din_c0) );
    //barrett_reduce u_barrett_acc_c1 ( .a(acc_c1_raw), .out(ram1_din_c1) );
    wire signed [15:0] acc_c0_red;
    wire signed [15:0] acc_c1_red;
    barrett_reduce u_barrett_acc_c0 ( .a(acc_c0_raw), .out(acc_c0_red) );
    barrett_reduce u_barrett_acc_c1 ( .a(acc_c1_raw), .out(acc_c1_red) );

    assign ram1_din_c0 = ram1_din_c0_r;
    assign ram1_din_c1 = ram1_din_c1_r;

    assign dbg_pair    = pair_hold;
    assign dbg_a0      = bm_a0;
    assign dbg_a1      = bm_a1;
    assign dbg_b0      = bm_b0;
    assign dbg_b1      = bm_b1;
    assign dbg_zeta    = bm_zeta;
    assign dbg_base_c0 = base_c0;
    assign dbg_base_c1 = base_c1;
    assign dbg_t_old0  = s3_c0_old;
    assign dbg_t_old1  = s3_c1_old;
    assign dbg_t_new0  = ram1_din_c0;
    assign dbg_t_new1  = ram1_din_c1;

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            cnt <= 8'd0;
            pair_hold <= 8'd0;
            done <= 1'b0;
            ram0_addr <= 8'd0;
            ram1_addr <= 8'd0;
            zeta_addr <= 7'd64;
            ram1_we <= 1'b0;

            bm_a0 <= 16'sd0; bm_a1 <= 16'sd0; bm_b0 <= 16'sd0; bm_b1 <= 16'sd0; bm_zeta <= 16'sd0;
            s1_pair <= 8'd0;
            s1_zeta_base <= 16'sd0; s1_zeta_eff <= 16'sd0;
            s1_c0_old <= 16'sd0; s1_c1_old <= 16'sd0;
            s3_c0_old <= 16'sd0; s3_c1_old <= 16'sd0;
            ram1_din_c0_r <= 16'sd0; ram1_din_c1_r <= 16'sd0;
        end else begin
            done <= 1'b0;
            ram1_we <= 1'b0;

            case (state)
                IDLE: begin
                    if (start) begin
                        cnt <= 8'd0;
                        state <= ISSUE;
                    end
                end

                ISSUE: begin
                    // Issue read addresses for this pair.
                    ram0_addr <= cnt;
                    ram1_addr <= cnt;
                    zeta_addr <= 7'd64 + cnt[7:1];
                    pair_hold <= cnt;
                    state <= WAIT_D;
                end

                WAIT_D: begin
                    // Wait 1 cycle for synchronous RAM/ROM outputs to update.
                    state <= CAPTURE;
                end

                CAPTURE: begin
                    // RAM/ROM outputs are now valid for pair_hold.
                    s1_pair <= pair_hold;
                    s1_zeta_base <= zeta_in;
                    s1_zeta_eff <= pair_hold[0] ? -zeta_in : zeta_in;
                    s1_c0_old <= ram1_dout_c0;
                    s1_c1_old <= ram1_dout_c1;

                    bm_a0 <= ram0_dout_a0;
                    bm_a1 <= ram0_dout_a1;
                    bm_b0 <= ram0_dout_b0;
                    bm_b1 <= ram0_dout_b1;
                    bm_zeta <= pair_hold[0] ? -zeta_in : zeta_in;

                    // Hold t_old for write-back cycle.
                    s3_c0_old <= ram1_dout_c0;
                    s3_c1_old <= ram1_dout_c1;
                    state <= WAIT_M1;
                end

                WAIT_M1: begin
                    state <= WAIT_M2;
                end

                WAIT_M2: begin
                    state <= WAIT_M3;
                end

                WAIT_M3: begin
                    // basemul has a 3-stage registered output
                    state <= PREWRITE;
                end

                PREWRITE: begin
                    // Register write-back data to break long DSP->BRAM timing path
                    ram1_din_c0_r <= acc_c0_red;
                    ram1_din_c1_r <= acc_c1_red;
                    state <= WRITE;
                end

                WRITE: begin
                    ram1_we <= 1'b1;
                    ram1_addr <= pair_hold;

                    if (pair_hold == 8'd127) begin
                        state <= DONE_S;
                    end else begin
                        cnt <= pair_hold + 8'd1;
                        state <= ISSUE;
                    end
                end

                DONE_S: begin
                    done <= 1'b1;
                    state <= IDLE;
                end

                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule
