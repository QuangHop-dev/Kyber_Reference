`timescale 1ns / 1ps

// =============================================================================
// MODULE: cbd_sampler
// Centered Binomial Distribution sampler cho Kyber.
//
// Hỗ trợ:
//   eta=2 (Kyber-768/1024): 4 bits/hệ số, cần 1024 bit (128 byte) input
//   eta=3 (Kyber-512):      6 bits/hệ số, cần 1536 bit (192 byte) input
//
// Input prf_data_in luôn là 1536-bit; khi eta=2 chỉ dùng [1023:0].
// Luôn sinh đủ 256 hệ số.
//
// Port eta3_mode:
//   0 → dùng eta=2  (Kyber-768, Kyber-1024, eta2 mọi variant)
//   1 → dùng eta=3  (Kyber-512 eta1)
// =============================================================================

module cbd_sampler (
    input  wire        clk,
    input  wire        rst,
    input  wire        start,
    input  wire        eta3_mode,          // 1 = eta=3, 0 = eta=2

    input  wire [1535:0] prf_data_in,      
    input  wire [10:0] base_addr,

    output reg         we,
    output reg  [10:0] ram_addr,
    output reg  signed [15:0] poly_coeffs_out,
    output reg         done
);

    localparam IDLE    = 2'd0;
    localparam PROCESS = 2'd1;
    localparam FINISH  = 2'd2;

    reg [1:0]   state;
    reg [1535:0] shift_reg;
    reg [8:0]   coeff_cnt;   // 0..255 (256 hệ số)
    reg         saved_eta3;  // Latch eta3_mode

    // -----------------------------------------------------------------------
    // Trích xuất bit từ shift_reg (combinational)
    // -----------------------------------------------------------------------
    wire b0 = shift_reg[0]; wire b1 = shift_reg[1]; wire b2 = shift_reg[2];
    wire b3 = shift_reg[3]; wire b4 = shift_reg[4]; wire b5 = shift_reg[5]; 

    // Công thức eta=2: coeff = (b0+b1) - (b2+b3)
    wire signed [15:0] sum_a_eta2 = {15'b0, b0} + {15'b0, b1};
    wire signed [15:0] sum_b_eta2 = {15'b0, b2} + {15'b0, b3};
    wire signed [15:0] cbd_val_eta2 = sum_a_eta2 - sum_b_eta2;

    // Công thức eta=3: coeff = (b0+b1+b2) - (b3+b4+b5)
    wire signed [15:0] sum_a_eta3 = {15'b0, b0} + {15'b0, b1} + {15'b0, b2};
    wire signed [15:0] sum_b_eta3 = {15'b0, b3} + {15'b0, b4} + {15'b0, b5};
    wire signed [15:0] cbd_val_eta3 = sum_a_eta3 - sum_b_eta3;

    // Chọn giá trị theo eta
    wire signed [15:0] cbd_val = saved_eta3 ? cbd_val_eta3 : cbd_val_eta2;

    // -----------------------------------------------------------------------
    always @(posedge clk) begin
        if (rst) begin
            state           <= IDLE;
            we              <= 1'b0;
            ram_addr        <= 11'd0;
            poly_coeffs_out <= 16'd0;
            coeff_cnt       <= 9'd0;
            shift_reg       <= 1536'd0;
            done            <= 1'b0;
            saved_eta3      <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 1'b0;
                    we   <= 1'b0;
                    if (start) begin
                        shift_reg  <= prf_data_in;   // Nạp toàn bộ data
                        saved_eta3 <= eta3_mode;     // Latch chế độ eta
                        coeff_cnt  <= 9'd0;
                        state      <= PROCESS;
                    end
                end

                PROCESS: begin
                    we              <= 1'b1;
                    poly_coeffs_out <= cbd_val;
                    
                    // FIX LỖI OFF-BY-ONE: Tính địa chỉ ghi trực tiếp bằng coeff_cnt hiện tại
                    // Xung nhịp này coeff_cnt = 0 -> clock sau RAM sẽ nhận addr = base_addr + 0
                    ram_addr        <= base_addr + {2'd0, coeff_cnt};

                    if (coeff_cnt == 9'd255) begin
                        // Đã sinh đủ 256 hệ số
                        state <= FINISH;
                    end else begin
                        // Dịch đi số bit tương ứng với eta
                        if (saved_eta3) shift_reg <= shift_reg >> 6; 
                        else            shift_reg <= shift_reg >> 4; 
                        
                        coeff_cnt <= coeff_cnt + 1'b1;
                    end
                end

                FINISH: begin
                    we   <= 1'b0;
                    done <= 1'b1;
                    state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule