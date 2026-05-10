`timescale 1ns / 1ps

module basemul (
    input  wire clk,
    input  wire rst,                // Active HIGH Reset
    
    // Đầu vào là 1 cặp hệ số từ đa thức A và 1 cặp từ đa thức B
    input  wire signed [15:0] a0,
    input  wire signed [15:0] a1,
    input  wire signed [15:0] b0,
    input  wire signed [15:0] b1,
    input  wire signed [15:0] zeta, // Hằng số căn nguyên tương ứng
    
    // Đầu ra là 1 cặp hệ số kết quả
    output reg  signed [15:0] c0,
    output reg  signed [15:0] c1
);

    // --- 1. Khai báo tín hiệu trung gian ---
    wire signed [31:0] mul_a0_b0;
    wire signed [31:0] mul_a1_b1;
    wire signed [15:0] mont_a0_b0;
    wire signed [15:0] mont_a1_b1;
    
    wire signed [15:0] sum_a;
    wire signed [15:0] sum_b;
    wire signed [31:0] mul_sum;
    wire signed [15:0] mont_sum;
    
    wire signed [31:0] mul_zeta;
    wire signed [15:0] mont_zeta;
    
    wire signed [15:0] c0_raw;
    wire signed [15:0] c1_raw;
    
    wire signed [15:0] c0_barrett;
    wire signed [15:0] c1_barrett;

    // --- 2. Thực hiện các phép nhân cơ sở ---
    assign mul_a0_b0 = a0 * b0;
    assign mul_a1_b1 = a1 * b1;
    
    assign sum_a = a0 + a1;
    assign sum_b = b0 + b1;
    assign mul_sum = sum_a * sum_b; // Phép nhân Karatsuba

    // --- 3. Giảm Montgomery cho các tích ---
    montgomery_reduce u_mont_00 ( .a(mul_a0_b0), .t(mont_a0_b0) );
    montgomery_reduce u_mont_11 ( .a(mul_a1_b1), .t(mont_a1_b1) );
    montgomery_reduce u_mont_sum( .a(mul_sum),   .t(mont_sum) );

    // ========================================================
    // PIPELINE STAGE 1: Break DSP Multiplier critical path
    // ========================================================
    reg signed [15:0] s1_mont_00, s1_mont_11, s1_mont_sum, s1_zeta;
    always @(posedge clk) begin
        if (rst) begin
            s1_mont_00  <= 16'sd0;
            s1_mont_11  <= 16'sd0;
            s1_mont_sum <= 16'sd0;
            s1_zeta     <= 16'sd0;
        end else begin
            s1_mont_00  <= mont_a0_b0;
            s1_mont_11  <= mont_a1_b1;
            s1_mont_sum <= mont_sum;
            s1_zeta     <= zeta;
        end
    end

    // --- 4. Nhân phần a1*b1 với Zeta ---
    assign mul_zeta = s1_mont_11 * s1_zeta;
    montgomery_reduce u_mont_zeta ( .a(mul_zeta), .t(mont_zeta) );

    // ========================================================
    // PIPELINE STAGE 2: Break DSP Multiplier critical path
    // ========================================================
    reg signed [15:0] s2_mont_00, s2_mont_11, s2_mont_sum, s2_mont_zeta;
    always @(posedge clk) begin
        if (rst) begin
            s2_mont_00   <= 16'sd0;
            s2_mont_11   <= 16'sd0;
            s2_mont_sum  <= 16'sd0;
            s2_mont_zeta <= 16'sd0;
        end else begin
            s2_mont_00   <= s1_mont_00;
            s2_mont_11   <= s1_mont_11;
            s2_mont_sum  <= s1_mont_sum;
            s2_mont_zeta <= mont_zeta;
        end
    end

    // --- 5. Tính toán c0 và c1 (Cộng trừ) ---
    // c0 = a0*b0 + (a1*b1)*zeta
    assign c0_raw = s2_mont_00 + s2_mont_zeta;
    
    // c1 = (a0+a1)*(b0+b1) - a0*b0 - a1*b1
    assign c1_raw = s2_mont_sum - s2_mont_00 - s2_mont_11;

    // --- 6. Gọi Barrett Reduce để gọt về 16-bit chuẩn ---
    barrett_reduce u_barrett_c0 ( .a(c0_raw), .out(c0_barrett) );
    barrett_reduce u_barrett_c1 ( .a(c1_raw), .out(c1_barrett) );

    // --- 7. Thanh ghi đầu ra (Pipeline Stage) ---
    always @(posedge clk) begin
        if (rst) begin
            c0 <= 16'd0;
            c1 <= 16'd0;
        end else begin
            c0 <= c0_barrett;
            c1 <= c1_barrett;
        end
    end

endmodule