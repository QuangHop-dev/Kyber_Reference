`timescale 1ns / 1ps

module kyber_bram #(
    parameter ADDR_WIDTH = 11,
    parameter DATA_WIDTH = 8
)(
    input  wire wclk,
    input  wire we,
    input  wire [ADDR_WIDTH-1:0] waddr,
    input  wire [DATA_WIDTH-1:0] din,

    input  wire rclk,
    input  wire [ADDR_WIDTH-1:0] raddr,
    output reg  [DATA_WIDTH-1:0] dout
);

    // BRAM inference structure
    // Memory size based on address width
    localparam MEM_DEPTH = 1 << ADDR_WIDTH;
    reg [DATA_WIDTH-1:0] ram [0:MEM_DEPTH-1];

    always @(posedge wclk) begin
        if (we) begin
            ram[waddr] <= din;
        end
    end

    always @(posedge rclk) begin
        dout <= ram[raddr];
    end

endmodule
