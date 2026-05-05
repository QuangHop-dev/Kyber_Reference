`timescale 1ns / 1ps

module tb_hpk_compare();
    reg clk;
    reg rst;
    reg start;
    reg [1:0] opcode;
    reg [1:0] mode_k;

    wire done;
    wire busy;
    wire ext_we;
    wire ext_re;
    wire [31:0] ext_addr;
    wire [31:0] ext_dout;
    wire [31:0] ext_din;

    reg [31:0] tb_ram [0:4095];

    kyber_main_fsm uut (
        .clk(clk), .rst(rst), .start(start),
        .opcode(opcode), .mode_k(mode_k),
        .done(done), .busy(busy),
        //.ext_we(ext_we), .ext_re(ext_re), .ext_addr(ext_addr), .ext_dout(ext_dout), .ext_din(ext_din), .ext_ready(1'b1)
    	.ext_we(ext_we), .ext_re(ext_re), .ext_addr(ext_addr), .ext_dout(ext_dout), .ext_din(ext_din), .ext_ready(1'b1), .seed_in(512'h2F07CD8F75BDFB1634842BFE259AD29C77B883658DC66CBADD252D93A3EBABF1A2B8D27BD63FF86D54C5E1E2F1294CA3142E047C0460B010E9D638825902EFDD), .seed_valid(1'b1)
    );

    assign ext_din = (ext_addr < 4096) ? tb_ram[ext_addr] : 32'd0;

    always #5 clk = ~clk;

    task run_keygen_mode;
        input [1:0] mk;
        input [127:0] name;
        integer i;
        integer pk_total;
        integer off_mid;
        integer off_tail;
        begin
            mode_k = mk;
            opcode = 2'b01;
            @(posedge clk); start = 1'b1;
            @(posedge clk); start = 1'b0;
            wait(done == 1'b1);
            case (mk)
                2'b00: pk_total = 800;
                2'b01: pk_total = 1184;
                default: pk_total = 1568;
            endcase
            off_mid = pk_total / 2;
            off_tail = pk_total - 16;
            $display("RTL_RHO_%s=%064X", name, uut.reg_rho);
            $display("RTL_HPK_%s=%064X", name, uut.reg_H_pk);
            $write("RTL_PK16_%s=", name);
            for (i = 0; i < 16; i = i + 1) $write("%02X", uut.reg_hpk_msg[(i*8) +: 8]);
            $write("\n");
            $write("RTL_PK16MID_%s=", name);
            for (i = 0; i < 16; i = i + 1) $write("%02X", uut.reg_hpk_msg[((off_mid + i)*8) +: 8]);
            $write("\n");
            $write("RTL_PK16TAIL_%s=", name);
            for (i = 0; i < 16; i = i + 1) $write("%02X", uut.reg_hpk_msg[((off_tail + i)*8) +: 8]);
            $write("\n");
            if (mk == 2'b00) $write("RTL_PKHEX_KYBER512=");
            else if (mk == 2'b01) $write("RTL_PKHEX_KYBER768=");
            else $write("RTL_PKHEX_KYBER1024=");
            for (i = 0; i < pk_total; i = i + 1) $write("%02X", uut.reg_hpk_msg[(i*8) +: 8]);
            $write("\n");
            #20;
        end
    endtask

    always @(posedge clk) begin
        if (ext_we && ext_addr < 4096)
            tb_ram[ext_addr] <= ext_dout;
    end

    initial begin
        clk = 1'b0;
        rst = 1'b1;
        start = 1'b0;
        opcode = 2'b00;
        mode_k = 2'b00;
        #100;
        rst = 1'b0;
        #20;

        run_keygen_mode(2'b00, "KYBER512");
        run_keygen_mode(2'b01, "KYBER768");
        run_keygen_mode(2'b10, "KYBER1024");

        #100;
        $finish;
    end
endmodule
