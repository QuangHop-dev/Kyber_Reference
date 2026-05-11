`timescale 1ns/1ps

module shake_top(
    input  wire        clk,
    input  wire        rst,

    input  wire        start,
    input  wire [2:0]  out_len_type,
    input  wire        mode,
    input  wire        is_sha3,
    input  wire [1087:0] din,
    input  wire [7:0]  byte_len,

    // Streaming absorb interface
    input  wire        stream_en,
    input  wire        stream_valid,
    input  wire        stream_last,
    input  wire [1087:0] stream_din,
    input  wire [7:0]  stream_byte_len,
    output wire        stream_ack,

    // Shared SHAKE128 XOF service for gen_matrix
    input  wire        xof_req_valid,
    input  wire [271:0] xof_req_din,
    output wire        xof_req_ready,
    input  wire        xof_release,
    output wire [31:0] xof_word_data,
    output wire        xof_word_valid,
    input  wire        xof_word_ready,

    output wire [1535:0] dout,
    output wire          done,
    output wire          busy
);

    wire i_valid = stream_en ? stream_valid : start;
    wire i_last  = stream_en ? stream_last  : 1'b1;
    wire [1087:0] eff_din = stream_en ? stream_din : din;
    wire [7:0]    eff_len = stream_en ? stream_byte_len : byte_len;
    wire i_ack;

    sponge sponge_inst (
        .clk        (clk),
        .rst        (rst),
        .din        (eff_din),
        .byte_len   (eff_len),
        .out_len_type(out_len_type),
        .i_valid    (i_valid),
        .i_last     (i_last),
        .mode       (mode),
        .is_sha3    (is_sha3),
        .i_ack      (i_ack),

        .xof_req_valid (xof_req_valid),
        .xof_req_din   (xof_req_din),
        .xof_req_ready (xof_req_ready),
        .xof_release   (xof_release),
        .xof_word_data (xof_word_data),
        .xof_word_valid(xof_word_valid),
        .xof_word_ready(xof_word_ready),

        .dout       (dout),
        .done       (done),
        .busy       (busy)
    );

    assign stream_ack = stream_en ? i_ack : 1'b0;

endmodule

