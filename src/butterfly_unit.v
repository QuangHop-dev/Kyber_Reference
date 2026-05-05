`timescale 1ns / 1ps

module butterfly_unit (
    input  wire clk,
    input  wire rst,                // Active HIGH Reset
    input  wire mode,               // 0: NTT (CT), 1: INTT (GS)
    input  wire signed [15:0] a,    // Hệ số đa thức thứ 1
    input  wire signed [15:0] b,    // Hệ số đa thức thứ 2
    input  wire signed [15:0] zeta, // Hằng số căn nguyên (Twiddle factor)
    
    output reg signed [15:0] out_a, // Kết quả A'
    output reg signed [15:0] out_b  // Kết quả B'
);

    // --- Khai báo dây tín hiệu nội bộ ---
    
    // Tín hiệu cho phép cộng/trừ
    wire signed [15:0] sum_a_b;
    wire signed [15:0] sub_a_b;
    
    // Tín hiệu cho đầu vào phép nhân Montgomery
    reg signed [15:0] mult_op1;
    reg signed [15:0] mult_op2;
    
    // Kết quả phép nhân 32-bit
    wire signed [31:0] prod;
    
    // Kết quả sau khi Montgomery Reduce
    wire signed [15:0] mont_res;
    
    // Kết quả tạm thời trước khi đưa ra output
    wire signed [15:0] temp_a;
    wire signed [15:0] temp_b;

    // Kết quả sau khi đã được chuẩn hóa bởi Barrett Reduce
    wire signed [15:0] barrett_a;
    wire signed [15:0] barrett_b;

    // --- 1. Tính toán Cộng / Trừ (Dùng cho cả NTT và INTT) ---
    assign sum_a_b = a + b;
    assign sub_a_b = a - b;

    // --- 2. Bộ chọn (Multiplexer) điều khiển luồng dữ liệu theo Mode ---
    // NTT (Mode 0):  Nhân b*zeta TRƯỚC, sau đó mới cộng trừ.
    // INTT (Mode 1): Cộng trừ TRƯỚC, sau đó lấy hiệu nhân với zeta.
    always @(*) begin
        if (mode == 1'b0) begin // Mode NTT (Cooley-Tukey)
            mult_op1 = b;
            mult_op2 = zeta;
        end else begin          // Mode INTT (Gentleman-Sande)
            mult_op1 = -sub_a_b; // (b - a)
            mult_op2 = zeta;
        end
    end

    // --- 3. Thực hiện phép nhân ---
    assign prod = mult_op1 * mult_op2;

    // --- 4. Gọi Module Montgomery Reduce ---
    // Module này là mạch tổ hợp, giảm kết quả 32-bit về 16-bit
    montgomery_reduce u_mont (
        .a(prod),
        .t(mont_res)
    );

    // ========================================================
    // PIPELINE STAGE 1: Latch data to break combinatorial chain
    // ========================================================
    reg signed [15:0] s1_a;
    reg signed [15:0] s1_sum_a_b;
    reg signed [15:0] s1_mont_res;
    reg s1_mode;

    always @(posedge clk) begin
        if (rst) begin
            s1_a        <= 16'sd0;
            s1_sum_a_b  <= 16'sd0;
            s1_mont_res <= 16'sd0;
            s1_mode     <= 1'b0;
        end else begin
            s1_a        <= a;
            s1_sum_a_b  <= sum_a_b;
            s1_mont_res <= mont_res;
            s1_mode     <= mode;
        end
    end

    // --- 5. Tính toán kết quả tạm thời (Combinational) ---
    // NTT:  temp_a = a + (b*zeta)  | temp_b = a - (b*zeta)
    // INTT: temp_a = a + b         | temp_b = (a - b)*zeta
    
    assign temp_a = (s1_mode == 1'b0) ? (s1_a + s1_mont_res) : s1_sum_a_b;
    assign temp_b = (s1_mode == 1'b0) ? (s1_a - s1_mont_res) : s1_mont_res;

    // --- 6. Tích hợp Module Barrett Reduce ---
    // Đảm bảo mọi kết quả cộng/trừ/dịch bit đều được ép chặt vào khoảng modulo hợp lệ.
    barrett_reduce u_barrett_a (
        .a(temp_a),
        .out(barrett_a)
    );

    barrett_reduce u_barrett_b (
        .a(temp_b),
        .out(barrett_b)
    );

    // --- 7. Output Register (Pipeline Stage) ---
    // Cập nhật giá trị đã qua Barrett Reduce vào thanh ghi đầu ra
    // Dùng Reset Active HIGH
    always @(posedge clk) begin
        if (rst) begin
            out_a <= 16'd0;
            out_b <= 16'd0;
        end else begin
            out_a <= barrett_a; 
            out_b <= barrett_b;
        end
    end

endmodule
