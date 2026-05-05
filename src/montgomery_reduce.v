`timescale 1ns / 1ps

module montgomery_reduce (
    input  wire signed [31:0] a,    // Đầu vào 32-bit (kết quả của phép nhân a*b)
    output wire signed [15:0] t     // Kết quả 16-bit đã giảm modulo
);

    // Hằng số định nghĩa trong Kyber (q = 3329)
    // QINV = -3327 (mod 2^16). Trong hex là 0xF301.
    // Giá trị này thỏa mãn: Q * QINV = -1 mod 2^16
    localparam signed [15:0] KYBER_Q    = 16'd3329;
    localparam signed [15:0] KYBER_QINV = -16'd3327; // 62209

    wire signed [15:0] u;
    wire signed [31:0] t_temp;
    wire signed [31:0] res_sub;
    wire signed [31:0] u_full;   // wire trung gian 32-bit cho phép nhân
    wire signed [31:0] t_shift;  // wire trung gian 32-bit cho phép dịch

    // Bước 1: u = a * QINV mod 2^16 (chỉ lấy 16 bit thấp) [cite: 893]
    assign u_full = a * KYBER_QINV;
    assign u = u_full[15:0];

    // Bước 2: t = u * Q [cite: 894]
    assign t_temp = u * KYBER_Q;

    // Bước 3: (a - t) [cite: 895]
    assign res_sub = a - t_temp;

    // Bước 4: Kết quả >> 16 [cite: 896]
    // Sử dụng >>> để dịch phải giữ dấu (Arithmetic shift)
    assign t_shift = res_sub >>> 16;
    assign t = t_shift[15:0];

endmodule