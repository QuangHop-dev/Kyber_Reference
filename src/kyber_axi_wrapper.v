`timescale 1ns / 1ps

/*module kyber_axi_wrapper (
    // AXI4-Lite Interface
    input  wire        s_axi_aclk,
    input  wire        s_axi_aresetn,
    
    input  wire [31:0] s_axi_awaddr,
    input  wire [2:0]  s_axi_awprot,
    input  wire        s_axi_awvalid,
    output wire        s_axi_awready,
    
    input  wire [31:0] s_axi_wdata,
    input  wire [3:0]  s_axi_wstrb,
    input  wire        s_axi_wvalid,
    output wire        s_axi_wready,
    
    output wire [1:0]  s_axi_bresp,
    output wire        s_axi_bvalid,
    input  wire        s_axi_bready,
    
    input  wire [31:0] s_axi_araddr,
    input  wire [2:0]  s_axi_arprot,
    input  wire        s_axi_arvalid,
    output wire        s_axi_arready,
    
    output wire [31:0] s_axi_rdata,
    output wire [1:0]  s_axi_rresp,
    output wire        s_axi_rvalid,
    input  wire        s_axi_rready*/
    
// AXI4-FULL slave wrapper for Kyber512 core (ZCU102 demo friendly)
module wrapper #(
    parameter integer C_S_AXI_ID_WIDTH   = 4,
    parameter integer C_S_AXI_ADDR_WIDTH = 32,
    parameter integer C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                            s_axi_aclk,
    input  wire                            s_axi_aresetn,
    // Write address
    input  wire [C_S_AXI_ID_WIDTH-1:0]     s_axi_awid,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]   s_axi_awaddr,
    input  wire [7:0]                      s_axi_awlen,
    input  wire [2:0]                      s_axi_awsize,
    input  wire [1:0]                      s_axi_awburst,
    input  wire                            s_axi_awlock,
    input  wire [3:0]                      s_axi_awcache,
    input  wire [2:0]                      s_axi_awprot,
    input  wire [3:0]                      s_axi_awqos,
    input  wire                            s_axi_awvalid,
    output reg                             s_axi_awready,
    // Write data
    input  wire [C_S_AXI_DATA_WIDTH-1:0]   s_axi_wdata,
    input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input  wire                            s_axi_wlast,
    input  wire                            s_axi_wvalid,
    output reg                             s_axi_wready,
    // Write response
    output reg  [C_S_AXI_ID_WIDTH-1:0]     s_axi_bid,
    output reg  [1:0]                      s_axi_bresp,
    output reg                             s_axi_bvalid,
    input  wire                            s_axi_bready,
    // Read address
    input  wire [C_S_AXI_ID_WIDTH-1:0]     s_axi_arid,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0]   s_axi_araddr,
    input  wire [7:0]                      s_axi_arlen,
    input  wire [2:0]                      s_axi_arsize,
    input  wire [1:0]                      s_axi_arburst,
    input  wire                            s_axi_arlock,
    input  wire [3:0]                      s_axi_arcache,
    input  wire [2:0]                      s_axi_arprot,
    input  wire [3:0]                      s_axi_arqos,
    input  wire                            s_axi_arvalid,
    output reg                             s_axi_arready,
    // Read data
    output reg  [C_S_AXI_ID_WIDTH-1:0]     s_axi_rid,
    output reg  [C_S_AXI_DATA_WIDTH-1:0]   s_axi_rdata,
    output reg  [1:0]                      s_axi_rresp,
    output reg                             s_axi_rlast,
    output reg                             s_axi_rvalid,
    input  wire                            s_axi_rready,
    output wire [7:0]                      status_led
);
    // -------------------------------------------------------------------------
    // Core reset generation: AXI reset is active-low.
    // Use async assert + synchronous deassert for active-high core reset.
    // -------------------------------------------------------------------------
    //reg [1:0] core_rst_sync;
    //wire      core_rst;

    // control registers
    reg kyber_start, kyber_ext_ready; reg [1:0] kyber_opcode; reg [31:0] kyber_ext_din;
    wire kyber_done, kyber_busy, kyber_ext_we, kyber_ext_re; wire [31:0] kyber_ext_addr, kyber_ext_dout; wire [7:0] kyber_fsm_state;
    wire [1:0] kyber_opcode_core = (kyber_opcode == 2'b00) ? 2'b01 : (kyber_opcode == 2'b01) ? 2'b10 : 2'b11;
    
    /*always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
        if (!s_axi_aresetn) begin
            core_rst_sync <= 2'b11;
        end else begin
            core_rst_sync <= {1'b0, core_rst_sync[1]};
        end
    end

    assign core_rst = core_rst_sync[0];

    // =========================================================================
    // AXI4-Lite Control Logic
    // =========================================================================
    reg [31:0] axi_awaddr;
    reg [31:0] axi_wdata_reg;
    reg axi_awready;
    reg axi_wready;
    reg [1:0] axi_bresp;
    reg axi_bvalid;
    reg [31:0] axi_araddr;
    reg axi_arready;
    reg [31:0] axi_rdata;
    reg [1:0] axi_rresp;
    reg axi_rvalid;
    reg aw_captured;
    reg w_captured;

    assign s_axi_awready = axi_awready;
    assign s_axi_wready  = axi_wready;
    assign s_axi_bresp   = axi_bresp;
    assign s_axi_bvalid  = axi_bvalid;
    assign s_axi_arready = axi_arready;
    assign s_axi_rdata   = axi_rdata;
    assign s_axi_rresp   = axi_rresp;
    assign s_axi_rvalid  = axi_rvalid;

    // AXI Write Address/Data capture (accept AW and W independently)
    always @(posedge s_axi_aclk) begin
        if (~s_axi_aresetn) begin
            axi_awready <= 1'b0;
            axi_wready  <= 1'b0;
            aw_captured <= 1'b0;
            w_captured  <= 1'b0;
            axi_awaddr  <= 32'd0;
            axi_wdata_reg <= 32'd0;
        end else begin
            axi_awready <= 1'b0;
            axi_wready  <= 1'b0;

            if (!aw_captured && s_axi_awvalid) begin
                axi_awready <= 1'b1;
                axi_awaddr  <= s_axi_awaddr;
                aw_captured <= 1'b1;
            end

            if (!w_captured && s_axi_wvalid) begin
                axi_wready   <= 1'b1;
                axi_wdata_reg <= s_axi_wdata;
                w_captured   <= 1'b1;
            end

            // Clear capture flags after write response is accepted
            if (axi_bvalid && s_axi_bready) begin
                aw_captured <= 1'b0;
                w_captured  <= 1'b0;
            end
        end
    end

    // AXI Write Response
    always @(posedge s_axi_aclk) begin
        if (~s_axi_aresetn) begin
            axi_bvalid <= 1'b0;
            axi_bresp  <= 2'b0;
        end else begin
            if (aw_captured && w_captured && ~axi_bvalid) begin
                axi_bvalid <= 1'b1;
                axi_bresp  <= 2'b0; // 'OKAY' response
            end else if (s_axi_bready && axi_bvalid) begin
                axi_bvalid <= 1'b0;
            end
        end
    end*/
    
    reg [C_S_AXI_ADDR_WIDTH-1:0] awaddr_reg, araddr_reg;
    reg aw_seen, w_seen;
    
    // AXI Read Address
    always @(posedge s_axi_aclk) begin
    	if(!s_axi_aresetn) begin
            s_axi_awready<=0; s_axi_wready<=0; s_axi_bvalid<=0; s_axi_bresp<=0; s_axi_bid<=0;
            s_axi_arready<=0; s_axi_rvalid<=0; s_axi_rresp<=0; s_axi_rid<=0; s_axi_rlast<=0; s_axi_rdata<=0;
            kyber_start<=0; kyber_opcode<=0; kyber_ext_ready<=0; kyber_ext_din<=0; awaddr_reg<=0; araddr_reg<=0;
            aw_seen<=0; w_seen<=0;
        end else begin
            kyber_start<=0; kyber_ext_ready<=0;
            /*s_axi_awready <= (!s_axi_awready && s_axi_awvalid && !s_axi_bvalid);
            s_axi_wready  <= (!s_axi_wready  && s_axi_wvalid  && !s_axi_bvalid);
            if (s_axi_awready) begin awaddr_reg<=s_axi_awaddr; s_axi_bid<=s_axi_awid; end
            if (s_axi_awready && s_axi_wready && s_axi_wvalid) begin*/
            s_axi_awready <= (!aw_seen && s_axi_awvalid && !s_axi_bvalid);
            s_axi_wready  <= (!w_seen  && s_axi_wvalid  && !s_axi_bvalid);
            if (!aw_seen && s_axi_awvalid) begin awaddr_reg<=s_axi_awaddr; s_axi_bid<=s_axi_awid; aw_seen<=1'b1; end
            if (!w_seen  && s_axi_wvalid) w_seen<=1'b1;

            if (aw_seen && w_seen && !s_axi_bvalid) begin
                case (awaddr_reg[7:0])
                    8'h00: begin kyber_start<=s_axi_wdata[0]; kyber_opcode<=s_axi_wdata[2:1]; end
                    8'h08: kyber_ext_ready<=s_axi_wdata[0];
                    8'h18: kyber_ext_din<=s_axi_wdata;
                endcase
                s_axi_bvalid <= 1'b1;
                s_axi_bresp  <= 2'b00;
            end
            
            //if (s_axi_bvalid && s_axi_bready) s_axi_bvalid<=1'b0;
            if (s_axi_bvalid && s_axi_bready) begin
                s_axi_bvalid<=1'b0;
                aw_seen<=1'b0;
                w_seen<=1'b0;
            end

            s_axi_arready <= (!s_axi_arready && s_axi_arvalid && !s_axi_rvalid);
            if (s_axi_arready) begin
                araddr_reg <= s_axi_araddr; s_axi_rid <= s_axi_arid; s_axi_rvalid<=1'b1; s_axi_rlast<=1'b1; s_axi_rresp<=2'b00;
                case (s_axi_araddr[7:0])
                    8'h00: s_axi_rdata <= {27'd0,2'b00,kyber_opcode,kyber_start};
                    8'h04: s_axi_rdata <= {30'd0, kyber_busy, kyber_done};
                    8'h08: s_axi_rdata <= {31'd0, kyber_ext_ready};
                    8'h0C: s_axi_rdata <= {30'd0, kyber_ext_re, kyber_ext_we};
                    8'h10: s_axi_rdata <= kyber_ext_addr;
                    8'h14: s_axi_rdata <= kyber_ext_dout;
                    8'h18: s_axi_rdata <= kyber_ext_din;
                    8'h1C: s_axi_rdata <= {24'd0, kyber_fsm_state};
                    default: s_axi_rdata <= 32'd0;
                endcase
            end
            if (s_axi_rvalid && s_axi_rready) begin s_axi_rvalid<=1'b0; s_axi_rlast<=1'b0; end
        end
    end
    
    // =========================================================================
    // Core Instantiation
    // =========================================================================
    kyber_main_fsm u_kyber_core (
      .clk(s_axi_aclk), .rst(~s_axi_aresetn), .start(kyber_start), .opcode(kyber_opcode_core), .mode_k(2'b00), .done(kyber_done), .busy(kyber_busy),
      .ext_we(kyber_ext_we), .ext_re(kyber_ext_re), .ext_addr(kyber_ext_addr), .ext_dout(kyber_ext_dout), .ext_din(kyber_ext_din), .ext_ready(kyber_ext_ready),
      .seed_in(512'h2F07CD8F75BDFB1634842BFE259AD29C77B883658DC66CBADD252D93A3EBABF1A2B8D27BD63FF86D54C5E1E2F1294CA3142E047C0460B010E9D638825902EFDD),
      .seed_valid(1'b1), .state_dbg(kyber_fsm_state)
    );

    assign status_led = {kyber_fsm_state[3:0], kyber_busy, kyber_done, kyber_ext_re, kyber_ext_we};
endmodule

    /* AXI Read Address
    always @(posedge s_axi_aclk) begin
        if (~s_axi_aresetn) begin
            axi_arready <= 1'b0;
            axi_araddr  <= 32'b0;
        end else begin
            if (~axi_arready && s_axi_arvalid) begin
                axi_arready <= 1'b1;
                axi_araddr  <= s_axi_araddr;
            end else begin
                axi_arready <= 1'b0;
            end
        end
    end

    // AXI Read Data
    wire read_enable;
    assign read_enable = axi_arready & s_axi_arvalid & ~axi_rvalid;

    always @(posedge s_axi_aclk) begin
        if (~s_axi_aresetn) begin
            axi_rvalid <= 1'b0;
            axi_rresp  <= 2'b0;
        end else begin
            if (read_enable) begin
                axi_rvalid <= 1'b1;
                axi_rresp  <= 2'b0; // 'OKAY' response
            end else if (axi_rvalid && s_axi_rready) begin
                axi_rvalid <= 1'b0;
            end
        end
    end

    // =========================================================================
    // Kyber FSM Register Map
    // =========================================================================
    // Address Map:
    // 0x00: Control Register (RW)
    //       [0]   : Start (Pulse)
    //       [2:1] : Opcode (0: KeyGen, 1: Encaps, 2: Decaps)
    //       [4:3] : Mode K (0: Kyber512, 1: Kyber768, 2: Kyber1024)
    // 0x04: Status Register (RO)
    //       [0]   : Done
    //       [1]   : Busy
    // 0x08: ext_ready (RW) (Software tells hardware data is valid/ready)
    // 0x0C: ext_we / ext_re Indicator (RO)
    //       [0]   : ext_we
    //       [1]   : ext_re
    // 0x10: ext_addr (RO from FSM)
    // 0x14: ext_dout (RO from FSM)
    // 0x18: ext_din (RW from ARM to provide data)
    
    reg        kyber_start;
    reg [1:0]  kyber_opcode;
    reg [1:0]  kyber_mode_k;
    reg        kyber_ext_ready;
    reg [31:0] kyber_ext_din;

    wire        kyber_done;
    wire        kyber_busy;
    wire        kyber_ext_we;
    wire        kyber_ext_re;
    wire [31:0] kyber_ext_addr;
    wire [31:0] kyber_ext_dout;
    wire [7:0]  kyber_fsm_state;
    // Internal opcode map used by current FSM:
    // 2'b01: KeyGen, 2'b10: Encaps, 2'b11: Decaps
    // AXI/user map (manual):
    // 2'b00: KeyGen, 2'b01: Encaps, 2'b10: Decaps
    wire [1:0] kyber_opcode_core =
        (kyber_opcode == 2'b00) ? 2'b01 :
        (kyber_opcode == 2'b01) ? 2'b10 :
        (kyber_opcode == 2'b10) ? 2'b11 :
                                  2'b00;

    // Write Logic to our memory mapped registers
    wire write_enable;
    assign write_enable = aw_captured && w_captured && ~axi_bvalid;

    always @(posedge s_axi_aclk) begin
        if (~s_axi_aresetn) begin
            kyber_start     <= 1'b0;
            kyber_opcode    <= 2'b0;
            kyber_mode_k    <= 2'b0;
            kyber_ext_ready <= 1'b0;
            kyber_ext_din   <= 32'b0;
        end else begin
            kyber_start <= 1'b0; // Auto clear start to make it a pulse
            kyber_ext_ready <= 1'b0; // Auto clear ready: write 1 generates 1-cycle pulse
            
            if (write_enable) begin
                case (axi_awaddr[7:0])
                    8'h00: begin
                        kyber_start  <= axi_wdata_reg[0];
                        kyber_opcode <= axi_wdata_reg[2:1];
                        kyber_mode_k <= axi_wdata_reg[4:3];
                    end
                    8'h08: kyber_ext_ready <= axi_wdata_reg[0];
                    8'h18: kyber_ext_din   <= axi_wdata_reg;
                    default: ;
                endcase
            end
        end
    end

    // Read Logic from our memory mapped registers
    always @(posedge s_axi_aclk) begin
        if (~s_axi_aresetn) begin
            axi_rdata <= 32'b0;
        end else begin
            if (read_enable) begin
                case (axi_araddr[7:0])
                    8'h00: axi_rdata <= {27'd0, kyber_mode_k, kyber_opcode, kyber_start};
                    8'h04: axi_rdata <= {30'd0, kyber_busy, kyber_done};
                    8'h08: axi_rdata <= {31'd0, kyber_ext_ready};
                    8'h0C: axi_rdata <= {30'd0, kyber_ext_re, kyber_ext_we};
                    8'h10: axi_rdata <= kyber_ext_addr;
                    8'h14: axi_rdata <= kyber_ext_dout;
                    8'h18: axi_rdata <= kyber_ext_din;
                    8'h1C: axi_rdata <= {24'd0, kyber_fsm_state};
                    default: axi_rdata <= 32'b0;
                endcase
            end
        end
    end

    // =========================================================================
    // Core Instantiation
    // =========================================================================
    kyber_main_fsm u_kyber_core (
        .clk      (s_axi_aclk),
        .rst      (core_rst),

        .start    (kyber_start),
        .opcode   (kyber_opcode_core),
        .mode_k   (kyber_mode_k),
        .done     (kyber_done),
        .busy     (kyber_busy),

        .ext_we   (kyber_ext_we),
        .ext_re   (kyber_ext_re),
        .ext_addr (kyber_ext_addr),
        .ext_dout (kyber_ext_dout),
        //.ext_din  (kyber_ext_din),
        .ext_din  (kyber_ext_din),
        .ext_ready(kyber_ext_ready),
        .seed_in  (512'h2F07CD8F75BDFB1634842BFE259AD29C77B883658DC66CBADD252D93A3EBABF1A2B8D27BD63FF86D54C5E1E2F1294CA3142E047C0460B010E9D638825902EFDD),
        .seed_valid(1'b1),
        .state_dbg(kyber_fsm_state)
    );

endmodule*/
