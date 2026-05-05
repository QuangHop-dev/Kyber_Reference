`timescale 1ns / 1ps

module kyber_hash_wrapper (
    input  wire        clk,
    input  wire        rst,

    // Legacy one-shot
    input  wire        start,
    input  wire [2:0]  hash_cmd,      // 0:XOF, 1:PRF, 2:H, 3:G, 4:KDF
    input  wire        prf_eta3,
    input  wire [1087:0] din,
    input  wire [7:0]  din_bytes,

    // Streaming absorb (used for H(pk))
    input  wire        stream_en,
    input  wire        stream_valid,
    input  wire        stream_last,
    input  wire [1087:0] stream_din,
    input  wire [7:0]  stream_bytes,
    output wire        stream_ack,

    output wire [1535:0] dout,
    output wire          done,
    output wire          busy
);

    localparam CMD_XOF = 3'd0;
    localparam CMD_PRF = 3'd1;
    localparam CMD_H   = 3'd2;
    localparam CMD_G   = 3'd3;
    localparam CMD_KDF = 3'd4;

    reg [2:0] out_len_type;
    reg       mode;
    reg       is_sha3;

    always @(*) begin
        case (hash_cmd)
            CMD_XOF: begin
                is_sha3      = 1'b0;
                mode         = 1'b0;
                out_len_type = 3'd1;
            end
            CMD_PRF: begin
                is_sha3      = 1'b0;
                mode         = 1'b1;
                out_len_type = prf_eta3 ? 3'd3 : 3'd2;
            end
            CMD_H: begin
                is_sha3      = 1'b1;
                mode         = 1'b0;
                out_len_type = 3'd0;
            end
            CMD_G: begin
                is_sha3      = 1'b1;
                mode         = 1'b1;
                out_len_type = 3'd1;
            end
            CMD_KDF: begin
                is_sha3      = 1'b0;
                mode         = 1'b1;
                out_len_type = 3'd0;
            end
            default: begin
                is_sha3      = 1'b0;
                mode         = 1'b0;
                out_len_type = 3'd0;
            end
        endcase
    end

    shake_top u_shake (
        .clk            (clk),
        .rst            (rst),
        .start          (start),
        .out_len_type   (out_len_type),
        .mode           (mode),
        .is_sha3        (is_sha3),
        .din            (din),
        .byte_len       (din_bytes),
        .stream_en      (stream_en),
        .stream_valid   (stream_valid),
        .stream_last    (stream_last),
        .stream_din     (stream_din),
        .stream_byte_len(stream_bytes),
        .stream_ack     (stream_ack),
        .dout           (dout),
        .done           (done),
        .busy           (busy)
    );

endmodule
