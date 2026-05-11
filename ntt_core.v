`timescale 1ns / 1ps

module ntt_core (
    input  wire clk,
    input  wire rst,
    input  wire start,
    input  wire mode,               // 0: NTT, 1: INTT
    input  wire intt_gs_en,
    input  wire [3:0] dbg_tag,

    // Giao tiếp với FSM bên ngoài
    input  wire        ext_we,
    input  wire [7:0]  ext_addr,
    input  wire signed [15:0] ext_din,
    output wire signed [15:0] ext_dout,
    output wire signed [15:0] ext_dout_b, // �? MỚI: hệ số tại (ext_addr+1) cho PWMA

    output reg  done
);

    // ==========================================
    // 1. KHAI B�?O T�?N HIỆU NỘI BỘ
    // ==========================================
    reg [2:0] state;
    reg [2:0] stage;
    reg [7:0] cnt;
    reg [1:0] warm_cnt;
    reg [15:0] dbg_call_ctr;
    reg [15:0] dbg_call_id;
    reg [3:0]  dbg_tag_id;

    localparam IDLE = 3'd0;
    localparam WARM = 3'd1;
    localparam CALC = 3'd2;
    localparam PREP = 3'd3;
    localparam DONE = 3'd4;

    wire [7:0]  addr_a, addr_b;
    wire [6:0]  twiddle_addr;

    wire signed [15:0] ram0_dout_a, ram0_dout_b;
    wire signed [15:0] ram1_dout_a, ram1_dout_b;
    wire signed [15:0] zeta;

    wire signed [15:0] bf_in_a, bf_in_b;
    wire signed [15:0] bf_out_a, bf_out_b;

    // ==========================================
    // 2. KHỞI TẠO C�?C MODULE CON
    // ==========================================
    address_generator u_addr_gen (
        .stage(stage), .inv_gs_en(intt_gs_en && mode), .cnt(cnt[6:0]),
        .addr_a(addr_a), .addr_b(addr_b), .twiddle_addr(twiddle_addr)
    );

    twiddle_rom #(.MEMFILE("T:/demo05/src/zeta_values.mem")) u_twiddle (
        .clk(clk), .addr(twiddle_addr), .dout(zeta)
    );

    wire is_even_stage = (stage[0] == 1'b0);

    assign bf_in_a = is_even_stage ? ram0_dout_a : ram1_dout_a;
    assign bf_in_b = is_even_stage ? ram0_dout_b : ram1_dout_b;

    butterfly_unit u_butterfly (
        .clk(clk), .rst(rst), .mode(mode),
        .a(bf_in_a), .b(bf_in_b), .zeta(zeta),
        .out_a(bf_out_a), .out_b(bf_out_b)
    );

    // ==========================================
    // 3. PIPELINE DELAY (Trễ 3 clock)
    // ==========================================
    reg [7:0] delay_addr_a [0:2];
    reg [7:0] delay_addr_b [0:2];
    reg       delay_we     [0:2];

    always @(posedge clk) begin
        if (rst) begin
            delay_we[0] <= 1'b0; delay_we[1] <= 1'b0; delay_we[2] <= 1'b0;
        end else begin
            delay_addr_a[0] <= addr_a; delay_addr_a[1] <= delay_addr_a[0]; delay_addr_a[2] <= delay_addr_a[1];
            delay_addr_b[0] <= addr_b; delay_addr_b[1] <= delay_addr_b[0]; delay_addr_b[2] <= delay_addr_b[1];
            delay_we[0] <= (state == CALC && cnt < 8'd128);
            delay_we[1] <= delay_we[0];
            delay_we[2] <= delay_we[1];
        end
    end

    // ==========================================
    // 4. QUẢN L�? �?ỊNH TUYẾN RAM
    // ==========================================

    wire we_ram0_a = (state == IDLE) ? ext_we : (!is_even_stage ? delay_we[2] : 1'b0);
    wire we_ram0_b = (!is_even_stage ? delay_we[2] : 1'b0);
    wire we_ram1   = (state == IDLE) ? 1'b0 : (is_even_stage ? delay_we[2] : 1'b0);

    wire [7:0] ram0_addr_a = (state == IDLE) ? ext_addr : (we_ram0_a ? delay_addr_a[2] : addr_a);
    wire [7:0] ram0_addr_b = (we_ram0_b ? delay_addr_b[2] : addr_b);

    // RAM1 port A: hệ số CHẴN (ext_addr) khi IDLE, write-back hoặc read addr_a khi NTT
    wire [7:0] ram1_addr_a = (state == IDLE) ? ext_addr
                                              : (we_ram1 ? delay_addr_a[2] : addr_a);

    // RAM1 port B:
    //   IDLE → đ�?c hệ số LẺ = ext_addr + 1, cung cấp ext_dout_b cho PWMA
    //   NTT  → write-back butterfly hoặc read addr_b bình thư�?ng
    wire [7:0] ram1_addr_b = (state == IDLE) ? (ext_addr + 8'd1)
                                              : (we_ram1 ? delay_addr_b[2] : addr_b);

    wire signed [15:0] ram0_din_a = (state == IDLE) ? ext_din : bf_out_a;

    dual_port_ram u_ram0 (
        .clk(clk),
        .we_a(we_ram0_a), .addr_a(ram0_addr_a), .din_a(ram0_din_a), .dout_a(ram0_dout_a),
        .we_b(we_ram0_b), .addr_b(ram0_addr_b), .din_b(bf_out_b),   .dout_b(ram0_dout_b)
    );

    dual_port_ram u_ram1 (
        .clk(clk),
        .we_a(we_ram1), .addr_a(ram1_addr_a), .din_a(bf_out_a), .dout_a(ram1_dout_a),
        .we_b(we_ram1), .addr_b(ram1_addr_b), .din_b(bf_out_b), .dout_b(ram1_dout_b)
    );

    // ==========================================
    // 4.5 SMART OUTPUT MUX
    // ==========================================
    reg last_write_ram;

    always @(posedge clk) begin
        if (rst) begin
            last_write_ram <= 1'b1;
        end else begin
            if (state == IDLE && ext_we)
                last_write_ram <= 1'b0;
            else if (state == DONE)
                last_write_ram <= 1'b1;
        end
    end

    // ext_dout  : hệ số tại địa chỉ ext_addr   (port A của RAM cuối cùng được ghi)
    // ext_dout_b: hệ số tại địa chỉ ext_addr+1  (port B, chỉ valid khi IDLE)
    //             → PWMA dùng cặp (ext_dout, ext_dout_b) = (s[2k], s[2k+1])
    assign ext_dout   = (last_write_ram == 1'b1) ? ram1_dout_a : ram0_dout_a;
    assign ext_dout_b = (last_write_ram == 1'b1) ? ram1_dout_b : ram0_dout_b;

    // ==========================================
    // 5. NTT FSM
    // ==========================================
    always @(posedge clk) begin
        if (rst) begin
            state    <= IDLE;
            stage    <= 3'd0;
            cnt      <= 8'd0;
            warm_cnt <= 2'd0;
            done     <= 1'b0;
            dbg_call_ctr <= 16'd0;
            dbg_call_id  <= 16'd0;
            dbg_tag_id   <= 4'd0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        dbg_call_id  <= dbg_call_ctr;
                        dbg_tag_id   <= dbg_tag;
                        dbg_call_ctr <= dbg_call_ctr + 16'd1;
                        state    <= WARM;
                        stage    <= 3'd0;
                        cnt      <= 8'd0;
                        warm_cnt <= 2'd0;
                    end
                end

                WARM: begin
                    // INTT GS path needs one extra warm cycle to flush prior stage/read residue
                    // before first valid butterfly writeback. With new 3-stage pipe, +1 cycle.
                    if ((mode && intt_gs_en) ? (warm_cnt == 2'd3) : (warm_cnt == 2'd2)) begin
                        state    <= CALC;
                        cnt      <= 8'd0;
                        warm_cnt <= 2'd0;
                    end else begin
                        warm_cnt <= warm_cnt + 2'd1;
                    end
                end

                CALC: begin
                    if (cnt == 8'd128) begin
                        state <= PREP;
                        cnt   <= 8'd0;
                    end else begin
                        cnt <= cnt + 8'd1;
                    end
                end

                PREP: begin
                    if (delay_we[2] == 1'b0 && delay_we[1] == 1'b0 && delay_we[0] == 1'b0) begin
                        if (stage == 3'd6) begin
                            state <= DONE;
                        end else begin
                            stage    <= stage + 3'd1;
                            state    <= WARM;
                            warm_cnt <= 2'd0;
                        end
                    end
                end

                DONE: begin
                    done  <= 1'b1;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

    // Stage-level checkpoint for DEC INTT path: capture written coefficients per stage.
    // We log only idx < 16 to keep output compact.
    always @(posedge clk) begin
        if (!rst && mode && intt_gs_en && delay_we[2]) begin
            if (delay_addr_a[2] < 8'd16)
                ;
            if (delay_addr_b[2] < 8'd16)
                ;
        end
    end

endmodule
