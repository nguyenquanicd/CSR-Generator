/*
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
