`timescale 1ns / 1ps
module CGRA #(
    parameter integer C_S_AXI_ID_WIDTH   = 4,
    parameter integer C_S_AXI_ADDR_WIDTH = 32,
    parameter integer C_S_AXI_DATA_WIDTH = 32
)(
    output wire LED0, LED1, LED2, LED3, LED4, LED5, LED6, LED7,
    input  wire s_axi_aclk,
    input  wire s_axi_aresetn,
    input  wire [C_S_AXI_ID_WIDTH-1:0] s_axi_awid,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] s_axi_awaddr,
    input  wire [7:0] s_axi_awlen,
    input  wire [2:0] s_axi_awsize,
    input  wire [1:0] s_axi_awburst,
    input  wire s_axi_awlock,
    input  wire [3:0] s_axi_awcache,
    input  wire [2:0] s_axi_awprot,
    input  wire [3:0] s_axi_awqos,
    input  wire s_axi_awvalid,
    output wire s_axi_awready,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] s_axi_wdata,
    input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input  wire s_axi_wlast,
    input  wire s_axi_wvalid,
    output wire s_axi_wready,
    output wire [C_S_AXI_ID_WIDTH-1:0] s_axi_bid,
    output wire [1:0] s_axi_bresp,
    output wire s_axi_bvalid,
    input  wire s_axi_bready,
    input  wire [C_S_AXI_ID_WIDTH-1:0] s_axi_arid,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] s_axi_araddr,
    input  wire [7:0] s_axi_arlen,
    input  wire [2:0] s_axi_arsize,
    input  wire [1:0] s_axi_arburst,
    input  wire s_axi_arlock,
    input  wire [3:0] s_axi_arcache,
    input  wire [2:0] s_axi_arprot,
    input  wire [3:0] s_axi_arqos,
    input  wire s_axi_arvalid,
    output wire s_axi_arready,
    output wire [C_S_AXI_ID_WIDTH-1:0] s_axi_rid,
    output wire [C_S_AXI_DATA_WIDTH-1:0] s_axi_rdata,
    output wire [1:0] s_axi_rresp,
    output wire s_axi_rlast,
    output wire s_axi_rvalid,
    input  wire s_axi_rready
);
  wire [7:0] led_bus;
  wrapper #(.C_S_AXI_ID_WIDTH(C_S_AXI_ID_WIDTH),.C_S_AXI_ADDR_WIDTH(C_S_AXI_ADDR_WIDTH),.C_S_AXI_DATA_WIDTH(C_S_AXI_DATA_WIDTH)) u_wrap (
    .s_axi_aclk(s_axi_aclk),.s_axi_aresetn(s_axi_aresetn),
    .s_axi_awid(s_axi_awid),.s_axi_awaddr(s_axi_awaddr),.s_axi_awlen(s_axi_awlen),.s_axi_awsize(s_axi_awsize),.s_axi_awburst(s_axi_awburst),.s_axi_awlock(s_axi_awlock),.s_axi_awcache(s_axi_awcache),.s_axi_awprot(s_axi_awprot),.s_axi_awqos(s_axi_awqos),.s_axi_awvalid(s_axi_awvalid),.s_axi_awready(s_axi_awready),
    .s_axi_wdata(s_axi_wdata),.s_axi_wstrb(s_axi_wstrb),.s_axi_wlast(s_axi_wlast),.s_axi_wvalid(s_axi_wvalid),.s_axi_wready(s_axi_wready),
    .s_axi_bid(s_axi_bid),.s_axi_bresp(s_axi_bresp),.s_axi_bvalid(s_axi_bvalid),.s_axi_bready(s_axi_bready),
    .s_axi_arid(s_axi_arid),.s_axi_araddr(s_axi_araddr),.s_axi_arlen(s_axi_arlen),.s_axi_arsize(s_axi_arsize),.s_axi_arburst(s_axi_arburst),.s_axi_arlock(s_axi_arlock),.s_axi_arcache(s_axi_arcache),.s_axi_arprot(s_axi_arprot),.s_axi_arqos(s_axi_arqos),.s_axi_arvalid(s_axi_arvalid),.s_axi_arready(s_axi_arready),
    .s_axi_rid(s_axi_rid),.s_axi_rdata(s_axi_rdata),.s_axi_rresp(s_axi_rresp),.s_axi_rlast(s_axi_rlast),.s_axi_rvalid(s_axi_rvalid),.s_axi_rready(s_axi_rready),
    .status_led(led_bus)
  );
  assign {LED7,LED6,LED5,LED4,LED3,LED2,LED1,LED0} = led_bus;
endmodule

