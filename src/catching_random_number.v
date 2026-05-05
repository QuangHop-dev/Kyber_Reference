`timescale 1ns / 1ps

(* keep_hierarchy = "yes" *)
module catching_random_number (
    input  wire        clk,
    input  wire        rst,
    output reg  [31:0] data_out,
    output reg         data_valid
);

    wire [31:0] trng_word;
    wire        trng_valid_pulse;

    (* DONT_TOUCH="TRUE", keep_hierarchy="yes" *)
    trng trng_inst (
        .clk(clk),
        .rst(rst),
        .trng_register(trng_word),
        .o_bit_valid(trng_valid_pulse)
    );

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            data_out   <= 32'd0;
            data_valid <= 1'b0;
        end else begin
            // Xung valid từ TRNG giờ chỉ rộng đúng 1 chu kỳ hệ thống
            // Việc truyền cho FIFO hoàn toàn không có độ trễ hay lặp dữ liệu
            data_valid <= trng_valid_pulse;
            if (trng_valid_pulse) begin
                data_out <= trng_word;
            end
        end
    end

endmodule

//`timescale 1ns / 1ps

//module catching_random_number(
//    input wire clk,
//    input wire rst,
//    output wire [31:0] data_out,
//    output wire data_valid
//    );
    
//    // --- 1. TĂNG TỐC ĐỘ LẤY MẪU ---
//    // Giảm xuống 40 (tức là F_sample ~ 1.25MHz ở clock 50MHz)
//    // LFSR sẽ lo phần entropy, ta cần tốc độ.
//    localparam [31:0] wait_time = 40; 

//    // --- 2. GIỮ NGUYÊN 20 ROs ---
//    wire T = 1; wire I1 = 1; wire I2 = 2;
//    wire [19:0] osc_out;
    
//    genvar i;
//    generate
//        for (i = 0; i < 20; i = i + 1) begin : gen_osc
//            osc_cell osc_inst (.T(T), .I1(I1), .I2(I2), .OSC(osc_out[i]));
//        end
//    endgenerate

//    // --- 3. TRỘN NHIỄU (XOR TREE) ---
//    wire [3:0] osc_mixed;
//    assign osc_mixed[0] = osc_out[0] ^ osc_out[1] ^ osc_out[2] ^ osc_out[3] ^ osc_out[4];
//    assign osc_mixed[1] = osc_out[5] ^ osc_out[6] ^ osc_out[7] ^ osc_out[8] ^ osc_out[9];
//    assign osc_mixed[2] = osc_out[10] ^ osc_out[11] ^ osc_out[12] ^ osc_out[13] ^ osc_out[14];
//    assign osc_mixed[3] = osc_out[15] ^ osc_out[16] ^ osc_out[17] ^ osc_out[18] ^ osc_out[19];

//    // --- 4. RAW BIT (NGUỒN) ---
//    wire raw_bit;
//    assign raw_bit = osc_mixed[0] ^ osc_mixed[1] ^ osc_mixed[2] ^ osc_mixed[3];

//    // Dummy Ring Gen (Giữ lại để tránh optimize)
//    wire [15:0] debug_ring;
//    wire unused_bit;
//    ring_generator16 ring_gen_inst(
//        .clk(clk), .rst(rst), .osc_in(osc_mixed), 
//        .bit_out(unused_bit), .q(debug_ring)
//    );

//    // --- 5. BỘ LẤY MẪU (SAMPLER) ---
//    reg sample_en;
//    reg [31:0] wait_cnt; 
//    reg old_sample; // Giữ lại Flip-Flop này để chống Metastability cơ bản
    
//    always @(posedge clk or posedge rst) begin
//        if (rst) begin
//            sample_en <= 0;
//            wait_cnt <= 0;
//            old_sample <= 0;
//        end else begin
//            sample_en <= 0;
//            if (wait_cnt >= wait_time - 1) begin
//                sample_en <= 1;
//                wait_cnt <= 0;
//                old_sample <= raw_bit; // Lấy mẫu
//            end else begin
//                wait_cnt <= wait_cnt + 1;
//            end
//        end
//    end
    
//    // --- 6. XỬ LÝ HẬU KỲ: LFSR WHITENER (THAY CHO VON NEUMANN) ---
//    wire white_bit_out;
//    wire white_valid_out;

//    lfsr_whitener whitener_inst (
//        .clk(clk),
//        .rst(rst),
//        .enable(sample_en),     // Kích hoạt khi có mẫu mới
//        .raw_in(old_sample),    // Đưa mẫu thô vào
//        .clean_out(white_bit_out),
//        .valid_out(white_valid_out)
//    );

//    // --- 7. ĐÓNG GÓI VÀO FIFO ---
//    // Lưu ý: Không còn Decimation nữa, tốc độ vào FIFO = tốc độ lấy mẫu
//    catching_ro catching_ro_inst (
//        .clk(clk),
//        .rst(rst),
//        .data_in(white_bit_out),    
//        .valid_in(white_valid_out), 
//        .data_out(data_out),
//        .data_valid(data_valid)
//    );

//endmodule