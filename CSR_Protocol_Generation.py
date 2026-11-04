"""Protocol front ends used by the CSR generator."""

ASYNC_FIFO_MODULE = "m_csr_async_fifo"
SYNC_FIFO_MODULE = "m_csr_sync_fifo"


ASYNC_FIFO_MODEL = '''/*
 * Project      : APB-CSR-Generator
 * Function     : Dual-clock first-word-fall-through FIFO for CSR bus requests/responses.
 * Notes        : Reset both clock sides together. DEPTH must be a power of two and >= 2.
 */
`timescale 1ns/1ps

module m_csr_async_fifo #(
  parameter logic [31:0] PARA_DATA_W = 32'd32,
  parameter logic [31:0] PARA_DEPTH = 32'd2,
  localparam logic [31:0] LPARA_ADDR_W = $clog2(PARA_DEPTH),
  localparam logic [31:0] LPARA_PTR_W = LPARA_ADDR_W + 1
) (
  input  wire                    i_clk_wr,
  input  wire                    i_rst_n_wr,
  input  wire                    i_w_valid,
  output logic                   o_w_ready,
  input  wire [PARA_DATA_W-1:0]  i_w_data,
  input  wire                    i_clk_rd,
  input  wire                    i_rst_n_rd,
  output logic                   o_r_valid,
  input  wire                    i_r_ready,
  output logic [PARA_DATA_W-1:0] o_r_data
);
  logic [PARA_DATA_W-1:0] reg_mem [0:PARA_DEPTH-1];
  logic [LPARA_PTR_W-1:0] reg_wr_bin;
  logic [LPARA_PTR_W-1:0] reg_wr_gray;
  logic [LPARA_PTR_W-1:0] reg_rd_bin;
  logic [LPARA_PTR_W-1:0] reg_rd_gray;
  logic [LPARA_PTR_W-1:0] reg_rd_gray_wr_meta;
  logic [LPARA_PTR_W-1:0] reg_rd_gray_wr_sync;
  logic [LPARA_PTR_W-1:0] reg_wr_gray_rd_meta;
  logic [LPARA_PTR_W-1:0] reg_wr_gray_rd_sync;
  logic [LPARA_PTR_W-1:0] reg_rd_bin_wr_sync;
  logic [LPARA_PTR_W-1:0] reg_wr_bin_rd_sync;
  logic [LPARA_PTR_W-1:0] w_wr_bin_nxt;
  logic [LPARA_PTR_W-1:0] w_wr_gray_nxt;
  logic [LPARA_PTR_W-1:0] w_rd_bin_nxt;
  logic [LPARA_PTR_W-1:0] w_rd_gray_nxt;
  logic w_full;
  logic w_empty;

  // Gray pointers cross clock domains through two-stage synchronizers.
  always_ff @(posedge i_clk_wr, negedge i_rst_n_wr) begin : p_ff_rd_gray_sync
    if (!i_rst_n_wr) begin
      reg_rd_gray_wr_meta <= '0;
      reg_rd_gray_wr_sync <= '0;
    end else begin
      reg_rd_gray_wr_meta <= reg_rd_gray;
      reg_rd_gray_wr_sync <= reg_rd_gray_wr_meta;
    end
  end
  always_ff @(posedge i_clk_rd, negedge i_rst_n_rd) begin : p_ff_wr_gray_sync
    if (!i_rst_n_rd) begin
      reg_wr_gray_rd_meta <= '0;
      reg_wr_gray_rd_sync <= '0;
    end else begin
      reg_wr_gray_rd_meta <= reg_wr_gray;
      reg_wr_gray_rd_sync <= reg_wr_gray_rd_meta;
    end
  end

  // Standard reflected-Gray pointer comparisons detect full and empty.
  assign w_wr_bin_nxt = reg_wr_bin + {{(LPARA_PTR_W-1){1'b0}}, (i_w_valid & o_w_ready)};
  assign w_wr_gray_nxt = (w_wr_bin_nxt >> 1) ^ w_wr_bin_nxt;
  assign w_rd_bin_nxt = reg_rd_bin + {{(LPARA_PTR_W-1){1'b0}}, (i_r_ready & o_r_valid)};
  assign w_rd_gray_nxt = (w_rd_bin_nxt >> 1) ^ w_rd_bin_nxt;
  assign reg_rd_bin_wr_sync[LPARA_PTR_W-1] = reg_rd_gray_wr_sync[LPARA_PTR_W-1];
  assign reg_wr_bin_rd_sync[LPARA_PTR_W-1] = reg_wr_gray_rd_sync[LPARA_PTR_W-1];
  generate
    for (genvar gen_ptr = 0; gen_ptr < (LPARA_PTR_W-1); gen_ptr++) begin : gen_gray_to_bin
      assign reg_rd_bin_wr_sync[gen_ptr] = ^(reg_rd_gray_wr_sync[LPARA_PTR_W-1:gen_ptr]);
      assign reg_wr_bin_rd_sync[gen_ptr] = ^(reg_wr_gray_rd_sync[LPARA_PTR_W-1:gen_ptr]);
    end
  endgenerate
  assign w_full = ((reg_wr_bin - reg_rd_bin_wr_sync) >= LPARA_PTR_W'(PARA_DEPTH));
  assign w_empty = (reg_rd_bin == reg_wr_bin_rd_sync);
  assign o_w_ready = ~w_full;
  assign o_r_valid = ~w_empty;
  assign o_r_data = reg_mem[reg_rd_bin[LPARA_ADDR_W-1:0]];

  // Write-side memory and pointer update.
  always_ff @(posedge i_clk_wr, negedge i_rst_n_wr) begin : p_ff_wr_ptr
    if (!i_rst_n_wr) begin
      reg_wr_bin <= '0;
      reg_wr_gray <= '0;
    end else begin
      reg_wr_bin <= w_wr_bin_nxt;
      reg_wr_gray <= w_wr_gray_nxt;
      if (i_w_valid & o_w_ready)
        reg_mem[reg_wr_bin[LPARA_ADDR_W-1:0]] <= i_w_data;
    end
  end
  // Read-side pointer update.
  always_ff @(posedge i_clk_rd, negedge i_rst_n_rd) begin : p_ff_rd_ptr
    if (!i_rst_n_rd) begin
      reg_rd_bin <= '0;
      reg_rd_gray <= '0;
    end else begin
      reg_rd_bin <= w_rd_bin_nxt;
      reg_rd_gray <= w_rd_gray_nxt;
    end
  end
endmodule
'''


