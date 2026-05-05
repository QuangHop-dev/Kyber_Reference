`timescale 1ns / 1ps

module tb_kyber_top;

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

    // Board seed 512: 2F07CD8F75BDFB1634842BFE259AD29C77B883658DC66CBADD252D93A3EBABF1
    //                 A2B8D27BD63FF86D54C5E1E2F1294CA3142E047C0460B010E9D638825902EFDD
    // RTL uses: keygen_coins = flip_bytes(seed[511:256]), z = seed[255:0]
    // Dump order: MSB-first, so: seed bytes 0..63 = seed[511] downto seed[0]
    // Board seed[511:256] (after flip = keygen coins): 2F07...ABF1 -> coins = F1AB...072F
    // But board PK matches C ref if C uses seed[0..31] = 2F07..ABF1 directly
    // WARNING: See rule - keep using same legacy seed for internal sim; board seed comparison via C ref scripts
    localparam [511:0] DUMMY_SEED = 512'h2F07CD8F75BDFB1634842BFE259AD29C77B883658DC66CBADD252D93A3EBABF1A2B8D27BD63FF86D54C5E1E2F1294CA3142E047C0460B010E9D638825902EFDD;

    // Keep in sync with kyber_main_fsm external memory map.
    localparam integer PK_BASE_WORD = 0;        // Size max 1568. Range: 0 to 1999
    localparam integer SK_BASE_WORD = 2000;     // Size max 3168. Range: 2000 to 5999
    localparam integer CT_BASE_WORD = 6000;     // Size max 1568. Range: 6000 to 7999
    localparam integer SS_BASE_WORD = 8000;     // Size max 32. Range: 8000 to 8999

    reg [31:0] tb_ram [0:8191];
    reg [7:0] exp_buf [0:8191];
    integer mode_sel;
    integer check_ref;
    integer compare_errors;
    integer dump_ref;

    kyber_main_fsm uut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .opcode(opcode),
        .mode_k(mode_k),
        .done(done),
        .busy(busy),
        .ext_we(ext_we),
        .ext_re(ext_re),
        .ext_addr(ext_addr),
        .ext_dout(ext_dout),
        .ext_din(ext_din),
        //.ext_ready(1'b1)
    	.ext_ready(1'b1),
        .seed_in(DUMMY_SEED),
        .seed_valid(1'b1)
    );

    assign ext_din = (ext_addr < 8192) ? tb_ram[ext_addr] : 32'd0;

    always #5 clk = ~clk;

    function integer get_pk_bytes;
        input [1:0] mk;
        begin
            /*case (mk)
                2'b00: get_pk_bytes = 800;
                2'b01: get_pk_bytes = 1184;
                default: get_pk_bytes = 1568;
            endcase*/
            get_pk_bytes = 800;
        end
    endfunction

    function integer get_sk_bytes;
        input [1:0] mk;
        begin
            /*case (mk)
                2'b00: get_sk_bytes = 1632;
                2'b01: get_sk_bytes = 2400;
                default: get_sk_bytes = 3168;
            endcase*/
            get_sk_bytes = 1632;
        end
    endfunction

    function integer get_ct_bytes;
        input [1:0] mk;
        begin
            /*case (mk)
                2'b00: get_ct_bytes = 768;
                2'b01: get_ct_bytes = 1088;
                default: get_ct_bytes = 1568;
            endcase*/
            get_ct_bytes = 768;
        end
    endfunction

    task clear_tb_ram;
        integer i;
        begin
            for (i = 0; i < 8192; i = i + 1) begin
                tb_ram[i] = 32'd0;
            end
        end
    endtask

    task pulse_reset_clean;
        begin
            rst = 1'b1;
            start = 1'b0;
            opcode = 2'b00;
            repeat (6) @(posedge clk);
            rst = 1'b0;
            repeat (4) @(posedge clk);
        end
    endtask

    task run_kyber_op;
        input [1:0] op_code_in;
        input [255:0] op_name;
        begin
            $display("--------------------------------------------------");
            $display("[%0t] BAT DAU CHAY: %s", $time, op_name);
            opcode = op_code_in;

            @(posedge clk);
            start = 1'b1;
            @(posedge clk);
            start = 1'b0;

            fork
                begin : wait_done
                    wait (done == 1'b1);
                    $display("[%0t] THANH CONG: HOAN THANH!", $time);
                end
                begin : timeout
                    #1500000;
                    $display("[%0t] LOI TIMEOUT! FSM ket o state = %0d", $time, uut.state);
                    $finish;
                end
            join_any
            disable fork;

            #150;
        end
    endtask

    task print_hex_block;
        input [255:0] title;
        input integer base_word;
        input integer total_bytes;
        integer i;
        reg [7:0] b;
        begin
            $display("%s (%0d bytes):", title, total_bytes);
            for (i = 0; i < total_bytes; i = i + 1) begin
                if ((i % 32) == 0) begin
                    $write("  ");
                end
                // External memory map stores one byte per 32-bit location (LSB used).
                b = tb_ram[base_word + i][7:0];
                $write("%02x", b);
                if ((i % 32) == 31 || i + 1 == total_bytes) begin
                    $write("\n");
                end
            end
        end
    endtask

    task dump_hex_file;
        input string fname;
        input integer base_word;
        input integer total_bytes;
        integer i, fd;
        begin
            fd = $fopen(fname, "w");
            if (fd == 0) begin
                $display("LOI: khong mo duoc file %s", fname);
            end else begin
                for (i = 0; i < total_bytes; i = i + 1)
                    $fwrite(fd, "%02x", tb_ram[base_word + i][7:0]);
                $fwrite(fd, "\n");
                $fclose(fd);
            end
        end
    endtask
    
    task dump_mem_file;
        input string fname;
        input integer base_word;
        input integer total_bytes;
        integer i, fd;
        begin
            fd = $fopen(fname, "w");
            if (fd == 0) begin
                $display("LOI: khong mo duoc file %s", fname);
            end else begin
                for (i = 0; i < total_bytes; i = i + 1)
                    $fwrite(fd, "%02x\n", tb_ram[base_word + i][7:0]);
                $fclose(fd);
            end
        end
    endtask

    task dump_mode_artifacts;
        input [1:0] mk;
        input integer ct_bytes;
        begin
            /*case (mk)
                2'b00: begin
                    dump_hex_file("rtl_ct_512.hex", CT_BASE_WORD, ct_bytes);
                end
                2'b01: begin
                    dump_hex_file("rtl_ct_768.hex", CT_BASE_WORD, ct_bytes);
                end
                default: begin
                    dump_hex_file("rtl_ct_1024.hex", CT_BASE_WORD, ct_bytes);
                end
            endcase*/
            dump_hex_file("rtl_ct_512.hex", CT_BASE_WORD, ct_bytes);
        end
    endtask


    task dump_ref_vectors;
        input [1:0] mk;
        input integer pk_bytes;
        input integer sk_bytes;
        input integer ct_bytes;
        reg [31:0] mode_tag;
        begin
            mode_tag = "512";
            dump_mem_file({"vectors/c_ref_", mode_tag, "_pk.mem"}, PK_BASE_WORD, pk_bytes);
            dump_mem_file({"vectors/c_ref_", mode_tag, "_sk.mem"}, SK_BASE_WORD, sk_bytes);
            dump_mem_file({"vectors/c_ref_", mode_tag, "_ct.mem"}, CT_BASE_WORD, ct_bytes);
            dump_mem_file({"vectors/c_ref_", mode_tag, "_ss_enc.mem"}, SS_BASE_WORD, 32);
        end
    endtask
    
    /*task dump_ref_vectors;
        input [1:0] mk;
        input integer pk_bytes;
        input integer sk_bytes;
        input integer ct_bytes;
        reg [31:0] mode_tag;
        begin
            case (mk)
                2'b00: mode_tag = "512";
                2'b01: mode_tag = "768";
                default: mode_tag = "1024";
            endcase
            dump_mem_file({"vectors/c_ref_", mode_tag, "_pk.mem"}, PK_BASE_WORD, pk_bytes);
            dump_mem_file({"vectors/c_ref_", mode_tag, "_sk.mem"}, SK_BASE_WORD, sk_bytes);
            dump_mem_file({"vectors/c_ref_", mode_tag, "_ct.mem"}, CT_BASE_WORD, ct_bytes);
            dump_mem_file({"vectors/c_ref_", mode_tag, "_ss_enc.mem"}, SS_BASE_WORD, 32);
        end
    endtask*/

    task run_mode_report;
        input [1:0] mk;
        input [255:0] mode_name;
        integer pk_bytes;
        integer sk_bytes;
        integer ct_bytes;
        reg [31:0] mode_tag;
        begin
            pk_bytes = get_pk_bytes(mk);
            sk_bytes = get_sk_bytes(mk);
            ct_bytes = get_ct_bytes(mk);
            /*case (mk)
                2'b00: mode_tag = "512";
                2'b01: mode_tag = "768";
                default: mode_tag = "1024";
            endcase*/
            mode_tag = "512";

            $display("\n==================================================");
            $display("MODE: %s", mode_name);
            $display("INPUT DUMMY SEED (64 bytes): %0128x", DUMMY_SEED);

            run_kyber_op(2'b01, "KEYGEN (Tao Khoa)               ");

            // --- Host CPU Memory Assembly ---
            // The hardware KEYGEN writes: s, H(pk), z to SK_BASE_WORD.
            // We must copy PK (t || rho) to SK_BASE_WORD + size(s) to form the full standard KEM SK.
            begin : host_cpu_sk_assemble
                integer bi;
                integer s_sz;
                s_sz = pk_bytes - 32; // size(s) is equal to size(t) which is pk_bytes - size(rho)
                for (bi = 0; bi < pk_bytes; bi = bi + 1) begin
                    tb_ram[SK_BASE_WORD + s_sz + bi] = tb_ram[PK_BASE_WORD + bi];
                end
                $display("[DEBUG] tb_ram[SK_BASE_WORD + sk_bytes - 1] = %02x", tb_ram[SK_BASE_WORD + sk_bytes - 1]);
                $display("[DEBUG] expected sk_bytes = %d", sk_bytes);
            end

            print_hex_block("KEYGEN PK", PK_BASE_WORD, pk_bytes);
            print_hex_block("KEYGEN SK", SK_BASE_WORD, sk_bytes);
            if (check_ref != 0) begin
                compare_with_file({"vectors/c_ref_", mode_tag, "_pk.mem"}, PK_BASE_WORD, pk_bytes, "KEYGEN PK");
                compare_with_file({"vectors/c_ref_", mode_tag, "_sk.mem"}, SK_BASE_WORD, sk_bytes, "KEYGEN SK");
            end

            run_kyber_op(2'b10, "ENCAPSULATION (Dong goi KEM)    ");
            print_hex_block("ENCAPS CIPHERTEXT", CT_BASE_WORD, ct_bytes);
            print_hex_block("ENCAPS SHARED SECRET", SS_BASE_WORD, 32);
            dump_mode_artifacts(mk, ct_bytes);
            if (check_ref != 0) begin
                compare_with_file({"vectors/c_ref_", mode_tag, "_ct.mem"}, CT_BASE_WORD, ct_bytes, "ENCAPS CIPHERTEXT");
                compare_with_file({"vectors/c_ref_", mode_tag, "_ss_enc.mem"}, SS_BASE_WORD, 32, "ENCAPS SHARED SECRET");
            end

            run_kyber_op(2'b11, "DECAPSULATION (Giai ma KEM)     ");
            print_hex_block("DECAPS SHARED SECRET", SS_BASE_WORD, 32);
            if (check_ref != 0) begin
                compare_with_file({"vectors/c_ref_", mode_tag, "_ss_dec.mem"}, SS_BASE_WORD, 32, "DECAPS SHARED SECRET");
            end
            
            if (dump_ref != 0) begin
                dump_ref_vectors(mk, pk_bytes, sk_bytes, ct_bytes);
                dump_mem_file({"vectors/c_ref_", mode_tag, "_ss_dec.mem"}, SS_BASE_WORD, 32);
            end
            
            if (dump_ref != 0) begin
                dump_ref_vectors(mk, pk_bytes, sk_bytes, ct_bytes);
                dump_mem_file({"vectors/c_ref_", mode_tag, "_ss_dec.mem"}, SS_BASE_WORD, 32);
            end

            $display("==================================================\n");
        end
    endtask

    task compare_with_file;
        input string fname;
        input integer base_word;
        input integer total_bytes;
        input [255:0] label;
        integer i, fd, mism;
        begin
            for (i = 0; i < 8192; i = i + 1)
                exp_buf[i] = 8'h00;
            fd = $fopen(fname, "r");
            if (fd == 0) begin
                $display("[REF] BO QUA %s: khong tim thay file %s", label, fname);
            end else begin
                $fclose(fd);
                $readmemh(fname, exp_buf);
                mism = 0;
                for (i = 0; i < total_bytes; i = i + 1) begin
                    if (tb_ram[base_word + i][7:0] !== exp_buf[i]) begin
                        if (mism == 0)
                            $display("[REF][LECH] %s first_byte=%0d rtl=%02x c=%02x", label, i, tb_ram[base_word + i][7:0], exp_buf[i]);
                        mism = mism + 1;
                    end
                end
                if (mism == 0) begin
                    $display("[REF][KHOP] %s", label);
                end else begin
                    compare_errors = compare_errors + mism;
                    $display("[REF][FAIL] %s mismatches=%0d", label, mism);
                end
            end
        end
    endtask

    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb_kyber_top);

        clk = 1'b0;
        rst = 1'b1;
        start = 1'b0;
        opcode = 2'b00;
        mode_k = 2'b00;
        mode_sel = 0;
        check_ref = 0;
        compare_errors = 0;
        dump_ref = 0;
        if (!$value$plusargs("MODE=%d", mode_sel))
            mode_sel = 0;
        if (!$value$plusargs("CHECK_REF=%d", check_ref))
            check_ref = 0;
        clear_tb_ram();
        if (!$value$plusargs("DUMP_REF=%d", dump_ref))
            dump_ref = 0;
        clear_tb_ram();

        #100;
        rst = 1'b0;
        #50;

        /*if (mode_sel == 512) begin
            mode_k = 2'b00;
            clear_tb_ram();
            pulse_reset_clean();
            run_mode_report(2'b00, "Kyber512 (k=2)");
        end else if (mode_sel == 768) begin
            mode_k = 2'b01;
            clear_tb_ram();
            pulse_reset_clean();
            run_mode_report(2'b01, "Kyber768 (k=3)");
        end else if (mode_sel == 1024) begin
            mode_k = 2'b10;
            clear_tb_ram();
            pulse_reset_clean();
            run_mode_report(2'b10, "Kyber1024 (k=4)");
        end else begin
            mode_k = 2'b00;
            clear_tb_ram();
            pulse_reset_clean();
            run_mode_report(2'b00, "Kyber512 (k=2)");

            mode_k = 2'b01;
            clear_tb_ram();
            pulse_reset_clean();
            run_mode_report(2'b01, "Kyber768 (k=3)");

            mode_k = 2'b10;
            clear_tb_ram();
            pulse_reset_clean();
            run_mode_report(2'b10, "Kyber1024 (k=4)");
        end*/
        
        mode_k = 2'b00;
        clear_tb_ram();
        pulse_reset_clean();
        run_mode_report(2'b00, "Kyber512 (k=2)");

        $display("--------------------------------------------------");
        if (check_ref != 0) begin
            if (compare_errors == 0)
                $display("[%0t] MO PHONG HOAN TAT - REF COMPARE: PASS", $time);
            else
                $display("[%0t] MO PHONG HOAN TAT - REF COMPARE: FAIL (mismatches=%0d)", $time, compare_errors);
        end else begin
            $display("[%0t] MO PHONG HOAN TAT THANH CONG", $time);
        end
        #100;
        $finish;
    end

    always @(posedge clk) begin
        if (ext_we && ext_addr < 8192) begin
            tb_ram[ext_addr] <= ext_dout;
        end
    end

endmodule
