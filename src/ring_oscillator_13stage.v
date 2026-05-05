`timescale 1ns / 1ps
(* keep_hierarchy = "yes" *)
module ring_oscillator_13stage (input wire clk, input wire en, output reg output_ro);
    (* KEEP = "TRUE", DONT_TOUCH = "TRUE", ALLOW_COMBINATORIAL_LOOPS = "TRUE" *) wire rot, nad, iv1, iv2, iv3, iv4, iv5, iv6, iv7, iv8, iv9, iv10, iv11, iv12;
    assign nad = (en & rot); assign iv1 = ~nad; assign iv2 = ~iv1; assign iv3 = ~iv2; assign iv4 = ~iv3;
    assign iv5 = ~iv4; assign iv6 = ~iv5; assign iv7 = ~iv6; assign iv8 = ~iv7; assign iv9 = ~iv8; assign iv10 = ~iv9; assign iv11 = ~iv10; assign iv12 = ~iv11; assign rot = ~iv12;
    always @(posedge clk) output_ro <= rot;
endmodule