SYNC_FIFO_MODEL = '''/*
 * Project      : APB-CSR-Generator
 * Function     : Single-clock first-word-fall-through FIFO for CSR requests/responses.
 * Notes        : No clock-domain synchronizers are present in this model.
 */
`timescale 1ns/1ps

module m_csr_sync_fifo #(
  parameter logic [31:0] PARA_DATA_W = 32'd32,
  parameter logic [31:0] PARA_DEPTH = 32'd2,
  localparam logic [31:0] LPARA_PTR_W = $clog2(PARA_DEPTH),
  localparam logic [31:0] LPARA_CNT_W = $clog2(PARA_DEPTH + 32'd1)
) (
  input  wire                    i_clk,
  input  wire                    i_rst_n,
  input  wire                    i_w_valid,
  output logic                   o_w_ready,
  input  wire [PARA_DATA_W-1:0]  i_w_data,
  output logic                   o_r_valid,
  input  wire                    i_r_ready,
  output logic [PARA_DATA_W-1:0] o_r_data
);
  logic [PARA_DATA_W-1:0] reg_mem [0:PARA_DEPTH-1];
  logic [LPARA_PTR_W-1:0] reg_wr_ptr;
  logic [LPARA_PTR_W-1:0] reg_rd_ptr;
  logic [LPARA_CNT_W-1:0] reg_count;
  logic w_wr_hs;
  logic w_rd_hs;

  assign o_r_valid = (reg_count != '0);
  assign o_w_ready = (reg_count < LPARA_CNT_W'(PARA_DEPTH)) | (o_r_valid & i_r_ready);
  assign o_r_data = reg_mem[reg_rd_ptr];
  assign w_wr_hs = i_w_valid & o_w_ready;
  assign w_rd_hs = o_r_valid & i_r_ready;

  // FIFO pointers and occupancy update together on accepted push/pop operations.
  always_ff @(posedge i_clk, negedge i_rst_n) begin : p_ff_sync_fifo_state
    if (!i_rst_n) begin
      reg_wr_ptr <= '0;
      reg_rd_ptr <= '0;
      reg_count <= '0;
    end else begin
      case ({w_wr_hs, w_rd_hs})
        2'b10: reg_count <= reg_count + 1'b1;
        2'b01: reg_count <= reg_count - 1'b1;
        default: reg_count <= reg_count;
      endcase
      if (w_wr_hs) begin
        reg_mem[reg_wr_ptr] <= i_w_data;
        if (reg_wr_ptr == LPARA_PTR_W'(PARA_DEPTH - 32'd1))
          reg_wr_ptr <= '0;
        else
          reg_wr_ptr <= reg_wr_ptr + 1'b1;
      end
      if (w_rd_hs) begin
        if (reg_rd_ptr == LPARA_PTR_W'(PARA_DEPTH - 32'd1))
          reg_rd_ptr <= '0;
        else
          reg_rd_ptr <= reg_rd_ptr + 1'b1;
      end
    end
  end
endmodule
'''


