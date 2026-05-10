`timescale 1ns/1ps

// =============================================================================
// MODULE: gen_matrix
// Sinh ma trận A (hoặc A^T) bằng SHAKE128 + rejection sampling.
//
// Thuật toán:
//   Với mỗi (i,j) trong ma trận k×k:
//     seed = SHAKE128(rho || j || i)        [!transposed]
//     seed = SHAKE128(rho || i || j)        [transposed]
//     Rejection sampling: lấy 12-bit liên tiếp từ stream XOF
//       → Chấp nhận nếu val < KYBER_Q=3329
//     Ghi 256 hệ số vào RAM tại (i*k + j)*256
//
// FIXES so với phiên bản cũ:
//   - Bỏ GM_XOF_WAIT (không cần check busy, keccak mất ~30 cycles nên
//     gen_matrix đã ở GM_WAIT_SQ trước khi squeeze_valid đến)
//   - streaming_shake128 đã sửa để nhận absorb_start từ mọi state
//
// Rejection sampling - shift register 12-bit/cycle:
//   2 candidates từ mỗi 3 bytes (24 bits → 2×12 bits, LSB first)
//   Với block SHAKE128 rate = 168 bytes = 1344 bits, chia hết cho 12
//   nên không cần carry giữa các block.
//
// RAM layout (kyber_memory_map, địa chỉ 11-bit):
//   Kyber-512 (k=2): A[0][0]=1024, A[0][1]=1280, A[1][0]=1536, A[1][1]=1792
// =============================================================================

module gen_matrix (
    input  wire        clk,
    input  wire        rst,
    input  wire        start,

    input  wire [255:0] rho,        // big-endian: rho[0] tại bits[255:248]
    input  wire [1:0]   mode_k,     // 00=k2, 01=k3, 10=k4
    input  wire         transposed,

    output reg          we,
    output reg  [11:0]  ram_addr,
    output reg  [15:0]  ram_dout,

    output reg          done,
    output wire         busy
);

    localparam KYBER_Q = 12'd3329;
    localparam BASE_A  = 12'd0;

    // =========================================================================
    // Hàm đảo byte
    // =========================================================================
    function [255:0] flip_bytes_32;
        input [255:0] in_data;
        integer fi;
        begin
            for (fi = 0; fi < 32; fi = fi + 1)
                flip_bytes_32[(31-fi)*8 +: 8] = in_data[fi*8 +: 8];
        end
    endfunction

    // =========================================================================
    // streaming_shake128
    // =========================================================================
    reg          xof_absorb_start;
    reg  [271:0] xof_din;
    reg          xof_squeeze_next;
    wire [1343:0] xof_squeeze_data;
    wire         xof_squeeze_valid;
    wire         xof_busy;

    streaming_shake128 u_xof (
        .clk          (clk),
        .rst          (rst),
        .absorb_start (xof_absorb_start),
        .din          (xof_din),
        .squeeze_next (xof_squeeze_next),
        .squeeze_data (xof_squeeze_data),
        .squeeze_valid(xof_squeeze_valid),
        .busy         (xof_busy)
    );

    // =========================================================================
    // Thanh ghi nội bộ
    // =========================================================================
    reg [2:0]  loop_i, loop_j;
    reg [2:0]  k_val;
    reg [8:0]  coeff_cnt;     // 0..255
    reg [11:0] poly_base;     // Base address trong RAM

    reg [1343:0] bit_buf;     // 168-byte SHAKE128 block
    reg [10:0]  bit_cnt;      // Số bit hợp lệ còn trong bit_buf

    // =========================================================================
    // FSM states
    // =========================================================================
    localparam GM_IDLE      = 3'd0;
    localparam GM_XOF_INIT  = 3'd1;  // Bắt đầu XOF mới (không cần chờ busy)
    localparam GM_WAIT_SQ   = 3'd2;  // Chờ squeeze_valid
    localparam GM_LOAD      = 3'd3;  // Load squeeze_data + carry vào bit_buf
    localparam GM_REJECT    = 3'd4;  // Rejection sampling 12-bit/cycle
    localparam GM_WAIT_MORE = 3'd5;  // Hết dữ liệu, chờ squeeze_valid tiếp
    localparam GM_NEXT_POLY = 3'd6;  // Chuyển sang polynomial tiếp theo
    localparam GM_DONE      = 3'd7;

    reg [2:0] state;

    assign busy = (state != GM_IDLE);

    // Candidate 12-bit và kiểm tra
    wire [11:0] candidate    = bit_buf[11:0];
    wire         candidate_ok = (candidate < KYBER_Q);

    // =========================================================================
    // FSM
    // =========================================================================
    always @(posedge clk) begin
        if (rst) begin
            state            <= GM_IDLE;
            we               <= 1'b0;
            ram_addr         <= 12'd0;
            ram_dout         <= 16'd0;
            done             <= 1'b0;
            xof_absorb_start <= 1'b0;
            xof_squeeze_next <= 1'b0;
            xof_din          <= 272'd0;
            loop_i           <= 3'd0;
            loop_j           <= 3'd0;
            k_val            <= 3'd2;
            coeff_cnt        <= 9'd0;
            poly_base        <= 12'd0;
            bit_buf          <= 1344'd0;
            bit_cnt          <= 11'd0;
        end else begin
            // Auto-clear strobes
            xof_absorb_start <= 1'b0;
            xof_squeeze_next <= 1'b0;
            we               <= 1'b0;

            case (state)
                // ----------------------------------------------------------
                GM_IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        // Tính k: mode_k=00→k=2, 01→k=3, 10→k=4
                        k_val     <= {1'b0, mode_k} + 3'd2;
                        loop_i    <= 3'd0;
                        loop_j    <= 3'd0;
                        coeff_cnt <= 9'd0;
                        poly_base <= BASE_A;
                        bit_cnt    <= 11'd0;
                        state      <= GM_XOF_INIT;
                    end
                end

                // ----------------------------------------------------------
                // Xây dựng XOF input và bắt đầu absorption.
                // FIX: Bỏ GM_XOF_WAIT. Keccak mất ~30 cycles → gen_matrix
                // chắc chắn ở GM_WAIT_SQ trước khi squeeze_valid đến.
                // streaming_shake128 đã được sửa để nhận absorb_start
                // từ bất kỳ state nào (kể cả SQUEEZE) → không deadlock.
                // ----------------------------------------------------------
                GM_XOF_INIT: begin
                    // XOF input (little-endian cho Keccak):
                    //   byte 0..31 = rho (flip từ big-endian)
                    //   byte 32    = j hoặc i (tùy transposed)
                    //   byte 33    = i hoặc j
                    if (!transposed) begin
                        xof_din <= { {5'd0, loop_i},     // byte33
                                     {5'd0, loop_j},     // byte32
                                     flip_bytes_32(rho) }; // byte0..31
                    end else begin
                        xof_din <= { {5'd0, loop_j},
                                     {5'd0, loop_i},
                                     flip_bytes_32(rho) };
                    end
                    xof_absorb_start <= 1'b1;
                    coeff_cnt  <= 9'd0;
                    bit_cnt    <= 11'd0;
                    state      <= GM_WAIT_SQ;  // Không cần chờ busy
                end

                // ----------------------------------------------------------
                GM_WAIT_SQ: begin
                    if (xof_squeeze_valid)
                        state <= GM_LOAD;
                end

                // ----------------------------------------------------------
                // Load 1 SHAKE128 rate block (168 bytes = 1344 bits)
                // ----------------------------------------------------------
                GM_LOAD: begin
                    bit_buf <= xof_squeeze_data;
                    bit_cnt <= 11'd1344;
                    state      <= GM_REJECT;
                end

                // ----------------------------------------------------------
                // Rejection sampling: 1 candidate 12-bit/cycle
                // ----------------------------------------------------------
                GM_REJECT: begin
                    if (coeff_cnt == 9'd256) begin
                        // Đủ 256 hệ số → polynomial tiếp theo
                        state <= GM_NEXT_POLY;

                    end else if (bit_cnt < 11'd12) begin
                        // Hết dữ liệu block hiện tại → xin thêm block kế tiếp
                        xof_squeeze_next <= 1'b1;
                        state <= GM_WAIT_MORE;

                    end else begin
                        // Xử lý 1 candidate
                        bit_buf <= bit_buf >> 12;
                        bit_cnt <= bit_cnt - 11'd12;
                        if (candidate_ok) begin
                            we        <= 1'b1;
                            ram_addr  <= poly_base + {3'd0, coeff_cnt[7:0]};
                            ram_dout  <= {4'd0, candidate};
                            coeff_cnt <= coeff_cnt + 9'd1;
                        end
                    end
                end

                // ----------------------------------------------------------
                GM_WAIT_MORE: begin
                    if (xof_squeeze_valid)
                        state <= GM_LOAD;
                end

                // ----------------------------------------------------------
                // Chuyển sang polynomial tiếp theo hoặc kết thúc
                // ----------------------------------------------------------
                GM_NEXT_POLY: begin
                    we <= 1'b0;

                    if (loop_j + 1 < k_val) begin
                        loop_j    <= loop_j + 1;
                        poly_base <= poly_base + 12'd256;
                        state     <= GM_XOF_INIT;
                    end else if (loop_i + 1 < k_val) begin
                        loop_i    <= loop_i + 1;
                        loop_j    <= 3'd0;
                        poly_base <= poly_base + 12'd256;
                        state     <= GM_XOF_INIT;
                    end else begin
                        state <= GM_DONE;
                    end
                end

                // ----------------------------------------------------------
                GM_DONE: begin
                    done  <= 1'b1;
                    state <= GM_IDLE;
                end

                default: state <= GM_IDLE;
            endcase
        end
    end

endmodule
