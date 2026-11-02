#--------------------------------------------------------------------
# Project: APB-CSR-Generator
# Author: Trthinh (Ethan)
# Function: CSR Generation Tool
# Page: VLSI Technology
#
# Version 2.4: lint clean-up of the generated RTL (generate-loop names per rule HIE-05, 32-bit address
#   compares, one branch statement per line in the read decode); behavior unchanged from version 2.3.
#   A workbook with fewer than 11 columns (the older 7-column layout) is read without the repeat columns,
#   and a register may have several 'reserved' fields.
# Version 2.3: add fixed and parameterized register replication
# Version 2.2: add w0c, w2c, and r2c field types and a parameter-selected clock architecture
# Version 2.1: a hardware write to a w1c field has priority over a software clear in the same cycle
#   (version 2.0: software first); rwi keeps software first.
# Version 2.0: the generated RTL follows the VLSIT RTL Design Rule v2
#   (spec_template/VLSIT_RTL_Design_Rule.md of VLSIT_RTL_Generator_AI_Model):
#   names (i_clk_apb, i_apb_*, LPARA_*, reg_*, w_*), port layout, header,
#   process labels, case defaults, no latch, no unused declaration.
#   The behavior and the timing of version 1.2 are unchanged.
#--------------------------------------------------------------------

import argparse
import getpass
import os
import re
import shutil
import sys
from datetime import date, datetime

VERSION = "2.4"
RSVD_KEY = 'reserved'
VALID_BIT_TYPES = {'rw', 'ro', 'rwi', 'w1c', 'w0c', 'w2c', 'r2c'}
FLOW_NAME = "VLSIT RTL Generator AI Automation Flow"
FLOW_PAGE = "https://github.com/nguyenquanicd/APB-CSR-Generator"
SYNC_MODULE = "m_csr_sync"


def bit_width(field):
    if ":" in field:
        temp = field.replace("[", "")
        temp = temp.replace("]", "")
        temp = temp.split(':')
        return int(temp[0]) - int(temp[1]) + 1
    else:
        return 1


def parse_number(value, label):
    """Parse a non-negative decimal or hexadecimal workbook value."""
    try:
        if isinstance(value, float) and not value.is_integer():
            raise ValueError
        if isinstance(value, (int, float)):
            parsed = int(value)
        else:
            text = str(value).strip().replace("_", "")
            parsed = int(text, 16) if text.lower().startswith("0x") else int(text, 10)
        if parsed < 0:
            raise ValueError
        return parsed
    except (TypeError, ValueError):
        print(f"ERROR: {label} must be a non-negative decimal or hexadecimal integer; got {value!r}")
        sys.exit(1)


def offset_text(value):
    """Format an address as a fixed-width hexadecimal workbook value."""
    return f"0x{value:04x}"


def reset_literal(value, width, label):
    """Convert a workbook reset value into a sized hexadecimal RTL literal."""
    parsed = parse_number(value, label)
    if parsed >= (1 << width):
        print(f"ERROR: {label} value {value!r} does not fit in {width} bits")
        sys.exit(1)
    return f"{width}'h{parsed:x}"


def range_text(width):
    """Packed range of a field port: empty for one bit (rule TYP-06)."""
    return f"[{width - 1}:0]" if width > 1 else ""


class port:
    """One port or internal signal: direction input / output / logic, width in bits, optional width text."""
    def __init__(self, name, direction, width, width_text=None):
        if width < 1:
            print(f"ERROR: The width of port {name} is incorrect")
            sys.exit(1)
        self.name = name
        self.direction = direction
        self.width = width
        self.width_text = width_text if width_text is not None else range_text(width)

    def logic_rtl(self):
        space = f" {self.width_text}" if self.width_text else ""
        return f"  logic{space} {self.name};\n"


class port_group:
    """Ports of one function (rule FIL-06): a title comment and the ports."""
    def __init__(self, title, ports):
        self.title = title
        self.ports = ports


def ports_rtl(groups):
    """Port list in four aligned columns: direction, type, width, name (rules FIL-05, FIL-06, TYP-02)."""
    rows = []
    for g in groups:
        for p in g.ports:
            typ = "wire" if p.direction == "input" else "logic"
            rows.append((p.direction, typ, p.width_text, p.name))
    dir_col = max(len(r[0]) for r in rows) + 1
    typ_col = max(len(r[1]) for r in rows) + 1
    wid_col = max(len(r[2]) for r in rows)
    wid_col = wid_col + 1 if wid_col else 0
    total = len(rows)
    out = ""
    count = 0
    for gi, g in enumerate(groups):
        if gi:
            out += "\n"
        out += f"  // {g.title}\n"
        for p in g.ports:
            typ = "wire" if p.direction == "input" else "logic"
            count += 1
            comma = "," if count < total else ""
            out += "  " + p.direction.ljust(dir_col) + typ.ljust(typ_col) + p.width_text.ljust(wid_col) + p.name + comma + "\n"
    return out


