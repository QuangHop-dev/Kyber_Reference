`timescale 1ns / 1ps

module kyber_comparator (
    input  wire clk,
    input  wire rst,             // Active HIGH
    input  wire start,
    input  wire [10:0] data_len, // Độ dài bản mã (tùy thuộc Kyber512/768/1024)
    
    // Giao tiếp với RAM chứa Ciphertext gốc (C)
    output reg  [10:0] addr_c,
    input  wire [31:0] data_c,   // Giả sử RAM lưu 32-bit/word (ghép 2 hệ số 16-bit)
    
    // Giao tiếp với RAM chứa Ciphertext tái tạo (C')
    output reg  [10:0] addr_c_prime,
    input  wire [31:0] data_c_prime,
    
    output reg  not_equal,       // 0: Khớp hoàn toàn, 1: Có sai lệch
    output reg  done
);

    localparam IDLE = 2'd0;
    localparam COMPARE = 2'd1;
    localparam FINISH = 2'd2;
    
    reg [1:0] state;
    reg [10:0] cnt;
    reg diff_accumulator; // Biến tích lũy lỗi

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            addr_c <= 0;
            addr_c_prime <= 0;
            not_equal <= 0;
            done <= 0;
            diff_accumulator <= 0;
            cnt <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start) begin
                        state <= COMPARE;
                        cnt <= 0;
                        diff_accumulator <= 0;
                        // Bắt đầu đọc từ địa chỉ 0
                        addr_c <= 0;
                        addr_c_prime <= 0; 
                    end
                end
                
                COMPARE: begin
                    // Pipeline: Data từ RAM trả về sau 1 clock so với địa chỉ
                    // Ở clock này, ta so sánh data của (cnt-1) nếu cnt > 0
                    if (cnt > 0) begin
                        // Nếu data khác nhau, diff sẽ lên 1 và giữ mãi ở 1 (OR logic)
                        if (data_c != data_c_prime)
                            diff_accumulator <= 1'b1;
                    end
                    
                    if (cnt == data_len) begin
                        state <= FINISH;
                    end else begin
                        cnt <= cnt + 1;
                        addr_c <= cnt + 1;
                        addr_c_prime <= cnt + 1;
                    end
                end
                
                FINISH: begin
                    // Kiểm tra nốt mẫu cuối cùng (do độ trễ RAM)
                    if (data_c != data_c_prime)
                        diff_accumulator <= 1'b1;
                        
                    not_equal <= diff_accumulator | (data_c != data_c_prime);
                    done <= 1;
                    state <= IDLE;
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule