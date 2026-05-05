`timescale 1ns / 1ps

module kyber_compressor (
    //input  wire [1:0] mode_k,       // 00: k=2 (Kyber512), 01: k=3, 10: k=4
    input  wire mode_op,            // 0: Compress (Nén), 1: Decompress (Giải nén)
    input  wire [3:0] d_bits,       // Số bit nén: 10 (cho vector u), 4 (cho vector v), 1 (cho msg)
    input  wire signed [15:0] in_val, // Giá trị đầu vào
    output reg  signed [15:0] out_val // Giá trị đầu ra
);

    // Hằng số Kyber
    localparam signed [31:0] Q = 32'd3329;
    localparam signed [31:0] Q_HALF = 32'd1664; // q/2 làm tròn

    // --- LOGIC CHO COMPRESS ---
    // Công thức: out = round(in * 2^d / q) % 2^d
    // Để tránh phép chia, ta nhân với (2^d << Shift) / q
    // Tuy nhiên để đơn giản và chính xác trên FPGA, ta dùng nhân và so sánh.
    
    reg [31:0] compress_temp;
    reg [15:0] compress_res;
    
    always @(*) begin
        // 1. Nhân in_val với 2^d
        // d_bits thường là 1, 4, 10, 11
        compress_temp = {16'b0, in_val} << d_bits;
        
        // 2. Cộng thêm q/2 để làm tròn (round)
        compress_temp = compress_temp + Q_HALF;
        
        // 3. Chia cho q (Thực hiện bằng nhân nghịch đảo hoặc chia cứng tùy tài nguyên)
        // Ở đây dùng phép chia để mô tả logic chuẩn (Synthesis tool sẽ tối ưu)
        compress_temp = compress_temp / Q;
        
        // 4. Modulo 2^d (Lấy d bit thấp)
        compress_temp = compress_temp & ((32'd1 << d_bits) - 32'd1);
        compress_res  = compress_temp[15:0];
    end

    // --- LOGIC CHO DECOMPRESS ---
    // Công thức: out = round(in * q / 2^d)
    
    reg [31:0] decompress_temp;
    reg [15:0] decompress_res;
    
    always @(*) begin
        // 1. Nhân in_val với q
        decompress_temp = in_val * Q;
        
        // 2. Dịch trái 1 bit để hỗ trợ làm tròn (tương đương nhân 2)
        decompress_temp = decompress_temp << 1;
        
        // 3. Chia cho 2^d
        decompress_temp = decompress_temp >> d_bits;
        
        // 4. Cộng 1 rồi chia 2 để làm tròn số học
        decompress_temp = decompress_temp + 1;
        decompress_temp = decompress_temp >> 1;
        
        decompress_res = decompress_temp[15:0];
    end

    // --- MUX OUTPUT ---
    always @(*) begin
        if (mode_op == 1'b0) 
            out_val = compress_res;
        else 
            out_val = decompress_res;
    end

endmodule
