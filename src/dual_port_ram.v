`timescale 1ns / 1ps

module dual_port_ram (
    input  wire clk,
    // Port A (Dùng cho hệ số a)
    input  wire we_a,               // Write Enable Port A
    input  wire [7:0] addr_a,       // Địa chỉ 8-bit (0 - 255)
    input  wire signed [15:0] din_a,
    output reg  signed [15:0] dout_a,
    
    // Port B (Dùng cho hệ số b)
    input  wire we_b,               // Write Enable Port B
    input  wire [7:0] addr_b,       // Địa chỉ 8-bit (0 - 255)
    input  wire signed [15:0] din_b,
    output reg  signed [15:0] dout_b
);

    // Khai báo mảng nhớ: 256 phần tử, mỗi phần tử 16 bit
    reg signed [15:0] ram [0:255];

    // Port A
    always @(posedge clk) begin
        if (we_a) begin
            ram[addr_a] <= din_a;
        end
        dout_a <= ram[addr_a]; // Read during write (BRAM standard)
    end

    // Port B
    always @(posedge clk) begin
        if (we_b) begin
            ram[addr_b] <= din_b;
        end
        dout_b <= ram[addr_b];
    end

endmodule