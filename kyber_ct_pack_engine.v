`timescale 1ns / 1ps

// Full-stream ciphertext pack engine (IND-CPA format):
// ct = pack(u) || pack(v)
// - u: k polynomials, each 256 coeffs
//   k=2/3: d_u=10, 4 coeff -> 5 bytes  => 320 bytes/poly
//   k=4  : d_u=11, 8 coeff -> 11 bytes => 352 bytes/poly
// - v: 1 polynomial, 256 coeffs
//   k=2/3: d_v=4,  8 coeff -> 4 bytes  => 128 bytes
//   k=4  : d_v=5,  8 coeff -> 5 bytes  => 160 bytes
module kyber_ct_pack_engine (
    input  wire        clk,
    input  wire        rst,
    input  wire        start,
    //input  wire [1:0]  mode_k,
    input  wire [31:0] ct_base_addr,

    // u coeff stream source (contiguous: poly0[0..255], poly1[...], ...)
    output reg  [10:0] u_addr,
    input  wire signed [15:0] u_coeff_din,

    // v coeff stream source (poly[0..255])
    output reg  [7:0]  v_addr,
    input  wire signed [15:0] v_coeff_din,

    // output byte stream to ext RAM
    output reg         ext_we,
    output reg  [31:0] ext_addr,
    output reg  [31:0] ext_dout,
    input  wire        ext_ready,

    output reg         done
);
    localparam DEBUG_CT_SEG = 1'b0;
    localparam S_IDLE       = 4'd0;
    localparam S_U_ISSUE    = 4'd1;
    localparam S_U_WAIT     = 4'd2;
    localparam S_U_PACK     = 4'd3;
    localparam S_U_WRITE    = 4'd4;
    localparam S_V_ISSUE    = 4'd5;
    localparam S_V_WAIT     = 4'd6;
    localparam S_V_PACK     = 4'd7;
    localparam S_V_WRITE    = 4'd8;
    localparam S_DONE       = 4'd9;

    reg [3:0] state;

    /*wire [2:0] k_val = {1'b0, mode_k} + 3'd2; // 2/3/4
    wire use_u11 = (mode_k == 2'b10);
    wire use_v5  = (mode_k == 2'b10);

    wire [3:0] u_group_sz      = use_u11 ? 4'd8  : 4'd4;
    wire [3:0] u_bytes_per_grp = use_u11 ? 4'd11 : 4'd5;
    wire [6:0] u_groups_per_poly = use_u11 ? 7'd32 : 7'd64;*/
    wire [2:0] k_val = 3'd2; // Kyber512 only
    wire [3:0] u_group_sz      = 4'd4;
    wire [3:0] u_bytes_per_grp = 4'd5;
    wire [6:0] u_groups_per_poly = 7'd64;
    wire [9:0] u_total_groups  = {3'd0, k_val} * {3'd0, u_groups_per_poly};
    wire [3:0] v_group_sz      = 4'd8;
    //wire [3:0] v_bytes_per_grp = use_v5 ? 4'd5 : 4'd4;
    wire [3:0] v_bytes_per_grp = 4'd4;
    wire [5:0] v_total_groups  = 6'd32;
    wire [31:0] u_total_bytes = {22'd0, u_total_groups} * {28'd0, u_bytes_per_grp};
    wire [31:0] v_total_bytes = {26'd0, v_total_groups} * {28'd0, v_bytes_per_grp};
    wire [31:0] ct_total_bytes = u_total_bytes + v_total_bytes;

    reg [8:0] group_idx;
    reg [3:0] cap_idx;
    reg [3:0] wr_idx;
    reg [31:0] byte_idx;
    reg [1:0]  wait_u;
    reg [1:0]  wait_v;
    wire [8:0] v_addr_w = ((group_idx * v_group_sz) + {5'd0, cap_idx}) & 9'h0ff;
    wire [7:0] v_addr_calc = v_addr_w[7:0];

    reg signed [15:0] c0, c1, c2, c3, c4, c5, c6, c7;
    reg [127:0] codec_coeff_in;
    reg [87:0]  codec_bytes_in;
    reg [2:0]   codec_op;
    wire [127:0] codec_coeff_out;
    wire [87:0]  codec_bytes_out;

    kyber_codec u_codec (
        .op(codec_op),
        .coeff_in(codec_coeff_in),
        .bytes_in(codec_bytes_in),
        .coeff_out(codec_coeff_out),
        .bytes_out(codec_bytes_out)
    );

    task load_coeff_slot;
        input [3:0] idx;
        input signed [15:0] val;
        begin
            case (idx)
                4'd0: c0 <= val;
                4'd1: c1 <= val;
                4'd2: c2 <= val;
                4'd3: c3 <= val;
                4'd4: c4 <= val;
                4'd5: c5 <= val;
                4'd6: c6 <= val;
                default: c7 <= val;
            endcase
        end
    endtask

    /*wire [8:0] u_poly_idx_w = use_u11 ? (group_idx / 9'd32) : (group_idx / 9'd64);
    wire [8:0] u_group_local_w = use_u11 ? (group_idx % 9'd32) : (group_idx % 9'd64);
    wire [31:0] ct_idx_w = byte_idx + {28'd0, wr_idx};*/

    always @(posedge clk) begin
        if (rst) begin
            state <= S_IDLE;
            u_addr <= 11'd0;
            v_addr <= 8'd0;
            ext_we <= 1'b0;
            ext_addr <= 32'd0;
            ext_dout <= 32'd0;
            done <= 1'b0;
            group_idx <= 9'd0;
            cap_idx <= 4'd0;
            wr_idx <= 4'd0;
            byte_idx <= 32'd0;
            wait_u <= 2'd0;
            wait_v <= 2'd0;
            c0 <= 0; c1 <= 0; c2 <= 0; c3 <= 0; c4 <= 0; c5 <= 0; c6 <= 0; c7 <= 0;
            codec_coeff_in <= 128'd0;
            codec_bytes_in <= 88'd0;
            codec_op <= 3'd0;
        end else begin
            ext_we <= 1'b0;
            done <= 1'b0;

            case (state)
                S_IDLE: begin
                    if (start) begin
                        group_idx <= 9'd0;
                        cap_idx <= 4'd0;
                        wr_idx <= 4'd0;
                        byte_idx <= 32'd0;
                        wait_u <= 2'd0;
                        wait_v <= 2'd0;
                        state <= S_U_ISSUE;
                    end
                end

                S_U_ISSUE: begin
                    u_addr <= (group_idx * u_group_sz) + {7'd0, cap_idx};
                    wait_u <= 2'd0;
                    state <= S_U_WAIT;
                end

                S_U_WAIT: begin
                    // Source path is effectively 3 cycles (u_addr -> fsm_addr -> RAM dout -> sample here).
                    if (wait_u < 2'd2) begin
                        wait_u <= wait_u + 2'd1;
                    end else begin
                        wait_u <= 2'd0;
                        load_coeff_slot(cap_idx, u_coeff_din);
                        if (cap_idx + 4'd1 == u_group_sz) begin
                            cap_idx <= 4'd0;
                            state <= S_U_PACK;
                        end else begin
                            cap_idx <= cap_idx + 4'd1;
                            state <= S_U_ISSUE;
                        end
                    end
                end

                S_U_PACK: begin
                    codec_coeff_in <= {c7, c6, c5, c4, c3, c2, c1, c0};
                    codec_bytes_in <= 88'd0;
                    //codec_op <= use_u11 ? 3'd2 : 3'd0; // pack_u11 / pack_u10
                    codec_op <= 3'd0; // pack_u10
                    wr_idx <= 4'd0;
                    state <= S_U_WRITE;
                end

                S_U_WRITE: begin
                    ext_we <= 1'b1;
                    ext_addr <= ct_base_addr + byte_idx + {28'd0, wr_idx};
                    ext_dout <= {24'd0, codec_bytes_out[(wr_idx * 8) +: 8]};

                    // Honor external backpressure: advance only when this byte is accepted.
                    if (ext_ready) begin
                        if (wr_idx + 4'd1 == u_bytes_per_grp) begin
                            wr_idx <= 4'd0;
                            byte_idx <= byte_idx + {28'd0, u_bytes_per_grp};
                            if (group_idx + 9'd1 == u_total_groups) begin
                                group_idx <= 9'd0;
                                cap_idx <= 4'd0;
                                state <= S_V_ISSUE;
                            end else begin
                                group_idx <= group_idx + 9'd1;
                                state <= S_U_ISSUE;
                            end
                        end else begin
                            wr_idx <= wr_idx + 4'd1;
                        end
                    end
                end

                S_V_ISSUE: begin
                    v_addr <= v_addr_calc;
                    wait_v <= 2'd0;
                    state <= S_V_WAIT;
                end

                S_V_WAIT: begin
                    if (wait_v < 2'd2) begin
                        wait_v <= wait_v + 2'd1;
                    end else begin
                        wait_v <= 2'd0;
                        load_coeff_slot(cap_idx, v_coeff_din);
                        if (cap_idx + 4'd1 == v_group_sz) begin
                            cap_idx <= 4'd0;
                            state <= S_V_PACK;
                        end else begin
                            cap_idx <= cap_idx + 4'd1;
                            state <= S_V_ISSUE;
                        end
                    end
                end

                S_V_PACK: begin
                    codec_coeff_in <= {c7, c6, c5, c4, c3, c2, c1, c0};
                    codec_bytes_in <= 88'd0;
                    //codec_op <= use_v5 ? 3'd6 : 3'd4; // pack_v5 / pack_v4
                    codec_op <= 3'd4; // pack_v4
                    wr_idx <= 4'd0;
                    state <= S_V_WRITE;
                end

                S_V_WRITE: begin
                    ext_we <= 1'b1;
                    ext_addr <= ct_base_addr + byte_idx + {28'd0, wr_idx};
                    ext_dout <= {24'd0, codec_bytes_out[(wr_idx * 8) +: 8]};

                    // Honor external backpressure: advance only when this byte is accepted.
                    if (ext_ready) begin
                        if (wr_idx + 4'd1 == v_bytes_per_grp) begin
                            wr_idx <= 4'd0;
                            byte_idx <= byte_idx + {28'd0, v_bytes_per_grp};
                            if (group_idx + 9'd1 == {3'd0, v_total_groups}) begin
                                state <= S_DONE;
                            end else begin
                                group_idx <= group_idx + 9'd1;
                                state <= S_V_ISSUE;
                            end
                        end else begin
                            wr_idx <= wr_idx + 4'd1;
                        end
                    end
                end

                S_DONE: begin
                    // Keep done sticky until next start to avoid 1-cycle pulse loss
                    // when parent FSM is stalled by ext handshake.
                    done <= 1'b1;
                    if (start) begin
                        group_idx <= 9'd0;
                        cap_idx <= 4'd0;
                        wr_idx <= 4'd0;
                        byte_idx <= 32'd0;
                        wait_u <= 2'd0;
                        wait_v <= 2'd0;
                        done <= 1'b0;
                        state <= S_U_ISSUE;
                    end
                end

                default: state <= S_IDLE;
            endcase
        end
    end
endmodule
