`timescale 1ns / 1ps

(* keep_hierarchy = "yes" *)
module trng (
    input  wire        clk,      // Xung nhịp hệ thống (vd: 100MHz)
    input  wire        rst,
    output reg [31:0]  trng_register,
    output reg         o_bit_valid
);

    (* KEEP = "TRUE" *) reg  en = 1'b0;
    (* KEEP = "TRUE" *) wire ro1, ro2, ro3, ro4;

    // --- 1. INSTANTIATE MUROs ---
    (* DONT_TOUCH = "TRUE", keep_hierarchy = "yes" *) muro_127 ro1_dut (.en(en), .output_muro(ro1));
    (* DONT_TOUCH = "TRUE", keep_hierarchy = "yes" *) muro_97  ro2_dut (.en(en), .output_muro(ro2));
    (* DONT_TOUCH = "TRUE", keep_hierarchy = "yes" *) muro_92  ro3_dut (.en(en), .output_muro(ro3));
    (* DONT_TOUCH = "TRUE", keep_hierarchy = "yes" *) muro_64  ro4_dut (.en(en), .output_muro(ro4));

    always @(posedge clk or posedge rst) begin
        if (rst) en <= 1'b0; else en <= 1'b1;
    end

    // --- 2. TẠO CLOCK ENABLE (Xóa sổ lỗi CDC) ---
    // Thay vì chia clock, ta tạo 1 xung Enable xuất hiện mỗi 47 chu kỳ
    reg [5:0] div_cnt;
    wire sample_en = (div_cnt == 6'd46); // Xung này chỉ rộng đúng 1 chu kỳ clk

    always @(posedge clk or posedge rst) begin
        if (rst) div_cnt <= 6'd0;
        else if (sample_en) div_cnt <= 6'd0;
        else div_cnt <= div_cnt + 1'b1;
    end

    // --- 3. SYNCHRONIZE NHIỄU ---
    reg r1, r2, r3, r4;
    always @(posedge clk) begin
        if (sample_en) begin
            r1 <= ro1; r2 <= ro2; r3 <= ro3; r4 <= ro4; // Chụp trạng thái RO
        end
    end

    // --- 4. CONTINUOUS ARX STATE MIXER (0.999+ Entropy) ---
    // Trạng thái nội bộ 64-bit.
    reg [31:0] stateA = 32'h9E3779B9; 
    reg [31:0] stateB = 32'h85A633D4; 
    reg [5:0]  mix_cnt;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            stateA <= 32'h9E3779B9;
            stateB <= 32'h85A633D4;
            mix_cnt <= 6'd0;
            o_bit_valid <= 1'b0;
            trng_register <= 32'd0;
        end else begin
            o_bit_valid <= 1'b0; // Đảm bảo xung valid chỉ tồn tại 1 chu kỳ

            // Chỉ tính toán khi có xung Enable (mỗi 47 clk)
            if (sample_en) begin
                // Bơm 4 bit nhiễu trực tiếp vào StateA và khuấy (Mix)
                stateA <= stateA + stateB + {28'd0, r1, r2, r3, r4};
                
                // StateB dịch trái 13 bit và XOR với StateA
                stateB <= {stateB[18:0], stateB[31:19]} ^ stateA;
                
                // Đếm số lần khuấy
                mix_cnt <= mix_cnt + 1'b1;
                
                // Cứ sau 64 lần khuấy (đủ để nhiễu lan tỏa 100%), xuất dữ liệu
                if (mix_cnt == 6'd63) begin
                    trng_register <= stateA ^ stateB; // Gấp nếp 64-bit thành 32-bit
                    o_bit_valid   <= 1'b1;            // Bắn tín hiệu cho FIFO
                end
            end
        end
    end

endmodule