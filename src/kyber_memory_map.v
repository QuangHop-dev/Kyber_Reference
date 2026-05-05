`timescale 1ns / 1ps

module kyber_memory_map #(
    parameter integer ADDR_W = 11,
    parameter integer DEPTH  = (1 << ADDR_W)
) (
    input  wire clk,
    
    // Port A
    input  wire we_a,
    input  wire [ADDR_W-1:0] addr_a,
    input  wire signed [15:0] din_a,
    output reg  signed [15:0] dout_a,
    
    // Port B
    input  wire we_b,
    input  wire [ADDR_W-1:0] addr_b,
    input  wire signed [15:0] din_b,
    output reg  signed [15:0] dout_b
);

    // BRAM trung tâm
    reg signed [15:0] bram [0:DEPTH-1];

    // Xử lý Port A
    always @(posedge clk) begin
        if (we_a) begin
            bram[addr_a] <= din_a;
        end
        dout_a <= bram[addr_a];
    end

    // Xử lý Port B
    always @(posedge clk) begin
        if (we_b) begin
            bram[addr_b] <= din_b;
        end
        dout_b <= bram[addr_b];
    end

endmodule
