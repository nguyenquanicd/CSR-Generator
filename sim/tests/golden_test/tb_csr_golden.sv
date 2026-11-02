`timescale 1ps/1ps
// Self-checking testbench of the CSR generated from CSR_GOLDEN_FORMAT.xlsx (sheet CSR or ASYNC_CSR).
// DUT      : m_vlsi_csr with the elaboration parameters PARA_ASYNCHRONOUS and PARA_MONITOR_COUNT.
// Registers: engine (0x000), port_0..port_2 (FIXED, 0x100, 0x104, 0x108), monitor bank (PARAMETERIZED,
//            0x200 + 4 x index, MC entries). Every register has the field layout ro[31:24], rw[23:20],
//            rwi[19], w1c[18], w0c[17], w2c[16], r2c[15], reserved[14:0].
// Plan     : TEST-003 .. TEST-008, TEST-012, TEST-013, TEST-016 of the specification (section 15.2).
// Result   : prints "TB PASS" or "TB FAIL" and a count of checks and of covered cases.
module tb_csr_golden;
  parameter ASYNC  = 0;        // PARA_ASYNCHRONOUS
  parameter MC     = 2;        // PARA_MONITOR_COUNT (1 to 4)
  parameter P_APB  = 10000;    // APB clock period in ps
  parameter P_REG  = 10000;    // register clock period in ps (asynchronous mode)
  parameter SEED   = 1;
  parameter RANDN  = 300;      // transfers of each random phase

  localparam NI = 4 + MC;      // register instances: engine, port_0..2, monitor_0..MC-1

  reg clk_apb = 0, clk_reg = 0;
  reg rst_n_apb = 0, rst_n_reg = 0;
  always #(P_APB / 2) clk_apb = ~clk_apb;
  always #(P_REG / 2) clk_reg = ~clk_reg;
  wire clk_r = ASYNC ? clk_reg : clk_apb;      // clock of the register domain

  reg        psel = 0, penable = 0, pwrite = 0;
  reg [15:0] paddr = 0;
  reg [31:0] pwdata = 0;
  reg [3:0]  pstrb = 4'hF;
  reg [2:0]  pprot = 0;
  wire       pready, pslverr;
  wire [31:0] prdata;
  reg        protect_en = 1, slverr_en = 1;

  // Hardware side, flat vectors: instance i, field k (0 start, 1 fault, 2 pending, 3 overflow, 4 done).
  reg  [63:0] ro_flat   = 0;
  reg  [39:0] hw_we_flat = 0;
  reg  [39:0] hw_wd_flat = 0;
  wire [31:0] o_mode_flat;
  wire [39:0] o_f_flat;

  wire [MC-1:0][7:0] mon_ro;
  wire [MC-1:0][3:0] mon_thr;
  wire [MC-1:0] mon_o0, mon_o1, mon_o2, mon_o3, mon_o4;
  wire [MC-1:0] mon_wd0, mon_wd1, mon_wd2, mon_wd3, mon_wd4;
  wire [MC-1:0] mon_we0, mon_we1, mon_we2, mon_we3, mon_we4;

  genvar j;
  generate for (j = 0; j < MC; j = j + 1) begin : g_mon
    assign mon_ro[j] = ro_flat[(4 + j) * 8 +: 8];
    assign o_mode_flat[(4 + j) * 4 +: 4] = mon_thr[j];
    assign o_f_flat[(4 + j) * 5 + 0] = mon_o0[j];
    assign o_f_flat[(4 + j) * 5 + 1] = mon_o1[j];
    assign o_f_flat[(4 + j) * 5 + 2] = mon_o2[j];
    assign o_f_flat[(4 + j) * 5 + 3] = mon_o3[j];
    assign o_f_flat[(4 + j) * 5 + 4] = mon_o4[j];
    assign mon_wd0[j] = hw_wd_flat[(4 + j) * 5 + 0];
    assign mon_wd1[j] = hw_wd_flat[(4 + j) * 5 + 1];
    assign mon_wd2[j] = hw_wd_flat[(4 + j) * 5 + 2];
    assign mon_wd3[j] = hw_wd_flat[(4 + j) * 5 + 3];
    assign mon_wd4[j] = hw_wd_flat[(4 + j) * 5 + 4];
    assign mon_we0[j] = hw_we_flat[(4 + j) * 5 + 0];
    assign mon_we1[j] = hw_we_flat[(4 + j) * 5 + 1];
    assign mon_we2[j] = hw_we_flat[(4 + j) * 5 + 2];
    assign mon_we3[j] = hw_we_flat[(4 + j) * 5 + 3];
    assign mon_we4[j] = hw_we_flat[(4 + j) * 5 + 4];
  end endgenerate

  m_vlsi_csr #(.PARA_ASYNCHRONOUS(ASYNC), .PARA_MONITOR_COUNT(MC)) u_dut (
    .i_clk_apb(clk_apb), .i_rst_n_apb(rst_n_apb), .i_clk_reg(clk_reg), .i_rst_n_reg(rst_n_reg),
    .i_apb_psel(psel), .i_apb_penable(penable), .i_apb_pwrite(pwrite), .i_apb_paddr(paddr),
    .i_apb_pwdata(pwdata), .i_apb_pstrb(pstrb), .i_apb_pprot(pprot),
    .o_apb_pready(pready), .o_apb_pslverr(pslverr), .o_apb_prdata(prdata),
    .i_protect_en(protect_en), .i_slverr_en(slverr_en),
    .i_engine_events(ro_flat[0*8 +: 8]), .o_engine_mode(o_mode_flat[0*4 +: 4]),
    .o_engine_start(o_f_flat[0*5+0]), .i_hw_wdata_engine_start(hw_wd_flat[0*5+0]), .i_hw_we_engine_start(hw_we_flat[0*5+0]),
    .o_engine_fault(o_f_flat[0*5+1]), .i_hw_wdata_engine_fault(hw_wd_flat[0*5+1]), .i_hw_we_engine_fault(hw_we_flat[0*5+1]),
    .o_engine_pending(o_f_flat[0*5+2]), .i_hw_wdata_engine_pending(hw_wd_flat[0*5+2]), .i_hw_we_engine_pending(hw_we_flat[0*5+2]),
    .o_engine_overflow(o_f_flat[0*5+3]), .i_hw_wdata_engine_overflow(hw_wd_flat[0*5+3]), .i_hw_we_engine_overflow(hw_we_flat[0*5+3]),
    .o_engine_done(o_f_flat[0*5+4]), .i_hw_wdata_engine_done(hw_wd_flat[0*5+4]), .i_hw_we_engine_done(hw_we_flat[0*5+4]),
    .i_port_0_event_count(ro_flat[1*8 +: 8]), .o_port_0_mode(o_mode_flat[1*4 +: 4]),
    .o_port_0_start(o_f_flat[1*5+0]), .i_hw_wdata_port_0_start(hw_wd_flat[1*5+0]), .i_hw_we_port_0_start(hw_we_flat[1*5+0]),
    .o_port_0_fault(o_f_flat[1*5+1]), .i_hw_wdata_port_0_fault(hw_wd_flat[1*5+1]), .i_hw_we_port_0_fault(hw_we_flat[1*5+1]),
    .o_port_0_pending(o_f_flat[1*5+2]), .i_hw_wdata_port_0_pending(hw_wd_flat[1*5+2]), .i_hw_we_port_0_pending(hw_we_flat[1*5+2]),
    .o_port_0_overflow(o_f_flat[1*5+3]), .i_hw_wdata_port_0_overflow(hw_wd_flat[1*5+3]), .i_hw_we_port_0_overflow(hw_we_flat[1*5+3]),
    .o_port_0_done(o_f_flat[1*5+4]), .i_hw_wdata_port_0_done(hw_wd_flat[1*5+4]), .i_hw_we_port_0_done(hw_we_flat[1*5+4]),
    .i_port_1_event_count(ro_flat[2*8 +: 8]), .o_port_1_mode(o_mode_flat[2*4 +: 4]),
    .o_port_1_start(o_f_flat[2*5+0]), .i_hw_wdata_port_1_start(hw_wd_flat[2*5+0]), .i_hw_we_port_1_start(hw_we_flat[2*5+0]),
    .o_port_1_fault(o_f_flat[2*5+1]), .i_hw_wdata_port_1_fault(hw_wd_flat[2*5+1]), .i_hw_we_port_1_fault(hw_we_flat[2*5+1]),
    .o_port_1_pending(o_f_flat[2*5+2]), .i_hw_wdata_port_1_pending(hw_wd_flat[2*5+2]), .i_hw_we_port_1_pending(hw_we_flat[2*5+2]),
    .o_port_1_overflow(o_f_flat[2*5+3]), .i_hw_wdata_port_1_overflow(hw_wd_flat[2*5+3]), .i_hw_we_port_1_overflow(hw_we_flat[2*5+3]),
    .o_port_1_done(o_f_flat[2*5+4]), .i_hw_wdata_port_1_done(hw_wd_flat[2*5+4]), .i_hw_we_port_1_done(hw_we_flat[2*5+4]),
    .i_port_2_event_count(ro_flat[3*8 +: 8]), .o_port_2_mode(o_mode_flat[3*4 +: 4]),
    .o_port_2_start(o_f_flat[3*5+0]), .i_hw_wdata_port_2_start(hw_wd_flat[3*5+0]), .i_hw_we_port_2_start(hw_we_flat[3*5+0]),
    .o_port_2_fault(o_f_flat[3*5+1]), .i_hw_wdata_port_2_fault(hw_wd_flat[3*5+1]), .i_hw_we_port_2_fault(hw_we_flat[3*5+1]),
    .o_port_2_pending(o_f_flat[3*5+2]), .i_hw_wdata_port_2_pending(hw_wd_flat[3*5+2]), .i_hw_we_port_2_pending(hw_we_flat[3*5+2]),
    .o_port_2_overflow(o_f_flat[3*5+3]), .i_hw_wdata_port_2_overflow(hw_wd_flat[3*5+3]), .i_hw_we_port_2_overflow(hw_we_flat[3*5+3]),
    .o_port_2_done(o_f_flat[3*5+4]), .i_hw_wdata_port_2_done(hw_wd_flat[3*5+4]), .i_hw_we_port_2_done(hw_we_flat[3*5+4]),
    .i_monitor_sample_count(mon_ro), .o_monitor_threshold(mon_thr),
    .o_monitor_capture(mon_o0), .i_hw_wdata_monitor_capture(mon_wd0), .i_hw_we_monitor_capture(mon_we0),
    .o_monitor_error(mon_o1), .i_hw_wdata_monitor_error(mon_wd1), .i_hw_we_monitor_error(mon_we1),
    .o_monitor_pending(mon_o2), .i_hw_wdata_monitor_pending(mon_wd2), .i_hw_we_monitor_pending(mon_we2),
    .o_monitor_overflow(mon_o3), .i_hw_wdata_monitor_overflow(mon_wd3), .i_hw_we_monitor_overflow(mon_we3),
    .o_monitor_match(mon_o4), .i_hw_wdata_monitor_match(mon_wd4), .i_hw_we_monitor_match(mon_we4)
  );

  // ------------------------------------------------------------------------------------------
  // Checks, coverage, random numbers
  // ------------------------------------------------------------------------------------------
  integer n_chk = 0, n_fail = 0;
  integer seed = SEED;
  integer cov_rwi_sw = 0, cov_w1c_hw = 0, cov_w0c_hw = 0, cov_w2c_hw = 0, cov_r2c_hw = 0;
  integer cov_hw_zero = 0, cov_err = 0, cov_ok_wr = 0, cov_ok_rd = 0, cov_unmapped = 0, cov_b2b = 0;
  integer cov_sva1 = 0, cov_sva4 = 0;
  integer cov_rst_mid = 0, cov_r2c_clear = 0, cov_w1c_clear = 0, cov_w0c_clear = 0, cov_w2c_clear = 0;

  task automatic chk(input bit ok, input string what);
    begin
      n_chk = n_chk + 1;
      if (!ok) begin
        n_fail = n_fail + 1;
        $display("FAIL %0t ps: %s", $time, what);
      end
    end
  endtask

  task automatic rnd(output [31:0] r);
    begin
      r = $random(seed);
    end
  endtask

  // SVA-001: PREADY is high for one cycle per transfer, only while PSEL and PENABLE are high.
  reg pready_q = 0;
  always @(posedge clk_apb) begin
    if (rst_n_apb) begin
      if (pready === 1'b1) begin
        cov_sva1 = cov_sva1 + 1;
        chk(psel === 1'b1 && penable === 1'b1, "SVA-001: PREADY only while PSEL and PENABLE are high");
        chk(pready_q === 1'b0, "SVA-001: PREADY lasts one cycle");
      end
      pready_q <= (pready === 1'b1);
    end else begin
      pready_q <= 1'b0;
    end
  end

  // ------------------------------------------------------------------------------------------
  // APB master
  // ------------------------------------------------------------------------------------------
  integer    last_cycles;
  reg        last_err;
  reg [3:0]  last_mode0;           // field output of the engine register in the cycle with PREADY = 1
  reg [31:0] last_rdata;
  reg [31:0] good_rdata = 0;       // PRDATA after the last read without error
  reg        chain = 0;            // the next transfer starts in the cycle after PREADY

  task automatic apb(input bit wr, input [15:0] a, input [31:0] d, input [3:0] s, input [2:0] p, input bit chain_next);
    integer k;
    bit done;
    begin
      if (!chain) @(posedge clk_apb);
      #1;
      psel = 1; penable = 0; pwrite = wr; paddr = a; pwdata = d; pstrb = s; pprot = p;
      @(posedge clk_apb); #1;
      penable = 1;
      k = 0; done = 0;
      while (!done) begin
        @(posedge clk_apb);
        k = k + 1;
        if (pready === 1'b1) begin
          done = 1;
          last_rdata = prdata;
          last_err   = pslverr;
          last_mode0 = o_mode_flat[3:0];
        end
        if (k > 600) begin
          done = 1;
          $display("FAIL %0t ps: no PREADY within 600 cycles", $time);
          n_fail = n_fail + 1;
          n_chk = n_chk + 1;
          last_err = 1'bx;
        end
      end
      last_cycles = k + 1;
      #1;
      if (chain_next) begin
        chain = 1;
      end else begin
        chain = 0;
        psel = 0; penable = 0;
      end
    end
  endtask

  // ------------------------------------------------------------------------------------------
  // Reference model of the register fields (software side and hardware loads)
  // ------------------------------------------------------------------------------------------
  reg [3:0] m_mode [0:7];
  reg [4:0] m_f    [0:7];     // [0] start, [1] fault, [2] pending, [3] overflow, [4] done

  function automatic integer lookup(input [15:0] a);
    begin
      lookup = -1;
      if (a == 16'h0000) lookup = 0;
      else if (a == 16'h0100) lookup = 1;
      else if (a == 16'h0104) lookup = 2;
      else if (a == 16'h0108) lookup = 3;
      else if (a >= 16'h0200 && a < (16'h0200 + 4 * MC) && a[1:0] == 2'b00) lookup = 4 + (a - 16'h0200) / 4;
    end
  endfunction

  function automatic [15:0] iaddr(input integer i);
    begin
      if (i == 0) iaddr = 16'h0000;
      else if (i < 4) iaddr = 16'h0100 + 4 * (i - 1);
      else iaddr = 16'h0200 + 4 * (i - 4);
    end
  endfunction

  function automatic [31:0] predict(input integer i);
    begin
      predict = {ro_flat[i * 8 +: 8], m_mode[i], m_f[i][0], m_f[i][1], m_f[i][2], m_f[i][3], m_f[i][4], 15'b0};
    end
  endfunction

  task automatic m_write(input integer i, input [31:0] d);
    begin
      m_mode[i] = d[23:20];
      m_f[i][0] = d[19];
      m_f[i][1] = m_f[i][1] & ~d[18];
      m_f[i][2] = m_f[i][2] & d[17];
      m_f[i][3] = 1'b0;
    end
  endtask

  task automatic chk_out(input string tag);
    integer i;
    begin
      for (i = 0; i < NI; i = i + 1) begin
        chk(o_mode_flat[i * 4 +: 4] === m_mode[i], tag);
        chk(o_f_flat[i * 5 +: 5] === m_f[i], tag);
      end
    end
  endtask

  task automatic model_reset;
    integer i;
    begin
      for (i = 0; i < 8; i = i + 1) begin
        m_mode[i] = 0;
        m_f[i] = 0;
      end
    end
  endtask

  // Hardware load of one field in a quiet window (no transfer in progress).
  task automatic hw_pulse(input integer i, input integer f, input bit v);
    begin
      @(negedge clk_r);
      hw_wd_flat[i * 5 + f] = v;
      hw_we_flat[i * 5 + f] = 1'b1;
      @(negedge clk_r);
      hw_we_flat[i * 5 + f] = 1'b0;
      m_f[i][f] = v;
    end
  endtask

  // Hardware load that meets a software write or read in the cycle of the register-side enable.
  bit     arm_wr = 0, arm_rd = 0, hw_clr = 0;
  integer c_inst = 0, c_f = 0;
  bit     c_val = 0;
  integer arm_hits = 0;
  always @(negedge clk_r) begin
    if (hw_clr) begin
      hw_we_flat[c_inst * 5 + c_f] = 1'b0;
      hw_clr = 0;
    end
    if ((arm_wr && u_dut.w_wr_en) || (arm_rd && u_dut.w_rd_en)) begin
      hw_wd_flat[c_inst * 5 + c_f] = c_val;
      hw_we_flat[c_inst * 5 + c_f] = 1'b1;
      arm_wr = 0;
      arm_rd = 0;
      hw_clr = 1;
      arm_hits = arm_hits + 1;
    end
  end

  task automatic do_wr(input integer i, input [31:0] d);
    begin
      apb(1'b1, iaddr(i), d, 4'hF, 3'b000, 1'b0);
      chk(last_err === 1'b0, "write without error");
      m_write(i, d);
    end
  endtask

  task automatic do_rd(input integer i);
    reg [31:0] exp;
    begin
      exp = predict(i);
      apb(1'b0, iaddr(i), 32'h0, 4'hF, 3'b000, 1'b0);
      chk(last_err === 1'b0, "read without error");
      chk(last_rdata === exp, "read data");
      m_f[i][4] = 1'b0;                 // r2c clears on the read
    end
  endtask

  // ------------------------------------------------------------------------------------------
  // Reset sequence that also applies the static enables
  // ------------------------------------------------------------------------------------------
  task automatic do_reset(input bit prot, input bit slv);
    begin
      rst_n_apb = 0; rst_n_reg = 0;
      protect_en = prot; slverr_en = slv;
      psel = 0; penable = 0; chain = 0;
      hw_we_flat = 0; hw_wd_flat = 0; ro_flat = 0;
      arm_wr = 0; arm_rd = 0; hw_clr = 0;
      repeat (4) @(posedge clk_apb);
      repeat (4) @(posedge clk_reg);
      #1;
      rst_n_apb = 1;
      @(posedge clk_reg); #1;
      rst_n_reg = 1;
      repeat (3) @(posedge clk_apb);
      model_reset;
    end
  endtask

  // ------------------------------------------------------------------------------------------
  // Directed tests
  // ------------------------------------------------------------------------------------------
  integer i, t;
  reg [31:0] r32;

  task automatic t_reset_values;
    begin
      chk(pready === 1'b0 && pslverr === 1'b0, "PREADY and PSLVERR are 0 after reset");
      chk(prdata === 32'h0, "PRDATA is 0 after reset");
      chk_out("reset values");
      for (i = 0; i < NI; i = i + 1) begin
        do_rd(i);
      end
    end
  endtask

  task automatic t_fields;
    begin
      for (i = 0; i < NI; i = i + 1) begin
        ro_flat[i * 8 +: 8] = 8'hA0 + i;
        do_wr(i, 32'h00FB_0000);   // mode F, start 1, fault bit 0, pending 1, overflow 1
        chk_out("rw and rwi write");
        do_rd(i);
        do_wr(i, {8'h00, i[3:0], 20'h0});   // mode i, start 0
        chk_out("rw write");
        do_rd(i);
      end
      // ro input is live and ignores software writes; reserved bits read 0
      for (i = 0; i < NI; i = i + 1) begin
        ro_flat[i * 8 +: 8] = ~ro_flat[i * 8 +: 8];
        do_rd(i);
        chk(last_rdata[31:24] === ro_flat[i * 8 +: 8] && last_rdata[14:0] === 15'h0, "ro pass-through and reserved bits");
      end
    end
  endtask

  task automatic t_hw_and_sw_clear;
    integer a;
    begin
      for (a = 0; a < NI; a = a + 1) begin
        // hardware loads set fault, pending, overflow and done and load start
        hw_pulse(a, 0, 1'b1);
        hw_pulse(a, 1, 1'b1);
        hw_pulse(a, 2, 1'b1);
        hw_pulse(a, 3, 1'b1);
        hw_pulse(a, 4, 1'b1);
        chk_out("hardware loads");
        do_rd(a);       // reads 1 in done and clears it (r2c)
        cov_r2c_clear = cov_r2c_clear + 1;
        do_rd(a);       // done is 0 now
        chk(last_rdata[15] === 1'b0, "r2c reads 0 after the clearing read");
        // w1c: writing 0 in the bit keeps it; writing 1 clears it
        do_wr(a, 32'h0000_0000);   // fault bit 0 keeps; pending bit 0 clears (w0c); any write clears overflow (w2c)
        chk(o_f_flat[a * 5 + 1] === 1'b1, "w1c: a 0 written keeps the flag");
        chk(o_f_flat[a * 5 + 2] === 1'b0, "w0c: a 0 written clears the flag");
        chk(o_f_flat[a * 5 + 3] === 1'b0, "w2c: any write clears the field");
        cov_w0c_clear = cov_w0c_clear + 1;
        cov_w2c_clear = cov_w2c_clear + 1;
        do_wr(a, 32'h0006_0000);   // fault bit 1 -> clear; pending bit 1 -> hold
        chk(o_f_flat[a * 5 + 1] === 1'b0, "w1c: a 1 written clears the flag");
        cov_w1c_clear = cov_w1c_clear + 1;
        // w0c holds when a 1 is written
        hw_pulse(a, 2, 1'b1);
        do_wr(a, 32'h0002_0000);
        chk(o_f_flat[a * 5 + 2] === 1'b1, "w0c: a 1 written keeps the flag");
        // clean up: clear everything for the next instance
        do_wr(a, 32'h0000_0000);
        // w2c: a write to another register does not clear it
        hw_pulse(a, 3, 1'b1);
        do_wr((a + 1) % NI, 32'h0000_0000);
        chk(o_f_flat[a * 5 + 3] === 1'b1, "w2c: a write to another register keeps the field");
        do_wr(a, 32'h0001_0000);          // write to this register clears even with a 1 written
        chk(o_f_flat[a * 5 + 3] === 1'b0, "w2c: a write with 1 in the bit clears it");
      end
      chk_out("after clears");
    end
  endtask

  task automatic coll_wr(input integer a, input [31:0] d, input integer f, input bit hv);
    begin
      c_inst = a; c_f = f; c_val = hv; arm_wr = 1;
      apb(1'b1, iaddr(a), d, 4'hF, 3'b000, 1'b0);
      chk(arm_wr === 1'b0, "collision armed and fired");
      chk(last_err === 1'b0, "collision write without error");
      m_write(a, d);
    end
  endtask

  task automatic t_collisions;
    integer a;
    begin
      for (a = 0; a < NI; a = a + 1) begin
        do_reset(1'b1, 1'b1);
        do_wr(a, 32'h0);
        // rwi: software wins over a hardware load in the same cycle
        coll_wr(a, 32'h0008_0000, 0, 1'b0);
        chk(o_f_flat[a * 5 + 0] === 1'b1, "rwi: software 1 wins over hardware 0");
        coll_wr(a, 32'h0000_0000, 0, 1'b1);
        chk(o_f_flat[a * 5 + 0] === 1'b0, "rwi: software 0 wins over hardware 1");
        cov_rwi_sw = cov_rwi_sw + 2;
        // w1c: hardware load wins over a software clear
        hw_pulse(a, 1, 1'b1);
        coll_wr(a, 32'h0004_0000, 1, 1'b1);
        m_f[a][1] = 1'b1;
        chk(o_f_flat[a * 5 + 1] === 1'b1, "w1c: hardware load 1 wins over a software clear");
        cov_w1c_hw = cov_w1c_hw + 1;
        coll_wr(a, 32'h0000_0000, 1, 1'b0);       // hardware loads 0, software holds
        m_f[a][1] = 1'b0;
        chk(o_f_flat[a * 5 + 1] === 1'b0, "w1c: hardware load 0 replaces the field");
        cov_hw_zero = cov_hw_zero + 1;
        // w0c
        hw_pulse(a, 2, 1'b1);
        coll_wr(a, 32'h0000_0000, 2, 1'b1);       // software clears (0 written), hardware loads 1
        m_f[a][2] = 1'b1;
        chk(o_f_flat[a * 5 + 2] === 1'b1, "w0c: hardware load 1 wins over a software clear");
        cov_w0c_hw = cov_w0c_hw + 1;
        coll_wr(a, 32'h0002_0000, 2, 1'b0);       // software holds, hardware loads 0
        m_f[a][2] = 1'b0;
        chk(o_f_flat[a * 5 + 2] === 1'b0, "w0c: hardware load 0 replaces the field");
        cov_hw_zero = cov_hw_zero + 1;
        // w2c
        hw_pulse(a, 3, 1'b1);
        coll_wr(a, 32'h0001_0000, 3, 1'b1);
        m_f[a][3] = 1'b1;
        chk(o_f_flat[a * 5 + 3] === 1'b1, "w2c: hardware load 1 wins over a software clear");
        cov_w2c_hw = cov_w2c_hw + 1;
        do_wr(a, 32'h0);                           // clear
        // r2c: hardware load wins over the read clear; the read returns the value before the clear
        c_inst = a; c_f = 4; c_val = 1'b1; arm_rd = 1;
        apb(1'b0, iaddr(a), 32'h0, 4'hF, 3'b000, 1'b0);
        chk(arm_rd === 1'b0, "r2c collision armed and fired");
        chk(last_rdata[15] === 1'b0, "r2c: the colliding read returns the value before the hardware load");
        m_f[a][4] = 1'b1;
        chk(o_f_flat[a * 5 + 4] === 1'b1, "r2c: hardware load 1 wins over the read clear");
        cov_r2c_hw = cov_r2c_hw + 1;
        do_rd(a);                                  // returns 1, clears
        chk(last_rdata[15] === 1'b1, "r2c: the next read returns the loaded 1");
        do_rd(a);
        chk(last_rdata[15] === 1'b0, "r2c: cleared by the previous read");
        // r2c with 1 stored and a hardware 0 in the read cycle
        hw_pulse(a, 4, 1'b1);
        c_inst = a; c_f = 4; c_val = 1'b0; arm_rd = 1;
        apb(1'b0, iaddr(a), 32'h0, 4'hF, 3'b000, 1'b0);
        chk(last_rdata[15] === 1'b1, "r2c: the colliding read returns the stored 1");
        m_f[a][4] = 1'b0;
        chk(o_f_flat[a * 5 + 4] === 1'b0, "r2c: field 0 after hardware 0 and read");
        cov_hw_zero = cov_hw_zero + 1;
      end
      chk_out("collisions");
    end
  endtask

  task automatic t_independence;
    integer a, b;
    begin
      model_reset;
      for (a = 0; a < NI; a = a + 1) begin
        ro_flat[a * 8 +: 8] = 8'h10 + a;
        do_wr(a, {8'h00, a[3:0] + 4'h1, 1'b1, 1'b0, 1'b1, 1'b0, 1'b0, 15'h0});
      end
      chk_out("independent writes");
      for (a = 0; a < NI; a = a + 1) do_rd(a);
      // r2c clears only the addressed index
      for (a = 0; a < NI; a = a + 1) hw_pulse(a, 4, 1'b1);
      for (a = 0; a < NI; a = a + 1) begin
        do_rd(a);                          // check data and clear of this index only
        for (b = 0; b < NI; b = b + 1) begin
          chk(o_f_flat[b * 5 + 4] === ((b > a) ? 1'b1 : 1'b0), "r2c clears only the addressed index");
        end
      end
      // addresses above the active monitor count, and other unmapped aligned addresses
      begin : unmapped
        reg [15:0] ua [0:7];
        integer q;
        ua[0] = 16'h0004; ua[1] = 16'h000C; ua[2] = 16'h010C; ua[3] = 16'h01FC;
        ua[4] = 16'h0200 + 4 * MC; ua[5] = 16'h0210; ua[6] = 16'h0300; ua[7] = 16'hFFFC;
        for (q = 0; q < 8; q = q + 1) begin
          apb(1'b0, ua[q], 32'h0, 4'hF, 3'b000, 1'b0);
          chk(last_err === 1'b0 && last_rdata === 32'h0, "read of an unmapped aligned address returns 0 without error");
          apb(1'b1, ua[q], 32'hFFFF_FFFF, 4'hF, 3'b000, 1'b0);
          chk(last_err === 1'b0, "write to an unmapped aligned address completes without error");
          cov_unmapped = cov_unmapped + 1;
        end
        chk_out("unmapped writes change nothing");
      end
    end
  endtask

  task automatic t_errors(input bit prot, input bit slv);
    integer a;
    begin
      do_wr(0, 32'h0050_0000);
      ro_flat[7:0] = 8'h5A;
      do_rd(0);
      good_rdata = last_rdata;
      // partial strobe
      apb(1'b1, 16'h0000, 32'h00A0_0000, 4'hE, 3'b000, 1'b0);
      if (slv) begin
        chk(last_err === 1'b1 && last_cycles == 2, "partial strobe: error response in the first ACCESS cycle");
        chk(o_mode_flat[3:0] === m_mode[0], "partial strobe: no field change");
        chk(prdata === good_rdata, "error response: PRDATA unchanged");
        cov_err = cov_err + 1;
      end else begin
        chk(last_err === 1'b0, "slverr off: partial strobe gives no error");
        m_write(0, 32'h00A0_0000);
        chk(o_mode_flat[3:0] === 4'hA, "slverr off: the whole word is stored");
      end
      // misaligned address
      apb(1'b1, 16'h0001, 32'h00B0_0000, 4'hF, 3'b000, 1'b0);
      if (slv) begin
        chk(last_err === 1'b1 && last_cycles == 2, "misaligned write: error response");
        cov_err = cov_err + 1;
      end else begin
        chk(last_err === 1'b0, "slverr off: misaligned address gives no error");
      end
      chk(o_mode_flat[3:0] === m_mode[0], "misaligned write: no field change");
      apb(1'b0, 16'h0003, 32'h0, 4'hF, 3'b000, 1'b0);
      if (slv) chk(last_err === 1'b1, "misaligned read: error response");
      else     chk(last_err === 1'b0 && last_rdata === 32'h0, "slverr off: a misaligned read matches no register");
      // non-secure access (PPROT[1])
      apb(1'b1, 16'h0000, 32'h00C0_0000, 4'hF, 3'b010, 1'b0);
      if (prot && slv) begin
        chk(last_err === 1'b1 && last_cycles == 2, "PPROT[1] with protect_en: error response");
        chk(o_mode_flat[3:0] === m_mode[0], "PPROT[1] error: no field change");
        cov_err = cov_err + 1;
      end else begin
        chk(last_err === 1'b0, "PPROT[1] without protect_en or slverr_en: no error");
        m_write(0, 32'h00C0_0000);
        chk(o_mode_flat[3:0] === 4'hC, "PPROT[1] ignored: write stored");
      end
      // other PPROT bits never cause an error
      apb(1'b1, 16'h0000, 32'h00D0_0000, 4'hF, 3'b101, 1'b0);
      chk(last_err === 1'b0, "PPROT[2] and PPROT[0] never cause an error");
      m_write(0, 32'h00D0_0000);
      // a read that follows an error returns the value of the last good read, then the new value
      apb(1'b0, 16'h0000, 32'h0, 4'hF, 3'b000, 1'b0);
      chk(last_err === 1'b0 && last_rdata === predict(0), "read after the error responses");
      // error is followed by a good transfer without a late PSLVERR
      chk(pslverr === 1'b0 || !slv, "PSLVERR is 0 after the transfer without error");
    end
  endtask

  // Wait states: sync mode takes three cycles from SETUP to PREADY, an error takes two.
  task automatic t_timing;
    integer a;
    begin
      for (a = 0; a < 6; a = a + 1) begin
        apb(a[0], 16'h0000, 32'h0010_0000 + a, 4'hF, 3'b000, 1'b0);
        if (a[0]) m_write(0, 32'h0010_0000 + a);
        if (ASYNC == 0) chk(last_cycles == 3, "CFG-SYNC: PREADY in the third cycle (one wait state)");
        else            chk(last_cycles >= 3, "CFG-ASYNC: PREADY after at least one wait state");
        if (a[0]) begin
          chk(last_mode0 === m_mode[0], "SVA-004: the field output is updated in the cycle with PREADY = 1 or before");
          cov_sva4 = cov_sva4 + 1;
        end
        else      m_f[0][4] = 1'b0;
      end
      // back-to-back transfers: the next SETUP starts in the cycle after PREADY
      apb(1'b1, 16'h0000, 32'h0030_0000, 4'hF, 3'b000, 1'b1);
      m_write(0, 32'h0030_0000);
      chk(last_err === 1'b0, "back-to-back: first transfer");
      apb(1'b0, 16'h0000, 32'h0, 4'hF, 3'b000, 1'b0);
      chk(last_rdata === predict(0), "back-to-back: second transfer reads the first write");
      m_f[0][4] = 1'b0;
      cov_b2b = cov_b2b + 1;
      // PRDATA keeps the last good read data across a write
      good_rdata = last_rdata;
      apb(1'b1, 16'h0000, 32'h0040_0000, 4'hF, 3'b000, 1'b0);
      m_write(0, 32'h0040_0000);
      chk(prdata === good_rdata, "PRDATA holds the last read data across a write");
    end
  endtask

  // Reset in the middle of a transfer abandons it (TEST-003).
  task automatic t_reset_mid;
    integer w;
    begin
      for (w = 0; w < 4; w = w + 1) begin
        model_reset;
        @(posedge clk_apb); #1;
        psel = 1; penable = 0; pwrite = 1; paddr = 16'h0000; pwdata = 32'h00F0_0000; pstrb = 4'hF; pprot = 0;
        @(posedge clk_apb); #1;
        penable = 1;
        repeat (w) @(posedge clk_apb);
        #1;
        rst_n_apb = 0; rst_n_reg = 0;
        #(P_APB * 2);
        chk(pready === 1'b0 && pslverr === 1'b0, "PREADY and PSLVERR are 0 while the reset is asserted");
        psel = 0; penable = 0;
        repeat (3) @(posedge clk_apb);
        #1; rst_n_apb = 1;
        @(posedge clk_reg); #1; rst_n_reg = 1;
        repeat (8) @(posedge clk_apb);
        chk(o_mode_flat[3:0] === 4'h0, "reset in a transfer: no late write");
        chk(pready === 1'b0, "reset in a transfer: PREADY stays 0");
        cov_rst_mid = cov_rst_mid + 1;
        chk_out("after reset in the middle of a transfer");
        model_reset;
      end
    end
  endtask

  // Random traffic with errors, unmapped addresses, hardware loads and a changing ro input.
  task automatic t_random(input integer n, input bit prot, input bit slv);
    integer q, a, sel;
    reg [31:0] d, e;
    reg [15:0] ad;
    reg [3:0]  st;
    reg [2:0]  pr;
    bit wr, err;
    integer inst, ff;
    begin
      for (q = 0; q < n; q = q + 1) begin
        rnd(e); sel = e[7:0];
        // hardware load in a quiet window
        if (e[15:12] < 3) begin
          inst = e[19:16] % NI;
          ff = e[22:20] % 5;
          hw_pulse(inst, ff, e[23]);
        end
        rnd(e);
        if (e[3:0] == 0) ro_flat = {e, e};
        // address
        rnd(e);
        case (e[3:0])
          0, 1:    ad = 16'h0004 + {e[9:4], 2'b00};                           // mostly unmapped aligned
          2:       ad = e[31:16];                                              // any, maybe misaligned
          default: ad = iaddr(e[10:8] % NI);
        endcase
        rnd(d);
        rnd(e);
        wr = e[0];
        st = (e[5:4] == 0) ? e[11:8] : 4'hF;
        pr = (e[7:6] == 0) ? e[14:12] : 3'b000;
        err = slv && ((prot && pr[1]) || (ad[1:0] != 2'b00) || (wr && st != 4'hF));
        apb(wr, ad, d, st, pr, 1'b0);
        a = lookup(ad);
        if (err) begin
          chk(last_err === 1'b1 && last_cycles == 2, "random: error response without wait state");
          cov_err = cov_err + 1;
        end else begin
          chk(last_err === 1'b0, "random: no error response");
          if (wr) begin
            cov_ok_wr = cov_ok_wr + 1;
            if (a >= 0) m_write(a, d);
          end else begin
            cov_ok_rd = cov_ok_rd + 1;
            if (a >= 0) begin
              chk(last_rdata === predict(a), "random: read data");
              m_f[a][4] = 1'b0;
            end else begin
              chk(last_rdata === 32'h0, "random: unmapped read returns 0");
            end
          end
          if (ASYNC == 0) chk(last_cycles == 3, "random: sync transfer takes three cycles");
        end
        chk_out("random");
      end
    end
  endtask

  // ------------------------------------------------------------------------------------------
  // Main sequence
  // ------------------------------------------------------------------------------------------
  initial begin
    model_reset;
    // Phase A: protect_en = 1, slverr_en = 1
    do_reset(1'b1, 1'b1);
    t_reset_values;
    t_fields;
    do_reset(1'b1, 1'b1);
    t_hw_and_sw_clear;
    do_reset(1'b1, 1'b1);
    t_collisions;
    do_reset(1'b1, 1'b1);
    t_independence;
    do_reset(1'b1, 1'b1);
    t_errors(1'b1, 1'b1);
    do_reset(1'b1, 1'b1);
    t_timing;
    do_reset(1'b1, 1'b1);
    t_reset_mid;
    do_reset(1'b1, 1'b1);
    t_random(RANDN, 1'b1, 1'b1);
    // Phase B: protect_en = 0, slverr_en = 1
    do_reset(1'b0, 1'b1);
    t_errors(1'b0, 1'b1);
    t_random(RANDN / 2, 1'b0, 1'b1);
    // Phase C: slverr_en = 0
    do_reset(1'b0, 1'b0);
    t_errors(1'b0, 1'b0);
    t_random(RANDN / 2, 1'b0, 1'b0);
    do_reset(1'b1, 1'b0);
    t_errors(1'b1, 1'b0);
    // Coverage of the cases that the plan requires
    chk(cov_rwi_sw > 0 && cov_w1c_hw > 0 && cov_w0c_hw > 0 && cov_w2c_hw > 0 && cov_r2c_hw > 0, "collision cases covered");
    chk(cov_sva1 > 0 && cov_sva4 > 0, "assertion monitors hit");
    chk(cov_err > 0 && cov_ok_wr > 0 && cov_ok_rd > 0 && cov_unmapped > 0 && cov_b2b > 0 && cov_rst_mid > 0, "access cases covered");
    $display("COVER rwi_sw=%0d w1c_hw=%0d w0c_hw=%0d w2c_hw=%0d r2c_hw=%0d hw0=%0d clr(w1c,w0c,w2c,r2c)=%0d,%0d,%0d,%0d",
             cov_rwi_sw, cov_w1c_hw, cov_w0c_hw, cov_w2c_hw, cov_r2c_hw, cov_hw_zero,
             cov_w1c_clear, cov_w0c_clear, cov_w2c_clear, cov_r2c_clear);
    $display("COVER sva001=%0d sva004=%0d", cov_sva1, cov_sva4);
    $display("COVER err=%0d ok_wr=%0d ok_rd=%0d unmapped=%0d b2b=%0d rst_mid=%0d", cov_err, cov_ok_wr, cov_ok_rd, cov_unmapped, cov_b2b, cov_rst_mid);
    if (n_fail == 0) $display("TB PASS ASYNC=%0d MC=%0d P_APB=%0d P_REG=%0d: %0d checks", ASYNC, MC, P_APB, P_REG, n_chk);
    else             $display("TB FAIL ASYNC=%0d MC=%0d P_APB=%0d P_REG=%0d: %0d of %0d checks failed", ASYNC, MC, P_APB, P_REG, n_fail, n_chk);
    $finish;
  end

  initial begin
    repeat (40000) #1_000_000;
    $display("TB FAIL: global timeout");
    $finish;
  end
endmodule
