`timescale 1ns / 1ps

module tb_kyber_ct_pack_engine;
    reg clk, rst, start;
    reg [1:0] mode_k;
    wire [10:0] u_addr;
    wire [7:0] v_addr;
    reg signed [15:0] u_mem [0:2047];
    reg signed [15:0] v_mem [0:255];
    wire signed [15:0] u_coeff_din = u_mem[u_addr[10:0]];
    wire signed [15:0] v_coeff_din = v_mem[v_addr];
    wire ext_we;
    wire [31:0] ext_addr;
    wire [31:0] ext_dout;
    reg ext_ready;
    wire done;

    reg [7:0] ct_mem [0:2047];
    reg [31:0] fnv;
    integer i;

    kyber_ct_pack_engine dut (
        //.clk(clk), .rst(rst), .start(start), .mode_k(mode_k), .ct_base_addr(32'd0),
        .clk(clk), .rst(rst), .start(start), .ct_base_addr(32'd0),
        .u_addr(u_addr), .u_coeff_din(u_coeff_din),
        .v_addr(v_addr), .v_coeff_din(v_coeff_din),
        .ext_we(ext_we), .ext_addr(ext_addr), .ext_dout(ext_dout),
        .ext_ready(ext_ready),
        .done(done)
    );

    always #5 clk = ~clk;

    function [31:0] ct_len;
        input [1:0] mk;
        begin
            case (mk)
                2'b00: ct_len = 32'd768;
                2'b01: ct_len = 32'd1088;
                default: ct_len = 32'd1568;
            endcase
        end
    endfunction

    function [2:0] k_val;
        input [1:0] mk;
        begin
            k_val = {1'b0, mk} + 3'd2;
        end
    endfunction

    task init_vectors;
        input [1:0] mk;
        integer kk;
        integer tmp;
        begin
            kk = {29'd0, k_val(mk)};
            for (i = 0; i < 2048; i = i + 1) begin
                if (i < kk * 256) begin
                    tmp = (i * 17 + 3) % 3329;
                    u_mem[i] = tmp[15:0];
                end
                else u_mem[i] = 16'sd0;
            end
            for (i = 0; i < 256; i = i + 1) begin
                tmp = (i * 29 + 7) % 3329;
                v_mem[i] = tmp[15:0];
            end
            for (i = 0; i < 2048; i = i + 1) ct_mem[i] = 8'd0;
        end
    endtask

    task run_mode;
        input [1:0] mk;
        input [255:0] name;
        integer n;
        begin
            mode_k = mk;
            init_vectors(mk);
            fnv = 32'h811C9DC5;
            n = ct_len(mk);

            @(posedge clk); start = 1'b1;
            @(posedge clk); start = 1'b0;

            wait(done == 1'b1);
            $display("[MODE %s] ct_len=%0d fnv1a32=%08x", name, n, fnv);
        end
    endtask

    initial begin
        clk = 1'b0; rst = 1'b1; start = 1'b0; mode_k = 2'b00; ext_ready = 1'b1;
        #20; rst = 1'b0;

        run_mode(2'b00, "kyber512");
        run_mode(2'b01, "kyber768");
        run_mode(2'b10, "kyber1024");

        $finish;
    end

    always @(posedge clk) begin
        if (ext_we) begin
            if (ext_addr < 2048) begin
                ct_mem[ext_addr] <= ext_dout[7:0];
                fnv <= (fnv ^ {24'd0, ext_dout[7:0]}) * 32'h01000193;
            end
        end
    end
endmodule