class axil_protocol:
    """AXI4-Lite CSR front end with outstanding request queues."""

    def __init__(self, data_wd, addr_wd, async_option, strobe_mode, outstanding_mode,
                 rd_depth, wr_depth, port, port_group):
        self.data_wd = data_wd
        self.addr_wd = addr_wd
        self.async_option = int(async_option)
        self.strobe_mode = str(strobe_mode).upper()
        self.outstanding_mode = str(outstanding_mode).upper()
        self.rd_depth = int(rd_depth)
        self.wr_depth = int(wr_depth)
        self.port_groups = [
            port_group("AXI and register clocks", [
                port("i_clk_axi", "input", 1), port("i_rst_n_axi", "input", 1),
                port("i_clk_reg", "input", 1), port("i_rst_n_reg", "input", 1)]),
            port_group("AXI4-Lite slave", [
                port("i_axi_awvalid", "input", 1), port("o_axi_awready", "output", 1),
                port("i_axi_awaddr", "input", addr_wd, "[LPARA_ADDR_W-1:0]"),
                port("i_axi_awprot", "input", 3, "[2:0]"),
                port("i_axi_wvalid", "input", 1), port("o_axi_wready", "output", 1),
                port("i_axi_wdata", "input", data_wd, "[LPARA_DATA_W-1:0]"),
                port("i_axi_wstrb", "input", data_wd // 8, "[LPARA_STRB_W-1:0]"),
                port("o_axi_bvalid", "output", 1), port("i_axi_bready", "input", 1),
                port("o_axi_bresp", "output", 2, "[1:0]"),
                port("i_axi_arvalid", "input", 1), port("o_axi_arready", "output", 1),
                port("i_axi_araddr", "input", addr_wd, "[LPARA_ADDR_W-1:0]"),
                port("i_axi_arprot", "input", 3, "[2:0]"),
                port("o_axi_rvalid", "output", 1), port("i_axi_rready", "input", 1),
                port("o_axi_rdata", "output", data_wd, "[LPARA_DATA_W-1:0]"),
                port("o_axi_rresp", "output", 2, "[1:0]")])]
        self.logic_list = []
        self.rtl_rw = ""
        mode = {"SINGLE": 0, "READ_WRITE": 1, "QUEUED": 2}[self.outstanding_mode]
        self.clock_assign = (
            "  assign w_clk_reg = (PARA_ASYNCHRONOUS == 32'd1) ? i_clk_reg : i_clk_axi;\n"
            "  assign w_rst_n_reg = (PARA_ASYNCHRONOUS == 32'd1) ? i_rst_n_reg : i_rst_n_axi;\n")
        self.extra_parameters = [
            ("  // Select 0=SINGLE, 1=READ_WRITE, or 2=QUEUED.\n"
             "  // Parameter values: 0, 1, or 2; default follows the workbook.\n"
             "  // Parameter unit: mode encoding\n"
             f"  parameter logic [31:0] PARA_AXI_OUTSTANDING_MODE = 32'd{mode}"),
            ("  // Maximum outstanding read requests in QUEUED mode (1 through 8).\n"
             "  // Parameter values: 1 through 8; default follows the workbook.\n"
             "  // Parameter unit: requests\n"
             f"  parameter logic [31:0] PARA_AXI_RD_DEPTH = 32'd{self.rd_depth}"),
            ("  // Maximum outstanding write requests in QUEUED mode (1 through 8).\n"
             "  // Parameter values: 1 through 8; default follows the workbook.\n"
             "  // Parameter unit: requests\n"
             f"  parameter logic [31:0] PARA_AXI_WR_DEPTH = 32'd{self.wr_depth}"),
            ("  // Write strobe policy: 0=HONOR or 1=REJECT partial writes.\n"
             "  // Parameter values: 0 or 1; default follows the workbook.\n"
             "  // Parameter unit: mode encoding\n"
             f"  parameter logic [31:0] PARA_WRITE_STROBE_MODE = 32'd{0 if self.strobe_mode == 'HONOR' else 1}")]
        self.extra_localparams = (
            "  localparam logic [1:0] LPARA_AXI_RESP_OKAY = 2'd0,\n"
            "  localparam logic [1:0] LPARA_AXI_RESP_SLVERR = 2'd2,\n"
            "  localparam logic [1:0] LPARA_AXI_RESP_DECERR = 2'd3,\n"
            "  localparam logic [31:0] LPARA_AXI_FIFO_RD_DEPTH = (PARA_AXI_RD_DEPTH <= 32'd2) ? 32'd2 : ((PARA_AXI_RD_DEPTH <= 32'd4) ? 32'd4 : 32'd8),\n"
            "  localparam logic [31:0] LPARA_AXI_FIFO_WR_DEPTH = (PARA_AXI_WR_DEPTH <= 32'd2) ? 32'd2 : ((PARA_AXI_WR_DEPTH <= 32'd4) ? 32'd4 : 32'd8),\n"
            "  localparam logic [31:0] LPARA_AXI_RD_LIMIT = (PARA_AXI_OUTSTANDING_MODE == 32'd2) ? ((PARA_AXI_RD_DEPTH > 32'd8) ? 32'd8 : ((PARA_AXI_RD_DEPTH < 32'd1) ? 32'd1 : PARA_AXI_RD_DEPTH)) : 32'd1,\n"
            "  localparam logic [31:0] LPARA_AXI_WR_LIMIT = (PARA_AXI_OUTSTANDING_MODE == 32'd2) ? ((PARA_AXI_WR_DEPTH > 32'd8) ? 32'd8 : ((PARA_AXI_WR_DEPTH < 32'd1) ? 32'd1 : PARA_AXI_WR_DEPTH)) : 32'd1,\n"
            "  localparam logic [31:0] LPARA_AXI_OUT_SINGLE = 32'd0")
        self.gen_logic(port)

    def gen_logic(self, port):
        def add(name, width=1):
            suffix = f"[{width-1}:0]" if width > 1 else ""
            self.logic_list.append(port(name, "logic", width, suffix))

        for name, width in (
            ("w_clk_reg", 1), ("w_rst_n_reg", 1), ("reg_addr", self.addr_wd),
            ("reg_wdata", self.data_wd), ("reg_wstrb", self.data_wd // 8),
            ("reg_wmask", self.data_wd), ("w_rd_en", 1), ("w_wr_en", 1),
            ("w_rdata_nxt", self.data_wd), ("w_addr_mapped", 1),
            ("reg_axi_rr_read", 1), ("reg_axi_accept_read", 1),
            ("reg_rd_count", 4), ("reg_wr_count", 4),
            ("reg_aw_pending", 1), ("reg_w_pending", 1),
            ("reg_awaddr_hold", self.addr_wd), ("reg_wdata_hold", self.data_wd),
            ("reg_wstrb_hold", self.data_wd // 8),
            ("w_rd_cmd_w_valid", 1), ("w_rd_cmd_w_ready", 1),
            ("w_rd_cmd_r_valid", 1), ("w_rd_cmd_r_ready", 1),
            ("w_wr_cmd_w_valid", 1), ("w_wr_cmd_w_ready", 1),
            ("w_wr_cmd_r_valid", 1), ("w_wr_cmd_r_ready", 1),
            ("w_rd_rsp_w_valid", 1), ("w_rd_rsp_w_ready", 1),
            ("w_rd_rsp_r_valid", 1), ("w_rd_rsp_r_ready", 1),
            ("w_wr_rsp_w_valid", 1), ("w_wr_rsp_w_ready", 1),
            ("w_wr_rsp_r_valid", 1), ("w_wr_rsp_r_ready", 1),
            ("w_rd_cmd_w_data", self.addr_wd), ("w_rd_cmd_r_data", self.addr_wd),
            ("w_wr_cmd_w_data", self.addr_wd + self.data_wd + self.data_wd // 8),
            ("w_wr_cmd_r_data", self.addr_wd + self.data_wd + self.data_wd // 8),
            ("w_rd_rsp_w_data", self.data_wd + 2), ("w_rd_rsp_r_data", self.data_wd + 2),
            ("w_wr_rsp_w_data", 2), ("w_wr_rsp_r_data", 2),
            ("w_ar_hs", 1), ("w_aw_hs", 1), ("w_w_hs", 1),
            ("w_r_hs", 1), ("w_b_hs", 1), ("w_wr_reserve", 1),
            ("w_write_candidate", 1), ("w_issue_read", 1), ("w_issue_write", 1),
            ("w_issue_addr", self.addr_wd), ("w_issue_wdata", self.data_wd),
            ("w_issue_wstrb", self.data_wd // 8), ("w_issue_resp", 2),
            ("reg_axi_rr_read_nxt", 1)):
            add(name, width)
        self.access = self._rtl()

    def prdata_rtl(self, reg_list):
        cases = []
        for r in reg_list:
            if hasattr(r, "base_offset"):
                for index in range(r.max_count):
                    address = f"({r.base_parameter} + (32'd{index} * {r.stride_parameter}))"
                    body = f"if ({r.count_parameter} > 32'd{index}) begin w_rdata_nxt = w_{r.name}_value[{index}]; w_addr_mapped = 1'b1; end"
                    cases.append((address, body))
            else:
                cases.append((f"LPARA_{r.name.upper()}_OFFSET",
                              f"begin w_rdata_nxt = w_{r.name}_value; w_addr_mapped = 1'b1; end"))
        cases_rtl = "\n".join(f"      {address}: {body}" for address, body in cases)
        self.rtl_prdata = (
            "\n  // Unmapped register addresses return zero and generate DECERR.\n"
            "  always_comb begin : p_com_reg_read_decode\n"
            "    w_rdata_nxt = '0;\n    w_addr_mapped = 1'b0;\n"
            "    case (32'(reg_addr))\n" + cases_rtl +
            "\n      default: begin w_rdata_nxt = '0; w_addr_mapped = 1'b0; end\n"
            "    endcase\n  end\n")

    def _rtl(self):
        aw = self.addr_wd
        dw = self.data_wd
        sw = self.data_wd // 8
        wrq_w = aw + dw + sw
        rtl = r'''
  // A single request, one-per-direction, or separately bounded read/write queues.
  assign w_write_candidate = i_axi_awvalid | i_axi_wvalid;
  assign o_axi_arready = (32'(reg_rd_count) < LPARA_AXI_RD_LIMIT) & w_rd_cmd_w_ready
                       & ((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE) | (reg_wr_count == 4'd0))
                       & ((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE) | ~w_write_candidate | reg_axi_accept_read);
  assign o_axi_awready = ~reg_aw_pending & ((32'(reg_wr_count) < LPARA_AXI_WR_LIMIT) | reg_w_pending) & w_wr_cmd_w_ready
                       & ((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE) | (reg_rd_count == 4'd0))
                       & ((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE) | ~i_axi_arvalid | ~reg_axi_accept_read);
  assign o_axi_wready = ~reg_w_pending & ((32'(reg_wr_count) < LPARA_AXI_WR_LIMIT) | reg_aw_pending) & w_wr_cmd_w_ready
                      & ((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE) | (reg_rd_count == 4'd0))
                      & ((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE) | ~i_axi_arvalid | ~reg_axi_accept_read);
  assign w_ar_hs = i_axi_arvalid & o_axi_arready;
  assign w_aw_hs = i_axi_awvalid & o_axi_awready;
  assign w_w_hs = i_axi_wvalid & o_axi_wready;
  assign w_r_hs = w_rd_rsp_r_valid & i_axi_rready;
  assign w_b_hs = w_wr_rsp_r_valid & i_axi_bready;
  assign w_wr_reserve = ~(reg_aw_pending | reg_w_pending) & (w_aw_hs | w_w_hs);
  assign w_rd_cmd_w_valid = w_ar_hs;
  assign w_rd_cmd_w_data = i_axi_araddr;
  assign w_wr_cmd_w_valid = reg_aw_pending & reg_w_pending;
  assign w_wr_cmd_w_data = {reg_awaddr_hold, reg_wdata_hold, reg_wstrb_hold};

  // AW and W are accepted independently and held until their combined request enters its FIFO.
  always_ff @(posedge i_clk_axi, negedge i_rst_n_axi) begin : p_ff_axi_aw_w_hold
    if (!i_rst_n_axi) begin
      reg_aw_pending <= 1'b0;
      reg_w_pending <= 1'b0;
      reg_awaddr_hold <= '0;
      reg_wdata_hold <= '0;
      reg_wstrb_hold <= '0;
    end else if (w_wr_cmd_w_valid & w_wr_cmd_w_ready) begin
      reg_aw_pending <= 1'b0;
      reg_w_pending <= 1'b0;
    end else begin
      if (w_aw_hs) begin
        reg_aw_pending <= 1'b1;
        reg_awaddr_hold <= i_axi_awaddr;
      end
      if (w_w_hs) begin
        reg_w_pending <= 1'b1;
        reg_wdata_hold <= i_axi_wdata;
        reg_wstrb_hold <= i_axi_wstrb;
      end
    end
  end

  // Counts include queued commands, the active command, and unaccepted responses.
  always_ff @(posedge i_clk_axi, negedge i_rst_n_axi) begin : p_ff_axi_counts
    if (!i_rst_n_axi) begin
      reg_rd_count <= '0;
      reg_wr_count <= '0;
      reg_axi_accept_read <= 1'b1;
    end else begin
      case ({w_ar_hs, w_r_hs})
        2'b10: reg_rd_count <= reg_rd_count + 4'd1;
        2'b01: reg_rd_count <= reg_rd_count - 4'd1;
        default: reg_rd_count <= reg_rd_count;
      endcase
      case ({w_wr_reserve, w_b_hs})
        2'b10: reg_wr_count <= reg_wr_count + 4'd1;
        2'b01: reg_wr_count <= reg_wr_count - 4'd1;
        default: reg_wr_count <= reg_wr_count;
      endcase
      if (PARA_AXI_OUTSTANDING_MODE == LPARA_AXI_OUT_SINGLE) begin
        if (w_ar_hs)
          reg_axi_accept_read <= 1'b0;
        else if (w_wr_reserve)
          reg_axi_accept_read <= 1'b1;
      end
    end
  end

  // Use CDC FIFOs only when the parameter selects asynchronous CSR operation.
  generate
    if (PARA_ASYNCHRONOUS == 32'd1) begin : g_async_axi_fifo
      m_csr_async_fifo #(.PARA_DATA_W(32'd@AW@), .PARA_DEPTH(LPARA_AXI_FIFO_RD_DEPTH)) u_axi_rd_cmd_fifo (
        .i_clk_wr(i_clk_axi), .i_rst_n_wr(i_rst_n_axi), .i_w_valid(w_rd_cmd_w_valid), .o_w_ready(w_rd_cmd_w_ready), .i_w_data(w_rd_cmd_w_data),
        .i_clk_rd(w_clk_reg), .i_rst_n_rd(w_rst_n_reg), .o_r_valid(w_rd_cmd_r_valid), .i_r_ready(w_rd_cmd_r_ready), .o_r_data(w_rd_cmd_r_data));
      m_csr_async_fifo #(.PARA_DATA_W(32'd@WRQ_W@), .PARA_DEPTH(LPARA_AXI_FIFO_WR_DEPTH)) u_axi_wr_cmd_fifo (
        .i_clk_wr(i_clk_axi), .i_rst_n_wr(i_rst_n_axi), .i_w_valid(w_wr_cmd_w_valid), .o_w_ready(w_wr_cmd_w_ready), .i_w_data(w_wr_cmd_w_data),
        .i_clk_rd(w_clk_reg), .i_rst_n_rd(w_rst_n_reg), .o_r_valid(w_wr_cmd_r_valid), .i_r_ready(w_wr_cmd_r_ready), .o_r_data(w_wr_cmd_r_data));
      m_csr_async_fifo #(.PARA_DATA_W(32'd@DW2@), .PARA_DEPTH(LPARA_AXI_FIFO_RD_DEPTH)) u_axi_rd_rsp_fifo (
        .i_clk_wr(w_clk_reg), .i_rst_n_wr(w_rst_n_reg), .i_w_valid(w_rd_rsp_w_valid), .o_w_ready(w_rd_rsp_w_ready), .i_w_data(w_rd_rsp_w_data),
        .i_clk_rd(i_clk_axi), .i_rst_n_rd(i_rst_n_axi), .o_r_valid(w_rd_rsp_r_valid), .i_r_ready(w_rd_rsp_r_ready), .o_r_data(w_rd_rsp_r_data));
      m_csr_async_fifo #(.PARA_DATA_W(32'd2), .PARA_DEPTH(LPARA_AXI_FIFO_WR_DEPTH)) u_axi_wr_rsp_fifo (
        .i_clk_wr(w_clk_reg), .i_rst_n_wr(w_rst_n_reg), .i_w_valid(w_wr_rsp_w_valid), .o_w_ready(w_wr_rsp_w_ready), .i_w_data(w_wr_rsp_w_data),
        .i_clk_rd(i_clk_axi), .i_rst_n_rd(i_rst_n_axi), .o_r_valid(w_wr_rsp_r_valid), .i_r_ready(w_wr_rsp_r_ready), .o_r_data(w_wr_rsp_r_data));
    end else begin : g_sync_axi_fifo
      m_csr_sync_fifo #(.PARA_DATA_W(32'd@AW@), .PARA_DEPTH(LPARA_AXI_FIFO_RD_DEPTH)) u_axi_rd_cmd_fifo (
        .i_clk(i_clk_axi), .i_rst_n(i_rst_n_axi), .i_w_valid(w_rd_cmd_w_valid), .o_w_ready(w_rd_cmd_w_ready), .i_w_data(w_rd_cmd_w_data),
        .o_r_valid(w_rd_cmd_r_valid), .i_r_ready(w_rd_cmd_r_ready), .o_r_data(w_rd_cmd_r_data));
      m_csr_sync_fifo #(.PARA_DATA_W(32'd@WRQ_W@), .PARA_DEPTH(LPARA_AXI_FIFO_WR_DEPTH)) u_axi_wr_cmd_fifo (
        .i_clk(i_clk_axi), .i_rst_n(i_rst_n_axi), .i_w_valid(w_wr_cmd_w_valid), .o_w_ready(w_wr_cmd_w_ready), .i_w_data(w_wr_cmd_w_data),
        .o_r_valid(w_wr_cmd_r_valid), .i_r_ready(w_wr_cmd_r_ready), .o_r_data(w_wr_cmd_r_data));
      m_csr_sync_fifo #(.PARA_DATA_W(32'd@DW2@), .PARA_DEPTH(LPARA_AXI_FIFO_RD_DEPTH)) u_axi_rd_rsp_fifo (
        .i_clk(i_clk_axi), .i_rst_n(i_rst_n_axi), .i_w_valid(w_rd_rsp_w_valid), .o_w_ready(w_rd_rsp_w_ready), .i_w_data(w_rd_rsp_w_data),
        .o_r_valid(w_rd_rsp_r_valid), .i_r_ready(w_rd_rsp_r_ready), .o_r_data(w_rd_rsp_r_data));
      m_csr_sync_fifo #(.PARA_DATA_W(32'd2), .PARA_DEPTH(LPARA_AXI_FIFO_WR_DEPTH)) u_axi_wr_rsp_fifo (
        .i_clk(i_clk_axi), .i_rst_n(i_rst_n_axi), .i_w_valid(w_wr_rsp_w_valid), .o_w_ready(w_wr_rsp_w_ready), .i_w_data(w_wr_rsp_w_data),
        .o_r_valid(w_wr_rsp_r_valid), .i_r_ready(w_wr_rsp_r_ready), .o_r_data(w_wr_rsp_r_data));
    end
  endgenerate
  assign o_axi_rvalid = w_rd_rsp_r_valid;
  assign {o_axi_rresp, o_axi_rdata} = w_rd_rsp_r_data;
  assign w_rd_rsp_r_ready = i_axi_rready;
  assign o_axi_bvalid = w_wr_rsp_r_valid;
  assign o_axi_bresp = w_wr_rsp_r_data;
  assign w_wr_rsp_r_ready = i_axi_bready;

  // Round-robin service resets to read and does not block a direction whose response FIFO is full.
  always_comb begin : p_com_axi_issue
    w_issue_read = 1'b0;
    w_issue_write = 1'b0;
    if (w_rd_cmd_r_valid & w_rd_rsp_w_ready & w_wr_cmd_r_valid & w_wr_rsp_w_ready) begin
      if (reg_axi_rr_read)
        w_issue_read = 1'b1;
      else
        w_issue_write = 1'b1;
    end else if (w_rd_cmd_r_valid & w_rd_rsp_w_ready) begin
      w_issue_read = 1'b1;
    end else if (w_wr_cmd_r_valid & w_wr_rsp_w_ready) begin
      w_issue_write = 1'b1;
    end
  end
  assign w_rd_cmd_r_ready = w_issue_read;
  assign w_wr_cmd_r_ready = w_issue_write;
  assign w_issue_addr = w_issue_read ? w_rd_cmd_r_data : w_wr_cmd_r_data[@WRQ_MSB@:@WRQ_LSB@];
  assign w_issue_wdata = w_wr_cmd_r_data[@WD_MSB@:@WD_LSB@];
  assign w_issue_wstrb = w_wr_cmd_r_data[@STRB_MSB@:0];
  assign reg_addr = w_issue_addr;
  assign reg_wdata = w_issue_wdata;
  assign reg_wstrb = w_issue_wstrb;
  assign w_issue_resp = (w_issue_addr[1:0] != 2'b00) ? LPARA_AXI_RESP_SLVERR
                      : (~w_addr_mapped ? LPARA_AXI_RESP_DECERR
                      : ((w_issue_write & (PARA_WRITE_STROBE_MODE == 32'd1) & ~(&w_issue_wstrb))
                         ? LPARA_AXI_RESP_SLVERR : LPARA_AXI_RESP_OKAY));
  assign w_rd_en = w_issue_read & (w_issue_resp == LPARA_AXI_RESP_OKAY);
  assign w_wr_en = w_issue_write & (w_issue_resp == LPARA_AXI_RESP_OKAY);
  assign w_rd_rsp_w_valid = w_issue_read;
  assign w_rd_rsp_w_data = {w_issue_resp, (w_rd_en ? w_rdata_nxt : '0)};
  assign w_wr_rsp_w_valid = w_issue_write;
  assign w_wr_rsp_w_data = w_issue_resp;
  assign reg_axi_rr_read_nxt = w_issue_read ? 1'b0 : (w_issue_write ? 1'b1 : reg_axi_rr_read);
  always_ff @(posedge w_clk_reg, negedge w_rst_n_reg) begin : p_ff_axi_rr
    if (!w_rst_n_reg)
      reg_axi_rr_read <= 1'b1;
    else
      reg_axi_rr_read <= reg_axi_rr_read_nxt;
  end
  generate
    for (genvar gen_lane = 0; gen_lane < LPARA_STRB_W; gen_lane++) begin : gen_axi_wmask
      assign reg_wmask[(gen_lane * 8) +: 8] = {8{reg_wstrb[gen_lane]}};
    end
  endgenerate
'''
        replacements = {
            "@AW@": str(aw), "@DW2@": str(dw + 2), "@WRQ_W@": str(wrq_w),
            "@WRQ_MSB@": str(aw + dw + sw - 1), "@WRQ_LSB@": str(dw + sw),
            "@WD_MSB@": str(dw + sw - 1), "@WD_LSB@": str(sw), "@STRB_MSB@": str(sw - 1)
        }
        for token, value in replacements.items():
            rtl = rtl.replace(token, value)
        return rtl


class ahblite_protocol:
    """AHB-Lite CSR front end; each accepted beat is translated independently."""

    def __init__(self, data_wd, addr_wd, async_option, strobe_mode, endian_mode, port, port_group):
        self.data_wd = data_wd
        self.addr_wd = addr_wd
        self.async_option = int(async_option)
        self.strobe_mode = str(strobe_mode).upper()
        self.endian_mode = str(endian_mode).upper()
        self.port_groups = [
            port_group("AHB and register clocks", [
                port("i_clk_ahb", "input", 1), port("i_rst_n_ahb", "input", 1),
                port("i_clk_reg", "input", 1), port("i_rst_n_reg", "input", 1)]),
            port_group("AHB-Lite subordinate interface", [
                port("i_ahb_hsel", "input", 1), port("i_ahb_hready", "input", 1),
                port("i_ahb_htrans", "input", 2, "[1:0]"),
                port("i_ahb_haddr", "input", addr_wd, "[LPARA_ADDR_W-1:0]"),
                port("i_ahb_hwrite", "input", 1), port("i_ahb_hsize", "input", 3, "[2:0]"),
                port("i_ahb_hburst", "input", 3, "[2:0]"),
                port("i_ahb_hwdata", "input", data_wd, "[LPARA_DATA_W-1:0]"),
                port("o_ahb_hreadyout", "output", 1), port("o_ahb_hresp", "output", 1),
                port("o_ahb_hrdata", "output", data_wd, "[LPARA_DATA_W-1:0]")])]
        self.logic_list = []
        self.rtl_rw = ""
        self.clock_assign = (
            "  assign w_clk_reg = (PARA_ASYNCHRONOUS == 32'd1) ? i_clk_reg : i_clk_ahb;\n"
            "  assign w_rst_n_reg = (PARA_ASYNCHRONOUS == 32'd1) ? i_rst_n_reg : i_rst_n_ahb;\n")
        mode = {"LITTLE": 0, "BE8": 1, "BE32": 2}[self.endian_mode]
        self.extra_parameters = [
            ("  // AHB endian mapping: 0=LITTLE, 1=BE8, 2=BE32.\n"
             "  // Parameter values: 0, 1, or 2; default follows the workbook.\n"
             "  // Parameter unit: mode encoding\n"
             f"  parameter logic [31:0] PARA_AHB_ENDIAN = 32'd{mode}"),
            ("  // Write strobe policy: 0=HONOR byte/halfword writes; 1=reject partial writes.\n"
             "  // Parameter values: 0 or 1; default follows the workbook.\n"
             "  // Parameter unit: mode encoding\n"
             f"  parameter logic [31:0] PARA_WRITE_STROBE_MODE = 32'd{0 if self.strobe_mode == 'HONOR' else 1}")]
        self.extra_localparams = (
            "  localparam logic [31:0] LPARA_AHB_ENDIAN_LITTLE = 32'd0,\n"
            "  localparam logic [31:0] LPARA_AHB_ENDIAN_BE8 = 32'd1,\n"
            "  localparam logic [31:0] LPARA_AHB_ENDIAN_BE32 = 32'd2,\n"
            "  localparam logic [1:0] LPARA_AHB_RESP_OKAY = 2'd0,\n"
            "  localparam logic [1:0] LPARA_AHB_RESP_ERROR = 2'd1")
        self.gen_logic(port)

    def gen_logic(self, port):
        def add(name, width=1, type_name="logic"):
            suffix = f"[{width-1}:0]" if width > 1 else ""
            self.logic_list.append(port(name, type_name, width, suffix))

        for name, width in (
            ("w_clk_reg", 1), ("w_rst_n_reg", 1), ("reg_addr", self.addr_wd),
            ("reg_wdata", self.data_wd), ("reg_wstrb", self.data_wd // 8),
            ("reg_wmask", self.data_wd), ("w_rd_en", 1), ("w_wr_en", 1),
            ("w_rdata_nxt", self.data_wd), ("w_addr_mapped", 1),
            ("reg_ahb_haddr", self.addr_wd), ("reg_ahb_hwrite", 1),
            ("reg_ahb_hsize", 3), ("reg_ahb_state", 3),
            ("w_ahb_size_ok", 1), ("w_ahb_bad_access", 1),
            ("w_ahb_burst_valid", 1),
            ("w_ahb_wdata", self.data_wd), ("w_ahb_wstrb", self.data_wd // 8),
            ("w_ahb_cmd_w_valid", 1), ("w_ahb_cmd_w_ready", 1),
            ("w_ahb_cmd_r_valid", 1), ("w_ahb_cmd_r_ready", 1),
            ("w_ahb_rsp_w_valid", 1), ("w_ahb_rsp_w_ready", 1),
            ("w_ahb_rsp_r_valid", 1), ("w_ahb_rsp_r_ready", 1),
            ("w_ahb_cmd_w_data", self.addr_wd + self.data_wd + self.data_wd // 8 + 1),
            ("w_ahb_cmd_r_data", self.addr_wd + self.data_wd + self.data_wd // 8 + 1),
            ("w_ahb_rsp_w_data", self.data_wd + 2), ("w_ahb_rsp_r_data", self.data_wd + 2),
            ("w_ahb_issue", 1), ("w_ahb_issue_write", 1),
            ("w_ahb_issue_resp", 2)):
            add(name, width)
        self.access = self._rtl()

    def prdata_rtl(self, reg_list):
        cases = []
        for r in reg_list:
            if hasattr(r, "base_offset"):
                for index in range(r.max_count):
                    address = f"({r.base_parameter} + (32'd{index} * {r.stride_parameter}))"
                    body = f"if ({r.count_parameter} > 32'd{index}) begin w_rdata_nxt = w_{r.name}_value[{index}]; w_addr_mapped = 1'b1; end"
                    cases.append((address, body))
            else:
                cases.append((f"LPARA_{r.name.upper()}_OFFSET",
                              f"begin w_rdata_nxt = w_{r.name}_value; w_addr_mapped = 1'b1; end"))
        cases_rtl = "\n".join(f"      {address}: {body}" for address, body in cases)
        self.rtl_prdata = (
            "\n  // Unmapped CSR addresses return zero and produce an AHB ERROR response.\n"
            "  always_comb begin : p_com_ahb_reg_read_decode\n"
            "    w_rdata_nxt = '0;\n    w_addr_mapped = 1'b0;\n"
            "    case (32'(reg_addr))\n" + cases_rtl +
            "\n      default: begin w_rdata_nxt = '0; w_addr_mapped = 1'b0; end\n"
            "    endcase\n  end\n")

    def _rtl(self):
        aw = self.addr_wd
        dw = self.data_wd
        sw = self.data_wd // 8
        cmd_w = aw + dw + sw + 1
        rtl = r'''
  // AHB-Lite state and response encodings.
  localparam logic [2:0] LPARA_AHB_IDLE = 3'b000;
  localparam logic [2:0] LPARA_AHB_DATA = 3'b001;
  localparam logic [2:0] LPARA_AHB_WAIT = 3'b010;
  localparam logic [2:0] LPARA_AHB_ERROR_1 = 3'b011;
  localparam logic [2:0] LPARA_AHB_ERROR_2 = 3'b100;

  // HSIZE and HADDR select legal byte lanes; invalid size/alignment is rejected before CSR access.
  assign w_ahb_size_ok = (reg_ahb_hsize == 3'd0)
                      | ((reg_ahb_hsize == 3'd1) & ~reg_ahb_haddr[0])
                      | ((reg_ahb_hsize == 3'd2) & (reg_ahb_haddr[1:0] == 2'b00));
  // All defined HBURST encodings are accepted; this CSR front end handles each beat independently.
  always_comb begin : p_com_ahb_burst
    w_ahb_burst_valid = 1'b0;
    case (i_ahb_hburst)
      3'b000, 3'b001, 3'b010, 3'b011, 3'b100, 3'b101, 3'b110, 3'b111: w_ahb_burst_valid = 1'b1;
      default: w_ahb_burst_valid = 1'b0;
    endcase
  end
  always_comb begin : p_com_ahb_wstrb
    w_ahb_wstrb = 4'b0000;
    case (reg_ahb_hsize)
      3'd0: begin
        if ((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32) | (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8))
          w_ahb_wstrb = 4'b1000 >> reg_ahb_haddr[1:0];
        else
          w_ahb_wstrb = 4'b0001 << reg_ahb_haddr[1:0];
      end
      3'd1: begin
        if (reg_ahb_haddr[1] == 1'b0)
          w_ahb_wstrb = ((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32) | (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)) ? 4'b1100 : 4'b0011;
        else
          w_ahb_wstrb = ((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32) | (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)) ? 4'b0011 : 4'b1100;
      end
      3'd2: w_ahb_wstrb = 4'b1111;
      default: w_ahb_wstrb = 4'b0000;
    endcase
  end
  always_comb begin : p_com_ahb_wdata
    case (PARA_AHB_ENDIAN)
      LPARA_AHB_ENDIAN_BE8: w_ahb_wdata = {i_ahb_hwdata[7:0], i_ahb_hwdata[15:8], i_ahb_hwdata[23:16], i_ahb_hwdata[31:24]};
      LPARA_AHB_ENDIAN_LITTLE: w_ahb_wdata = i_ahb_hwdata;
      default: w_ahb_wdata = i_ahb_hwdata;
    endcase
  end
  assign w_ahb_bad_access = ~w_ahb_size_ok
                          | ((reg_ahb_hwrite) & (PARA_WRITE_STROBE_MODE == 32'd1) & ~(&w_ahb_wstrb));
  assign w_ahb_cmd_w_valid = (reg_ahb_state == LPARA_AHB_DATA) & ~w_ahb_bad_access;
  assign w_ahb_cmd_w_data = {reg_ahb_hwrite, w_ahb_wstrb, w_ahb_wdata, reg_ahb_haddr};

  // AHB-Lite uses one in-flight transfer. The selected branch matches the clock parameter.
  generate
    if (PARA_ASYNCHRONOUS == 32'd1) begin : g_async_ahb_fifo
      m_csr_async_fifo #(.PARA_DATA_W(32'd@CMD_W@), .PARA_DEPTH(32'd2)) u_ahb_cmd_fifo (
        .i_clk_wr(i_clk_ahb), .i_rst_n_wr(i_rst_n_ahb), .i_w_valid(w_ahb_cmd_w_valid), .o_w_ready(w_ahb_cmd_w_ready), .i_w_data(w_ahb_cmd_w_data),
        .i_clk_rd(w_clk_reg), .i_rst_n_rd(w_rst_n_reg), .o_r_valid(w_ahb_cmd_r_valid), .i_r_ready(w_ahb_cmd_r_ready), .o_r_data(w_ahb_cmd_r_data));
      m_csr_async_fifo #(.PARA_DATA_W(32'd@DW2@), .PARA_DEPTH(32'd2)) u_ahb_rsp_fifo (
        .i_clk_wr(w_clk_reg), .i_rst_n_wr(w_rst_n_reg), .i_w_valid(w_ahb_rsp_w_valid), .o_w_ready(w_ahb_rsp_w_ready), .i_w_data(w_ahb_rsp_w_data),
        .i_clk_rd(i_clk_ahb), .i_rst_n_rd(i_rst_n_ahb), .o_r_valid(w_ahb_rsp_r_valid), .i_r_ready(w_ahb_rsp_r_ready), .o_r_data(w_ahb_rsp_r_data));
    end else begin : g_sync_ahb_fifo
      m_csr_sync_fifo #(.PARA_DATA_W(32'd@CMD_W@), .PARA_DEPTH(32'd2)) u_ahb_cmd_fifo (
        .i_clk(i_clk_ahb), .i_rst_n(i_rst_n_ahb), .i_w_valid(w_ahb_cmd_w_valid), .o_w_ready(w_ahb_cmd_w_ready), .i_w_data(w_ahb_cmd_w_data),
        .o_r_valid(w_ahb_cmd_r_valid), .i_r_ready(w_ahb_cmd_r_ready), .o_r_data(w_ahb_cmd_r_data));
      m_csr_sync_fifo #(.PARA_DATA_W(32'd@DW2@), .PARA_DEPTH(32'd2)) u_ahb_rsp_fifo (
        .i_clk(i_clk_ahb), .i_rst_n(i_rst_n_ahb), .i_w_valid(w_ahb_rsp_w_valid), .o_w_ready(w_ahb_rsp_w_ready), .i_w_data(w_ahb_rsp_w_data),
        .o_r_valid(w_ahb_rsp_r_valid), .i_r_ready(w_ahb_rsp_r_ready), .o_r_data(w_ahb_rsp_r_data));
    end
  endgenerate

  // The bus state machine captures address/control, accepts write data in its data phase,
  // waits for the register response, and emits the required two-cycle AHB ERROR response.
  always_ff @(posedge i_clk_ahb, negedge i_rst_n_ahb) begin : p_ff_ahb_state
    if (!i_rst_n_ahb) begin
      reg_ahb_state <= LPARA_AHB_IDLE;
      reg_ahb_haddr <= '0;
      reg_ahb_hwrite <= 1'b0;
      reg_ahb_hsize <= '0;
    end else begin
      case (reg_ahb_state)
        LPARA_AHB_IDLE: begin
          if (i_ahb_hready & i_ahb_hsel & w_ahb_burst_valid & ((i_ahb_htrans == 2'b10) | (i_ahb_htrans == 2'b11))) begin
            reg_ahb_haddr <= i_ahb_haddr;
            reg_ahb_hwrite <= i_ahb_hwrite;
            reg_ahb_hsize <= i_ahb_hsize;
            reg_ahb_state <= LPARA_AHB_DATA;
          end
        end
        LPARA_AHB_DATA: begin
          if (w_ahb_bad_access)
            reg_ahb_state <= LPARA_AHB_ERROR_1;
          else if (w_ahb_cmd_w_ready)
            reg_ahb_state <= LPARA_AHB_WAIT;
        end
        LPARA_AHB_WAIT: begin
          if (w_ahb_rsp_r_valid) begin
            if (w_ahb_rsp_r_data[@RESP_MSB@:@RESP_LSB@] != 2'b00)
              reg_ahb_state <= LPARA_AHB_ERROR_2;
            else if (i_ahb_hready & i_ahb_hsel & w_ahb_burst_valid & ((i_ahb_htrans == 2'b10) | (i_ahb_htrans == 2'b11))) begin
              reg_ahb_haddr <= i_ahb_haddr;
              reg_ahb_hwrite <= i_ahb_hwrite;
              reg_ahb_hsize <= i_ahb_hsize;
              reg_ahb_state <= LPARA_AHB_DATA;
            end else begin
              reg_ahb_state <= LPARA_AHB_IDLE;
            end
          end
        end
        LPARA_AHB_ERROR_1: reg_ahb_state <= LPARA_AHB_ERROR_2;
        LPARA_AHB_ERROR_2: begin
          if (i_ahb_hready & i_ahb_hsel & w_ahb_burst_valid & ((i_ahb_htrans == 2'b10) | (i_ahb_htrans == 2'b11))) begin
            reg_ahb_haddr <= i_ahb_haddr;
            reg_ahb_hwrite <= i_ahb_hwrite;
            reg_ahb_hsize <= i_ahb_hsize;
            reg_ahb_state <= LPARA_AHB_DATA;
          end else begin
            reg_ahb_state <= LPARA_AHB_IDLE;
          end
        end
        default: reg_ahb_state <= LPARA_AHB_IDLE;
      endcase
    end
  end

  // AHB response outputs are held through wait states and both cycles of an error response.
  always_comb begin : p_com_ahb_response
    o_ahb_hreadyout = 1'b0;
    o_ahb_hresp = 1'b0;
    case (reg_ahb_state)
      LPARA_AHB_IDLE: o_ahb_hreadyout = 1'b1;
      LPARA_AHB_DATA: o_ahb_hreadyout = 1'b0;
      LPARA_AHB_WAIT: begin
        if (w_ahb_rsp_r_valid) begin
          if (w_ahb_rsp_r_data[@RESP_MSB@:@RESP_LSB@] == 2'b00)
            o_ahb_hreadyout = 1'b1;
          else
            o_ahb_hresp = 1'b1;
        end
      end
      LPARA_AHB_ERROR_1: o_ahb_hresp = 1'b1;
      LPARA_AHB_ERROR_2: begin
        o_ahb_hreadyout = 1'b1;
        o_ahb_hresp = 1'b1;
      end
      default: begin
        o_ahb_hreadyout = 1'b1;
        o_ahb_hresp = 1'b0;
      end
    endcase
  end
  assign w_ahb_rsp_r_ready = (reg_ahb_state == LPARA_AHB_WAIT) & w_ahb_rsp_r_valid;
  assign o_ahb_hrdata = (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)
                      ? {w_ahb_rsp_r_data[7:0], w_ahb_rsp_r_data[15:8], w_ahb_rsp_r_data[23:16], w_ahb_rsp_r_data[31:24]}
                      : w_ahb_rsp_r_data[31:0];

  // Register-clock execution performs one command and returns read data or an error status.
  assign w_ahb_issue = w_ahb_cmd_r_valid & w_ahb_rsp_w_ready;
  assign w_ahb_cmd_r_ready = w_ahb_issue;
  // Decode the containing 32-bit CSR word; the original byte address still selects lanes above.
  assign reg_addr = LPARA_ADDR_W'(w_ahb_cmd_r_data[@ADDR_MSB@:0] & 32'hffff_fffc);
  assign reg_wdata = w_ahb_cmd_r_data[@WD_MSB@:@WD_LSB@];
  assign reg_wstrb = w_ahb_cmd_r_data[@STRB_MSB@:@STRB_LSB@];
  assign w_ahb_issue_write = w_ahb_cmd_r_data[@WRITE_BIT@];
  assign w_rd_en = w_ahb_issue & ~w_ahb_issue_write & w_addr_mapped;
  assign w_wr_en = w_ahb_issue & w_ahb_issue_write & w_addr_mapped;
  assign w_ahb_issue_resp = w_addr_mapped ? LPARA_AHB_RESP_OKAY : LPARA_AHB_RESP_ERROR;
  assign w_ahb_rsp_w_valid = w_ahb_issue;
  assign w_ahb_rsp_w_data = {w_ahb_issue_resp, (w_rd_en ? w_rdata_nxt : '0)};
  generate
    for (genvar gen_lane = 0; gen_lane < LPARA_STRB_W; gen_lane++) begin : gen_ahb_wmask
      assign reg_wmask[(gen_lane * 8) +: 8] = {8{reg_wstrb[gen_lane]}};
    end
  endgenerate
'''
        replacements = {
            "@CMD_W@": str(cmd_w), "@DW2@": str(dw + 2),
            "@RESP_MSB@": str(dw + 1), "@RESP_LSB@": str(dw),
            "@ADDR_MSB@": str(aw - 1), "@WD_MSB@": str(aw + dw - 1),
            "@WD_LSB@": str(aw), "@STRB_MSB@": str(aw + dw + sw - 1),
            "@STRB_LSB@": str(aw + dw), "@WRITE_BIT@": str(cmd_w - 1)
        }
        for token, value in replacements.items():
            rtl = rtl.replace(token, value)
        return rtl