class register:
    def __init__(self, name, offset, reset, description, bit_list, clock, reset_n):
        self.name = name
        self.offset = offset
        self.reset = reset
        self.description = description
        self.bit = bit_list
        self.clock = clock
        self.reset_n = reset_n
        self.port_list = []
        self.logic_list = []
        self.has_we = any(b.type in {'rw', 'rwi', 'w1c', 'w0c', 'w2c'} for b in self.bit)
        self.has_rd = any(b.type == 'r2c' for b in self.bit)
        self.lcparam = f"  localparam logic [31:0] LPARA_{self.name.upper()}_OFFSET = 32'h{self.offset[2:]},\n"
        self.we_rtl = ''
        self.rd_rtl = ''
        self.rtl = ''
        self.gen_port_logic()
        self.gen_rtl()

    def gen_port_logic(self):
        n = self.name
        if self.has_we:
            self.we_rtl = (f"  assign w_we_{n} = w_wr_en & (reg_addr == LPARA_{n.upper()}_OFFSET[LPARA_ADDR_W-1:0]);\n")
            self.logic_list.append(port(f"w_we_{n}", "logic", 1))
        if self.has_rd:
            self.rd_rtl = (f"  assign w_rd_{n} = w_rd_en & (reg_addr == LPARA_{n.upper()}_OFFSET[LPARA_ADDR_W-1:0]);\n")
            self.logic_list.append(port(f"w_rd_{n}", "logic", 1))
        for b in self.bit:
            if b.type == 'ro' and b.name != RSVD_KEY:
                self.port_list.append(port(f"i_{n}_{b.name}", "input", b.width))
            elif b.type == 'rw':
                self.port_list.append(port(f"o_{n}_{b.name}", "output", b.width))
                self.logic_list.append(port(f"reg_{n}_{b.name}", "logic", b.width))
                self.logic_list.append(port(f"w_{n}_{b.name}_nxt", "logic", b.width))
            elif b.type in {'rwi', 'w1c', 'w0c', 'w2c', 'r2c'}:
                self.port_list.append(port(f"o_{n}_{b.name}", "output", b.width))
                self.port_list.append(port(f"i_hw_wdata_{n}_{b.name}", "input", b.width))
                self.port_list.append(port(f"i_hw_we_{n}_{b.name}", "input", 1))
                self.logic_list.append(port(f"reg_{n}_{b.name}", "logic", b.width))
                self.logic_list.append(port(f"w_{n}_{b.name}_nxt", "logic", b.width))
        self.logic_list.append(port(f"w_{n}_value", "logic", 32, "[LPARA_DATA_W-1:0]"))

    def gen_rtl(self):
        n = self.name
        flops = [b for b in self.bit if b.type != 'ro']
        temp = ""
        for b in self.bit:
            b.next_value_cal()
            self.rtl += b.rtl
            if b.type == 'ro':
                if b.name != RSVD_KEY:
                    temp += f"    w_{n}_value{b.field} = i_{n}_{b.name};\n"
            else:
                temp += f"    w_{n}_value{b.field} = reg_{n}_{b.name};\n"
        if flops:
            reset_part = ""
            update_part = ""
            for b in flops:
                reset_val = reset_literal(b.reset_val, b.width, f"reset of {n}.{b.name}")
                reset_part += f"      reg_{n}_{b.name} <= {reset_val};\n"
                update_part += f"      reg_{n}_{b.name} <= w_{n}_{b.name}_nxt;\n"
            self.rtl += f'''
  // Register {n}: flops of the writable fields, reset to the field reset values.
  always_ff @(posedge {self.clock}, negedge {self.reset_n}) begin : p_ff_{n}
    if (!{self.reset_n}) begin
{reset_part[:-1]}
    end else begin
{update_part[:-1]}
    end
  end

  // Register {n}: output ports follow the flops.
'''
            for b in flops:
                self.rtl += f"  assign o_{n}_{b.name} = reg_{n}_{b.name};\n"
        self.rtl += f'''
  // Register {n}: read value from the fields; reserved bits read as 0.
  always_comb begin : p_com_{n}_value
    w_{n}_value = '0;
{temp[:-1]}
  end
'''


class bit:
    def __init__(self, name, field, type, reset_val, description, reg_group, async_option):
        self.name = name
        self.field = field
        self.type = type
        self.reset_val = reset_val
        self.description = description
        self.port_list = []
        self.logic_list = []
        self.width = bit_width(self.field)
        self.reg_group = reg_group
        self.rtl = ''

    def next_value_cal(self):
        r = self.reg_group
        nxt = f"w_{r}_{self.name}_nxt"
        cur = f"reg_{r}_{self.name}"
        space = " " * (len(f"  assign {nxt} = ("))
        if self.type == 'rw':
            self.rtl += f'''
  // {r}_{self.name} next value (rw): a software write loads it, otherwise hold.
  assign {nxt} = (w_we_{r}) ? reg_wdata{self.field} : {cur};
'''
        elif self.type == 'rwi':
            self.rtl += f'''
  // {r}_{self.name} next value (rwi): software write, then hardware write, then hold.
  assign {nxt} = (w_we_{r}) ? reg_wdata{self.field}
{space}: (i_hw_we_{r}_{self.name}) ? i_hw_wdata_{r}_{self.name}
{space}: {cur};
'''
        elif self.type == 'w1c':
            self.rtl += f'''
  // {r}_{self.name} next value (w1c): hardware write, then software 1 clears, then hold.
  assign {nxt} = (i_hw_we_{r}_{self.name}) ? i_hw_wdata_{r}_{self.name}
{space}: (w_we_{r}) ? (~reg_wdata{self.field} & {cur})
{space}: {cur};
'''
        elif self.type == 'w0c':
            self.rtl += f'''
  // {r}_{self.name} next value (w0c): hardware load wins; written zero bits clear.
  assign {nxt} = (i_hw_we_{r}_{self.name}) ? i_hw_wdata_{r}_{self.name}
{space}: (w_we_{r}) ? (reg_wdata{self.field} & {cur})
{space}: {cur};
'''
        elif self.type == 'w2c':
            self.rtl += f'''
  // {r}_{self.name} next value (w2c): hardware load wins; any software write clears all.
  assign {nxt} = (i_hw_we_{r}_{self.name}) ? i_hw_wdata_{r}_{self.name}
{space}: (w_we_{r}) ? '0
{space}: {cur};
'''
        elif self.type == 'r2c':
            self.rtl += f'''
  // {r}_{self.name} next value (r2c): hardware load wins; a read clears the field.
  assign {nxt} = (i_hw_we_{r}_{self.name}) ? i_hw_wdata_{r}_{self.name}
{space}: (w_rd_{r}) ? '0
{space}: {cur};
'''


