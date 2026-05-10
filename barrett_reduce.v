`timescale 1ns / 1ps

module barrett_reduce (
    input  wire signed [15:0] a,     // Dữ liệu đầu vào 16-bit
    output wire signed [15:0] out    // Kết quả sau khi giảm modulo q
);

    // Khai báo các hằng số của Kyber
    localparam signed [15:0] KYBER_Q = 16'd3329;
    localparam signed [31:0] V_CONST = 32'd20159; // v = (1<<26 + 3329/2)/3329

    // Các tín hiệu trung gian (wire)
    wire signed [31:0] mul_v;
    wire signed [15:0] shift_val;
    wire signed [31:0] mul_q;
    wire signed [31:0] shift_full; // wire trung gian 32-bit cho phép dịch

    // Bước 1: Nhân với hằng số v
    assign mul_v = a * V_CONST;
    
    // Bước 2: Dịch phải 26 bit (Toán học có dấu)
    assign shift_full = mul_v >>> 26;
    assign shift_val  = shift_full[15:0];
    
    // Bước 3: Nhân lại với q
    assign mul_q = shift_val * KYBER_Q;
    
    // Bước 4: Trừ đi phần đã vượt quá modulo
    assign out = a - mul_q[15:0];

endmodule