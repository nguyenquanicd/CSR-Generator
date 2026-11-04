/*
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