class parameterized_register:
    """A register bank whose count is selected by an elaboration parameter."""
    def __init__(self, name, offset, reset, description, bit_list, clock, reset_n,
                 count_default, offset_stride, max_count):
        self.name = name
        self.base_offset = int(offset)
        self.offset = offset_text(self.base_offset)
        self.reset = reset
        self.description = description
        self.bit = bit_list
        self.clock = clock
        self.reset_n = reset_n
        self.count_default = int(count_default)
        self.offset_stride = int(offset_stride)
        self.max_count = int(max_count)
        self.count_parameter = f"PARA_{self.name.upper()}_COUNT"
        self.base_parameter = f"LPARA_{self.name.upper()}_BASE_OFFSET"
        self.stride_parameter = f"LPARA_{self.name.upper()}_OFFSET_STRIDE"
        self.max_parameter = f"LPARA_{self.name.upper()}_MAX_COUNT"
        self.has_we = any(b.type in {'rw', 'rwi', 'w1c', 'w0c', 'w2c'} for b in self.bit)
        self.has_rd = any(b.type == 'r2c' for b in self.bit)
        self.port_list = []
        self.logic_list = []
        self.we_rtl = ''
        self.rd_rtl = ''
        self.rtl = ''
        self.lcparam = (
            f"  localparam logic [31:0] {self.base_parameter} = 32'h{self.base_offset:04x},\n"
            f"  localparam logic [31:0] {self.stride_parameter} = 32'd{self.offset_stride},\n"
            f"  localparam logic [31:0] {self.max_parameter} = 32'd{self.max_count},\n"
        )
        self.gen_port_logic_rtl()
        self.gen_rtl()

    def _packed_width(self, field_width):
        suffix = f"[{self.count_parameter}-1:0]"
        if field_width > 1:
            suffix += f"[{field_width - 1}:0]"
        return suffix

    def gen_port_logic_rtl(self):
        n = self.name
        for b in self.bit:
            width_text = self._packed_width(b.width)
            if b.type == 'ro' and b.name != RSVD_KEY:
                self.port_list.append(port(f"i_{n}_{b.name}", "input", b.width * self.count_default, width_text))
            elif b.type != 'ro':
                self.port_list.append(port(f"o_{n}_{b.name}", "output", b.width * self.count_default, width_text))
                if b.type in {'rwi', 'w1c', 'w0c', 'w2c', 'r2c'}:
                    self.port_list.append(port(f"i_hw_wdata_{n}_{b.name}", "input", b.width * self.count_default, width_text))
                    self.port_list.append(port(f"i_hw_we_{n}_{b.name}", "input", self.count_default, f"[{self.count_parameter}-1:0]"))
                self.logic_list.append(port(f"reg_{n}_{b.name}", "logic", b.width * self.count_default, width_text))
                self.logic_list.append(port(f"w_{n}_{b.name}_nxt", "logic", b.width * self.count_default, width_text))
        if self.has_we:
            self.logic_list.append(port(f"w_we_{n}", "logic", self.count_default, f"[{self.count_parameter}-1:0]"))
        if self.has_rd:
            self.logic_list.append(port(f"w_rd_{n}", "logic", self.count_default, f"[{self.count_parameter}-1:0]"))
        self.logic_list.append(port(f"w_{n}_value", "logic", self.count_default * 32,
                                    f"[{self.count_parameter}-1:0][LPARA_DATA_W-1:0]"))
        self.we_rtl = f'''  // Decode a software write independently for every generated register index.
  generate
  for (genvar gen_idx = 0; (gen_idx < {self.count_parameter}) && (gen_idx < {self.max_parameter}); gen_idx++) begin : gen_{n}_we_decode
    assign w_we_{n}[gen_idx] = w_wr_en & (32'(reg_addr) == ({self.base_parameter} + (gen_idx * {self.stride_parameter})));
  end
  endgenerate
''' if self.has_we else ''
        self.rd_rtl = f'''  // Decode a software read independently for every generated register index.
  generate
  for (genvar gen_idx = 0; (gen_idx < {self.count_parameter}) && (gen_idx < {self.max_parameter}); gen_idx++) begin : gen_{n}_rd_decode
    assign w_rd_{n}[gen_idx] = w_rd_en & (32'(reg_addr) == ({self.base_parameter} + (gen_idx * {self.stride_parameter})));
  end
  endgenerate
''' if self.has_rd else ''

    def gen_rtl(self):
        n = self.name
        reset_part = ''
        update_part = ''
        next_part = ''
        value_part = ''
        stored_fields = [b for b in self.bit if b.type != 'ro']
        for b in stored_fields:
            reset_val = reset_literal(b.reset_val, b.width, f"reset of {n}.{b.name}")
            reset_part += f"        reg_{n}_{b.name}[gen_idx] <= {reset_val};\n"
            update_part += f"        reg_{n}_{b.name}[gen_idx] <= w_{n}_{b.name}_nxt[gen_idx];\n"
        for b in self.bit:
            cur = f"reg_{n}_{b.name}[gen_idx]"
            nxt = f"w_{n}_{b.name}_nxt[gen_idx]"
            if b.type == 'ro':
                if b.name != RSVD_KEY:
                    value_part += f"      w_{n}_value[gen_idx]{b.field} = i_{n}_{b.name}[gen_idx];\n"
            else:
                value_part += f"      w_{n}_value[gen_idx]{b.field} = {cur};\n"
                sw_we = f"w_we_{n}[gen_idx]"
                if b.type == 'rw':
                    expr = f"({sw_we}) ? reg_wdata{b.field} : {cur}"
                elif b.type == 'rwi':
                    expr = f"({sw_we}) ? reg_wdata{b.field} : (i_hw_we_{n}_{b.name}[gen_idx] ? i_hw_wdata_{n}_{b.name}[gen_idx] : {cur})"
                elif b.type == 'w1c':
                    expr = f"(i_hw_we_{n}_{b.name}[gen_idx]) ? i_hw_wdata_{n}_{b.name}[gen_idx] : ({sw_we} ? (~reg_wdata{b.field} & {cur}) : {cur})"
                elif b.type == 'w0c':
                    expr = f"(i_hw_we_{n}_{b.name}[gen_idx]) ? i_hw_wdata_{n}_{b.name}[gen_idx] : ({sw_we} ? (reg_wdata{b.field} & {cur}) : {cur})"
                elif b.type == 'w2c':
                    expr = f"(i_hw_we_{n}_{b.name}[gen_idx]) ? i_hw_wdata_{n}_{b.name}[gen_idx] : ({sw_we} ? '0 : {cur})"
                elif b.type == 'r2c':
                    expr = f"(i_hw_we_{n}_{b.name}[gen_idx]) ? i_hw_wdata_{n}_{b.name}[gen_idx] : (w_rd_{n}[gen_idx] ? '0 : {cur})"
                else:
                    continue
                next_part += f"    assign {nxt} = {expr};\n"
        ff_rtl = ''
        if stored_fields:
            ff_rtl = f'''    // One state bank per generated register index.
    always_ff @(posedge {self.clock}, negedge {self.reset_n}) begin : p_ff_{n}
      if (!{self.reset_n}) begin
{reset_part}      end else begin
{update_part}      end
    end
'''
        self.rtl = f'''
  // Parameterized register group {n}: indexed field updates and per-copy storage.
  generate
    for (genvar gen_idx = 0; (gen_idx < {self.count_parameter}) && (gen_idx < {self.max_parameter}); gen_idx++) begin : gen_{n}
{next_part}    always_comb begin : p_com_{n}_value
      w_{n}_value[gen_idx] = '0;
{value_part}    end
{ff_rtl}    end
  endgenerate
'''
        for b in stored_fields:
            self.rtl += f"  assign o_{n}_{b.name} = reg_{n}_{b.name};\n"


