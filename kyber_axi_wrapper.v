`timescale 1ns / 1ps

// =============================================================================
// AXI4-Lite wrapper for Kyber512 core
//
// Purpose:
//   - Không expose seed_in[511:0] ra ngoài FPGA pins.
//   - Không expose ext_addr/ext_dout/ext_din ra ngoài FPGA pins.
//   - PS/ARM ?i?u khi?n core qua AXI4-Lite register.
//   - Core ghi PK/SK/CT/SS/TRNG vào ext_mem n?i b?.
//   - PS ??c k?t qu? qua AXI memory window.
//
// Register map:
//   0x0000_0000 CONTROL
//       [0]   start pulse
//       [2:1] opcode_user
//             0 = KeyGen
//             1 = Encaps
//             2 = Decaps
//
//   0x0000_0004 STATUS
//       [0] done
//       [1] busy
//
//   0x0000_0008 STATE
//       [7:0] state_dbg
//
//   0x0000_0040 .. 0x0000_007C SEED registers, 16 words = 512 bit
//
//   0x0001_0000 + index*4 : ext_mem[index]
//       Kyber ext memory map:
//         PK   base = 0
//         SK   base = 2000
//         CT   base = 6000
//         SS   base = 8000
//         TRNG base = 9000
// =============================================================================

module wrapper #(
    parameter integer C_S_AXI_ADDR_WIDTH = 32,
    parameter integer C_S_AXI_DATA_WIDTH = 32,
    parameter integer EXT_MEM_DEPTH      = 16384
)(
    input  wire                              s_axi_aclk,
    input  wire                              s_axi_aresetn,

    // =========================================================================
    // AXI4-Lite write address channel
    // =========================================================================
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     s_axi_awaddr,
    input  wire [2:0]                        s_axi_awprot,
    input  wire                              s_axi_awvalid,
    output reg                               s_axi_awready,

    // =========================================================================
    // AXI4-Lite write data channel
    // =========================================================================
    input  wire [C_S_AXI_DATA_WIDTH-1:0]     s_axi_wdata,
    input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input  wire                              s_axi_wvalid,
    output reg                               s_axi_wready,

    // =========================================================================
    // AXI4-Lite write response channel
    // =========================================================================
    output reg  [1:0]                        s_axi_bresp,
    output reg                               s_axi_bvalid,
    input  wire                              s_axi_bready,

    // =========================================================================
    // AXI4-Lite read address channel
    // =========================================================================
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]     s_axi_araddr,
    input  wire [2:0]                        s_axi_arprot,
    input  wire                              s_axi_arvalid,
    output reg                               s_axi_arready,

    // =========================================================================
    // AXI4-Lite read data channel
    // =========================================================================
    output reg  [C_S_AXI_DATA_WIDTH-1:0]     s_axi_rdata,
    output reg  [1:0]                        s_axi_rresp,
    output reg                               s_axi_rvalid,
    input  wire                              s_axi_rready,

    output wire [7:0]                        status_led
);

    // =========================================================================
    // Address map
    // =========================================================================
    localparam [31:0] REG_CONTROL = 32'h0000_0000;
    localparam [31:0] REG_STATUS  = 32'h0000_0004;
    localparam [31:0] REG_STATE   = 32'h0000_0008;

    localparam [31:0] REG_SEED0   = 32'h0000_0040;
    localparam [31:0] MEM_BASE    = 32'h0001_0000;

    // =========================================================================
    // Default seed
    // Gi? ?úng th? t? gi?ng testbench:
    // 512'h2F07...ABF1_A2B8...EFDD
    // =========================================================================
    localparam [511:0] DUMMY_SEED = {
        256'h2F07CD8F75BDFB1634842BFE259AD29C77B883658DC66CBADD252D93A3EBABF1,
        256'hA2B8D27BD63FF86D54C5E1E2F1294CA3142E047C0460B010E9D638825902EFDD
    };

    // =========================================================================
    // Kyber control/status signals
    // =========================================================================
    reg        kyber_start;
    reg [1:0]  kyber_opcode_user;
    wire [1:0] kyber_opcode_core;

    wire        kyber_done;
    wire        kyber_busy;

    wire        kyber_ext_we;
    wire        kyber_ext_re;
    wire [31:0] kyber_ext_addr;
    wire [31:0] kyber_ext_dout;
    wire [31:0] kyber_ext_din;
    wire        kyber_ext_ready;

    wire [7:0]  kyber_fsm_state;

    reg [511:0] seed_reg;

    // User opcode map:
    //   0 -> KeyGen
    //   1 -> Encaps
    //   2 -> Decaps
    //
    // Core opcode map:
    //   01 -> KeyGen
    //   10 -> Encaps
    //   11 -> Decaps
    assign kyber_opcode_core =
        (kyber_opcode_user == 2'd0) ? 2'b01 :
        (kyber_opcode_user == 2'd1) ? 2'b10 :
        (kyber_opcode_user == 2'd2) ? 2'b11 :
                                      2'b01;

    // =========================================================================
    // Internal external memory
    //
    // Core convention:
    //   - kyber_ext_addr is byte index.
    //   - kyber_ext_dout[7:0] is valid byte on write.
    //   - kyber_ext_din[7:0] returns byte on read.
    //
    // AXI convention:
    //   - CPU accesses one byte at MEM_BASE + index*4.
    //   - Returned data is {24'd0, ext_mem[index]}.
    // =========================================================================

    (* ram_style = "distributed" *)
    reg [7:0] ext_mem [0:EXT_MEM_DEPTH-1];

    wire [13:0] core_ext_index;
    assign core_ext_index = kyber_ext_addr[13:0];

    assign kyber_ext_din =
        (kyber_ext_addr < EXT_MEM_DEPTH) ? {24'd0, ext_mem[core_ext_index]} : 32'd0;

    // Vì ext_mem ??c async theo ki?u testbench c?, ext_ready có th? bu?c 1.
    assign kyber_ext_ready = 1'b1;

    // =========================================================================
    // AXI write capture registers
    // =========================================================================
    reg [31:0] awaddr_reg;
    reg [31:0] wdata_reg;
    reg [3:0]  wstrb_reg;

    reg aw_have;
    reg w_have;

    wire write_fire;
    assign write_fire = aw_have && w_have && !s_axi_bvalid;

    wire is_mem_write;
    wire [13:0] mem_wr_index;

    assign is_mem_write = (awaddr_reg[31:16] == MEM_BASE[31:16]);
    assign mem_wr_index = awaddr_reg[15:2];

    wire axi_mem_write_fire;
    assign axi_mem_write_fire =
        write_fire &&
        is_mem_write &&
        (mem_wr_index < EXT_MEM_DEPTH);

    // =========================================================================
    // AXI read decode
    // =========================================================================
    wire is_mem_read;
    wire [13:0] mem_rd_index;

    assign is_mem_read = (s_axi_araddr[31:16] == MEM_BASE[31:16]);
    assign mem_rd_index = s_axi_araddr[15:2];

    // =========================================================================
    // Write strobe helper
    // =========================================================================
    function [31:0] apply_wstrb32;
        input [31:0] old_data;
        input [31:0] new_data;
        input [3:0]  strb;
        begin
            apply_wstrb32 = old_data;

            if (strb[0]) begin
                apply_wstrb32[7:0] = new_data[7:0];
            end

            if (strb[1]) begin
                apply_wstrb32[15:8] = new_data[15:8];
            end

            if (strb[2]) begin
                apply_wstrb32[23:16] = new_data[23:16];
            end

            if (strb[3]) begin
                apply_wstrb32[31:24] = new_data[31:24];
            end
        end
    endfunction

    // =========================================================================
    // AXI write address/data/response logic
    // =========================================================================
    always @(posedge s_axi_aclk) begin
        if (!s_axi_aresetn) begin
            s_axi_awready     <= 1'b0;
            s_axi_wready      <= 1'b0;
            s_axi_bresp       <= 2'b00;
            s_axi_bvalid      <= 1'b0;

            awaddr_reg        <= 32'd0;
            wdata_reg         <= 32'd0;
            wstrb_reg         <= 4'd0;
            aw_have           <= 1'b0;
            w_have            <= 1'b0;

            kyber_start       <= 1'b0;
            kyber_opcode_user <= 2'd0;
            seed_reg          <= DUMMY_SEED;
        end else begin
            // Start là pulse 1 clock.
            kyber_start <= 1'b0;

            // Default ready low, ch? pulse khi accept.
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;

            // Accept AW independently.
            if (!aw_have && !s_axi_bvalid && s_axi_awvalid) begin
                s_axi_awready <= 1'b1;
                awaddr_reg    <= s_axi_awaddr;
                aw_have       <= 1'b1;
            end

            // Accept W independently.
            if (!w_have && !s_axi_bvalid && s_axi_wvalid) begin
                s_axi_wready <= 1'b1;
                wdata_reg    <= s_axi_wdata;
                wstrb_reg    <= s_axi_wstrb;
                w_have       <= 1'b1;
            end

            // Execute register write when both AW and W are captured.
            // Memory write is handled in a separate single ext_mem always block.
            if (write_fire) begin
                s_axi_bvalid <= 1'b1;
                s_axi_bresp  <= 2'b00; // OKAY

                if (!is_mem_write) begin
                    case (awaddr_reg[7:0])
                        8'h00: begin
                            kyber_start       <= wdata_reg[0];
                            kyber_opcode_user <= wdata_reg[2:1];
                        end

                        // Seed registers.
                        // 0x40 maps to seed_reg[31:0].
                        // 0x7C maps to seed_reg[511:480].
                        8'h40: seed_reg[ 31:  0] <= apply_wstrb32(seed_reg[ 31:  0], wdata_reg, wstrb_reg);
                        8'h44: seed_reg[ 63: 32] <= apply_wstrb32(seed_reg[ 63: 32], wdata_reg, wstrb_reg);
                        8'h48: seed_reg[ 95: 64] <= apply_wstrb32(seed_reg[ 95: 64], wdata_reg, wstrb_reg);
                        8'h4C: seed_reg[127: 96] <= apply_wstrb32(seed_reg[127: 96], wdata_reg, wstrb_reg);
                        8'h50: seed_reg[159:128] <= apply_wstrb32(seed_reg[159:128], wdata_reg, wstrb_reg);
                        8'h54: seed_reg[191:160] <= apply_wstrb32(seed_reg[191:160], wdata_reg, wstrb_reg);
                        8'h58: seed_reg[223:192] <= apply_wstrb32(seed_reg[223:192], wdata_reg, wstrb_reg);
                        8'h5C: seed_reg[255:224] <= apply_wstrb32(seed_reg[255:224], wdata_reg, wstrb_reg);
                        8'h60: seed_reg[287:256] <= apply_wstrb32(seed_reg[287:256], wdata_reg, wstrb_reg);
                        8'h64: seed_reg[319:288] <= apply_wstrb32(seed_reg[319:288], wdata_reg, wstrb_reg);
                        8'h68: seed_reg[351:320] <= apply_wstrb32(seed_reg[351:320], wdata_reg, wstrb_reg);
                        8'h6C: seed_reg[383:352] <= apply_wstrb32(seed_reg[383:352], wdata_reg, wstrb_reg);
                        8'h70: seed_reg[415:384] <= apply_wstrb32(seed_reg[415:384], wdata_reg, wstrb_reg);
                        8'h74: seed_reg[447:416] <= apply_wstrb32(seed_reg[447:416], wdata_reg, wstrb_reg);
                        8'h78: seed_reg[479:448] <= apply_wstrb32(seed_reg[479:448], wdata_reg, wstrb_reg);
                        8'h7C: seed_reg[511:480] <= apply_wstrb32(seed_reg[511:480], wdata_reg, wstrb_reg);

                        default: begin
                        end
                    endcase
                end

                aw_have <= 1'b0;
                w_have  <= 1'b0;
            end

            // Complete B channel.
            if (s_axi_bvalid && s_axi_bready) begin
                s_axi_bvalid <= 1'b0;
            end
        end
    end

    // =========================================================================
    // Single writer for ext_mem
    //
    // Important:
    //   Vivado không infer RAM n?u ext_mem b? ghi ? nhi?u always block.
    //   Vì v?y m?i write vào ext_mem ??u gom vào ?úng block này.
    // =========================================================================
    always @(posedge s_axi_aclk) begin
        if (kyber_ext_we && (kyber_ext_addr < EXT_MEM_DEPTH)) begin
            // Core write has priority.
            ext_mem[core_ext_index] <= kyber_ext_dout[7:0];
        end else if (axi_mem_write_fire && !kyber_busy) begin
            // CPU memory write only when core is idle.
            ext_mem[mem_wr_index] <= wdata_reg[7:0];
        end
    end

    // =========================================================================
    // AXI read logic
    // =========================================================================
    always @(posedge s_axi_aclk) begin
        if (!s_axi_aresetn) begin
            s_axi_arready <= 1'b0;
            s_axi_rdata   <= 32'd0;
            s_axi_rresp   <= 2'b00;
            s_axi_rvalid  <= 1'b0;
        end else begin
            s_axi_arready <= 1'b0;

            if (!s_axi_rvalid && s_axi_arvalid) begin
                s_axi_arready <= 1'b1;
                s_axi_rvalid  <= 1'b1;
                s_axi_rresp   <= 2'b00; // OKAY

                if (is_mem_read) begin
                    if (mem_rd_index < EXT_MEM_DEPTH) begin
                        s_axi_rdata <= {24'd0, ext_mem[mem_rd_index]};
                    end else begin
                        s_axi_rdata <= 32'd0;
                    end
                end else begin
                    case (s_axi_araddr[7:0])
                        8'h00: begin
                            s_axi_rdata <= {29'd0, kyber_opcode_user, 1'b0};
                        end

                        8'h04: begin
                            s_axi_rdata <= {30'd0, kyber_busy, kyber_done};
                        end

                        8'h08: begin
                            s_axi_rdata <= {24'd0, kyber_fsm_state};
                        end

                        8'h40: s_axi_rdata <= seed_reg[ 31:  0];
                        8'h44: s_axi_rdata <= seed_reg[ 63: 32];
                        8'h48: s_axi_rdata <= seed_reg[ 95: 64];
                        8'h4C: s_axi_rdata <= seed_reg[127: 96];
                        8'h50: s_axi_rdata <= seed_reg[159:128];
                        8'h54: s_axi_rdata <= seed_reg[191:160];
                        8'h58: s_axi_rdata <= seed_reg[223:192];
                        8'h5C: s_axi_rdata <= seed_reg[255:224];
                        8'h60: s_axi_rdata <= seed_reg[287:256];
                        8'h64: s_axi_rdata <= seed_reg[319:288];
                        8'h68: s_axi_rdata <= seed_reg[351:320];
                        8'h6C: s_axi_rdata <= seed_reg[383:352];
                        8'h70: s_axi_rdata <= seed_reg[415:384];
                        8'h74: s_axi_rdata <= seed_reg[447:416];
                        8'h78: s_axi_rdata <= seed_reg[479:448];
                        8'h7C: s_axi_rdata <= seed_reg[511:480];

                        default: begin
                            s_axi_rdata <= 32'd0;
                        end
                    endcase
                end
            end

            if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

    // =========================================================================
    // Kyber core instantiation
    //
    // B?n kyber_main_fsm m?i c?a c?u ?ã b? mode_k.
    // N?u b?n local c?a c?u v?n còn port mode_k thì thêm l?i:
    //   .mode_k(2'b00),
    // =========================================================================
    kyber_main_fsm u_kyber_core (
        .clk        (s_axi_aclk),
        .rst        (~s_axi_aresetn),

        .start      (kyber_start),
        .opcode     (kyber_opcode_core),

        .done       (kyber_done),
        .busy       (kyber_busy),

        .ext_we     (kyber_ext_we),
        .ext_re     (kyber_ext_re),
        .ext_addr   (kyber_ext_addr),
        .ext_dout   (kyber_ext_dout),
        .ext_din    (kyber_ext_din),
        .ext_ready  (kyber_ext_ready),

        .seed_in    (seed_reg),
        .seed_valid (1'b1),

        .state_dbg  (kyber_fsm_state)
    );

    assign status_led = {
        kyber_fsm_state[3:0],
        kyber_busy,
        kyber_done,
        kyber_ext_re,
        kyber_ext_we
    };

endmodule