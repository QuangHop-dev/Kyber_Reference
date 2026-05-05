`timescale 1ns / 1ps
(* keep_hierarchy = "yes" *)
module muro_127 (
    input  wire en,
    output wire output_muro
);
    (* KEEP = "TRUE" *) wire ro1, ro2, ro3, ro4, ro5, ro6, ro7, ro8, ro8_div;
    (* KEEP = "TRUE" *) wire ro_xor;
    localparam [6:0] DIV = 7'b1111111;

    (* DONT_TOUCH = "TRUE" *) ring_oscillator_7stage  ro1_inst (.clk(ro8_div), .en(en), .output_ro(ro1));
    (* DONT_TOUCH = "TRUE" *) ring_oscillator_9stage  ro2_inst (.clk(ro8_div), .en(en), .output_ro(ro2));
    (* DONT_TOUCH = "TRUE" *) ring_oscillator_11stage ro3_inst (.clk(ro8_div), .en(en), .output_ro(ro3));
    (* DONT_TOUCH = "TRUE" *) ring_oscillator_13stage ro4_inst (.clk(ro8_div), .en(en), .output_ro(ro4));
    (* DONT_TOUCH = "TRUE" *) ring_oscillator_15stage ro5_inst (.clk(ro8_div), .en(en), .output_ro(ro5));
    (* DONT_TOUCH = "TRUE" *) ring_oscillator_17stage ro6_inst (.clk(ro8_div), .en(en), .output_ro(ro6));
    (* DONT_TOUCH = "TRUE" *) ring_oscillator_19stage ro7_inst (.clk(ro8_div), .en(en), .output_ro(ro7));

    (* DONT_TOUCH = "TRUE" *) ring_oscillator_21stage_async ro8_inst (.en(en), .output_ro(ro8));
    (* DONT_TOUCH = "TRUE" *) clk_div cd_inst (.input_clk(ro8), .div(DIV), .output_clk(ro8_div));

    (* KEEP = "TRUE" *)assign ro_xor = ro1 ^ ro2 ^ ro3 ^ ro4 ^ ro5 ^ ro6 ^ ro7;

    // ✅ BƯỚC 1: KHÔNG CHỐT BẰNG ro8_div nữa
    // Xuất thẳng combinational để giữ jitter/time noise
    assign output_muro = ro_xor;

endmodule