class apb_protocol:
    def __init__(self, data_wd, addr_wd, async_option):
        self.data_wd = data_wd
        self.addr_wd = addr_wd
        self.async_option = int(async_option)
        self.clk_bus = "i_clk_apb"
        self.rst_bus = "i_rst_n_apb"
        self.clk_reg = "i_clk_reg"
        self.rst_reg = "i_rst_n_reg"
        self.port_groups = []
        self.logic_list = []
        self.gen_port()
        self.gen_logic()
        self.apb_access()
        self.rw_rtl()

    def gen_port(self):
        g = [port_group("APB clock and reset", [port(self.clk_bus, "input", 1), port(self.rst_bus, "input", 1)]),
             port_group("Register clock and reset (used only in asynchronous mode)",
                        [port("i_clk_reg", "input", 1), port("i_rst_n_reg", "input", 1)])]
        g.append(port_group("APB slave interface", [
            port("i_apb_psel", "input", 1),
            port("i_apb_penable", "input", 1),
            port("i_apb_pwrite", "input", 1),
            port("i_apb_paddr", "input", self.addr_wd, "[LPARA_ADDR_W-1:0]"),
            port("i_apb_pwdata", "input", self.data_wd, "[LPARA_DATA_W-1:0]"),
            port("i_apb_pstrb", "input", 4, "[LPARA_STRB_W-1:0]"),
            port("i_apb_pprot", "input", 3),
            port("o_apb_pready", "output", 1),
            port("o_apb_pslverr", "output", 1),
            port("o_apb_prdata", "output", self.data_wd, "[LPARA_DATA_W-1:0]")]))
        g.append(port_group("Access check control", [port("i_protect_en", "input", 1), port("i_slverr_en", "input", 1)]))
        self.port_groups = g

    def gen_logic(self):
        L = self.logic_list
        for name in ("w_apb_setup", "w_apb_prot_ok", "w_apb_slverr", "w_apb_complete", "w_apb_wr", "w_apb_rd"):
            L.append(port(name, "logic", 1))
        L.append(port("reg_addr", "logic", self.addr_wd, "[LPARA_ADDR_W-1:0]"))
        L.append(port("reg_wdata", "logic", self.data_wd, "[LPARA_DATA_W-1:0]"))
        L.append(port("reg_slverr", "logic", 1))
        L.append(port("w_rd_en", "logic", 1))
        L.append(port("w_wr_en", "logic", 1))
        L.append(port("w_rd_ack_fall", "logic", 1))
        L.append(port("w_rdata_nxt", "logic", self.data_wd, "[LPARA_DATA_W-1:0]"))
        L.append(port("reg_rdata", "logic", self.data_wd, "[LPARA_DATA_W-1:0]"))
        L.append(port("w_clk_reg", "logic", 1))
        L.append(port("w_rst_n_reg", "logic", 1))

    def apb_access(self):
        cb, rb = self.clk_bus, self.rst_bus
        self.access = f"""
  // APB decode: the SETUP phase is PSEL high and PENABLE low and lasts one cycle per transfer.
  // A transfer is in error when the protection, the word alignment or the byte strobes fail
  // while i_slverr_en is 1.
  assign w_apb_setup    = i_apb_psel & ~i_apb_penable;
  assign w_apb_prot_ok  = i_protect_en ? ~i_apb_pprot[1] : 1'b1;
  assign w_apb_slverr   = i_slverr_en ? (~w_apb_prot_ok
                                         | (|i_apb_paddr[1:0])
                                         | (~&i_apb_pstrb & i_apb_pwrite)) : 1'b0;

  // Transfer without error, split into a write and a read.
  assign w_apb_complete = w_apb_setup & ~w_apb_slverr;
  assign w_apb_wr       = i_apb_pwrite & w_apb_complete;
  assign w_apb_rd       = ~i_apb_pwrite & w_apb_complete;

  // Address capture: holds the address of the last transfer without error.
  always_ff @(posedge {cb}, negedge {rb}) begin : p_ff_addr
    if (!{rb})
      reg_addr <= '0;
    else if (w_apb_complete)
      reg_addr <= i_apb_paddr;
  end

  // Write data capture: holds the data of the last write without error.
  always_ff @(posedge {cb}, negedge {rb}) begin : p_ff_wdata
    if (!{rb})
      reg_wdata <= '0;
    else if (w_apb_wr)
      reg_wdata <= i_apb_pwdata;
  end

  // Error response flop: loaded in every SETUP phase while i_slverr_en is 1, and held otherwise.
  always_ff @(posedge {cb}, negedge {rb}) begin : p_ff_slverr
    if (!{rb})
      reg_slverr <= 1'b0;
    else if (w_apb_setup & i_slverr_en)
      reg_slverr <= w_apb_slverr;
  end

  // PSLVERR output follows the error response flop.
  assign o_apb_pslverr = reg_slverr;
"""

    def rw_rtl(self):
        cb, rb, cr, rr = self.clk_bus, self.rst_bus, self.clk_reg, self.rst_reg
        async_rtl = f'''
      // Async-only request, acknowledge, and synchronizer state.
      logic w_rd_ack;
      logic w_rd_ack_bus;
      logic reg_rd_req;
      logic w_rd_req_nxt;
      logic reg_rd_ack_bus_dly;
      logic w_wr_ack;
      logic w_wr_ack_bus;
      logic reg_wr_req;
      logic w_wr_req_nxt;
      logic w_wr_ack_fall;
      logic reg_wr_ack_bus_dly;
      logic w_rd_req_reg;
      logic reg_rd_req_reg_dly;
      logic w_wr_req_reg;
      logic reg_wr_req_reg_dly;
      logic w_pready_nxt;
      logic reg_pready;

      // Read request and acknowledge toggles cross between the APB and register clocks.
      {SYNC_MODULE} #(
        .PARA_LEVELS (LPARA_SYNC_STAGES)
      ) u_rd_ack_sync (
        .i_clk_dst   ({cb}),
        .i_rst_n_dst ({rb}),
        .i_d         (w_rd_ack),
        .o_q         (w_rd_ack_bus)
      );

      // APB read request is set on a read and cleared by its synchronized acknowledge.
      assign w_rd_req_nxt  = w_rd_ack_bus ? 1'b0 : (w_apb_rd ? 1'b1 : reg_rd_req);
      assign w_rd_ack_fall = reg_rd_ack_bus_dly & ~w_rd_ack_bus;
      always_ff @(posedge {cb}, negedge {rb}) begin : p_ff_rd_req
        if (!{rb}) begin
          reg_rd_req         <= 1'b0;
          reg_rd_ack_bus_dly <= 1'b0;
        end else begin
          reg_rd_req         <= w_rd_req_nxt;
          reg_rd_ack_bus_dly <= w_rd_ack_bus;
        end
      end

      // APB write request uses an independent request/acknowledge toggle.
      {SYNC_MODULE} #(
        .PARA_LEVELS (LPARA_SYNC_STAGES)
      ) u_wr_ack_sync (
        .i_clk_dst   ({cb}),
        .i_rst_n_dst ({rb}),
        .i_d         (w_wr_ack),
        .o_q         (w_wr_ack_bus)
      );
      assign w_wr_req_nxt  = w_wr_ack_bus ? 1'b0 : (w_apb_wr ? 1'b1 : reg_wr_req);
      assign w_wr_ack_fall = reg_wr_ack_bus_dly & ~w_wr_ack_bus;
      always_ff @(posedge {cb}, negedge {rb}) begin : p_ff_wr_req
        if (!{rb}) begin
          reg_wr_req         <= 1'b0;
          reg_wr_ack_bus_dly <= 1'b0;
        end else begin
          reg_wr_req         <= w_wr_req_nxt;
          reg_wr_ack_bus_dly <= w_wr_ack_bus;
        end
      end

      // Read request is synchronized into the register clock domain.
      {SYNC_MODULE} #(
        .PARA_LEVELS (LPARA_SYNC_STAGES)
      ) u_rd_req_sync (
        .i_clk_dst   ({cr}),
        .i_rst_n_dst ({rr}),
        .i_d         (reg_rd_req),
        .o_q         (w_rd_req_reg)
      );
      always_ff @(posedge {cr}, negedge {rr}) begin : p_ff_rd_req_reg
        if (!{rr})
          reg_rd_req_reg_dly <= 1'b0;
        else
          reg_rd_req_reg_dly <= w_rd_req_reg;
      end
      assign w_rd_en  = ~reg_rd_req_reg_dly & w_rd_req_reg;
      assign w_rd_ack = reg_rd_req_reg_dly;

      // Write request is synchronized into the register clock domain.
      {SYNC_MODULE} #(
        .PARA_LEVELS (LPARA_SYNC_STAGES)
      ) u_wr_req_sync (
        .i_clk_dst   ({cr}),
        .i_rst_n_dst ({rr}),
        .i_d         (reg_wr_req),
        .o_q         (w_wr_req_reg)
      );
      always_ff @(posedge {cr}, negedge {rr}) begin : p_ff_wr_req_reg
        if (!{rr})
          reg_wr_req_reg_dly <= 1'b0;
        else
          reg_wr_req_reg_dly <= w_wr_req_reg;
      end
      assign w_wr_en  = ~reg_wr_req_reg_dly & w_wr_req_reg;
      assign w_wr_ack = reg_wr_req_reg_dly;

      // PREADY pulses after an acknowledged operation or a SETUP-phase error.
      assign w_pready_nxt = w_rd_ack_fall | w_wr_ack_fall | (w_apb_slverr & w_apb_setup);
      always_ff @(posedge {cb}, negedge {rb}) begin : p_ff_pready
        if (!{rb})
          reg_pready <= 1'b0;
        else
          reg_pready <= w_pready_nxt;
      end
      assign o_apb_pready = reg_pready;
'''
        sync_rtl = f'''
      // Synchronous-only request capture and response state.
      logic reg_rd_capture;
      logic reg_wr_capture;
      logic w_pready_nxt;
      logic reg_pready;

      // Read/write enables are delayed one cycle in synchronous mode.
      always_ff @(posedge {cb}, negedge {rb}) begin : p_ff_capture
        if (!{rb}) begin
          reg_rd_capture <= 1'b0;
          reg_wr_capture <= 1'b0;
        end else begin
          reg_rd_capture <= w_apb_rd;
          reg_wr_capture <= w_apb_wr;
        end
      end
      assign w_rd_en = reg_rd_capture;
      assign w_wr_en = reg_wr_capture;
      assign w_rd_ack_fall = 1'b0;

      // PREADY pulses after an operation or a SETUP-phase error.
      assign w_pready_nxt = w_wr_en | w_rd_en | (w_apb_slverr & w_apb_setup);
      always_ff @(posedge {cb}, negedge {rb}) begin : p_ff_pready
        if (!{rb})
          reg_pready <= 1'b0;
        else
          reg_pready <= w_pready_nxt;
      end
      assign o_apb_pready = reg_pready;
'''
        self.rtl_rw = f'''
  // Elaboration selects one clock architecture for this single RTL module.
  generate
    if (PARA_ASYNCHRONOUS == 32'd1) begin : g_async_csr
{async_rtl}
    end else begin : g_sync_csr
{sync_rtl}
    end
  endgenerate
'''

    def prdata_rtl(self, reg_list):
        items = ""
        parameterized = []
        for r in reg_list:
            if isinstance(r, parameterized_register):
                parameterized.append(r)
            else:
                items += f"      LPARA_{r.name.upper()}_OFFSET: w_rdata_nxt = w_{r.name}_value;\n"
        dynamic_decode = ""
        for r in parameterized:
            dynamic_items = ""
            for index in range(r.max_count):
                dynamic_items += (
                    f"          ({r.base_parameter} + (32'd{index} * {r.stride_parameter})): begin\n"
                    f"            if ({r.count_parameter} > 32'd{index})\n"
                    f"              w_rdata_nxt = w_{r.name}_value[{index}];\n"
                    f"          end\n"
                )
            dynamic_decode += f'''      if (({r.count_parameter} >= 32'd1) && ({r.count_parameter} <= {r.max_parameter})) begin
        case (32'(reg_addr))
{dynamic_items}          default: w_rdata_nxt = '0;
        endcase
      end
'''
        self.rtl_prdata = f'''
  // Read data mux returns zero for addresses that do not map to a register.
  always_comb begin : p_com_rdata
    w_rdata_nxt = '0;
    case (32'(reg_addr))
{items}      default: begin
        w_rdata_nxt = '0;
{dynamic_decode}      end
    endcase
  end

  // Read response storage follows the selected clock architecture.
  generate
    if (PARA_ASYNCHRONOUS == 32'd1) begin : g_async_rdata
      logic [LPARA_DATA_W-1:0] reg_rdata_bus;

      // Snapshot read data in the register clock domain.
      always_ff @(posedge i_clk_reg, negedge i_rst_n_reg) begin : p_ff_rdata
        if (!i_rst_n_reg)
          reg_rdata <= '0;
        else if (w_rd_en)
          reg_rdata <= w_rdata_nxt;
      end

      // The synchronized acknowledge qualifies the stable bundled read data.
      always_ff @(posedge i_clk_apb, negedge i_rst_n_apb) begin : p_ff_rdata_bus
        if (!i_rst_n_apb)
          reg_rdata_bus <= '0;
        else if (w_rd_ack_fall)
          reg_rdata_bus <= reg_rdata;
      end
      assign o_apb_prdata = reg_rdata_bus;
    end else begin : g_sync_rdata
      // Synchronous read data is captured in the APB/register clock domain.
      always_ff @(posedge i_clk_apb, negedge i_rst_n_apb) begin : p_ff_rdata
        if (!i_rst_n_apb)
          reg_rdata <= '0;
        else if (w_rd_en)
          reg_rdata <= w_rdata_nxt;
      end
      assign o_apb_prdata = reg_rdata;
    end
  endgenerate
'''


