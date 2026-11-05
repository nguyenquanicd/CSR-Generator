`timescale 1ns/1ps

module tb_axil #(
  parameter logic [31:0] TEST_MODE = 32'd2,
  parameter logic [31:0] TEST_ASYNC = 32'd0,
  parameter logic [31:0] TEST_EXAMPLE = 32'd0
);
  logic i_clk_axi;
  logic i_clk_reg;
  logic i_rst_n_axi;
  logic i_rst_n_reg;
  logic i_axi_awvalid;
  logic [15:0] i_axi_awaddr;
  logic [2:0] i_axi_awprot;
  logic i_axi_wvalid;
  logic [31:0] i_axi_wdata;
  logic [3:0] i_axi_wstrb;
  logic i_axi_bready;
  logic i_axi_arvalid;
  logic [15:0] i_axi_araddr;
  logic [2:0] i_axi_arprot;
  logic i_axi_rready;
  wire o_axi_awready;
  wire o_axi_wready;
  wire o_axi_bvalid;
  wire [1:0] o_axi_bresp;
  wire o_axi_arready;
  wire o_axi_rvalid;
  wire [31:0] o_axi_rdata;
  wire [1:0] o_axi_rresp;
  wire [31:0] o_data_value;
  wire [31:0] o_key_data;
  logic i_hw_clr_key_data;
  logic i_hw_wdata_engine_start;
  logic i_hw_we_engine_start;
  logic i_hw_wdata_engine_fault;
  logic i_hw_we_engine_fault;
  logic i_hw_wdata_engine_pending;
  logic i_hw_we_engine_pending;
  logic i_hw_wdata_engine_overflow;
  logic i_hw_we_engine_overflow;
  logic i_hw_wdata_engine_done;
  logic i_hw_we_engine_done;
  integer test_count;

  initial begin
    i_clk_axi = 1'b0;
    forever #5 i_clk_axi = ~i_clk_axi;
  end
  initial begin
    i_clk_reg = 1'b0;
    forever #7 i_clk_reg = ~i_clk_reg;
  end

  m_vlsi_axil_sim_csr #(
    .PARA_ASYNCHRONOUS(TEST_ASYNC),
    .PARA_AXI_OUTSTANDING_MODE(TEST_MODE),
    .PARA_AXI_RD_DEPTH(32'd2),
    .PARA_AXI_WR_DEPTH(32'd3)
  ) u_dut (
    .i_clk_axi(i_clk_axi), .i_rst_n_axi(i_rst_n_axi),
    .i_clk_reg(i_clk_reg), .i_rst_n_reg(i_rst_n_reg),
    .i_axi_awvalid(i_axi_awvalid), .o_axi_awready(o_axi_awready),
    .i_axi_awaddr(i_axi_awaddr), .i_axi_awprot(i_axi_awprot),
    .i_axi_wvalid(i_axi_wvalid), .o_axi_wready(o_axi_wready),
    .i_axi_wdata(i_axi_wdata), .i_axi_wstrb(i_axi_wstrb),
    .o_axi_bvalid(o_axi_bvalid), .i_axi_bready(i_axi_bready), .o_axi_bresp(o_axi_bresp),
    .i_axi_arvalid(i_axi_arvalid), .o_axi_arready(o_axi_arready),
    .i_axi_araddr(i_axi_araddr), .i_axi_arprot(i_axi_arprot),
    .o_axi_rvalid(o_axi_rvalid), .i_axi_rready(i_axi_rready),
    .o_axi_rdata(o_axi_rdata), .o_axi_rresp(o_axi_rresp), .o_data_value(o_data_value),
    .o_key_data(o_key_data), .i_hw_clr_key_data(i_hw_clr_key_data)
  );

  task automatic send_ar(input logic [15:0] address);
    integer cycles;
    begin
      @(negedge i_clk_axi);
      i_axi_araddr = address;
      i_axi_arvalid = 1'b1;
      cycles = 0;
      while (!o_axi_arready && cycles < 80) begin
        @(negedge i_clk_axi);
        cycles = cycles + 1;
      end
      if (!o_axi_arready) $fatal(1, "AXI ARREADY timeout at %04x", address);
      @(posedge i_clk_axi);
      @(negedge i_clk_axi);
      i_axi_arvalid = 1'b0;
    end
  endtask

  task automatic write_request(input logic [15:0] address,
                              input logic [31:0] data,
                              input logic [3:0] strobe);
    integer aw_cycles;
    integer w_cycles;
    begin
      fork
        begin
          @(negedge i_clk_axi);
          i_axi_awaddr = address;
          i_axi_awvalid = 1'b1;
          aw_cycles = 0;
          while (!o_axi_awready && aw_cycles < 80) begin
            @(negedge i_clk_axi);
            aw_cycles = aw_cycles + 1;
          end
          if (!o_axi_awready) $fatal(1, "AXI AWREADY timeout at %04x", address);
          @(posedge i_clk_axi);
          @(negedge i_clk_axi);
          i_axi_awvalid = 1'b0;
        end
        begin
          repeat (2) @(negedge i_clk_axi);
          i_axi_wdata = data;
          i_axi_wstrb = strobe;
          i_axi_wvalid = 1'b1;
          w_cycles = 0;
          while (!o_axi_wready && w_cycles < 80) begin
            @(negedge i_clk_axi);
            w_cycles = w_cycles + 1;
          end
          if (!o_axi_wready) $fatal(1, "AXI WREADY timeout");
          @(posedge i_clk_axi);
          @(negedge i_clk_axi);
          i_axi_wvalid = 1'b0;
        end
      join
    end
  endtask

  task automatic wait_b(input logic [1:0] expected);
    integer cycles;
    begin
      cycles = 0;
      while (!o_axi_bvalid && cycles < 100) begin
        @(posedge i_clk_axi);
        cycles = cycles + 1;
      end
      if (!o_axi_bvalid) $fatal(1, "AXI BVALID timeout");
      if (o_axi_bresp !== expected) $fatal(1, "BRESP got %0d expected %0d", o_axi_bresp, expected);
      @(negedge i_clk_axi);
      i_axi_bready = 1'b1;
      @(posedge i_clk_axi);
      @(negedge i_clk_axi);
      i_axi_bready = 1'b0;
    end
  endtask

  task automatic axi_write(input logic [15:0] address,
                           input logic [31:0] data,
                           input logic [3:0] strobe,
                           input logic [1:0] expected);
    begin
      write_request(address, data, strobe);
      wait_b(expected);
    end
  endtask

  task automatic axi_read(input logic [15:0] address,
                          input logic [1:0] expected_resp,
                          input logic [31:0] expected_data);
    integer cycles;
    begin
      send_ar(address);
      cycles = 0;
      while (!o_axi_rvalid && cycles < 100) begin
        @(posedge i_clk_axi);
        cycles = cycles + 1;
      end
      if (!o_axi_rvalid) $fatal(1, "AXI RVALID timeout at %04x", address);
      if (o_axi_rresp !== expected_resp) $fatal(1, "RRESP got %0d expected %0d", o_axi_rresp, expected_resp);
      if ((expected_resp == 2'b00) && (o_axi_rdata !== expected_data))
        $fatal(1, "RDATA got %08x expected %08x", o_axi_rdata, expected_data);
      @(negedge i_clk_axi);
      i_axi_rready = 1'b1;
      @(posedge i_clk_axi);
      @(negedge i_clk_axi);
      i_axi_rready = 1'b0;
    end
  endtask

  task automatic check_full_queued_limit;
    integer cycles;
    integer index;
    begin
      if (TEST_MODE == 32'd2) begin
        i_axi_rready = 1'b0;
        send_ar(16'h0000);
        send_ar(16'h0000);
        @(negedge i_clk_axi);
        i_axi_araddr = 16'h0000;
        i_axi_arvalid = 1'b1;
        cycles = 0;
        while (cycles < 3) begin
          @(posedge i_clk_axi);
          if (o_axi_arready) $fatal(1, "QUEUED mode exceeded configured read depth");
          cycles = cycles + 1;
        end
        @(negedge i_clk_axi);
        i_axi_arvalid = 1'b0;
        i_axi_rready = 1'b1;
        for (index = 0; index < 2; index = index + 1) begin
          cycles = 0;
          while (!o_axi_rvalid && cycles < 100) begin
            @(posedge i_clk_axi);
            cycles = cycles + 1;
          end
          if (!o_axi_rvalid) $fatal(1, "queued response timeout");
          @(posedge i_clk_axi);
        end
        @(negedge i_clk_axi);
        i_axi_rready = 1'b0;
        test_count = test_count + 1;
        $display("PASS AXIL case: independent read depth limit");
      end
    end
  endtask

  task automatic run_example_map;
    begin
      axi_read(16'h0000, 2'b00, 32'h12000000);
      axi_write(16'h0000, 32'h00B80000, 4'b1111, 2'b00);
      axi_read(16'h0000, 2'b00, 32'h12B80000);

      @(negedge i_clk_axi);
      i_hw_wdata_engine_start = 1'b1;
      i_hw_we_engine_start = 1'b1;
      i_hw_wdata_engine_fault = 1'b1;
      i_hw_we_engine_fault = 1'b1;
      i_hw_wdata_engine_pending = 1'b1;
      i_hw_we_engine_pending = 1'b1;
      i_hw_wdata_engine_overflow = 1'b1;
      i_hw_we_engine_overflow = 1'b1;
      i_hw_wdata_engine_done = 1'b1;
      i_hw_we_engine_done = 1'b1;
      @(posedge i_clk_axi);
      @(negedge i_clk_axi);
      i_hw_we_engine_start = 1'b0;
      i_hw_we_engine_fault = 1'b0;
      i_hw_we_engine_pending = 1'b0;
      i_hw_we_engine_overflow = 1'b0;
      i_hw_we_engine_done = 1'b0;
      axi_read(16'h0000, 2'b00, 32'h12BF8000);
      axi_read(16'h0000, 2'b00, 32'h12BF0000);
      axi_write(16'h0000, 32'h00000000, 4'b1111, 2'b00);
      axi_read(16'h0000, 2'b00, 32'h12040000);
      axi_write(16'h0000, 32'h00040000, 4'b1111, 2'b00);
      axi_read(16'h0000, 2'b00, 32'h12000000);

      @(negedge i_clk_axi);
      i_hw_wdata_engine_pending = 1'b1;
      i_hw_we_engine_pending = 1'b1;
      @(posedge i_clk_axi);
      @(negedge i_clk_axi);
      i_hw_we_engine_pending = 1'b0;
      axi_write(16'h0000, 32'h00020000, 4'b1111, 2'b00);
      axi_read(16'h0000, 2'b00, 32'h12020000);

      axi_read(16'h0100, 2'b00, 32'h34000000);
      axi_write(16'h0100, 32'h00A80000, 4'b1111, 2'b00);
      axi_read(16'h0100, 2'b00, 32'h34A80000);
      axi_read(16'h0200, 2'b00, 32'h56000000);
      axi_write(16'h0200, 32'h00580000, 4'b1111, 2'b00);
      axi_read(16'h0200, 2'b00, 32'h56580000);

      axi_read(16'h0400, 2'b00, 32'h00000000);
      axi_write(16'h0400, 32'hA1B2C3D4, 4'b1111, 2'b00);
      if (o_key_data !== 32'hA1B2C3D4) $fatal(1, "example WO field did not store the key");
      axi_read(16'h0400, 2'b00, 32'h00000000);
      i_hw_clr_key_data = 1'b1;
      axi_write(16'h0400, 32'hFFFFFFFF, 4'b0001, 2'b00);
      i_hw_clr_key_data = 1'b0;
      if (o_key_data !== 32'h00000000) $fatal(1, "example WO clear did not override write");
      axi_write(16'h0400, 32'h55667788, 4'b1111, 2'b00);
      if (o_key_data !== 32'h55667788) $fatal(1, "example WO write after clear failed");
      axi_read(16'h0400, 2'b00, 32'h00000000);

      axi_write(16'h0002, 32'h11111111, 4'b1111, 2'b10);
      axi_read(16'h0300, 2'b11, 32'h00000000);
      check_full_queued_limit();
    end
  endtask

  integer cycles;
  logic [31:0] old_value;
  initial begin
    i_rst_n_axi = 1'b0;
    i_rst_n_reg = 1'b0;
    i_axi_awvalid = 1'b0;
    i_axi_awaddr = '0;
    i_axi_awprot = '0;
    i_axi_wvalid = 1'b0;
    i_axi_wdata = '0;
    i_axi_wstrb = '0;
    i_axi_bready = 1'b0;
    i_axi_arvalid = 1'b0;
    i_axi_araddr = '0;
    i_axi_arprot = '0;
    i_axi_rready = 1'b0;
    i_hw_clr_key_data = 1'b0;
    i_hw_wdata_engine_start = 1'b0;
    i_hw_we_engine_start = 1'b0;
    i_hw_wdata_engine_fault = 1'b0;
    i_hw_we_engine_fault = 1'b0;
    i_hw_wdata_engine_pending = 1'b0;
    i_hw_we_engine_pending = 1'b0;
    i_hw_wdata_engine_overflow = 1'b0;
    i_hw_we_engine_overflow = 1'b0;
    i_hw_wdata_engine_done = 1'b0;
    i_hw_we_engine_done = 1'b0;
    test_count = 0;
    repeat (5) @(negedge i_clk_axi);
    i_rst_n_axi = 1'b1;
    repeat (2) @(negedge i_clk_reg);
    i_rst_n_reg = 1'b1;
    repeat (10) @(posedge i_clk_axi);

    if (TEST_EXAMPLE != 32'd0) begin
      run_example_map();
      $display("PASS AXIL example map: full field access, mapped/unmapped, and WO hardware clear");
      $finish;
    end

    axi_read(16'h0000, 2'b00, 32'h12345678);
    test_count = test_count + 1;
    $display("PASS AXIL case: reset value and selected clock-mode read path");

    axi_write(16'h0000, 32'hAABBCCDD, 4'b1111, 2'b00);
    axi_read(16'h0000, 2'b00, 32'hAABBCCDD);
    test_count = test_count + 1;
    $display("PASS AXIL case: full-word write/read and independent AW/W handshakes");

    axi_write(16'h0000, 32'h0000EE00, 4'b0010, 2'b00);
    axi_read(16'h0000, 2'b00, 32'hAABBEEDD);
    test_count = test_count + 1;
    $display("PASS AXIL case: WSTRB updates only the selected byte lane");

    axi_read(16'h0010, 2'b00, 32'h00000000);
    axi_write(16'h0010, 32'hA1B2C3D4, 4'b1111, 2'b00);
    if (o_key_data !== 32'hA1B2C3D4) $fatal(1, "WO storage did not capture software write");
    axi_read(16'h0010, 2'b00, 32'h00000000);
    axi_write(16'h0010, 32'h0000EE00, 4'b0010, 2'b00);
    if (o_key_data !== 32'hA1B2EED4) $fatal(1, "WO WSTRB did not update selected byte lane");
    i_hw_clr_key_data = 1'b1;
    axi_write(16'h0010, 32'hFFFFFFFF, 4'b0001, 2'b00);
    i_hw_clr_key_data = 1'b0;
    if (o_key_data !== 32'h00000000) $fatal(1, "WO hardware clear did not override concurrent software write");
    repeat (2) @(posedge i_clk_axi);
    if (o_key_data !== 32'h00000000) $fatal(1, "WO field changed after clear was released");
    axi_write(16'h0010, 32'h55667788, 4'b1111, 2'b00);
    if (o_key_data !== 32'h55667788) $fatal(1, "WO field did not accept a write after clear release");
    axi_read(16'h0010, 2'b00, 32'h00000000);
    test_count = test_count + 1;
    $display("PASS AXIL case: WO read-zero, WSTRB, storage, clear priority, and post-clear write");

    axi_write(16'h0002, 32'h11111111, 4'b1111, 2'b10);
    axi_read(16'h0004, 2'b11, 32'h00000000);
    test_count = test_count + 1;
    $display("PASS AXIL case: misaligned SLVERR and unmapped DECERR");

    i_axi_rready = 1'b0;
    send_ar(16'h0000);
    cycles = 0;
    while (!o_axi_rvalid && cycles < 100) begin
      @(posedge i_clk_axi);
      cycles = cycles + 1;
    end
    if (!o_axi_rvalid || o_axi_rdata !== 32'hAABBEEDD) $fatal(1, "R response was not valid/stable");
    repeat (3) begin
      @(posedge i_clk_axi);
      if (!o_axi_rvalid || o_axi_rdata !== 32'hAABBEEDD) $fatal(1, "R response changed under backpressure");
    end
    @(negedge i_clk_axi);
    i_axi_rready = 1'b1;
    @(posedge i_clk_axi);
    @(negedge i_clk_axi);
    i_axi_rready = 1'b0;
    test_count = test_count + 1;
    $display("PASS AXIL case: RVALID and RDATA remain stable under backpressure");

    // Reset the arbiter immediately before checking its reset-read preference.
    i_rst_n_axi = 1'b0;
    i_rst_n_reg = 1'b0;
    repeat (5) @(negedge i_clk_axi);
    i_rst_n_axi = 1'b1;
    repeat (2) @(negedge i_clk_reg);
    i_rst_n_reg = 1'b1;
    repeat (10) @(posedge i_clk_axi);

    // A simultaneous read/write returns the reset value because reset prefers read.
    i_axi_rready = 1'b0;
    i_axi_bready = 1'b0;
    @(negedge i_clk_axi);
    i_axi_araddr = 16'h0000;
    i_axi_arvalid = 1'b1;
    i_axi_awaddr = 16'h0000;
    i_axi_awvalid = 1'b1;
    i_axi_wdata = 32'hCAFEBABE;
    i_axi_wstrb = 4'b1111;
    i_axi_wvalid = 1'b1;
    #1;
    if (!o_axi_arready) $fatal(1, "read was not accepted in concurrent arbitration test");
    if (TEST_MODE != 32'd0 && (!o_axi_awready || !o_axi_wready))
      $fatal(1, "READ_WRITE/QUEUED mode did not accept one read and one write concurrently");
    if (TEST_MODE == 32'd0 && (o_axi_awready || o_axi_wready))
      $fatal(1, "SINGLE mode accepted a read and write concurrently");
    @(posedge i_clk_axi);
    old_value = 32'h12345678;
    @(negedge i_clk_axi);
    i_axi_arvalid = 1'b0;
    if (TEST_MODE == 32'd0) begin
      i_axi_awvalid = 1'b0;
      i_axi_wvalid = 1'b0;
    end else begin
      i_axi_awvalid = 1'b0;
      i_axi_wvalid = 1'b0;
    end
    cycles = 0;
    while (!o_axi_rvalid && cycles < 100) begin
      @(posedge i_clk_axi);
      cycles = cycles + 1;
    end
    if (!o_axi_rvalid || o_axi_rdata !== old_value) $fatal(1, "round-robin read did not observe pre-write value");
    @(negedge i_clk_axi);
    i_axi_rready = 1'b1;
    @(posedge i_clk_axi);
    @(negedge i_clk_axi);
    i_axi_rready = 1'b0;
    if (TEST_MODE == 32'd0)
      write_request(16'h0000, 32'hCAFEBABE, 4'b1111);
    wait_b(2'b00);
    axi_read(16'h0000, 2'b00, 32'hCAFEBABE);
    test_count = test_count + 1;
    $display("PASS AXIL case: reset-read round-robin arbitration and response ordering");

    check_full_queued_limit();
    $display("PASS AXIL: mode=%0d asynchronous=%0d, cases=%0d", TEST_MODE, TEST_ASYNC, test_count);
    $finish;
  end

  initial begin
    #100000;
    $fatal(1, "AXIL testbench timeout");
  end
endmodule
