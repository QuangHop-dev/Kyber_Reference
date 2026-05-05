`timescale 1ns / 1ps

module tb_kyber_codec;
    reg  [2:0]   op;
    reg  [127:0] coeff_in;
    reg  [87:0]  bytes_in;
    wire [127:0] coeff_out;
    wire [87:0]  bytes_out;

    kyber_codec dut (
        .op(op),
        .coeff_in(coeff_in),
        .bytes_in(bytes_in),
        .coeff_out(coeff_out),
        .bytes_out(bytes_out)
    );

    task expect_bytes;
        input [87:0] got;
        input [87:0] exp;
        input [255:0] name;
        begin
            if (got !== exp) begin
                $display("[FAIL] %s got=%022x exp=%022x", name, got, exp);
                $finish;
            end else begin
                $display("[PASS] %s bytes=%022x", name, got);
            end
        end
    endtask

    task expect_coeff;
        input [127:0] got;
        input [127:0] exp;
        input [255:0] name;
        begin
            if (got !== exp) begin
                $display("[FAIL] %s got=%032x exp=%032x", name, got, exp);
                $finish;
            end else begin
                $display("[PASS] %s coeff=%032x", name, got);
            end
        end
    endtask

    initial begin
        // u10 pack vector: [0,1,3328,1664] -> 0000000080
        op = 3'd0;
        coeff_in = {64'd0, 16'd1664, 16'd3328, 16'd1, 16'd0};
        bytes_in = 88'd0;
        #1;
        expect_bytes(bytes_out, {48'd0, 8'h80, 8'h00, 8'h00, 8'h00, 8'h00}, "pack_u10");

        // u10 unpack -> [0,0,0,1665]
        op = 3'd1;
        bytes_in = {48'd0, 8'h80, 8'h00, 8'h00, 8'h00, 8'h00};
        coeff_in = 128'd0;
        #1;
        expect_coeff(coeff_out, {64'd0,16'd1665,16'd0,16'd0,16'd0}, "unpack_u10");

        // u11 pack vector: [0,100,200,300,400,500,600,700] -> 00f0c11e72610f9ac4e535
        op = 3'd2;
        coeff_in = {16'd700,16'd600,16'd500,16'd400,16'd300,16'd200,16'd100,16'd0};
        bytes_in = 88'd0;
        #1;
        expect_bytes(bytes_out, 88'h35e5c49a0f61721ec1f000, "pack_u11");

        // u11 unpack -> [0,101,200,301,400,501,600,701]
        op = 3'd3;
        bytes_in = 88'h35e5c49a0f61721ec1f000;
        coeff_in = 128'd0;
        #1;
        expect_coeff(coeff_out, {16'd701,16'd600,16'd501,16'd400,16'd301,16'd200,16'd101,16'd0}, "unpack_u11");

        // v4 pack vector: [0,1,100,500,1000,2000,3000,3328] -> 0020a50e
        op = 3'd4;
        coeff_in = {16'd3328,16'd3000,16'd2000,16'd1000,16'd500,16'd100,16'd1,16'd0};
        bytes_in = 88'd0;
        #1;
        expect_bytes(bytes_out, {56'd0, 8'h0e, 8'ha5, 8'h20, 8'h00}, "pack_v4");

        // v4 unpack -> [0,0,0,416,1040,2081,2913,0]
        op = 3'd5;
        bytes_in = {56'd0, 8'h0e, 8'ha5, 8'h20, 8'h00};
        coeff_in = 128'd0;
        #1;
        expect_coeff(coeff_out, {16'd0,16'd2913,16'd2081,16'd1040,16'd416,16'd0,16'd0,16'd0}, "unpack_v4");

        // v5 pack vector: [0,1,100,500,1000,2000,3000,3328] -> 0084a26607
        op = 3'd6;
        coeff_in = {16'd3328,16'd3000,16'd2000,16'd1000,16'd500,16'd100,16'd1,16'd0};
        bytes_in = 88'd0;
        #1;
        expect_bytes(bytes_out, {48'd0, 8'h07, 8'h66, 8'ha2, 8'h84, 8'h00}, "pack_v5");

        // v5 unpack -> [0,0,104,520,1040,1977,3017,0]
        op = 3'd7;
        bytes_in = {48'd0, 8'h07, 8'h66, 8'ha2, 8'h84, 8'h00};
        coeff_in = 128'd0;
        #1;
        expect_coeff(coeff_out, {16'd0,16'd3017,16'd1977,16'd1040,16'd520,16'd104,16'd0,16'd0}, "unpack_v5");

        $display("[PASS] tb_kyber_codec completed");
        $finish;
    end
endmodule