class sfr:
    def __init__(self, module_name, addr_wd, data_wd, reg_list, protocol, async_option, sheet="", project="APB-CSR-Generator", author=None):
        self.module_name = module_name
        self.addr_wd = addr_wd
        self.data_wd = data_wd
        self.async_option = async_option
        self.sheet = sheet
        self.project = project
        self.author = author if author else f"{getpass.getuser()} (user)"
        if protocol.lower() == 'apb':
            self.protocol = apb_protocol(data_wd=data_wd, addr_wd=addr_wd, async_option=async_option)
        else:
            print(f"ERROR: protocol {protocol} is not implemented")
            sys.exit(1)
        self.rtl = ''
        self.reg_list = reg_list
        self.gen_port_logic_rtl()

    def gen_port_logic_rtl(self):
        groups = list(self.protocol.port_groups)
        for r in self.reg_list:
            if r.port_list:
                title = f"Register bank {r.name}" if isinstance(r, parameterized_register) else f"Register {r.name}"
                groups.append(port_group(title, r.port_list))
        self.port_rtl = ports_rtl(groups)
        self.logic_rtl = ''
        for l in self.protocol.logic_list:
            self.logic_rtl += l.logic_rtl()
        for r in self.reg_list:
            for lr in r.logic_list:
                self.logic_rtl += lr.logic_rtl()

    def gen_json(self):
        reg_json = ''
        bracket_o = "{"
        bracket_c = "}"
        for r in self.reg_list:
            bit_json = ''
            reg_json += f'''        {bracket_o}
        "Register Name": "{r.name}",
        "Offset": "{r.offset}",
        "Repeat Mode": "{getattr(r, 'repeat_mode', 'NONE')}",
        "Count or Default": "{getattr(r, 'count_default', 1)}",
        "Offset Stride": "{getattr(r, 'offset_stride', 0)}",
        "Maximum Count": "{getattr(r, 'max_count', 1)}",
        "Reset Value": "{r.reset}",
        "Descriprtion": "{r.description}",
        "Bits": ['''
            for b in r.bit:
                bit_json += f'''
            {bracket_o}
                "Bit Name": "{b.name}",
                "Bit Type": "{b.type}",
                "Bit Field": "{b.field}",
                "Reset Value": "{b.reset_val}",
                "Description": "{b.description}"
            {bracket_c},'''
            reg_json += bit_json[:-1] + f"\n{' ' * 10}]\n" + f"{' ' * 8}{bracket_c},\n"

        reg_json = reg_json[:-2]
        self.json = f'''    {bracket_o}
    "Project": "APB-CSR-Generator",
    "Module": "JSON debug file",
    "Function": "Used to check the configuration after generation",
    "Author": "Trthinh (Ethan)",
    "Generator": "{getpass.getuser()}",
    "Generator version": "{VERSION}",
    "Page": "VLSI Technology",
    "Table - Configuration": [
    {bracket_o}
        "Module Name": "{self.module_name}",
        "Address Width": "{self.addr_wd}",
        "Data Width": "{self.data_wd}",
        "Protocol": "APB",
        "Asynchronous": "{self.async_option}"
    {bracket_c}
    ],
    "Table - Register Definition": [
{reg_json}
    ]
{bracket_c}'''

    def gen_rtl(self):
        header = f'''/*
 * Project      : {self.project}
 * Author       : {self.author}
 * AI Flow      : {FLOW_NAME}
 * AI Flow Page : {FLOW_PAGE}
 * Date         : {date.today().isoformat()}
 * Description  : APB4 CSR with synchronous or asynchronous register access.
 *                PARA_ASYNCHRONOUS selects the CDC architecture at elaboration.
 *                Synchronous mode selects i_clk_apb; i_clk_reg stays in the fixed port list.
 *                Generated by APB-CSR-Generator v{VERSION}; do not edit by hand.
 *                Source: sheet {self.sheet} of the CSR workbook.
 *                The RTL follows the VLSIT RTL Design Rule v2.
 */
`timescale 1ns/1ps
'''
        localparam_offset = ("  localparam logic [31:0] LPARA_ADDR_W = " + f"32'd{self.addr_wd},\n"
                             "  localparam logic [31:0] LPARA_DATA_W = " + f"32'd{self.data_wd},\n"
                             "  localparam logic [31:0] LPARA_STRB_W = " + f"32'd{self.data_wd // 8},\n")
        localparam_offset += "  localparam logic [31:0] LPARA_SYNC_STAGES = 32'd2,\n"
        reg_rtl = ''
        reg_we = ''
        reg_rd = ''
        parameter_lines = []
        for r in self.reg_list:
            localparam_offset += r.lcparam
            reg_rtl += r.rtl
            reg_we += r.we_rtl
            reg_rd += r.rd_rtl
            if isinstance(r, parameterized_register):
                parameter_lines.append(
                    f"  // Parameter Description: number of generated {r.name} registers.\n"
                    f"  // Parameter values: 1 through {r.max_count}; default follows the workbook.\n"
                    f"  // Parameter unit: register count\n"
                    f"  parameter logic [31:0] {r.count_parameter} = 32'd{r.count_default}"
                )
        localparam_offset = localparam_offset[:-2] + "\n"
        self.protocol.prdata_rtl(self.reg_list)
        enables_part = ""
        if reg_we or reg_rd:
            enables_part = f"\n  // Per-register write/read address enables.\n{reg_we}{reg_rd}"
        parameter_lines.insert(0,
            "  // Parameter Description: select asynchronous APB-to-register crossing logic.\n"
            "  // Parameter values: 0 (synchronous) or 1 (asynchronous); default follows the workbook.\n"
            "  // Parameter unit: none\n"
            f"  parameter logic [31:0] PARA_ASYNCHRONOUS = 32'd{int(self.async_option)}"
        )
        parameter_block = ",\n".join(parameter_lines)
        body = f'''
module {self.module_name} #(
{parameter_block},
{localparam_offset}) (
{self.port_rtl});

  // Internal signal declarations
{self.logic_rtl}
  // The parameter is constant at elaboration, so this selects a clock without a runtime mux.
  assign w_clk_reg   = (PARA_ASYNCHRONOUS == 32'd1) ? i_clk_reg : i_clk_apb;
  assign w_rst_n_reg = (PARA_ASYNCHRONOUS == 32'd1) ? i_rst_n_reg : i_rst_n_apb;
{self.protocol.access}{enables_part}{self.protocol.rtl_rw}{reg_rtl}{self.protocol.rtl_prdata}
endmodule
'''
        self.rtl = header + body


