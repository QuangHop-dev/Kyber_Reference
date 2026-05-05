`timescale 1ns / 1ps

// Clock Divider
(* keep_hierarchy = "yes" *)
module clk_div (input wire input_clk, input wire [6:0] div, output wire output_clk);
    (* KEEP = "TRUE" *) reg [6:0] counter = 7'b0;
    (* KEEP = "TRUE" *) reg clk_out = 1'b0;
    (* KEEP = "TRUE" *) reg [6:0] count_max = 7'b0;
    always @(posedge input_clk) begin
        count_max <= div;
        if (counter == count_max) begin
            counter <= 7'b0;
            clk_out <= 1'b1;
        end else begin
            clk_out <= 1'b0;
            counter <= counter + 1'b1;
        end
    end
    assign output_clk = clk_out;
endmodule