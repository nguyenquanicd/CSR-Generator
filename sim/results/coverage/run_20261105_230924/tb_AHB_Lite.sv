`timescale 1ns/1ps

module tb_ahblite #(
  parameter logic [31:0] TEST_ENDIAN = 32'd0,
  parameter logic [31:0] TEST_ASYNC = 32'd0,
  parameter logic [31:0] TEST_EXAMPLE = 32'd0
);
  logic i_clk_ahb;
  logic i_clk_reg;
  logic i_rst_n_ahb;
  logic i_rst_n_reg;
  logic i_ahb_hsel;
  logic i_ahb_hready;
  logic [1:0] i_ahb_htrans;
  logic [15:0] i_ahb_haddr;
  logic i_ahb_hwrite;
  logic [2:0] i_ahb_hsize;
  logic [2:0] i_ahb_hburst;
  logic [31:0] i_ahb_hwdata;
  wire o_ahb_hreadyout;
  wire o_ahb_hresp;
  wire [31:0] o_ahb_hrdata;
  wire [31:0] o_data_value;
  wire [31:0] o_key_data;
  logic i_hw_clr_key_data;
  logic [7:0] cov_i_engine_events;
  logic [7:0] cov_i_port_0_event_count;
  logic cov_i_hw_wdata_port_0_start;
  logic cov_i_hw_we_port_0_start;
  logic cov_i_hw_wdata_port_0_fault;
  logic cov_i_hw_we_port_0_fault;
  logic cov_i_hw_wdata_port_0_pending;
  logic cov_i_hw_we_port_0_pending;
  logic cov_i_hw_wdata_port_0_overflow;
  logic cov_i_hw_we_port_0_overflow;
  logic cov_i_hw_wdata_port_0_done;
  logic cov_i_hw_we_port_0_done;
  logic [7:0] cov_i_port_1_event_count;
  logic cov_i_hw_wdata_port_1_start;
  logic cov_i_hw_we_port_1_start;
  logic cov_i_hw_wdata_port_1_fault;
  logic cov_i_hw_we_port_1_fault;
  logic cov_i_hw_wdata_port_1_pending;
  logic cov_i_hw_we_port_1_pending;
  logic cov_i_hw_wdata_port_1_overflow;
  logic cov_i_hw_we_port_1_overflow;
  logic cov_i_hw_wdata_port_1_done;
  logic cov_i_hw_we_port_1_done;
  logic [7:0] cov_i_port_2_event_count;
  logic cov_i_hw_wdata_port_2_start;
  logic cov_i_hw_we_port_2_start;
  logic cov_i_hw_wdata_port_2_fault;
  logic cov_i_hw_we_port_2_fault;
  logic cov_i_hw_wdata_port_2_pending;
  logic cov_i_hw_we_port_2_pending;
  logic cov_i_hw_wdata_port_2_overflow;
  logic cov_i_hw_we_port_2_overflow;
  logic cov_i_hw_wdata_port_2_done;
  logic cov_i_hw_we_port_2_done;
  logic [1:0][7:0] cov_i_monitor_sample_count;
  logic [1:0] cov_i_hw_wdata_monitor_capture;
  logic [1:0] cov_i_hw_we_monitor_capture;
  logic [1:0] cov_i_hw_wdata_monitor_error;
  logic [1:0] cov_i_hw_we_monitor_error;
  logic [1:0] cov_i_hw_wdata_monitor_pending;
  logic [1:0] cov_i_hw_we_monitor_pending;
  logic [1:0] cov_i_hw_wdata_monitor_overflow;
  logic [1:0] cov_i_hw_we_monitor_overflow;
  logic [1:0] cov_i_hw_wdata_monitor_match;
  logic [1:0] cov_i_hw_we_monitor_match;
  logic [1:0] cov_i_hw_clr_monitor_key_fragment;
  integer test_count;
  logic [31:0] wo_write_word;
  logic [31:0] wo_partial_write_data;
  logic [15:0] wo_partial_write_addr;
  logic [31:0] wo_after_partial;
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

  initial begin
    i_clk_ahb = 1'b0;
    forever #5 i_clk_ahb = ~i_clk_ahb;
  end
  initial begin
    i_clk_reg = 1'b0;
    forever #7 i_clk_reg = ~i_clk_reg;
  end

  m_vlsi_ahb_le_csr #(
    .PARA_ASYNCHRONOUS(TEST_ASYNC),
    .PARA_AHB_ENDIAN(TEST_ENDIAN),
    .PARA_WRITE_STROBE_MODE(32'd0)
  ) u_dut (
    .i_clk_ahb(i_clk_ahb),
    .i_rst_n_ahb(i_rst_n_ahb),
    .i_clk_reg(i_clk_reg),
    .i_rst_n_reg(i_rst_n_reg),
    .i_ahb_hsel(i_ahb_hsel),
    .i_ahb_hready(i_ahb_hready),
    .i_ahb_htrans(i_ahb_htrans),
    .i_ahb_haddr(i_ahb_haddr),
    .i_ahb_hwrite(i_ahb_hwrite),
    .i_ahb_hsize(i_ahb_hsize),
    .i_ahb_hburst(i_ahb_hburst),
    .i_ahb_hwdata(i_ahb_hwdata),
    .o_ahb_hreadyout(o_ahb_hreadyout),
    .o_ahb_hresp(o_ahb_hresp),
    .o_ahb_hrdata(o_ahb_hrdata),
    .i_engine_events(cov_i_engine_events),
    .o_engine_mode(),
    .o_engine_start(),
    .i_hw_wdata_engine_start(i_hw_wdata_engine_start),
    .i_hw_we_engine_start(i_hw_we_engine_start),
    .o_engine_fault(),
    .i_hw_wdata_engine_fault(i_hw_wdata_engine_fault),
    .i_hw_we_engine_fault(i_hw_we_engine_fault),
    .o_engine_pending(),
    .i_hw_wdata_engine_pending(i_hw_wdata_engine_pending),
    .i_hw_we_engine_pending(i_hw_we_engine_pending),
    .o_engine_overflow(),
    .i_hw_wdata_engine_overflow(i_hw_wdata_engine_overflow),
    .i_hw_we_engine_overflow(i_hw_we_engine_overflow),
    .o_engine_done(),
    .i_hw_wdata_engine_done(i_hw_wdata_engine_done),
    .i_hw_we_engine_done(i_hw_we_engine_done),
    .i_port_0_event_count(cov_i_port_0_event_count),
    .o_port_0_mode(),
    .o_port_0_start(),
    .i_hw_wdata_port_0_start(cov_i_hw_wdata_port_0_start),
    .i_hw_we_port_0_start(cov_i_hw_we_port_0_start),
    .o_port_0_fault(),
    .i_hw_wdata_port_0_fault(cov_i_hw_wdata_port_0_fault),
    .i_hw_we_port_0_fault(cov_i_hw_we_port_0_fault),
    .o_port_0_pending(),
    .i_hw_wdata_port_0_pending(cov_i_hw_wdata_port_0_pending),
    .i_hw_we_port_0_pending(cov_i_hw_we_port_0_pending),
    .o_port_0_overflow(),
    .i_hw_wdata_port_0_overflow(cov_i_hw_wdata_port_0_overflow),
    .i_hw_we_port_0_overflow(cov_i_hw_we_port_0_overflow),
    .o_port_0_done(),
    .i_hw_wdata_port_0_done(cov_i_hw_wdata_port_0_done),
    .i_hw_we_port_0_done(cov_i_hw_we_port_0_done),
    .i_port_1_event_count(cov_i_port_1_event_count),
    .o_port_1_mode(),
    .o_port_1_start(),
    .i_hw_wdata_port_1_start(cov_i_hw_wdata_port_1_start),
    .i_hw_we_port_1_start(cov_i_hw_we_port_1_start),
    .o_port_1_fault(),
    .i_hw_wdata_port_1_fault(cov_i_hw_wdata_port_1_fault),
    .i_hw_we_port_1_fault(cov_i_hw_we_port_1_fault),
    .o_port_1_pending(),
    .i_hw_wdata_port_1_pending(cov_i_hw_wdata_port_1_pending),
    .i_hw_we_port_1_pending(cov_i_hw_we_port_1_pending),
    .o_port_1_overflow(),
    .i_hw_wdata_port_1_overflow(cov_i_hw_wdata_port_1_overflow),
    .i_hw_we_port_1_overflow(cov_i_hw_we_port_1_overflow),
    .o_port_1_done(),
    .i_hw_wdata_port_1_done(cov_i_hw_wdata_port_1_done),
    .i_hw_we_port_1_done(cov_i_hw_we_port_1_done),
    .i_port_2_event_count(cov_i_port_2_event_count),
    .o_port_2_mode(),
    .o_port_2_start(),
    .i_hw_wdata_port_2_start(cov_i_hw_wdata_port_2_start),
    .i_hw_we_port_2_start(cov_i_hw_we_port_2_start),
    .o_port_2_fault(),
    .i_hw_wdata_port_2_fault(cov_i_hw_wdata_port_2_fault),
    .i_hw_we_port_2_fault(cov_i_hw_we_port_2_fault),
    .o_port_2_pending(),
    .i_hw_wdata_port_2_pending(cov_i_hw_wdata_port_2_pending),
    .i_hw_we_port_2_pending(cov_i_hw_we_port_2_pending),
    .o_port_2_overflow(),
    .i_hw_wdata_port_2_overflow(cov_i_hw_wdata_port_2_overflow),
    .i_hw_we_port_2_overflow(cov_i_hw_we_port_2_overflow),
    .o_port_2_done(),
    .i_hw_wdata_port_2_done(cov_i_hw_wdata_port_2_done),
    .i_hw_we_port_2_done(cov_i_hw_we_port_2_done),
    .i_monitor_sample_count(cov_i_monitor_sample_count),
    .o_monitor_threshold(),
    .o_monitor_capture(),
    .i_hw_wdata_monitor_capture(cov_i_hw_wdata_monitor_capture),
    .i_hw_we_monitor_capture(cov_i_hw_we_monitor_capture),
    .o_monitor_error(),
    .i_hw_wdata_monitor_error(cov_i_hw_wdata_monitor_error),
    .i_hw_we_monitor_error(cov_i_hw_we_monitor_error),
    .o_monitor_pending(),
    .i_hw_wdata_monitor_pending(cov_i_hw_wdata_monitor_pending),
    .i_hw_we_monitor_pending(cov_i_hw_we_monitor_pending),
    .o_monitor_overflow(),
    .i_hw_wdata_monitor_overflow(cov_i_hw_wdata_monitor_overflow),
    .i_hw_we_monitor_overflow(cov_i_hw_we_monitor_overflow),
    .o_monitor_match(),
    .i_hw_wdata_monitor_match(cov_i_hw_wdata_monitor_match),
    .i_hw_we_monitor_match(cov_i_hw_we_monitor_match),
    .o_monitor_key_fragment(),
    .i_hw_clr_monitor_key_fragment(cov_i_hw_clr_monitor_key_fragment),
    .o_key_data(o_key_data),
    .i_hw_clr_key_data(i_hw_clr_key_data)
  );

  task automatic ahb_read_response(input logic [15:0] address, input logic expected_error);
    integer wait_cycles;
    integer error_cycles;
    logic done;
    begin
      @(negedge i_clk_ahb);
      i_ahb_hsel = 1'b1;
      i_ahb_htrans = 2'b10;
      i_ahb_haddr = address;
      i_ahb_hwrite = 1'b0;
      i_ahb_hsize = 3'd2;
      i_ahb_hburst = address[4:2];
      @(posedge i_clk_ahb);
      @(negedge i_clk_ahb);
      i_ahb_hsel = 1'b0;
      i_ahb_htrans = 2'b00;
      wait_cycles = 0;
      error_cycles = 0;
      done = 1'b0;
      while ((wait_cycles < 120) && !done) begin
        @(negedge i_clk_ahb);
        wait_cycles = wait_cycles + 1;
        if (o_ahb_hresp) error_cycles = error_cycles + 1;
        if (o_ahb_hreadyout) begin
          if (o_ahb_hresp !== expected_error) $fatal(1, "coverage AHB response mismatch at %04x", address);
          if (expected_error && error_cycles != 2) $fatal(1, "coverage AHB ERROR was not two cycles");
          @(posedge i_clk_ahb);
          done = 1'b1;
        end
      end
      if (!done) $fatal(1, "coverage AHB read timeout at %04x", address);
      @(negedge i_clk_ahb);
    end
  endtask

  task automatic coverage_burst;
    integer q;
    integer pick;
    logic [15:0] addr;
    logic [31:0] data;
    logic [2:0] size;
    logic [15:0] legal_addr [0:6];
    begin
      legal_addr[0] = 16'h0000; legal_addr[1] = 16'h0100; legal_addr[2] = 16'h0104;
      legal_addr[3] = 16'h0108; legal_addr[4] = 16'h0200; legal_addr[5] = 16'h0204;
      legal_addr[6] = 16'h0400;
      for (q = 0; q < 96; q = q + 1) begin
        data = $urandom;
        case (q % 4)
          0: begin
            pick = $urandom_range(0, 6);
            size = 3'(q % 3);
            addr = legal_addr[pick];
            if (size == 3'd0) addr = legal_addr[pick] + 16'(q % 4);
            else if (size == 3'd1) addr = legal_addr[pick] + 16'(2 * (q % 2));
            ahb_access(addr, 1'b1, size, data, 1'b0, '0);
          end
          1: begin
            addr = 16'h8000 | 16'($urandom & 32'h7FFC);
            ahb_access(addr, 1'b1, 3'd2, data, 1'b1, '0);
          end
          2: begin
            addr = 16'(($urandom & 32'hFFFC) | 32'h0001);
            ahb_access(addr, 1'b1, 3'd1, data, 1'b1, '0);
          end
          default: begin
            addr = legal_addr[$urandom_range(0, 6)];
            ahb_access(addr, 1'b1, 3'd3, data, 1'b1, '0);
          end
        endcase
        if ((q % 8) == 0) ahb_read_response(legal_addr[(q / 8) % 7], 1'b0);
      end
      cov_toggle_inputs();
    end
  endtask

  task automatic ahb_access(input logic [15:0] address,
                            input logic write_access,
                            input logic [2:0] size,
                            input logic [31:0] write_data,
                            input logic expected_error,
                            input logic [31:0] expected_read);
    integer cycles;
    integer error_cycles;
    logic done;
    begin
      @(negedge i_clk_ahb);
      i_ahb_hsel = 1'b1;
      i_ahb_htrans = 2'b10;
      i_ahb_haddr = address;
      i_ahb_hwrite = write_access;
      i_ahb_hsize = size;
      i_ahb_hburst = address[4:2];
      @(posedge i_clk_ahb);
      @(negedge i_clk_ahb);
      i_ahb_hsel = 1'b0;
      i_ahb_htrans = 2'b00;
      i_ahb_hwdata = write_data;
      cycles = 0;
      error_cycles = 0;
      done = 1'b0;
      while ((cycles < 120) && ~done) begin
        @(negedge i_clk_ahb);
        cycles = cycles + 1;
        if (o_ahb_hresp)
          error_cycles = error_cycles + 1;
        if (o_ahb_hreadyout) begin
          if (o_ahb_hresp !== expected_error)
            $fatal(1, "AHB response mismatch at %04x: HRESP=%0b expected=%0b", address, o_ahb_hresp, expected_error);
          if (expected_error && error_cycles != 2)
            $fatal(1, "AHB ERROR response lasted %0d cycles, expected 2", error_cycles);
          if (!expected_error && !write_access && o_ahb_hrdata !== expected_read)
            $fatal(1, "AHB HRDATA got %08x expected %08x at %04x", o_ahb_hrdata, expected_read, address);
          @(posedge i_clk_ahb);
          done = 1'b1;
        end
      end
      if (!done) $fatal(1, "AHB response timeout at %04x", address);
      @(negedge i_clk_ahb);
      i_ahb_hwdata = '0;
    end
  endtask

  task automatic cov_toggle_inputs;
    integer cov_i;
    begin
      for (cov_i = 0; cov_i < 256; cov_i = cov_i + 1) begin
        @(negedge i_clk_ahb);
        cov_i_engine_events = 8'($urandom);
        cov_i_port_0_event_count = 8'($urandom);
        cov_i_hw_wdata_port_0_start = 1'($urandom);
        cov_i_hw_we_port_0_start = 1'($urandom);
        cov_i_hw_wdata_port_0_fault = 1'($urandom);
        cov_i_hw_we_port_0_fault = 1'($urandom);
        cov_i_hw_wdata_port_0_pending = 1'($urandom);
        cov_i_hw_we_port_0_pending = 1'($urandom);
        cov_i_hw_wdata_port_0_overflow = 1'($urandom);
        cov_i_hw_we_port_0_overflow = 1'($urandom);
        cov_i_hw_wdata_port_0_done = 1'($urandom);
        cov_i_hw_we_port_0_done = 1'($urandom);
        cov_i_port_1_event_count = 8'($urandom);
        cov_i_hw_wdata_port_1_start = 1'($urandom);
        cov_i_hw_we_port_1_start = 1'($urandom);
        cov_i_hw_wdata_port_1_fault = 1'($urandom);
        cov_i_hw_we_port_1_fault = 1'($urandom);
        cov_i_hw_wdata_port_1_pending = 1'($urandom);
        cov_i_hw_we_port_1_pending = 1'($urandom);
        cov_i_hw_wdata_port_1_overflow = 1'($urandom);
        cov_i_hw_we_port_1_overflow = 1'($urandom);
        cov_i_hw_wdata_port_1_done = 1'($urandom);
        cov_i_hw_we_port_1_done = 1'($urandom);
        cov_i_port_2_event_count = 8'($urandom);
        cov_i_hw_wdata_port_2_start = 1'($urandom);
        cov_i_hw_we_port_2_start = 1'($urandom);
        cov_i_hw_wdata_port_2_fault = 1'($urandom);
        cov_i_hw_we_port_2_fault = 1'($urandom);
        cov_i_hw_wdata_port_2_pending = 1'($urandom);
        cov_i_hw_we_port_2_pending = 1'($urandom);
        cov_i_hw_wdata_port_2_overflow = 1'($urandom);
        cov_i_hw_we_port_2_overflow = 1'($urandom);
        cov_i_hw_wdata_port_2_done = 1'($urandom);
        cov_i_hw_we_port_2_done = 1'($urandom);
        cov_i_monitor_sample_count = 16'($urandom);
        cov_i_hw_wdata_monitor_capture = 2'($urandom);
        cov_i_hw_we_monitor_capture = 2'($urandom);
        cov_i_hw_wdata_monitor_error = 2'($urandom);
        cov_i_hw_we_monitor_error = 2'($urandom);
        cov_i_hw_wdata_monitor_pending = 2'($urandom);
        cov_i_hw_we_monitor_pending = 2'($urandom);
        cov_i_hw_wdata_monitor_overflow = 2'($urandom);
        cov_i_hw_we_monitor_overflow = 2'($urandom);
        cov_i_hw_wdata_monitor_match = 2'($urandom);
        cov_i_hw_we_monitor_match = 2'($urandom);
        cov_i_hw_clr_monitor_key_fragment = 2'($urandom);
      end
    end
  endtask

  task automatic run_example_map;
    begin
      cov_i_engine_events = '0;
      cov_i_port_0_event_count = '0;
      cov_i_hw_wdata_port_0_start = '0;
      cov_i_hw_we_port_0_start = '0;
      cov_i_hw_wdata_port_0_fault = '0;
      cov_i_hw_we_port_0_fault = '0;
      cov_i_hw_wdata_port_0_pending = '0;
      cov_i_hw_we_port_0_pending = '0;
      cov_i_hw_wdata_port_0_overflow = '0;
      cov_i_hw_we_port_0_overflow = '0;
      cov_i_hw_wdata_port_0_done = '0;
      cov_i_hw_we_port_0_done = '0;
      cov_i_port_1_event_count = '0;
      cov_i_hw_wdata_port_1_start = '0;
      cov_i_hw_we_port_1_start = '0;
      cov_i_hw_wdata_port_1_fault = '0;
      cov_i_hw_we_port_1_fault = '0;
      cov_i_hw_wdata_port_1_pending = '0;
      cov_i_hw_we_port_1_pending = '0;
      cov_i_hw_wdata_port_1_overflow = '0;
      cov_i_hw_we_port_1_overflow = '0;
      cov_i_hw_wdata_port_1_done = '0;
      cov_i_hw_we_port_1_done = '0;
      cov_i_port_2_event_count = '0;
      cov_i_hw_wdata_port_2_start = '0;
      cov_i_hw_we_port_2_start = '0;
      cov_i_hw_wdata_port_2_fault = '0;
      cov_i_hw_we_port_2_fault = '0;
      cov_i_hw_wdata_port_2_pending = '0;
      cov_i_hw_we_port_2_pending = '0;
      cov_i_hw_wdata_port_2_overflow = '0;
      cov_i_hw_we_port_2_overflow = '0;
      cov_i_hw_wdata_port_2_done = '0;
      cov_i_hw_we_port_2_done = '0;
      cov_i_monitor_sample_count = '0;
      cov_i_hw_wdata_monitor_capture = '0;
      cov_i_hw_we_monitor_capture = '0;
      cov_i_hw_wdata_monitor_error = '0;
      cov_i_hw_we_monitor_error = '0;
      cov_i_hw_wdata_monitor_pending = '0;
      cov_i_hw_we_monitor_pending = '0;
      cov_i_hw_wdata_monitor_overflow = '0;
      cov_i_hw_we_monitor_overflow = '0;
      cov_i_hw_wdata_monitor_match = '0;
      cov_i_hw_we_monitor_match = '0;
      cov_i_hw_clr_monitor_key_fragment = '0;
      cov_i_engine_events = 8'h12;
      cov_i_port_0_event_count = 8'h34;
      cov_i_monitor_sample_count = 16'h7856;
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'h12000000);
      ahb_access(16'h0000, 1'b1, 3'd2, 32'h00B80000, 1'b0, '0);
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'h12B80000);

      @(negedge i_clk_ahb);
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
      @(posedge i_clk_ahb);
      @(negedge i_clk_ahb);
      i_hw_we_engine_start = 1'b0;
      i_hw_we_engine_fault = 1'b0;
      i_hw_we_engine_pending = 1'b0;
      i_hw_we_engine_overflow = 1'b0;
      i_hw_we_engine_done = 1'b0;
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'h12BF8000);
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'h12BF0000);
      ahb_access(16'h0000, 1'b1, 3'd2, 32'h00000000, 1'b0, '0);
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'h12040000);
      ahb_access(16'h0000, 1'b1, 3'd2, 32'h00040000, 1'b0, '0);
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'h12000000);

      @(negedge i_clk_ahb);
      i_hw_wdata_engine_pending = 1'b1;
      i_hw_we_engine_pending = 1'b1;
      @(posedge i_clk_ahb);
      @(negedge i_clk_ahb);
      i_hw_we_engine_pending = 1'b0;
      ahb_access(16'h0000, 1'b1, 3'd2, 32'h00020000, 1'b0, '0);
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'h12020000);

      ahb_access(16'h0100, 1'b0, 3'd2, '0, 1'b0, 32'h34000000);
      ahb_access(16'h0100, 1'b1, 3'd2, 32'h00A80000, 1'b0, '0);
      ahb_access(16'h0100, 1'b0, 3'd2, '0, 1'b0, 32'h34A80000);
      ahb_access(16'h0200, 1'b0, 3'd2, '0, 1'b0, 32'h56000000);
      ahb_access(16'h0200, 1'b1, 3'd2, 32'h00580000, 1'b0, '0);
      ahb_access(16'h0200, 1'b0, 3'd2, '0, 1'b0, 32'h56580000);

      ahb_access(16'h0400, 1'b0, 3'd2, '0, 1'b0, 32'h00000000);
      ahb_access(16'h0400, 1'b1, 3'd2, 32'hA1B2C3D4, 1'b0, '0);
      if (o_key_data !== 32'hA1B2C3D4) $fatal(1, "example WO field did not store the key");
      ahb_access(16'h0400, 1'b0, 3'd2, '0, 1'b0, 32'h00000000);
      i_hw_clr_key_data = 1'b1;
      ahb_access(16'h0400, 1'b1, 3'd2, 32'hFFFFFFFF, 1'b0, '0);
      i_hw_clr_key_data = 1'b0;
      if (o_key_data !== 32'h00000000) $fatal(1, "example WO clear did not override write");
      ahb_access(16'h0400, 1'b1, 3'd2, 32'h55667788, 1'b0, '0);
      if (o_key_data !== 32'h55667788) $fatal(1, "example WO write after clear failed");
      ahb_access(16'h0400, 1'b0, 3'd2, '0, 1'b0, 32'h00000000);
      ahb_access(16'h0002, 1'b1, 3'd2, 32'h11111111, 1'b1, '0);
      ahb_access(16'h0300, 1'b0, 3'd2, '0, 1'b1, '0);
      coverage_burst();
    end
  endtask

  initial begin
    i_rst_n_ahb = 1'b0;
    i_rst_n_reg = 1'b0;
    i_ahb_hsel = 1'b0;
    i_ahb_hready = 1'b1;
    i_ahb_htrans = 2'b00;
    i_ahb_haddr = '0;
    i_ahb_hwrite = 1'b0;
    i_ahb_hsize = 3'd2;
    i_ahb_hburst = 3'b000;
    i_ahb_hwdata = '0;
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
    repeat (5) @(negedge i_clk_ahb);
    i_rst_n_ahb = 1'b1;
    repeat (2) @(negedge i_clk_reg);
    i_rst_n_reg = 1'b1;
    repeat (10) @(posedge i_clk_ahb);

    if (TEST_EXAMPLE != 32'd0) begin
      run_example_map();
      $display("PASS AHB example map: full field access, mapped/unmapped, and WO hardware clear");
      $finish;
    end

    if (o_data_value !== 32'h12345678) $fatal(1, "CSR reset value mismatch");
    test_count = test_count + 1;
    $display("PASS AHB case: reset and selected FIFO clock-mode initialization");

    wo_write_word = (TEST_ENDIAN == 32'd1) ? 32'hD4C3B2A1 : 32'hA1B2C3D4;
    ahb_access(16'h0010, 1'b0, 3'd2, '0, 1'b0, 32'h00000000);
    ahb_access(16'h0010, 1'b1, 3'd2, wo_write_word, 1'b0, '0);
    if (o_key_data !== 32'hA1B2C3D4) $fatal(1, "WO storage did not capture software write");
    ahb_access(16'h0010, 1'b0, 3'd2, '0, 1'b0, 32'h00000000);
    if (TEST_ENDIAN == 32'd0) begin
      wo_partial_write_addr = 16'h0011;
      wo_partial_write_data = 32'h0000EE00;
      wo_after_partial = 32'hA1B2EED4;
    end else if (TEST_ENDIAN == 32'd1) begin
      wo_partial_write_addr = 16'h0010;
      wo_partial_write_data = 32'h000000EE;
      wo_after_partial = 32'hEEB2C3D4;
    end else begin
      wo_partial_write_addr = 16'h0010;
      wo_partial_write_data = 32'hEE000000;
      wo_after_partial = 32'hEEB2C3D4;
    end
    ahb_access(wo_partial_write_addr, 1'b1, 3'd0, wo_partial_write_data, 1'b0, '0);
    if (o_key_data !== wo_after_partial) $fatal(1, "WO WSTRB did not update selected byte lane: %08x", o_key_data);
    i_hw_clr_key_data = 1'b1;
    ahb_access(16'h0010, 1'b1, 3'd2, wo_write_word, 1'b0, '0);
    i_hw_clr_key_data = 1'b0;
    if (o_key_data !== 32'h00000000) $fatal(1, "WO hardware clear did not override concurrent software write");
    repeat (2) @(posedge i_clk_ahb);
    if (o_key_data !== 32'h00000000) $fatal(1, "WO field changed after clear was released");
    ahb_access(16'h0010, 1'b1, 3'd2, (TEST_ENDIAN == 32'd1) ? 32'h88776655 : 32'h55667788, 1'b0, '0);
    if (o_key_data !== 32'h55667788) $fatal(1, "WO field did not accept a write after clear release");
    ahb_access(16'h0010, 1'b0, 3'd2, '0, 1'b0, 32'h00000000);
    test_count = test_count + 1;
    $display("PASS AHB case: WO read-zero, WSTRB, storage, clear priority, and post-clear write");

    if (TEST_ENDIAN == 32'd0) begin
      ahb_access(16'h0000, 1'b1, 3'd2, 32'h11223344, 1'b0, '0);
      if (o_data_value !== 32'h11223344) $fatal(1, "AHB word write failed");
      ahb_access(16'h0001, 1'b1, 3'd0, 32'h0000AA00, 1'b0, '0);
      if (o_data_value !== 32'h1122AA44) $fatal(1, "AHB byte lane write failed: %08x", o_data_value);
      ahb_access(16'h0002, 1'b1, 3'd1, 32'hBEEF0000, 1'b0, '0);
      if (o_data_value !== 32'hBEEFAA44) $fatal(1, "AHB halfword lane write failed: %08x", o_data_value);
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'hBEEFAA44);
      test_count = test_count + 1;
      $display("PASS AHB case: LITTLE word, byte, halfword writes and readback");
    end else if (TEST_ENDIAN == 32'd1) begin
      ahb_access(16'h0000, 1'b1, 3'd2, 32'h44332211, 1'b0, '0);
      if (o_data_value !== 32'h11223344) $fatal(1, "AHB BE8 word mapping failed: %08x", o_data_value);
      ahb_access(16'h0000, 1'b1, 3'd0, 32'h000000AA, 1'b0, '0);
      if (o_data_value !== 32'hAA223344) $fatal(1, "AHB BE8 byte mapping failed: %08x", o_data_value);
      ahb_access(16'h0000, 1'b1, 3'd1, 32'h0000BBAA, 1'b0, '0);
      if (o_data_value !== 32'hAABB3344) $fatal(1, "AHB BE8 halfword mapping failed: %08x", o_data_value);
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'h4433BBAA);
      test_count = test_count + 1;
      $display("PASS AHB case: BE8 byte-invariant lane mapping");
    end else begin
      ahb_access(16'h0000, 1'b1, 3'd2, 32'h11223344, 1'b0, '0);
      if (o_data_value !== 32'h11223344) $fatal(1, "AHB BE32 word mapping failed");
      ahb_access(16'h0000, 1'b1, 3'd0, 32'hAA000000, 1'b0, '0);
      if (o_data_value !== 32'hAA223344) $fatal(1, "AHB BE32 byte mapping failed: %08x", o_data_value);
      ahb_access(16'h0000, 1'b1, 3'd1, 32'hBEEF0000, 1'b0, '0);
      if (o_data_value !== 32'hBEEF3344) $fatal(1, "AHB BE32 halfword mapping failed: %08x", o_data_value);
      ahb_access(16'h0000, 1'b0, 3'd2, '0, 1'b0, 32'hBEEF3344);
      test_count = test_count + 1;
      $display("PASS AHB case: BE32 word-invariant lane mapping");
    end

    ahb_access(16'h0000, 1'b1, 3'd3, 32'hFFFFFFFF, 1'b1, '0);
    ahb_access(16'h0001, 1'b1, 3'd1, 32'hFFFFFFFF, 1'b1, '0);
    test_count = test_count + 1;
    $display("PASS AHB case: unsupported size and misaligned halfword return two-cycle ERROR");

    ahb_access(16'h0004, 1'b0, 3'd2, '0, 1'b1, '0);
    test_count = test_count + 1;
    $display("PASS AHB case: unmapped address returns two-cycle ERROR");
    $display("PASS AHB: endian=%0d asynchronous=%0d, cases=%0d", TEST_ENDIAN, TEST_ASYNC, test_count);
    $finish;
  end

  initial begin
    #100000;
    $fatal(1, "AHB testbench timeout");
  end
endmodule