SYNC_MODEL = f'''/*
 * Project      : APB-CSR-Generator
 * Author       : Trthinh (Ethan) (user)
 * AI Flow      : {FLOW_NAME}
 * AI Flow Page : {FLOW_PAGE}
 * Date         : 2026-10-28
 * Description  : Behavioral synchronizer model of the generated CSR.
 *                One bit, PARA_LEVELS flip-flops in series.
 *                Placeholder: replace this file by a wrapper of the synchronizer cell of the
 *                technology library before tape-out; keep the module name and the port names.
 *                The RTL follows the VLSIT RTL Design Rule v2.
 */
`timescale 1ns/1ps

module {SYNC_MODULE} #(
  // Parameter Description: number of flip-flop stages of the synchronizer.
  // Parameter values: 2 or more; default is 2.
  // Parameter unit: count
  parameter logic [31:0] PARA_LEVELS = 2
) (
  // Destination clock and reset
  input  wire  i_clk_dst,
  input  wire  i_rst_n_dst,

  // Synchronized bit
  input  wire  i_d,
  output logic o_q
);

  // Internal signal declarations
  logic [PARA_LEVELS-1:0] reg_sync;

  // Synchronizer chain: the input is shifted through PARA_LEVELS flip-flops, cleared by the reset.
  always_ff @(posedge i_clk_dst, negedge i_rst_n_dst) begin : p_ff_sync
    if (!i_rst_n_dst)
      reg_sync <= '0;
    else
      reg_sync <= {{reg_sync[PARA_LEVELS-2:0], i_d}};
  end

  // Output mapping: the last stage is the synchronized bit.
  assign o_q = reg_sync[PARA_LEVELS-1];

endmodule
'''


