`timescale 1ns / 1ps

module twiddle_rom #(
    parameter MEMFILE = "/home/lucas_pham/Kyber_Reference/src/zeta_values.mem"
)(
    input  wire clk,
    input  wire [6:0] addr,         // �?ịa chỉ 7-bit (0 - 127)
    output reg  signed [15:0] dout
);

    // Khai báo ROM 128 phần tử
    reg signed [15:0] rom [0:127];

    // Khởi tạo giá trị cho ROM từ file (Vivado sẽ tự tổng hợp thành Block ROM)
    initial begin
        // File "zeta_values.mem" chứa 128 giá trị hằng số \zeta^{br_7(i)} dưới dạng Hex.
        // Bạn sẽ cần tạo file này và đặt cùng thư mục với source code.
        $readmemh(MEMFILE, rom); //"D:/CRYSTALS-Kyber/zeta_values.mem"
    end

    // ROM đ�?c đồng bộ theo xung nhịp
    always @(posedge clk) begin
        dout <= rom[addr];
    end

endmodule