def read_workbook(path, sheet_name):
    import openpyxl
    wb = openpyxl.load_workbook(path)
    ws = wb[sheet_name]

    def cell(row, col):
        """Value of a cell; None when the sheet is narrower than the column (7-column workbooks have no repeat columns)."""
        cells = ws[row]
        return cells[col].value if col < len(cells) else None

    start_config = 0
    start_reg = 0
    reg_list = []
    cfg = {}
    start_col = 0
    reg_col = start_col
    offset_col = start_col + 1
    reset_col = start_col + 5
    des_col = start_col + 6
    bit_name_col = start_col + 2
    bit_field_col = start_col + 3
    bit_type_col = start_col + 4
    repeat_mode_col = start_col + 7
    repeat_count_col = start_col + 8
    offset_stride_col = start_col + 9
    max_count_col = start_col + 10
    reg_name = ''
    raw_regs = []
    for row in range(1, ws.max_row + 1):
        if start_reg == 0:
            if start_config == 0:
                if 'Table - Configuration' in str(cell(row, start_col)):
                    start_config = 1
            else:
                label = str(cell(row, start_col))
                if 'Module Name' in label:
                    cfg['module_name'] = cell(row, start_col + 1)
                if 'Protocol' in label:
                    cfg['protocol'] = cell(row, start_col + 1)
                if 'Data Width' in label:
                    cfg['data_wd'] = int(cell(row, start_col + 1))
                if 'Address Width' in label:
                    cfg['addr_wd'] = int(cell(row, start_col + 1))
                if 'Asynchronous' in label:
                    cfg['async_option'] = int(cell(row, start_col + 1))
                if 'REGISTER' in label:
                    start_reg = 1
        else:
            if cell(row, 0) is not None:
                reg_name = cell(row, reg_col)
                raw_regs.append({"name": reg_name, "offset": cell(row, offset_col), "reset": cell(row, reset_col),
                                 "description": cell(row, des_col), "bits": [],
                                 "repeat_mode": cell(row, repeat_mode_col),
                                 "repeat_count": cell(row, repeat_count_col),
                                 "offset_stride": cell(row, offset_stride_col),
                                 "max_count": cell(row, max_count_col)})
            else:
                if not raw_regs:
                    continue
                bit_name = cell(row, bit_name_col)
                bit_field = cell(row, bit_field_col)
                if bit_name is None and bit_field is None:
                    continue    # an empty row of the sheet is not a field
                raw_regs[-1]["bits"].append((bit_name, bit_field, cell(row, bit_type_col),
                                             cell(row, reset_col), cell(row, des_col)))
    return cfg, raw_regs


def main():
    parser = argparse.ArgumentParser(description="APB-CSR-Generator: APB4 CSR RTL from an Excel register map")
    parser.add_argument("workbook")
    parser.add_argument("sheet")
    parser.add_argument("--out", default=os.getcwd(), help="folder that receives RTL/ and Debug/ (default: current folder)")
    parser.add_argument("--project", default="APB-CSR-Generator", help="Project field of the file header")
    parser.add_argument("--author", default=None, help="Author field of the file header, '<name> (user)'")
    args = parser.parse_args()

    print("Start the CSR Generation!")
    print("The register configured will be shown below!")
    script_path = os.path.dirname(os.path.realpath(__file__))
    cfg, raw_regs = read_workbook(args.workbook, args.sheet)
    for key in ('module_name', 'protocol', 'data_wd', 'addr_wd', 'async_option'):
        if key not in cfg:
            print(f"ERROR: the configuration table of the sheet {args.sheet} has no value for {key}")
            sys.exit(1)
    if int(cfg['async_option']) not in (0, 1):
        print("ERROR: Asynchronous must be 0 or 1")
        sys.exit(1)
    reg_list = []
    address_slots = set()
    generated_names = set()
    generated_parameter_names = {"PARA_ASYNCHRONOUS"}
    clock = 'w_clk_reg'
    reset_n = 'w_rst_n_reg'
    address_width = int(cfg['addr_wd'])
    data_width = int(cfg['data_wd'])
    if address_width < 1 or address_width > 32:
        print("ERROR: Address Width must be between 1 and 32 bits")
        sys.exit(1)
    if data_width < 8 or data_width > 32 or data_width % 8:
        print("ERROR: Data Width must be a byte multiple from 8 through 32 bits")
        sys.exit(1)
    word_bytes = data_width // 8
    max_address = (1 << address_width) - 1

    def validate_identifier(name, label):
        if not isinstance(name, str) or not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_$]*", name):
            print(f"ERROR: {label} must be a valid SystemVerilog identifier; got {name!r}")
            sys.exit(1)

    def add_address_range(name, base, stride, count):
        for index in range(count):
            address = base + (index * stride)
            if address > max_address:
                print(f"ERROR: register {name}_{index} address {offset_text(address)} exceeds Address Width {address_width}")
                sys.exit(1)
            if address % word_bytes:
                print(f"ERROR: register {name}_{index} address {offset_text(address)} is not aligned to {word_bytes} bytes")
                sys.exit(1)
            if address in address_slots:
                print(f"ERROR: register address {offset_text(address)} overlaps another register or repeated group")
                sys.exit(1)
            address_slots.add(address)

    for rr in raw_regs:
        base_name = str(rr["name"]).strip()
        validate_identifier(base_name, "Register name")
        base_offset = parse_number(rr["offset"], f"offset of register {base_name}")
        mode = str(rr.get("repeat_mode") or "NONE").strip().upper()
        if mode == "":
            mode = "NONE"
        if mode not in {"NONE", "FIXED", "PARAMETERIZED"}:
            print(f"ERROR: register {base_name} REPEAT MODE must be NONE, FIXED, or PARAMETERIZED; got {mode!r}")
            sys.exit(1)

        repeat_count = rr.get("repeat_count")
        stride_value = rr.get("offset_stride")
        max_count_value = rr.get("max_count")
        if mode == "NONE":
            if any(value not in (None, "") for value in (repeat_count, stride_value, max_count_value)):
                print(f"ERROR: register {base_name} has repeat metadata but REPEAT MODE is NONE")
                sys.exit(1)
            count = 1
            max_count = 1
            stride = word_bytes
        elif mode == "FIXED":
            if repeat_count in (None, ""):
                print(f"ERROR: register {base_name} FIXED mode requires COUNT / DEFAULT")
                sys.exit(1)
            count = parse_number(repeat_count, f"count of register {base_name}")
            if count < 1:
                print(f"ERROR: register {base_name} count must be at least 1")
                sys.exit(1)
            if count > 1 and stride_value in (None, ""):
                print(f"ERROR: register {base_name} FIXED mode with count > 1 requires OFFSET STRIDE")
                sys.exit(1)
            stride = parse_number(stride_value, f"offset stride of register {base_name}") if stride_value not in (None, "") else word_bytes
            max_count = count
            if max_count_value not in (None, ""):
                print(f"ERROR: register {base_name} FIXED mode must leave MAX COUNT blank")
                sys.exit(1)
        else:
            if repeat_count in (None, "") or max_count_value in (None, "") or stride_value in (None, ""):
                print(f"ERROR: register {base_name} PARAMETERIZED mode requires COUNT / DEFAULT, OFFSET STRIDE, and MAX COUNT")
                sys.exit(1)
            count = parse_number(repeat_count, f"default count of register {base_name}")
            max_count = parse_number(max_count_value, f"maximum count of register {base_name}")
            stride = parse_number(stride_value, f"offset stride of register {base_name}")
            if count < 1 or max_count < count:
                print(f"ERROR: register {base_name} requires 1 <= default count <= maximum count")
                sys.exit(1)

        if base_offset % word_bytes:
            print(f"ERROR: base offset of register {base_name} must be aligned to {word_bytes} bytes")
            sys.exit(1)
        if stride < word_bytes or stride % word_bytes:
            print(f"ERROR: register {base_name} OFFSET STRIDE must be a multiple of {word_bytes} bytes and at least one register wide")
            sys.exit(1)
        address_count = max_count if mode == "PARAMETERIZED" else count
        add_address_range(base_name, base_offset, stride, address_count)

        def make_bit_list(register_name):
            result = []
            seen_fields = set()
            for bit_name, bit_field, bit_type, bit_reset, bit_des in rr["bits"]:
                if bit_name is None or bit_field is None:
                    print(f"ERROR: register {register_name} contains a field without a name or bit range")
                    sys.exit(1)
                field_name = str(bit_name).strip()
                validate_identifier(field_name, f"Field name in {register_name}")
                if field_name in seen_fields and field_name != RSVD_KEY:     # several reserved ranges are legal
                    print(f"ERROR: register {register_name} has duplicate field name {field_name}")
                    sys.exit(1)
                seen_fields.add(field_name)
                normalized_type = str(bit_type).strip().lower()
                if normalized_type not in VALID_BIT_TYPES:
                    print(f"ERROR: unsupported bit type {bit_type!r}; supported types: {', '.join(sorted(VALID_BIT_TYPES))}")
                    sys.exit(1)
                print("Register: ", register_name, ", Bit name: ", field_name, ", Bit Type: ", normalized_type)
                result.append(bit(name=field_name, field=str(bit_field).strip(), type=normalized_type,
                                  reset_val=bit_reset, description=bit_des, reg_group=register_name,
                                  async_option=cfg['async_option']))
            if not result:
                print(f"ERROR: register {register_name} must define at least one field")
                sys.exit(1)
            return result

        if mode == "FIXED":
            for index in range(count):
                register_name = f"{base_name}_{index}"
                validate_identifier(register_name, "Generated register name")
                if register_name in generated_names:
                    print(f"ERROR: generated register name {register_name} is duplicated")
                    sys.exit(1)
                generated_names.add(register_name)
                reg = register(name=register_name, offset=offset_text(base_offset + index * stride),
                               reset=rr["reset"], description=rr["description"],
                               bit_list=make_bit_list(register_name), clock=clock, reset_n=reset_n)
                reg.repeat_mode = mode
                reg.count_default = count
                reg.offset_stride = stride
                reg.max_count = count
                reg_list.append(reg)
        elif mode == "PARAMETERIZED":
            if base_name in generated_names:
                print(f"ERROR: generated register group name {base_name} is duplicated")
                sys.exit(1)
            count_parameter = f"PARA_{base_name.upper()}_COUNT"
            if count_parameter in generated_parameter_names:
                print(f"ERROR: generated parameter name {count_parameter} is duplicated")
                sys.exit(1)
            generated_parameter_names.add(count_parameter)
            generated_names.add(base_name)
            reg = parameterized_register(name=base_name, offset=base_offset, reset=rr["reset"],
                                         description=rr["description"], bit_list=make_bit_list(base_name),
                                         clock=clock, reset_n=reset_n, count_default=count,
                                         offset_stride=stride, max_count=max_count)
            reg.repeat_mode = mode
            reg_list.append(reg)
        else:
            if base_name in generated_names:
                print(f"ERROR: register name {base_name} is duplicated")
                sys.exit(1)
            generated_names.add(base_name)
            reg = register(name=base_name, offset=offset_text(base_offset), reset=rr["reset"],
                           description=rr["description"], bit_list=make_bit_list(base_name),
                           clock=clock, reset_n=reset_n)
            reg.repeat_mode = mode
            reg.count_default = 1
            reg.offset_stride = word_bytes
            reg.max_count = 1
            reg_list.append(reg)
    localparam_names = {"LPARA_ADDR_W", "LPARA_DATA_W", "LPARA_STRB_W", "LPARA_SYNC_STAGES"}
    for reg in reg_list:
        if isinstance(reg, parameterized_register):
            names = {reg.base_parameter, reg.stride_parameter, reg.max_parameter}
        else:
            names = {f"LPARA_{reg.name.upper()}_OFFSET"}
        collisions = localparam_names & names
        if collisions:
            print(f"ERROR: generated localparam name collision: {', '.join(sorted(collisions))}")
            sys.exit(1)
        localparam_names.update(names)
    s = sfr(cfg['module_name'], cfg['addr_wd'], cfg['data_wd'], reg_list, cfg['protocol'], cfg['async_option'],
            sheet=args.sheet, project=args.project, author=args.author)
    s.gen_rtl()

    out = os.path.abspath(args.out)
    print("The output path: ", out)
    print("The tool path: ", script_path)
    rtl_path = out + "/RTL"
    os.makedirs(rtl_path, exist_ok=True)
    with open(rtl_path + '/' + s.module_name + '.sv', 'w') as f:
        f.write(s.rtl)
    models_path = rtl_path + '/models'
    os.makedirs(models_path, exist_ok=True)
    # Keep any library wrapper already installed at this path; otherwise create the model.
    if os.path.exists(models_path + '/' + SYNC_MODULE + '.sv'):
        print(f"Keep the existing models/{SYNC_MODULE}.sv")
    else:
        with open(models_path + '/' + SYNC_MODULE + '.sv', 'w') as f:
            f.write(SYNC_MODEL)
    with open(rtl_path + '/filelist.f', 'w') as f:
        f.write('// filelist.f - generated by APB-CSR-Generator; paths are relative to the folder of this file.\n')
        f.write(f'models/{SYNC_MODULE}.sv\n')
        f.write(s.module_name + '.sv\n')

    s.gen_json()
    debug_path = out + "/Debug"
    os.makedirs(debug_path, exist_ok=True)
    with open(debug_path + '/debug.json', 'w') as f:
        f.write(s.json)
    print("End of the CSR generation! Thank you.")


if __name__ == "__main__":
    main()
