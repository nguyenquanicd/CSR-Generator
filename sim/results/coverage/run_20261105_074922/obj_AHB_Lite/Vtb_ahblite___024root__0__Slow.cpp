// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ahblite.h for the primary calling header

#include "Vtb_ahblite__pch.h"

void Vtb_ahblite___024root___timing_ready(Vtb_ahblite___024root* vlSelf);

VL_ATTR_COLD void Vtb_ahblite___024root___eval_static(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_static\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0 
        = vlSelfRef.tb_ahblite__DOT__i_clk_ahb;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_rst_n_ahb__0 
        = vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_reg__0 
        = vlSelfRef.tb_ahblite__DOT__i_clk_reg;
    Vtb_ahblite___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ahblite___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_ahblite___024root___stl_sequent__TOP__0(Vtb_ahblite___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ahblite___024root___eval_stl(Vtb_ahblite___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_stl\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ahblite___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_ahblite___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_ahblite___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__stl(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_dump_triggers__stl\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_ahblite___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__ico(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_dump_triggers__ico\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_ahblite___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__act(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_dump_triggers__act\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_ahblite___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__nba(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_dump_triggers__nba\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_ahblite___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__obs(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_dump_triggers__obs\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_ahblite___024root___eval_dump_triggers__react(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_dump_triggers__react\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_ahblite___024root___eval_final(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_final\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_ahblite___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_ahblite___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb_ahblite___024root___stl_sequent__TOP__0(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___stl_sequent__TOP__0\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_rd_en;
    tb_ahblite__DOT__u_dut__DOT__w_rd_en = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_wr_en;
    tb_ahblite__DOT__u_dut__DOT__w_wr_en = 0;
    IData/*31:0*/ tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt;
    tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_addr_mapped;
    tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid;
    tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid = 0;
    CData/*1:0*/ tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp;
    tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_we_engine;
    tb_ahblite__DOT__u_dut__DOT__w_we_engine = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_rd_engine;
    tb_ahblite__DOT__u_dut__DOT__w_rd_engine = 0;
    IData/*31:0*/ tb_ahblite__DOT__u_dut__DOT__w_engine_value;
    tb_ahblite__DOT__u_dut__DOT__w_engine_value = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_we_port_0;
    tb_ahblite__DOT__u_dut__DOT__w_we_port_0 = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_rd_port_0;
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_0 = 0;
    IData/*31:0*/ tb_ahblite__DOT__u_dut__DOT__w_port_0_value;
    tb_ahblite__DOT__u_dut__DOT__w_port_0_value = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_we_port_1;
    tb_ahblite__DOT__u_dut__DOT__w_we_port_1 = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_rd_port_1;
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_1 = 0;
    IData/*31:0*/ tb_ahblite__DOT__u_dut__DOT__w_port_1_value;
    tb_ahblite__DOT__u_dut__DOT__w_port_1_value = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_we_port_2;
    tb_ahblite__DOT__u_dut__DOT__w_we_port_2 = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_rd_port_2;
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_2 = 0;
    IData/*31:0*/ tb_ahblite__DOT__u_dut__DOT__w_port_2_value;
    tb_ahblite__DOT__u_dut__DOT__w_port_2_value = 0;
    CData/*1:0*/ tb_ahblite__DOT__u_dut__DOT__w_we_monitor;
    tb_ahblite__DOT__u_dut__DOT__w_we_monitor = 0;
    CData/*1:0*/ tb_ahblite__DOT__u_dut__DOT__w_rd_monitor;
    tb_ahblite__DOT__u_dut__DOT__w_rd_monitor = 0;
    QData/*63:0*/ tb_ahblite__DOT__u_dut__DOT__w_monitor_value;
    tb_ahblite__DOT__u_dut__DOT__w_monitor_value = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_we_key;
    tb_ahblite__DOT__u_dut__DOT__w_we_key = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready;
    tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready = 0;
    // Body
    if (((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
         & (0U == (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))))) {
        ++(vlSelf->__Vcoverage[2414]);
    }
    if (((1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
         & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)))) {
        ++(vlSelf->__Vcoverage[2415]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) {
        ++(vlSelf->__Vcoverage[2416]);
    }
    if ((((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
          & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)) 
         & (0U != (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))))) {
        ++(vlSelf->__Vcoverage[2417]);
    }
    if ((((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
          & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)) 
         & (2U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)))) {
        ++(vlSelf->__Vcoverage[2418]);
    }
    if ((((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
          & (1U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) 
         & (0U != (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))))) {
        ++(vlSelf->__Vcoverage[2419]);
    }
    if ((((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
          & (1U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) 
         & (2U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)))) {
        ++(vlSelf->__Vcoverage[2420]);
    }
    if (((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
         & (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[2513]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2514]);
    }
    if ((2U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        ++(vlSelf->__Vcoverage[2515]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_clk_ahb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.tb_ahblite__DOT__i_clk_ahb, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_clk_ahb);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_clk_ahb 
            = vlSelfRef.tb_ahblite__DOT__i_clk_ahb;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_clk_reg) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_clk_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.tb_ahblite__DOT__i_clk_reg, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_clk_reg);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_clk_reg 
            = vlSelfRef.tb_ahblite__DOT__i_clk_reg;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_rst_n_ahb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 4, vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_rst_n_ahb);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_rst_n_ahb 
            = vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_reg) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_rst_n_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6, vlSelfRef.tb_ahblite__DOT__i_rst_n_reg, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_rst_n_reg);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_rst_n_reg 
            = vlSelfRef.tb_ahblite__DOT__i_rst_n_reg;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hsel))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8, vlSelfRef.tb_ahblite__DOT__i_ahb_hsel, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hsel);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hsel 
            = vlSelfRef.tb_ahblite__DOT__i_ahb_hsel;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10, vlSelfRef.tb_ahblite__DOT__i_ahb_hready, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hready);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hready 
            = vlSelfRef.tb_ahblite__DOT__i_ahb_hready;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_htrans)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 12, vlSelfRef.tb_ahblite__DOT__i_ahb_htrans, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_htrans);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_htrans 
            = vlSelfRef.tb_ahblite__DOT__i_ahb_htrans;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_haddr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_haddr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 16, vlSelfRef.tb_ahblite__DOT__i_ahb_haddr, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_haddr);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_haddr 
            = vlSelfRef.tb_ahblite__DOT__i_ahb_haddr;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hwrite))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 48, vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hwrite);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hwrite 
            = vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsize) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hsize)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 50, vlSelfRef.tb_ahblite__DOT__i_ahb_hsize, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hsize);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hsize 
            = vlSelfRef.tb_ahblite__DOT__i_ahb_hsize;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hburst) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hburst)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 56, vlSelfRef.tb_ahblite__DOT__i_ahb_hburst, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hburst);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hburst 
            = vlSelfRef.tb_ahblite__DOT__i_ahb_hburst;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hwdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 62, vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hwdata);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_ahb_hwdata 
            = vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__o_data_value 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__o_data_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 194, vlSelfRef.tb_ahblite__DOT__o_data_value, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_data_value);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_data_value 
            = vlSelfRef.tb_ahblite__DOT__o_data_value;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 258, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clear_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 322, vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clear_key_data);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clear_key_data 
            = vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_engine_events) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_engine_events)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 324, vlSelfRef.tb_ahblite__DOT__cov_i_engine_events, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_engine_events);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_engine_events 
            = vlSelfRef.tb_ahblite__DOT__cov_i_engine_events;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_port_0_event_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_0_event_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 340, vlSelfRef.tb_ahblite__DOT__cov_i_port_0_event_count, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_0_event_count);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_0_event_count 
            = vlSelfRef.tb_ahblite__DOT__cov_i_port_0_event_count;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 356, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_start 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 358, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_start 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 360, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_fault 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 362, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_fault 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 364, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_pending 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 366, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_pending 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 368, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_overflow 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 370, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_overflow 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 372, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_done 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 374, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_done 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_port_1_event_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_1_event_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 376, vlSelfRef.tb_ahblite__DOT__cov_i_port_1_event_count, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_1_event_count);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_1_event_count 
            = vlSelfRef.tb_ahblite__DOT__cov_i_port_1_event_count;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 392, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_start 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 394, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_start 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 396, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_fault 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 398, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_fault 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 400, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_pending 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 402, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_pending 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 404, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_overflow 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 406, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_overflow 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 408, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_done 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 410, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_done 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_port_2_event_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_2_event_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 412, vlSelfRef.tb_ahblite__DOT__cov_i_port_2_event_count, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_2_event_count);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_port_2_event_count 
            = vlSelfRef.tb_ahblite__DOT__cov_i_port_2_event_count;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 428, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_start 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 430, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_start 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 432, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_fault 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 434, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_fault 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 436, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_pending 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 438, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_pending 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 440, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_overflow 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 442, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_overflow 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 444, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_done 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 446, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_done 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_capture)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 480, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_capture);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_capture 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_capture)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 484, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_capture);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_capture 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_error) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_error)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 488, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_error, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_error);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_error 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_error)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 492, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_error);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_error 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 496, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_pending 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 500, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_pending 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 504, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_overflow 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 508, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_overflow 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_match) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 512, vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_match, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_match);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_match 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 516, vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_match);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_match 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_clear_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 520, vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_clear_monitor_key_fragment);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_clear_monitor_key_fragment 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__wo_write_word 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_write_word))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 524, vlSelfRef.tb_ahblite__DOT__wo_write_word, vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_write_word);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_write_word 
            = vlSelfRef.tb_ahblite__DOT__wo_write_word;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__wo_partial_write_data 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 588, vlSelfRef.tb_ahblite__DOT__wo_partial_write_data, vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_data);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_data 
            = vlSelfRef.tb_ahblite__DOT__wo_partial_write_data;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 652, vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr, vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_addr);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_addr 
            = vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__wo_after_partial 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_after_partial))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 684, vlSelfRef.tb_ahblite__DOT__wo_after_partial, vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_after_partial);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_after_partial 
            = vlSelfRef.tb_ahblite__DOT__wo_after_partial;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 748, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_start 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 750, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_start 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 752, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_fault 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 754, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_fault 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 756, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_pending 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 758, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_pending 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 760, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_overflow 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 762, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_overflow 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 764, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_done 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 766, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_done 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 866, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 874, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_start);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 876, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_fault);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 878, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 880, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 882, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 884, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 892, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_start);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 894, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_fault);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 896, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 898, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 900, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 902, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 910, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_start);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 912, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_fault);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 914, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 916, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 918, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 920, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 928, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_start);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 930, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_fault);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 932, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 934, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 936, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_capture)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 954, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_capture);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_capture 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_error)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 958, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_error);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_error 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 962, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 966, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 970, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1272, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1304, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1306, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1312, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state;
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1336, 
                               (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count));
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1342, 
                               (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)), vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid 
            = (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count));
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3025, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3027, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3029, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3271, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3273, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3275, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count;
    }
    if ((0U != (0x000000ffU & ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count) 
                               ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 448, vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count 
            = ((0xff00U & (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count)) 
               | (0x000000ffU & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count)));
    }
    if ((0U != (0x000000ffU & (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count) 
                                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count)) 
                               >> 8U)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 464, 
                               ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count) 
                                >> 8U), ((IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count) 
                                         >> 8U));
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count 
            = ((0x00ffU & (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count)) 
               | (0x0000ff00U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count)));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                               ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 938, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold 
            = ((0xf0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
               | (0x0000000fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 946, 
                               ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                >> 4U), ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold) 
                                         >> 4U));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold 
            = ((0x0fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
               | (0x000000f0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    if ((0U != (0x00007fffU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                               ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 974, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x3fff8000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != (0x00007fffU & ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
                               >> 0x0000000fU)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 1004, 
                               (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                >> 0x0000000fU), (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
                                                  >> 0x0000000fU));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x3fff8000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 1452, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                               [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1626, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                               [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
            [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[0U] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 2889, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[0U], vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[0U];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[1U] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 2957, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[1U], vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[1U];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[0U] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 3059, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[0U], vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[0U];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[1U] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 3165, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[1U], vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[1U];
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
        = (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr]);
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 0U;
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 0U;
    if ((4U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 0U;
            ++(vlSelf->__Vcoverage[2511]);
        } else if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 0U;
            ++(vlSelf->__Vcoverage[2511]);
        } else {
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 1U;
            ++(vlSelf->__Vcoverage[2510]);
        }
    } else if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 1U;
            ++(vlSelf->__Vcoverage[2509]);
        } else {
            if ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
                if ((0U == (3U & (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                                          [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr] 
                                          >> 0x20U))))) {
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
                    ++(vlSelf->__Vcoverage[2504]);
                } else {
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 1U;
                    ++(vlSelf->__Vcoverage[2505]);
                }
                ++(vlSelf->__Vcoverage[2506]);
            } else {
                ++(vlSelf->__Vcoverage[2507]);
            }
            ++(vlSelf->__Vcoverage[2508]);
        }
    } else if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 0U;
        ++(vlSelf->__Vcoverage[2503]);
    } else {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
        ++(vlSelf->__Vcoverage[2502]);
    }
    ++(vlSelf->__Vcoverage[2512]);
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 0U;
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))));
        ++(vlSelf->__Vcoverage[2425]);
        ++(vlSelf->__Vcoverage[2428]);
        ++(vlSelf->__Vcoverage[2429]);
    } else if ((1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) {
        if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))) {
            ++(vlSelf->__Vcoverage[2439]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 0x0cU;
            ++(vlSelf->__Vcoverage[2437]);
            ++(vlSelf->__Vcoverage[2441]);
        } else {
            ++(vlSelf->__Vcoverage[2434]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 3U;
            ++(vlSelf->__Vcoverage[2432]);
            ++(vlSelf->__Vcoverage[2440]);
        }
        ++(vlSelf->__Vcoverage[2442]);
    } else if ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 0x0fU;
        ++(vlSelf->__Vcoverage[2443]);
    } else {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 0U;
        ++(vlSelf->__Vcoverage[2444]);
    }
    ++(vlSelf->__Vcoverage[2445]);
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok 
        = ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
           | (((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
               & (0U == (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)))) 
              | ((~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)) 
                 & (1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)))));
    vlSelfRef.__Vdfg_Regularize_108 = (0x0000000fU 
                                       & (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                                  >> 0x00000030U)));
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
        = ((((0x0000ff00U & ((- (IData)((1U & (IData)(
                                                      (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                                       [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                                       >> 0x00000033U))))) 
                             << 8U)) | (0x000000ffU 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                                                 [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                                                 >> 0x00000032U))))))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                                                      [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                                                      >> 0x00000031U))))) 
                                               << 8U)) 
                               | (0x000000ffU & (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                                                       [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                                                       >> 0x00000030U))))))));
    vlSelfRef.__Vdfg_Regularize_107 = (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                               [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                               >> 0x00000010U));
    vlSelfRef.__Vdfg_Regularize_109 = (1U & (IData)(
                                                    (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                                     [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                                     >> 0x00000034U)));
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs 
        = ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
           & (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)));
    tb_ahblite__DOT__u_dut__DOT__w_engine_value = (
                                                   (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_engine_events) 
                                                     << 0x00000018U) 
                                                    | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode) 
                                                        << 0x00000014U) 
                                                       | (((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow))) 
                                                          << 0x00000010U))) 
                                                   | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done) 
                                                      << 0x0000000fU));
    tb_ahblite__DOT__u_dut__DOT__w_port_0_value = (
                                                   (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_port_0_event_count) 
                                                     << 0x00000018U) 
                                                    | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode) 
                                                        << 0x00000014U) 
                                                       | (((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow))) 
                                                          << 0x00000010U))) 
                                                   | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done) 
                                                      << 0x0000000fU));
    tb_ahblite__DOT__u_dut__DOT__w_port_1_value = (
                                                   (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_port_1_event_count) 
                                                     << 0x00000018U) 
                                                    | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode) 
                                                        << 0x00000014U) 
                                                       | (((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow))) 
                                                          << 0x00000010U))) 
                                                   | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done) 
                                                      << 0x0000000fU));
    tb_ahblite__DOT__u_dut__DOT__w_port_2_value = (
                                                   (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_port_2_event_count) 
                                                     << 0x00000018U) 
                                                    | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode) 
                                                        << 0x00000014U) 
                                                       | (((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow))) 
                                                          << 0x00000010U))) 
                                                   | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done) 
                                                      << 0x0000000fU));
    tb_ahblite__DOT__u_dut__DOT__w_monitor_value = 
        (((QData)((IData)(((((0x0000ff00U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count)) 
                             | ((0x000000f0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold)) 
                                | ((((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture)) 
                                     | (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                                              >> 1U))) 
                                    << 2U) | ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow) 
                                                    >> 1U)))))) 
                            << 0x00000010U) | (0x00008000U 
                                               & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                                                  << 0x0000000eU))))) 
          << 0x00000020U) | (QData)((IData)(((((0x0000ff00U 
                                                & ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count) 
                                                   << 8U)) 
                                               | ((0x000000f0U 
                                                   & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow)))))) 
                                              << 0x00000010U) 
                                             | (0x00008000U 
                                                & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                                                   << 0x0000000fU))))));
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr 
        = (0xfffcU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                             [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr]));
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 130, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hreadyout))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 126, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hreadyout);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hreadyout 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hresp))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 128, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hresp);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hresp 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1324, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite) 
                              << 4U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb)))) 
            << 0x00000030U) | (((QData)((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata)) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))));
    if (((1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok))) {
        ++(vlSelf->__Vcoverage[2458]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok)))) {
        ++(vlSelf->__Vcoverage[2459]);
    }
    if ((1U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        ++(vlSelf->__Vcoverage[2460]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok)))) {
        ++(vlSelf->__Vcoverage[2454]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) 
         & (0x0fU == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb)))) {
        ++(vlSelf->__Vcoverage[2455]);
    }
    if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) {
        ++(vlSelf->__Vcoverage[2456]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) 
         & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite)))) {
        ++(vlSelf->__Vcoverage[2457]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_size_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1318, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_size_ok);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_size_ok 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok;
    }
    if ((1U ^ ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) 
               ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_bad_access)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1320, 
                               (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok)), vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_bad_access);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_bad_access 
            = (1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok)));
    }
    tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid 
        = ((1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
           & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok));
    if ((0U != ((IData)(vlSelfRef.__Vdfg_Regularize_108) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1130, vlSelfRef.__Vdfg_Regularize_108, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb 
            = vlSelfRef.__Vdfg_Regularize_108;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wmask))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1138, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wmask);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wmask 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask;
    }
    if ((0U != (vlSelfRef.__Vdfg_Regularize_107 ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1066, vlSelfRef.__Vdfg_Regularize_107, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wdata);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wdata 
            = vlSelfRef.__Vdfg_Regularize_107;
    }
    if (((IData)(vlSelfRef.__Vdfg_Regularize_109) ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1694, vlSelfRef.__Vdfg_Regularize_109, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_write);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_write 
            = vlSelfRef.__Vdfg_Regularize_109;
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs))) {
        ++(vlSelf->__Vcoverage[3033]);
    }
    if ((2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3034]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs)))) {
        ++(vlSelf->__Vcoverage[3035]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3036]);
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs))) {
        ++(vlSelf->__Vcoverage[3040]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs)))) {
        ++(vlSelf->__Vcoverage[3041]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3042]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1344, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_ready 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs;
    }
    tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready 
        = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs) 
           | (2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)));
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_engine_value 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1722, tb_ahblite__DOT__u_dut__DOT__w_engine_value, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_value);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_value 
            = tb_ahblite__DOT__u_dut__DOT__w_engine_value;
    }
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_port_0_value 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1808, tb_ahblite__DOT__u_dut__DOT__w_port_0_value, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_value);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_value 
            = tb_ahblite__DOT__u_dut__DOT__w_port_0_value;
    }
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_port_1_value 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1894, tb_ahblite__DOT__u_dut__DOT__w_port_1_value, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_value);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_value 
            = tb_ahblite__DOT__u_dut__DOT__w_port_1_value;
    }
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_port_2_value 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1980, tb_ahblite__DOT__u_dut__DOT__w_port_2_value, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_value);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_value 
            = tb_ahblite__DOT__u_dut__DOT__w_port_2_value;
    }
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__w_monitor_value) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value)))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2148, (IData)(tb_ahblite__DOT__u_dut__DOT__w_monitor_value), (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0xffffffff00000000ULL & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | (IData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_monitor_value)));
    }
    if ((0U != ((IData)((tb_ahblite__DOT__u_dut__DOT__w_monitor_value 
                         >> 0x00000020U)) ^ (IData)(
                                                    (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                     >> 0x00000020U))))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2212, (IData)(
                                                                       (tb_ahblite__DOT__u_dut__DOT__w_monitor_value 
                                                                        >> 0x00000020U)), (IData)(
                                                                                (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                                                >> 0x00000020U)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0x00000000ffffffffULL & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | ((QData)((IData)((IData)((tb_ahblite__DOT__u_dut__DOT__w_monitor_value 
                                           >> 0x00000020U)))) 
                  << 0x00000020U));
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1034, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr;
    }
    vlSelfRef.__Vdfg_Regularize_110 = (((0x0204U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                        << 1U) | (0x0200U 
                                                  == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)));
    tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt = 0U;
    tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 0U;
    if (((((((((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
               | (0x0100U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
              | (0x0104U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
             | (0x0108U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
            | (0x0200U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
           | (0x0204U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
          | (0x0208U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
         | (0x020cU == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = tb_ahblite__DOT__u_dut__DOT__w_engine_value;
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2870]);
        } else if ((0x0100U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = tb_ahblite__DOT__u_dut__DOT__w_port_0_value;
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2871]);
        } else if ((0x0104U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = tb_ahblite__DOT__u_dut__DOT__w_port_1_value;
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2872]);
        } else if ((0x0108U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = tb_ahblite__DOT__u_dut__DOT__w_port_2_value;
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2873]);
        } else if ((0x0200U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = (IData)(tb_ahblite__DOT__u_dut__DOT__w_monitor_value);
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2874]);
            ++(vlSelf->__Vcoverage[2876]);
        } else if ((0x0204U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = (IData)((tb_ahblite__DOT__u_dut__DOT__w_monitor_value 
                           >> 0x20U));
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2877]);
            ++(vlSelf->__Vcoverage[2879]);
        } else if ((0x0208U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            ++(vlSelf->__Vcoverage[2881]);
            ++(vlSelf->__Vcoverage[2882]);
        } else {
            ++(vlSelf->__Vcoverage[2884]);
            ++(vlSelf->__Vcoverage[2885]);
        }
    } else if ((0x0400U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
        ++(vlSelf->__Vcoverage[2886]);
    } else {
        tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 0U;
        ++(vlSelf->__Vcoverage[2887]);
    }
    ++(vlSelf->__Vcoverage[2888]);
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 1346, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1332, tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_valid);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_valid 
            = tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid;
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2520]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2521]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2522]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1340, tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_ready 
            = tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs 
        = ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
           & (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready));
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1206, tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_addr_mapped))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1270, tb_ahblite__DOT__u_dut__DOT__w_addr_mapped, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_addr_mapped);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_addr_mapped 
            = tb_ahblite__DOT__u_dut__DOT__w_addr_mapped;
    }
    if (tb_ahblite__DOT__u_dut__DOT__w_addr_mapped) {
        ++(vlSelf->__Vcoverage[2533]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_0 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2534]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_0 = 1U;
    }
    tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_0;
    if (tb_ahblite__DOT__u_dut__DOT__w_addr_mapped) {
        ++(vlSelf->__Vcoverage[2531]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped)))) {
        ++(vlSelf->__Vcoverage[2532]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
         & (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3037]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3038]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[3039]);
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs))) {
        ++(vlSelf->__Vcoverage[3281]);
    }
    if ((2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3282]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[3283]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3284]);
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs))) {
        ++(vlSelf->__Vcoverage[3288]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[3289]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3290]);
    }
    if ((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
          & (~ (IData)(vlSelfRef.__Vdfg_Regularize_109))) 
         & (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped))) {
        ++(vlSelf->__Vcoverage[2523]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped)))) {
        ++(vlSelf->__Vcoverage[2524]);
    }
    if (vlSelfRef.__Vdfg_Regularize_109) {
        ++(vlSelf->__Vcoverage[2525]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[2526]);
    }
    if ((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
          & (IData)(vlSelfRef.__Vdfg_Regularize_109)) 
         & (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped))) {
        ++(vlSelf->__Vcoverage[2527]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped)))) {
        ++(vlSelf->__Vcoverage[2528]);
    }
    if ((1U & (~ (IData)(vlSelfRef.__Vdfg_Regularize_109)))) {
        ++(vlSelf->__Vcoverage[2529]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[2530]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1338, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready 
        = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
           | (2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)));
    tb_ahblite__DOT__u_dut__DOT__w_rd_en = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
                                            & ((~ (IData)(vlSelfRef.__Vdfg_Regularize_109)) 
                                               & (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped)));
    tb_ahblite__DOT__u_dut__DOT__w_wr_en = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
                                            & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped) 
                                               & (IData)(vlSelfRef.__Vdfg_Regularize_109)));
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_resp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1696, tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_resp);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_resp 
            = tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3285]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3286]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid)))) {
        ++(vlSelf->__Vcoverage[3287]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1334, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_ready 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs 
        = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready) 
           & (IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid));
    if (tb_ahblite__DOT__u_dut__DOT__w_rd_en) {
        ++(vlSelf->__Vcoverage[2535]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2536]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2558]);
    }
    if ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2559]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2560]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0100U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2561]);
    }
    if ((0x0100U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2562]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2563]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0104U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2564]);
    }
    if ((0x0104U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2565]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2566]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0108U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2567]);
    }
    if ((0x0108U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2568]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2569]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0200U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2570]);
    }
    if ((0x0200U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2571]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2572]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0204U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2573]);
    }
    if ((0x0204U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2574]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2575]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1202, tb_ahblite__DOT__u_dut__DOT__w_rd_en, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_en);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_en 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_en;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data 
        = (((QData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp)) 
            << 0x00000020U) | (QData)((IData)((tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                                               & (- (IData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))))));
    tb_ahblite__DOT__u_dut__DOT__w_rd_engine = ((0U 
                                                 == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en));
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_0 = ((0x0100U 
                                                 == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en));
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_1 = ((0x0104U 
                                                 == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en));
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_2 = ((0x0108U 
                                                 == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en));
    tb_ahblite__DOT__u_dut__DOT__w_rd_monitor = ((IData)(vlSelfRef.__Vdfg_Regularize_110) 
                                                 & (- (IData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en))));
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2537]);
    }
    if ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2538]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2539]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0100U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2540]);
    }
    if ((0x0100U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2541]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2542]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0104U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2543]);
    }
    if ((0x0104U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2544]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2545]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0108U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2546]);
    }
    if ((0x0108U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2547]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2548]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0200U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2549]);
    }
    if ((0x0200U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2550]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2551]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0204U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2552]);
    }
    if ((0x0204U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2553]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2554]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0400U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2555]);
    }
    if ((0x0400U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2556]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2557]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1204, tb_ahblite__DOT__u_dut__DOT__w_wr_en, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wr_en);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wr_en 
            = tb_ahblite__DOT__u_dut__DOT__w_wr_en;
    }
    tb_ahblite__DOT__u_dut__DOT__w_we_key = ((0x0400U 
                                              == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                             & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_engine = ((0U 
                                                 == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_port_0 = ((0x0100U 
                                                 == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_port_1 = ((0x0104U 
                                                 == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_port_2 = ((0x0108U 
                                                 == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_monitor = ((IData)(vlSelfRef.__Vdfg_Regularize_110) 
                                                 & (- (IData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en))));
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3279, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs;
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1558, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_engine) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1702, tb_ahblite__DOT__u_dut__DOT__w_rd_engine, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_engine);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_engine 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_engine;
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2611]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_6 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done;
    } else {
        ++(vlSelf->__Vcoverage[2614]);
        if (tb_ahblite__DOT__u_dut__DOT__w_rd_engine) {
            ++(vlSelf->__Vcoverage[2612]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_6 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2613]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_6 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_6;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2609]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done)))) {
        ++(vlSelf->__Vcoverage[2610]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_port_0) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1788, tb_ahblite__DOT__u_dut__DOT__w_rd_port_0, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_0);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_port_0;
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_done) {
        ++(vlSelf->__Vcoverage[2656]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_12 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_done;
    } else {
        ++(vlSelf->__Vcoverage[2659]);
        if (tb_ahblite__DOT__u_dut__DOT__w_rd_port_0) {
            ++(vlSelf->__Vcoverage[2657]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_12 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2658]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_12 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_12;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_done) {
        ++(vlSelf->__Vcoverage[2654]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_done)))) {
        ++(vlSelf->__Vcoverage[2655]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_port_1) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1874, tb_ahblite__DOT__u_dut__DOT__w_rd_port_1, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_1);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_port_1;
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_done) {
        ++(vlSelf->__Vcoverage[2701]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_18 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_done;
    } else {
        ++(vlSelf->__Vcoverage[2704]);
        if (tb_ahblite__DOT__u_dut__DOT__w_rd_port_1) {
            ++(vlSelf->__Vcoverage[2702]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_18 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2703]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_18 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_18;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_done) {
        ++(vlSelf->__Vcoverage[2699]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_done)))) {
        ++(vlSelf->__Vcoverage[2700]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_port_2) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1960, tb_ahblite__DOT__u_dut__DOT__w_rd_port_2, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_2);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_port_2;
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_done) {
        ++(vlSelf->__Vcoverage[2746]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_24 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_done;
    } else {
        ++(vlSelf->__Vcoverage[2749]);
        if (tb_ahblite__DOT__u_dut__DOT__w_rd_port_2) {
            ++(vlSelf->__Vcoverage[2747]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_24 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2748]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_24 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_24;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_done) {
        ++(vlSelf->__Vcoverage[2744]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_done)))) {
        ++(vlSelf->__Vcoverage[2745]);
    }
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_monitor) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2144, tb_ahblite__DOT__u_dut__DOT__w_rd_monitor, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_monitor);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_monitor 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_monitor;
    }
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match))) {
        ++(vlSelf->__Vcoverage[2791]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_30 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_match));
    } else {
        ++(vlSelf->__Vcoverage[2794]);
        if ((1U & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_monitor))) {
            ++(vlSelf->__Vcoverage[2792]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_30 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2793]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_30 
                = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_30));
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match))) {
        ++(vlSelf->__Vcoverage[2789]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match)))) {
        ++(vlSelf->__Vcoverage[2790]);
    }
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match))) {
        ++(vlSelf->__Vcoverage[2842]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_38 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_match) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[2845]);
        if ((2U & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_monitor))) {
            ++(vlSelf->__Vcoverage[2843]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_38 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2844]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_38 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_38) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match))) {
        ++(vlSelf->__Vcoverage[2840]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2841]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_key) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_key))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2276, tb_ahblite__DOT__u_dut__DOT__w_we_key, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_key);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_key 
            = tb_ahblite__DOT__u_dut__DOT__w_we_key;
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2860]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_42 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2863]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask))) {
            ++(vlSelf->__Vcoverage[2861]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_41 
                = ((vlSelfRef.__Vdfg_Regularize_107 
                    & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                   | (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)));
        } else {
            ++(vlSelf->__Vcoverage[2862]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_41 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data;
        }
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_42 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_41;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_42;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2858]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data)))) {
        ++(vlSelf->__Vcoverage[2859]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1700, tb_ahblite__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = tb_ahblite__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2582]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2583]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2576]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2577]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2578]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2579]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2580]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2581]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2605]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_5 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2608]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_108)))) {
            ++(vlSelf->__Vcoverage[2606]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_5 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2607]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_5;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2603]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow)))) {
        ++(vlSelf->__Vcoverage[2604]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2587]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2590]);
        if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start) {
            ++(vlSelf->__Vcoverage[2588]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2 
                = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start;
        } else {
            ++(vlSelf->__Vcoverage[2589]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2584]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2585]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2586]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2593]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault;
    } else {
        ++(vlSelf->__Vcoverage[2596]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2594]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2595]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2591]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault)))) {
        ++(vlSelf->__Vcoverage[2592]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2599]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending;
    } else {
        ++(vlSelf->__Vcoverage[2602]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2600]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_107 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2601]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2597]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending)))) {
        ++(vlSelf->__Vcoverage[2598]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1786, tb_ahblite__DOT__u_dut__DOT__w_we_port_0, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_0);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_0 
            = tb_ahblite__DOT__u_dut__DOT__w_we_port_0;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2627]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2628]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2621]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2622]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2623]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2624]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2625]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2626]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_overflow) {
        ++(vlSelf->__Vcoverage[2650]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_11 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2653]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_108)))) {
            ++(vlSelf->__Vcoverage[2651]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_11 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2652]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_11 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_11;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_overflow) {
        ++(vlSelf->__Vcoverage[2648]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_overflow)))) {
        ++(vlSelf->__Vcoverage[2649]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2632]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_8 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2635]);
        if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_start) {
            ++(vlSelf->__Vcoverage[2633]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_8 
                = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_start;
        } else {
            ++(vlSelf->__Vcoverage[2634]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_8 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_8;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2629]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2630]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2631]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_fault) {
        ++(vlSelf->__Vcoverage[2638]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_9 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_fault;
    } else {
        ++(vlSelf->__Vcoverage[2641]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2639]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_9 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2640]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_9 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_9;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_fault) {
        ++(vlSelf->__Vcoverage[2636]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_fault)))) {
        ++(vlSelf->__Vcoverage[2637]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_pending) {
        ++(vlSelf->__Vcoverage[2644]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_pending;
    } else {
        ++(vlSelf->__Vcoverage[2647]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2645]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_10 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_107 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2646]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_10 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_10;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_pending) {
        ++(vlSelf->__Vcoverage[2642]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_pending)))) {
        ++(vlSelf->__Vcoverage[2643]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1872, tb_ahblite__DOT__u_dut__DOT__w_we_port_1, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_1);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_1 
            = tb_ahblite__DOT__u_dut__DOT__w_we_port_1;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2672]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2673]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2666]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2667]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2668]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2669]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2670]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2671]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_overflow) {
        ++(vlSelf->__Vcoverage[2695]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_17 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2698]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_108)))) {
            ++(vlSelf->__Vcoverage[2696]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_17 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2697]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_17 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_17;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_overflow) {
        ++(vlSelf->__Vcoverage[2693]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_overflow)))) {
        ++(vlSelf->__Vcoverage[2694]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2677]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_14 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2680]);
        if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_start) {
            ++(vlSelf->__Vcoverage[2678]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_14 
                = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_start;
        } else {
            ++(vlSelf->__Vcoverage[2679]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_14 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_14;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2674]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2675]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2676]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_fault) {
        ++(vlSelf->__Vcoverage[2683]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_15 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_fault;
    } else {
        ++(vlSelf->__Vcoverage[2686]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2684]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_15 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2685]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_15 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_15;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_fault) {
        ++(vlSelf->__Vcoverage[2681]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_fault)))) {
        ++(vlSelf->__Vcoverage[2682]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_pending) {
        ++(vlSelf->__Vcoverage[2689]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_pending;
    } else {
        ++(vlSelf->__Vcoverage[2692]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2690]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_16 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_107 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2691]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_16 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_16;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_pending) {
        ++(vlSelf->__Vcoverage[2687]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_pending)))) {
        ++(vlSelf->__Vcoverage[2688]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1958, tb_ahblite__DOT__u_dut__DOT__w_we_port_2, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_2);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_2 
            = tb_ahblite__DOT__u_dut__DOT__w_we_port_2;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2717]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2718]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2711]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2712]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2713]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2714]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2715]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2716]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_overflow) {
        ++(vlSelf->__Vcoverage[2740]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_23 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2743]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_108)))) {
            ++(vlSelf->__Vcoverage[2741]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_23 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2742]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_23 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_23;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_overflow) {
        ++(vlSelf->__Vcoverage[2738]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_overflow)))) {
        ++(vlSelf->__Vcoverage[2739]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2722]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_20 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2725]);
        if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_start) {
            ++(vlSelf->__Vcoverage[2723]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_20 
                = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_start;
        } else {
            ++(vlSelf->__Vcoverage[2724]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_20 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_20;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2719]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2720]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2721]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_fault) {
        ++(vlSelf->__Vcoverage[2728]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_21 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_fault;
    } else {
        ++(vlSelf->__Vcoverage[2731]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2729]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_21 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2730]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_21 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_21;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_fault) {
        ++(vlSelf->__Vcoverage[2726]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_fault)))) {
        ++(vlSelf->__Vcoverage[2727]);
    }
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_pending) {
        ++(vlSelf->__Vcoverage[2734]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_pending;
    } else {
        ++(vlSelf->__Vcoverage[2737]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2735]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_22 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_107 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2736]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_22 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_22;
    if (vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_pending) {
        ++(vlSelf->__Vcoverage[2732]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_pending)))) {
        ++(vlSelf->__Vcoverage[2733]);
    }
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2140, tb_ahblite__DOT__u_dut__DOT__w_we_monitor, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_monitor);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_monitor 
            = tb_ahblite__DOT__u_dut__DOT__w_we_monitor;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2762]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2763]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25 
            = (0x0000000fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25;
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2756]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2757]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2758]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2759]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2760]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2761]);
    }
    if ((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2813]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_33 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2814]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_33 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                              >> 4U));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_33;
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2807]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2808]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2809]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2810]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2811]);
    }
    if ((1U & (~ ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2812]);
    }
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow))) {
        ++(vlSelf->__Vcoverage[2785]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_overflow));
    } else {
        ++(vlSelf->__Vcoverage[2788]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_108)))) {
            ++(vlSelf->__Vcoverage[2786]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_29 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2787]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_29 
                = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_29));
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow))) {
        ++(vlSelf->__Vcoverage[2783]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow)))) {
        ++(vlSelf->__Vcoverage[2784]);
    }
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow))) {
        ++(vlSelf->__Vcoverage[2836]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_37 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_overflow) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[2839]);
        if ((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_108)))) {
            ++(vlSelf->__Vcoverage[2837]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_37 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2838]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_37 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_37) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow))) {
        ++(vlSelf->__Vcoverage[2834]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2835]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2767]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_26 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture))
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2770]);
        if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture))) {
            ++(vlSelf->__Vcoverage[2768]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_26 
                = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture));
        } else {
            ++(vlSelf->__Vcoverage[2769]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_26 
                = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_26));
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2764]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2765]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2766]);
    }
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error))) {
        ++(vlSelf->__Vcoverage[2773]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_27 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_error));
    } else {
        ++(vlSelf->__Vcoverage[2776]);
        if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                   & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                      >> 0x12U)))) {
            ++(vlSelf->__Vcoverage[2774]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_27 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                         & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x12U))));
        } else {
            ++(vlSelf->__Vcoverage[2775]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_27 
                = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_27));
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error))) {
        ++(vlSelf->__Vcoverage[2771]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error)))) {
        ++(vlSelf->__Vcoverage[2772]);
    }
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending))) {
        ++(vlSelf->__Vcoverage[2779]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_28 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_pending));
    } else {
        ++(vlSelf->__Vcoverage[2782]);
        if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                   & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                      >> 0x11U)))) {
            ++(vlSelf->__Vcoverage[2780]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_28 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                         & ((vlSelfRef.__Vdfg_Regularize_107 
                             >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                             >> 0x11U)))));
        } else {
            ++(vlSelf->__Vcoverage[2781]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_28 
                = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_28));
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending))) {
        ++(vlSelf->__Vcoverage[2777]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending)))) {
        ++(vlSelf->__Vcoverage[2778]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2818]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_34 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture))
                                     ? ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture) 
                                        >> 1U) : ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                                                  >> 1U)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2821]);
        if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture))) {
            ++(vlSelf->__Vcoverage[2819]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_34 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture) 
                         >> 1U));
        } else {
            ++(vlSelf->__Vcoverage[2820]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_34 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_34) 
              << 1U));
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2815]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2816]);
    }
    if ((1U & (~ ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2817]);
    }
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error))) {
        ++(vlSelf->__Vcoverage[2824]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_35 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_error) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[2827]);
        if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                      >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                >> 0x00000012U)))) {
            ++(vlSelf->__Vcoverage[2825]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_35 
                = (IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                            >> 1U) & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                                         >> 0x12U))));
        } else {
            ++(vlSelf->__Vcoverage[2826]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_35 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_35) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error))) {
        ++(vlSelf->__Vcoverage[2822]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2823]);
    }
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending))) {
        ++(vlSelf->__Vcoverage[2830]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_36 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_pending) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[2833]);
        if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                      >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                >> 0x00000011U)))) {
            ++(vlSelf->__Vcoverage[2831]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_36 
                = (IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                            >> 1U) & ((vlSelfRef.__Vdfg_Regularize_107 
                                       >> 0x11U) | 
                                      (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                          >> 0x11U)))));
        } else {
            ++(vlSelf->__Vcoverage[2832]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_36 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_36) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending))) {
        ++(vlSelf->__Vcoverage[2828]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2829]);
    }
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2797]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_32 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2800]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
            ++(vlSelf->__Vcoverage[2798]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_31 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_107 
                                   & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                                  | (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                     & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask))));
        } else {
            ++(vlSelf->__Vcoverage[2799]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_31 
                = (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment);
        }
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_32 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_31;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_32;
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2795]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[2796]);
    }
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2848]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_40 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2851]);
        if ((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
            ++(vlSelf->__Vcoverage[2849]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_39 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_107 
                                   & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                                  | ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                      >> 0x0fU) & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask))));
        } else {
            ++(vlSelf->__Vcoverage[2850]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_39 
                = (0x00007fffU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                  >> 0x0fU));
        }
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_40 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_39;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_40;
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2846]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2847]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1720, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1806, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1892, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1978, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2076, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2278, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1704, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1718, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1712, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1714, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1716, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1790, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1804, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1798, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1800, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1802, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1876, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1890, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1884, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1886, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1888, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1962, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1976, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1970, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1972, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1974, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__) 
                               ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2044, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0xf0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                               ^ ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                  >> 4U))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2052, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__, 
                               ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                >> 4U));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0x0fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2072, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2060, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2064, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2068, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt;
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__) 
                               ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2080, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x3fff8000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                               ^ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                  >> 0x0000000fU))))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2110, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__, 
                               (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                >> 0x0000000fU));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                  << 0x0000000fU));
    }
}

bool Vtb_ahblite___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_ahblite___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_ahblite___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_ahblite___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_ahblite.i_clk_ahb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_ahblite.i_rst_n_ahb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_ahblite.i_clk_ahb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge tb_ahblite.i_clk_reg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ahblite___024root___ctor_var_reset(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___ctor_var_reset\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_ahblite__DOT__i_clk_ahb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15343532744124913585ull);
    vlSelf->tb_ahblite__DOT__i_clk_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10852215268039704897ull);
    vlSelf->tb_ahblite__DOT__i_rst_n_ahb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17541755132705951197ull);
    vlSelf->tb_ahblite__DOT__i_rst_n_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6840621824637882356ull);
    vlSelf->tb_ahblite__DOT__i_ahb_hsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4099513992268521654ull);
    vlSelf->tb_ahblite__DOT__i_ahb_hready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8308559251334066746ull);
    vlSelf->tb_ahblite__DOT__i_ahb_htrans = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16115005854009818705ull);
    vlSelf->tb_ahblite__DOT__i_ahb_haddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1605987288318025529ull);
    vlSelf->tb_ahblite__DOT__i_ahb_hwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14100123118714278137ull);
    vlSelf->tb_ahblite__DOT__i_ahb_hsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16304972856991181757ull);
    vlSelf->tb_ahblite__DOT__i_ahb_hburst = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11339732332605198659ull);
    vlSelf->tb_ahblite__DOT__i_ahb_hwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8663204981448825799ull);
    vlSelf->tb_ahblite__DOT__o_data_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12648129716466779445ull);
    vlSelf->tb_ahblite__DOT__i_hw_clear_key_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6115380308700521069ull);
    vlSelf->tb_ahblite__DOT__cov_i_engine_events = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17712110328443018009ull);
    vlSelf->tb_ahblite__DOT__cov_i_port_0_event_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 773720921190365817ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_0_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9130089048905858684ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_0_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1243661356323004669ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_0_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6939200464742300765ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_0_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7421554719626936992ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_0_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17502640013852424196ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_0_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9557027845679748005ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_0_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11143498536177788065ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_0_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10683972266596210093ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_0_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6832268822172115011ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_0_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11547487262136362181ull);
    vlSelf->tb_ahblite__DOT__cov_i_port_1_event_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15265846453848172307ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_1_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1047423931768560060ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_1_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17889691313580117960ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_1_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4678292235334862567ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_1_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14953978363093645432ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_1_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8281167434064659677ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_1_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1912682948209259081ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_1_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8258128595890842232ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_1_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5067716270872639775ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5841059472239301675ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12262676451575082549ull);
    vlSelf->tb_ahblite__DOT__cov_i_port_2_event_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3061844780010594435ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_2_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6260030288682194509ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_2_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17627904654023902672ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_2_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17087325354450109155ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_2_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3748695444584096598ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_2_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12585222066729517290ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_2_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13559399726656972745ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_2_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12941700605552866468ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_2_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10448800490848986548ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_port_2_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3534088409002906233ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_port_2_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12053312927649104962ull);
    vlSelf->tb_ahblite__DOT__cov_i_monitor_sample_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4669436414711268710ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1584818977266967277ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_monitor_capture = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12263332842664565499ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_monitor_error = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3573677302923133334ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_monitor_error = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13618358033465357572ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_monitor_pending = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 677340280527509868ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_monitor_pending = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2599962146613467560ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_monitor_overflow = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3161108087783695884ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_monitor_overflow = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16870503406467019926ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_wdata_monitor_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11946328083496254025ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_we_monitor_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5010245848410106111ull);
    vlSelf->tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10886414935898692511ull);
    vlSelf->tb_ahblite__DOT__wo_write_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2491154274905342929ull);
    vlSelf->tb_ahblite__DOT__wo_partial_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9746535950008946023ull);
    vlSelf->tb_ahblite__DOT__wo_partial_write_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8504019348807254101ull);
    vlSelf->tb_ahblite__DOT__wo_after_partial = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9594708012123865825ull);
    vlSelf->tb_ahblite__DOT__i_hw_wdata_engine_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15026378135569434618ull);
    vlSelf->tb_ahblite__DOT__i_hw_we_engine_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652003034566204865ull);
    vlSelf->tb_ahblite__DOT__i_hw_wdata_engine_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17487878653484241226ull);
    vlSelf->tb_ahblite__DOT__i_hw_we_engine_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2560615726139613270ull);
    vlSelf->tb_ahblite__DOT__i_hw_wdata_engine_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5076965776003348889ull);
    vlSelf->tb_ahblite__DOT__i_hw_we_engine_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 894285733064374531ull);
    vlSelf->tb_ahblite__DOT__i_hw_wdata_engine_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11357549078269025191ull);
    vlSelf->tb_ahblite__DOT__i_hw_we_engine_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1100885114947856470ull);
    vlSelf->tb_ahblite__DOT__i_hw_wdata_engine_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17404639276951232327ull);
    vlSelf->tb_ahblite__DOT__i_hw_we_engine_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5484758442848386040ull);
    vlSelf->tb_ahblite__DOT____Vtogcov__i_clk_ahb = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_clk_reg = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_rst_n_ahb = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_rst_n_reg = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_ahb_hsel = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_ahb_hready = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_ahb_htrans = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_ahb_haddr = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_ahb_hwrite = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_ahb_hsize = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_ahb_hburst = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_ahb_hwdata = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__o_ahb_hreadyout = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__o_ahb_hresp = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__o_ahb_hrdata = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__o_data_value = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__o_key_data = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_clear_key_data = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_engine_events = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_port_0_event_count = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_start = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_start = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_fault = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_fault = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_0_done = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_0_done = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_port_1_event_count = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_start = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_start = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_fault = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_fault = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_1_done = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_1_done = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_port_2_event_count = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_start = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_start = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_fault = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_fault = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_port_2_done = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_port_2_done = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_monitor_sample_count = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_capture = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_capture = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_error = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_error = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_wdata_monitor_match = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_we_monitor_match = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__cov_i_hw_clear_monitor_key_fragment = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__wo_write_word = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__wo_partial_write_data = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__wo_partial_write_addr = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__wo_after_partial = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_start = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_we_engine_start = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_fault = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_we_engine_fault = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_we_engine_pending = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_we_engine_overflow = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_done = 0;
    vlSelf->tb_ahblite__DOT____Vtogcov__i_hw_we_engine_done = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4365647505117944490ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2886507106632504067ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3195079074466788285ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6947223465600884377ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_wmask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14748301391320384938ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16654741743314452908ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17193912442052742083ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13708233921722738389ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_ahb_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5640493369998927391ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 236829754871154098ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13149138973360500954ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 2284106794915435335ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12223997967619439489ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_engine_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12839687373281685304ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11377159681706222614ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_engine_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6540030261403131197ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7708910561007195393ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_engine_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6901635997394348489ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13766877765044924474ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_engine_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9344876469406568628ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2859260933381105190ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9097470364995919420ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1737648073655257245ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_engine_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13950959741067988383ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7856660460948622513ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17928468364796483256ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2807984990393228243ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_0_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14263876117157769868ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14028965171449047237ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12969364947646371494ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1199152754831518562ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9003898652231441485ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12245170504007690171ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6497724388351770707ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7389163802644998028ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_0_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3482414891795158636ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14525344839441164205ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1774479010990527288ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14936619789026382604ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_1_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4216486764694107237ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8736659657045738881ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16488245225975162737ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1086450261736099415ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4758479792750514073ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9055183094505225299ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 258014028423421129ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15131496978439282336ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 205597559832596714ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16759824453451820105ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15837289593208427859ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2088276588422058066ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_2_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7278265510205315584ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17287702096260756740ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5813251494616920800ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12137587231408093297ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812423126035606614ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580881095808520266ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3035227828836096911ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6926100456584084049ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_port_2_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15874947919655266266ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1667075513501363306ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14637855685883863411ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5762062809667564466ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16174757293082290979ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10357514296435384133ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7840351689802475077ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_monitor_error = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17525222618696518126ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11701639557486915134ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9927197316943275274ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7575164272200682194ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10365887313014423242ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7843353149644368591ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_monitor_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9782795758627724938ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10215478036222593002ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 7536988626117628064ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3996165112881550155ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2050148494982839795ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__reg_key_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14852538837131970964ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9734675927233131478ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_start = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_fault = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_pending = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_start = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_fault = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_pending = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_start = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_fault = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_pending = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_start = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_fault = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_pending = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_capture = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_error = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_pending = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wdata = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wmask = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_en = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wr_en = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_addr_mapped = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_size_ok = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_bad_access = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_burst_valid = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_valid = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_ready = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_ready = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_ready = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_data = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_data = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_data = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_write = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_resp = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_engine = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_value = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_0 = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_value = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_1 = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_value = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_2 = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_value = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_monitor = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_monitor = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_key = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_value = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1599780236100194339ull);
    }
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1985971152389875927ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13649984264318598432ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2315192239735713513ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4839562261591243062ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10359084906761232428ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[__Vi0] = 0;
    }
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1496184145780664602ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 212148751816916733ull);
    }
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11712186939152813875ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1504512419361400713ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12316691473501703789ull);
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16501520311233421741ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[__Vi0] = 0;
    }
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count = 0;
    vlSelf->tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs = 0;
    vlSelf->__Vdfg_Regularize_107 = 0;
    vlSelf->__Vdfg_Regularize_108 = 0;
    vlSelf->__Vdfg_Regularize_109 = 0;
    vlSelf->__Vdfg_Regularize_110 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_rst_n_ahb__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_reg__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

VL_ATTR_COLD void Vtb_ahblite___024root___configure_coverage(Vtb_ahblite___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___configure_coverage\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 8, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_clk_ahb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 9, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_clk_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 10, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_rst_n_ahb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 6, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 11, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_rst_n_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 8, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 12, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_ahb_hsel");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 10, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 13, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_ahb_hready");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 12, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 14, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "i_ahb_htrans");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 16, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 15, 16, ".tb_ahblite", "v_toggle/tb_ahblite", "i_ahb_haddr");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 48, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 16, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_ahb_hwrite");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 50, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 17, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "i_ahb_hsize");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 56, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 18, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "i_ahb_hburst");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 62, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 19, 16, ".tb_ahblite", "v_toggle/tb_ahblite", "i_ahb_hwdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 126, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 20, 8, ".tb_ahblite", "v_toggle/tb_ahblite", "o_ahb_hreadyout");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 128, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 21, 8, ".tb_ahblite", "v_toggle/tb_ahblite", "o_ahb_hresp");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 130, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 22, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "o_ahb_hrdata");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 194, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 23, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "o_data_value");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 258, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 24, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "o_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 322, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 25, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_clear_key_data");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 324, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 26, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_engine_events");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 340, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 27, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_port_0_event_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 356, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 28, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 358, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 29, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 360, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 30, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 362, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 31, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 364, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 32, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 366, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 33, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 368, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 34, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 370, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 35, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 372, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 36, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 374, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 37, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 376, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 38, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_port_1_event_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 392, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 39, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 394, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 40, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 396, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 41, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 398, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 42, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 400, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 43, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 402, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 44, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 404, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 45, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 406, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 46, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 408, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 47, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 410, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 48, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 412, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 49, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_port_2_event_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 428, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 50, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 430, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 51, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 432, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 52, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 434, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 53, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 436, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 54, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 438, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 55, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 440, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 56, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 442, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 57, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 444, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 58, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 446, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 59, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 448, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 60, 20, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_monitor_sample_count[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 464, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 60, 20, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_monitor_sample_count[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 480, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 61, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 484, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 62, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 488, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 63, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 492, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 64, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 496, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 65, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 500, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 66, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 504, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 67, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 508, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 68, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 512, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 69, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_wdata_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 516, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 70, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_we_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 520, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 71, 15, ".tb_ahblite", "v_toggle/tb_ahblite", "cov_i_hw_clear_monitor_key_fragment");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 524, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 73, 16, ".tb_ahblite", "v_toggle/tb_ahblite", "wo_write_word");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 588, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 74, 16, ".tb_ahblite", "v_toggle/tb_ahblite", "wo_partial_write_data");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 652, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 75, 16, ".tb_ahblite", "v_toggle/tb_ahblite", "wo_partial_write_addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 684, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 76, 16, ".tb_ahblite", "v_toggle/tb_ahblite", "wo_after_partial");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 748, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 77, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_wdata_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 750, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 78, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_we_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 752, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 79, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_wdata_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 754, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 80, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_we_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 756, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 81, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_wdata_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 758, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 82, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_we_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 760, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 83, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_wdata_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 762, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 84, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_we_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 764, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 85, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_wdata_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 766, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 86, 9, ".tb_ahblite", "v_toggle/tb_ahblite", "i_hw_we_engine_done");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 768, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 90, 28, ".tb_ahblite", "v_expr/tb_ahblite", "(i_clk_ahb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 768, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 90, 28, ".tb_ahblite", "v_expr/tb_ahblite", "(i_clk_ahb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 769, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 90, 28, ".tb_ahblite", "v_expr/tb_ahblite", "(i_clk_ahb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 769, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 90, 28, ".tb_ahblite", "v_expr/tb_ahblite", "(i_clk_ahb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 770, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 90, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "90", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 770, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 90, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "90", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 771, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 88, 3, ".tb_ahblite", "v_line/tb_ahblite", "block", "88-89", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 771, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 88, 3, ".tb_ahblite", "v_line/tb_ahblite", "block", "88-89", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 772, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 94, 28, ".tb_ahblite", "v_expr/tb_ahblite", "(i_clk_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 772, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 94, 28, ".tb_ahblite", "v_expr/tb_ahblite", "(i_clk_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 773, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 94, 28, ".tb_ahblite", "v_expr/tb_ahblite", "(i_clk_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 773, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 94, 28, ".tb_ahblite", "v_expr/tb_ahblite", "(i_clk_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 774, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 94, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 774, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 94, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 775, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 92, 3, ".tb_ahblite", "v_line/tb_ahblite", "block", "92-93", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 775, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 92, 3, ".tb_ahblite", "v_line/tb_ahblite", "block", "92-93", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 776, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 227, 34, ".tb_ahblite", "v_expr/tb_ahblite", "((wait_cycles < 32'sh78)==1 && done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 776, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 227, 34, ".tb_ahblite", "v_expr/tb_ahblite", "((wait_cycles < 32'sh78)==1 && done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 777, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 227, 34, ".tb_ahblite", "v_expr/tb_ahblite", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 777, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 227, 34, ".tb_ahblite", "v_expr/tb_ahblite", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 778, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 227, 34, ".tb_ahblite", "v_expr/tb_ahblite", "((wait_cycles < 32'sh78)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 778, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 227, 34, ".tb_ahblite", "v_expr/tb_ahblite", "((wait_cycles < 32'sh78)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 779, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 230, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "230", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 779, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 230, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "230", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 780, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 230, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 780, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 230, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 781, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 232, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 781, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 232, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 782, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 233, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 782, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 233, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 783, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 233, 30, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==1 && (error_cycles != 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 783, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 233, 30, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==1 && (error_cycles != 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 784, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 233, 30, ".tb_ahblite", "v_expr/tb_ahblite", "((error_cycles != 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 784, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 233, 30, ".tb_ahblite", "v_expr/tb_ahblite", "((error_cycles != 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 785, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 233, 30, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 785, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 233, 30, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 786, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 231, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "231,234-235", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 786, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 231, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "231,234-235", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 787, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 231, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 787, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 231, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 788, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 227, 7, ".tb_ahblite", "v_line/tb_ahblite", "block", "227-229", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 788, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 227, 7, ".tb_ahblite", "v_line/tb_ahblite", "block", "227-229", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 789, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 238, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 789, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 238, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 790, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 238, 11, ".tb_ahblite", "v_expr/tb_ahblite", "(done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 790, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 238, 11, ".tb_ahblite", "v_expr/tb_ahblite", "(done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 791, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 238, 11, ".tb_ahblite", "v_expr/tb_ahblite", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 791, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 238, 11, ".tb_ahblite", "v_expr/tb_ahblite", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 792, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 208, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "208-226,239", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 792, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 208, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "208-226,239", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 793, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 262, 18, ".tb_ahblite", "v_branch/tb_ahblite", "if", "262", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 793, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 262, 18, ".tb_ahblite", "v_branch/tb_ahblite", "if", "262", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 794, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 262, 19, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 794, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 262, 19, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 795, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 261, 13, ".tb_ahblite", "v_line/tb_ahblite", "elsif", "261", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 795, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 261, 13, ".tb_ahblite", "v_line/tb_ahblite", "elsif", "261", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 796, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 257, 12, ".tb_ahblite", "v_line/tb_ahblite", "case", "257-260,263", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 796, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 257, 12, ".tb_ahblite", "v_line/tb_ahblite", "case", "257-260,263", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 797, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 265, 12, ".tb_ahblite", "v_line/tb_ahblite", "case", "265-267", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 797, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 265, 12, ".tb_ahblite", "v_line/tb_ahblite", "case", "265-267", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 798, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 269, 12, ".tb_ahblite", "v_line/tb_ahblite", "case", "269-271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 798, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 269, 12, ".tb_ahblite", "v_line/tb_ahblite", "case", "269-271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 799, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 273, 11, ".tb_ahblite", "v_line/tb_ahblite", "case", "273-275", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 799, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 273, 11, ".tb_ahblite", "v_line/tb_ahblite", "case", "273-275", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 800, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 278, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "278", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 800, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 278, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "278", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 801, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 278, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 801, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 278, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 802, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 254, 7, ".tb_ahblite", "v_line/tb_ahblite", "block", "254-256", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 802, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 254, 7, ".tb_ahblite", "v_line/tb_ahblite", "block", "254-256", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 803, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 243, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "243-254,280", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 803, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 243, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "243-254,280", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 804, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 309, 29, ".tb_ahblite", "v_expr/tb_ahblite", "((cycles < 32'sh78)==1 && done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 804, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 309, 29, ".tb_ahblite", "v_expr/tb_ahblite", "((cycles < 32'sh78)==1 && done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 805, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 309, 29, ".tb_ahblite", "v_expr/tb_ahblite", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 805, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 309, 29, ".tb_ahblite", "v_expr/tb_ahblite", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 806, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 309, 29, ".tb_ahblite", "v_expr/tb_ahblite", "((cycles < 32'sh78)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 806, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 309, 29, ".tb_ahblite", "v_expr/tb_ahblite", "((cycles < 32'sh78)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 807, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 312, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "312-313", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 807, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 312, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "312-313", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 808, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 312, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 808, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 312, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 809, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 315, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 809, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 315, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 810, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 317, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 810, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 317, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 811, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 317, 30, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==1 && (error_cycles != 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 811, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 317, 30, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==1 && (error_cycles != 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 812, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 317, 30, ".tb_ahblite", "v_expr/tb_ahblite", "((error_cycles != 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 812, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 317, 30, ".tb_ahblite", "v_expr/tb_ahblite", "((error_cycles != 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 813, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 317, 30, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 813, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 317, 30, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 814, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 814, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 12, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 815, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 48, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==0 && write_access==0 && (o_ahb_hrdata !== expected_read)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 815, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 48, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==0 && write_access==0 && (o_ahb_hrdata !== expected_read)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 816, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 48, ".tb_ahblite", "v_expr/tb_ahblite", "((o_ahb_hrdata !== expected_read)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 816, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 48, ".tb_ahblite", "v_expr/tb_ahblite", "((o_ahb_hrdata !== expected_read)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 817, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 48, ".tb_ahblite", "v_expr/tb_ahblite", "(write_access==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 817, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 48, ".tb_ahblite", "v_expr/tb_ahblite", "(write_access==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 818, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 48, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 818, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 319, 48, ".tb_ahblite", "v_expr/tb_ahblite", "(expected_error==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 819, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 314, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "314,321-322", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 819, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 314, 9, ".tb_ahblite", "v_branch/tb_ahblite", "if", "314,321-322", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 820, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 314, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 820, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 314, 10, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 821, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 309, 7, ".tb_ahblite", "v_line/tb_ahblite", "block", "309-311", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 821, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 309, 7, ".tb_ahblite", "v_line/tb_ahblite", "block", "309-311", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 822, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 325, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 822, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 325, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 823, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 325, 11, ".tb_ahblite", "v_expr/tb_ahblite", "(done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 823, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 325, 11, ".tb_ahblite", "v_expr/tb_ahblite", "(done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 824, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 325, 11, ".tb_ahblite", "v_expr/tb_ahblite", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 824, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 325, 11, ".tb_ahblite", "v_expr/tb_ahblite", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 825, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 284, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "284,290-308,326-327", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 825, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 284, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "284,290-308,326-327", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 826, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 334, 7, ".tb_ahblite", "v_line/tb_ahblite", "block", "334-381", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 826, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 334, 7, ".tb_ahblite", "v_line/tb_ahblite", "block", "334-381", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 827, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 331, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "331-334", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 827, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 331, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "331-334", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 828, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 484, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 828, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 484, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 829, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 489, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 829, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 489, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 830, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 491, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 830, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 491, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 831, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 386, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "386-439,441-464,466-473,475-480,482-483,485-488,490,492-495", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 831, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 386, 18, ".tb_ahblite", "v_line/tb_ahblite", "block", "386-439,441-464,466-473,475-480,482-483,485-488,490,492-495", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 832, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 522, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "522", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 832, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 522, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "522", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 833, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 524, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "524", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 833, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 524, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "524", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 834, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 526, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "526", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 834, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 526, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "526", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 835, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 528, 5, ".tb_ahblite", "v_branch/tb_ahblite", "if", "528-531", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 835, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 528, 5, ".tb_ahblite", "v_branch/tb_ahblite", "if", "528-531", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 836, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 528, 6, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 836, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 528, 6, ".tb_ahblite", "v_branch/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 837, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 534, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 837, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 534, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 838, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 538, 34, ".tb_ahblite", "v_expr/tb_ahblite", "((TEST_ENDIAN == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 838, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 538, 34, ".tb_ahblite", "v_expr/tb_ahblite", "((TEST_ENDIAN == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 839, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 538, 34, ".tb_ahblite", "v_expr/tb_ahblite", "((TEST_ENDIAN == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 839, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 538, 34, ".tb_ahblite", "v_expr/tb_ahblite", "((TEST_ENDIAN == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 840, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 538, 46, ".tb_ahblite", "v_branch/tb_ahblite", "cond_then", "538", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 840, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 538, 46, ".tb_ahblite", "v_branch/tb_ahblite", "cond_then", "538", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 841, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 538, 47, ".tb_ahblite", "v_branch/tb_ahblite", "cond_else", "538", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 841, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 538, 47, ".tb_ahblite", "v_branch/tb_ahblite", "cond_else", "538", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 842, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 541, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 842, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 541, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 843, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 547, 14, ".tb_ahblite", "v_line/tb_ahblite", "if", "547-550", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 843, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 547, 14, ".tb_ahblite", "v_line/tb_ahblite", "if", "547-550", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 844, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 547, 15, ".tb_ahblite", "v_line/tb_ahblite", "else", "551-554", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 844, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 547, 15, ".tb_ahblite", "v_line/tb_ahblite", "else", "551-554", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 845, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 543, 5, ".tb_ahblite", "v_line/tb_ahblite", "elsif", "543-546", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 845, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 543, 5, ".tb_ahblite", "v_line/tb_ahblite", "elsif", "543-546", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 846, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 557, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 846, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 557, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 847, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 561, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 847, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 561, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 848, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 562, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "562", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 848, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 562, 5, ".tb_ahblite", "v_line/tb_ahblite", "block", "562", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 849, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 563, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 849, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 563, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 850, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 564, 51, ".tb_ahblite", "v_expr/tb_ahblite", "((TEST_ENDIAN == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 850, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 564, 51, ".tb_ahblite", "v_expr/tb_ahblite", "((TEST_ENDIAN == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 851, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 564, 51, ".tb_ahblite", "v_expr/tb_ahblite", "((TEST_ENDIAN == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 851, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 564, 51, ".tb_ahblite", "v_expr/tb_ahblite", "((TEST_ENDIAN == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 852, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 565, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 852, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 565, 6, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 853, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 572, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 853, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 572, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 854, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 574, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 854, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 574, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 855, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 576, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 855, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 576, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 856, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 582, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 856, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 582, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 857, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 584, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 857, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 584, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 858, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 586, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 858, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 586, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 859, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 592, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 859, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 592, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 860, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 594, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 860, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 594, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 861, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 596, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 861, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 596, 8, ".tb_ahblite", "v_line/tb_ahblite", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 862, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 580, 14, ".tb_ahblite", "v_line/tb_ahblite", "if", "580-581,583,585,587-589", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 862, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 580, 14, ".tb_ahblite", "v_line/tb_ahblite", "if", "580-581,583,585,587-589", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 863, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 580, 15, ".tb_ahblite", "v_line/tb_ahblite", "else", "590-591,593,595,597-599", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 863, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 580, 15, ".tb_ahblite", "v_line/tb_ahblite", "else", "590-591,593,595,597-599", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 864, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 570, 5, ".tb_ahblite", "v_line/tb_ahblite", "elsif", "570-571,573,575,577-579", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 864, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 570, 5, ".tb_ahblite", "v_line/tb_ahblite", "elsif", "570-571,573,575,577-579", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 865, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 499, 3, ".tb_ahblite", "v_line/tb_ahblite", "block", "499-526,535-536,538-540,542,556,558-560,562,564,566-568,602-605,607-611", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 865, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074922\\tb_AHB_Lite.sv", 499, 3, ".tb_ahblite", "v_line/tb_ahblite", "block", "499-526,535-536,538-540,542,556,558-560,562,564,566-568,602-605,607-611", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 50, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_clk_ahb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 51, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_rst_n_ahb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 52, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_clk_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 6, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 53, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_rst_n_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 8, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 56, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_ahb_hsel");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 10, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 57, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_ahb_hready");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 12, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 58, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_ahb_htrans");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 16, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 59, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_ahb_haddr");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 48, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 60, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_ahb_hwrite");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 50, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 61, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_ahb_hsize");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 56, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 62, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_ahb_hburst");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 62, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 63, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_ahb_hwdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 126, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 64, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_ahb_hreadyout");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 128, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 65, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_ahb_hresp");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 130, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 66, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_ahb_hrdata");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 324, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 69, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_engine_events");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 866, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 70, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_engine_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 874, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 71, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 748, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 72, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 750, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 73, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 876, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 74, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 752, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 75, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 754, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 76, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 878, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 77, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 756, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 78, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 758, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 79, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 880, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 80, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 760, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 81, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 762, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 82, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 882, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 83, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 764, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 84, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 766, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 85, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 340, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 88, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_port_0_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 884, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 89, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_0_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 892, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 90, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 356, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 91, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 358, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 92, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 894, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 93, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 360, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 94, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 362, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 95, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 896, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 96, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 364, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 97, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 366, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 98, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 898, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 99, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 368, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 100, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 370, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 101, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 900, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 102, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 372, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 103, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 374, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 104, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 376, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 107, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_port_1_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 902, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 108, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_1_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 910, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 109, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 392, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 110, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 394, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 111, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 912, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 112, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 396, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 113, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 398, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 114, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 914, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 115, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 400, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 116, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 402, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 117, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 916, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 118, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 404, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 119, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 406, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 120, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 918, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 121, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 408, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 122, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 410, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 123, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 412, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 126, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_port_2_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 920, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 127, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_2_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 928, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 128, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 428, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 129, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 430, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 130, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 930, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 131, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 432, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 132, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 434, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 133, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 932, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 134, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 436, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 135, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 438, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 136, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 934, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 137, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 440, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 138, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 442, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 139, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 936, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 140, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 444, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 141, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 446, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 142, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 448, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 145, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_monitor_sample_count[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 464, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 145, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_monitor_sample_count[1]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 938, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 146, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_threshold[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 946, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 146, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_threshold[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 954, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 147, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 480, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 148, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 484, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 149, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 958, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 150, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 488, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 151, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 492, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 152, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 962, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 153, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 496, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 154, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 500, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 155, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 966, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 156, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 504, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 157, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 508, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 158, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 970, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 159, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 512, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 160, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_wdata_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 516, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 161, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_we_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 974, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 162, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_key_fragment[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 1004, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 162, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_monitor_key_fragment[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 520, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 163, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_clear_monitor_key_fragment");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 258, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 166, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "o_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 322, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 167, 47, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "i_hw_clear_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 171, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_clk_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 172, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_rst_n_reg");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 1034, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 173, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1066, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 174, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_wdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1130, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 175, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_wstrb");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1138, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 176, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_wmask");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1202, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 177, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_rd_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1204, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 178, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_wr_en");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1206, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 179, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_rdata_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1270, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 180, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_addr_mapped");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 1272, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 181, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_ahb_haddr");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1304, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 182, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_ahb_hwrite");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 1306, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 183, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_ahb_hsize");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 1312, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 184, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_ahb_state");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1318, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 185, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_size_ok");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1320, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 186, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_bad_access");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1322, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 187, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_burst_valid");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 62, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 188, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_wdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1324, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 189, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_wstrb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1332, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 190, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_cmd_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1334, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 191, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_cmd_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1336, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 192, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_cmd_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1338, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 193, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_cmd_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1338, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 194, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_rsp_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1340, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 195, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_rsp_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1342, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 196, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_rsp_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1344, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 197, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_rsp_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 52, 1, vlSelf->__Vcoverage + 1346, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 198, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_cmd_w_data");
    vlSelf->__vlCoverToggleInsert(0, 52, 1, vlSelf->__Vcoverage + 1452, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 199, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_cmd_r_data");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 1558, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 200, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_rsp_w_data");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 1626, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 201, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_rsp_r_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1338, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 202, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_issue");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1694, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 203, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_issue_write");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1696, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 204, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_ahb_issue_resp");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1700, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 205, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_we_engine");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1702, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 206, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_rd_engine");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 866, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 207, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_engine_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1704, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 208, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_engine_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 874, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 209, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1712, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 210, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_engine_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 876, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 211, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1714, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 212, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_engine_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 878, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 213, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1716, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 214, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_engine_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 880, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 215, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1718, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 216, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_engine_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 882, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 217, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1720, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 218, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_engine_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1722, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 219, 28, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_engine_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1786, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 220, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_we_port_0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1788, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 221, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_rd_port_0");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 884, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 222, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_0_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1790, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 223, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_0_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 892, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 224, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1798, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 225, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_0_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 894, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 226, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1800, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 227, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_0_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 896, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 228, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1802, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 229, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_0_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 898, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 230, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1804, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 231, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_0_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 900, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 232, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1806, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 233, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_0_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1808, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 234, 28, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_0_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1872, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 235, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_we_port_1");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1874, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 236, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_rd_port_1");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 902, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 237, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_1_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1876, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 238, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_1_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 910, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 239, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1884, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 240, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_1_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 912, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 241, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1886, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 242, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_1_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 914, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 243, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1888, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 244, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_1_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 916, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 245, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1890, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 246, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_1_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 918, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 247, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1892, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 248, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_1_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1894, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 249, 28, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_1_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1958, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 250, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_we_port_2");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1960, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 251, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_rd_port_2");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 920, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 252, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_2_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1962, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 253, 15, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_2_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 928, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 254, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1970, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 255, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_2_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 930, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 256, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1972, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 257, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_2_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 932, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 258, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1974, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 259, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_2_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 934, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 260, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1976, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 261, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_2_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 936, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 262, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1978, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 263, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_2_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1980, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 264, 28, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_port_2_value");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 938, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 265, 39, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_threshold[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 946, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 265, 39, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_threshold[1]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2044, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 266, 39, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_threshold_nxt[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2052, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 266, 39, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_threshold_nxt[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 954, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 267, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2060, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 268, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_capture_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 958, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 269, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2064, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 270, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_error_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 962, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 271, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2068, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 272, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 966, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 273, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2072, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 274, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 970, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 275, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2076, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 276, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_match_nxt");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 974, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 277, 40, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_key_fragment[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 1004, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 277, 40, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_monitor_key_fragment[1]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 2080, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 278, 40, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_key_fragment_nxt[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 2110, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 278, 40, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_key_fragment_nxt[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2140, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 279, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_we_monitor");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2144, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 280, 34, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_rd_monitor");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2148, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 281, 52, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_value[0]");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2212, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 281, 52, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_monitor_value[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2276, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 282, 9, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_we_key");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 258, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 283, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "reg_key_data");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2278, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 284, 16, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_key_data_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2342, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 285, 28, ".tb_ahblite.u_dut", "v_toggle/m_vlsi_ahb_le_csr", "w_key_value");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2406, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 288, 41, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2406, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 288, 41, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2407, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 288, 41, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2407, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 288, 41, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2408, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 288, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "288", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2408, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 288, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "288", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2409, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 288, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "288", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2409, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 288, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "288", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2410, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 289, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2410, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 289, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2411, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 289, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2411, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 289, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2412, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 289, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "289", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2412, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 289, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "289", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2413, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 289, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "289", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2413, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 289, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "289", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2414, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h2)==1 && (reg_ahb_haddr[1:0] == 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2414, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h2)==1 && (reg_ahb_haddr[1:0] == 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2415, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h1)==1 && reg_ahb_haddr[0]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2415, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h1)==1 && reg_ahb_haddr[0]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2416, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2416, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2417, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==0 && reg_ahb_haddr[0]==1 && (reg_ahb_haddr[1:0] == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2417, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==0 && reg_ahb_haddr[0]==1 && (reg_ahb_haddr[1:0] == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2418, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==0 && reg_ahb_haddr[0]==1 && (reg_ahb_hsize == 3'h2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2418, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==0 && reg_ahb_haddr[0]==1 && (reg_ahb_hsize == 3'h2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2419, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==0 && (reg_ahb_hsize == 3'h1)==0 && (reg_ahb_haddr[1:0] == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2419, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==0 && (reg_ahb_hsize == 3'h1)==0 && (reg_ahb_haddr[1:0] == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2420, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==0 && (reg_ahb_hsize == 3'h1)==0 && (reg_ahb_hsize == 3'h2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2420, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 302, 23, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_hsize == 3'h0)==0 && (reg_ahb_hsize == 3'h1)==0 && (reg_ahb_hsize == 3'h2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2421, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 307, 69, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "307", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2421, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 307, 69, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "307", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2422, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 308, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "308", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2422, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 308, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "308", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2423, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 304, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "304-306", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2423, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 304, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "304-306", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2424, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 9, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "315-316", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2424, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 9, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "315-316", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2425, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 10, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "318", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2425, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 10, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "318", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2426, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 56, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2426, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 56, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2427, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 56, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2427, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 56, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2428, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 56, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==0 && (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2428, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 315, 56, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==0 && (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2429, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 314, 11, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "314", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2429, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 314, 11, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "314", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2430, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2430, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2431, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2431, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2432, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==0 && (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2432, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==0 && (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2433, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 116, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "322", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2433, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 116, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "322", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2434, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 117, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "322", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2434, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 322, 117, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "322", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2435, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2435, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2436, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2436, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2437, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==0 && (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2437, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE32)==0 && (PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2438, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 116, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "324", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2438, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 116, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "324", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2439, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 117, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "324", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2439, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 324, 117, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "324", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2440, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 321, 9, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "321-322", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2440, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 321, 9, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "321-322", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2441, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 321, 10, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "324", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2441, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 321, 10, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "324", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2442, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 320, 11, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "320", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2442, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 320, 11, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "320", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2443, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 326, 11, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "326", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2443, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 326, 11, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "326", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2444, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 327, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "327", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2444, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 327, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "327", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2445, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 311, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "311-313", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2445, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 311, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "311-313", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2446, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 332, 27, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "332", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2446, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 332, 27, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "332", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2447, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 333, 30, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "333", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2447, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 333, 30, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "333", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2448, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 334, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "334", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2448, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 334, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "334", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2449, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 330, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "330-331", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2449, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 330, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "330-331", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2450, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_ahb_hwrite==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==1 && w_ahb_wstrb[3]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2450, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_ahb_hwrite==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==1 && w_ahb_wstrb[3]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2451, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_ahb_hwrite==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==1 && w_ahb_wstrb[2]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2451, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_ahb_hwrite==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==1 && w_ahb_wstrb[2]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2452, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_ahb_hwrite==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==1 && w_ahb_wstrb[1]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2452, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_ahb_hwrite==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==1 && w_ahb_wstrb[1]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2453, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_ahb_hwrite==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==1 && w_ahb_wstrb[0]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2453, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_ahb_hwrite==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==1 && w_ahb_wstrb[0]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2454, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_size_ok==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2454, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_size_ok==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2455, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_size_ok==1 && w_ahb_wstrb[0]==1 && w_ahb_wstrb[1]==1 && w_ahb_wstrb[2]==1 && w_ahb_wstrb[3]==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2455, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_size_ok==1 && w_ahb_wstrb[0]==1 && w_ahb_wstrb[1]==1 && w_ahb_wstrb[2]==1 && w_ahb_wstrb[3]==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2456, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_size_ok==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2456, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_size_ok==1 && (PARA_WRITE_STROBE_MODE == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2457, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_size_ok==1 && reg_ahb_hwrite==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2457, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 338, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_size_ok==1 && reg_ahb_hwrite==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2458, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 339, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_state == LPARA_AHB_DATA)==1 && w_ahb_bad_access==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2458, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 339, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_state == LPARA_AHB_DATA)==1 && w_ahb_bad_access==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2459, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 339, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_bad_access==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2459, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 339, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_bad_access==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2460, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 339, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_state == LPARA_AHB_DATA)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2460, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 339, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_state == LPARA_AHB_DATA)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2461, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 11, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "372-376", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2461, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 11, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "372-376", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2462, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 12, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2462, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 12, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2463, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h3)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2463, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h3)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2464, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2464, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2465, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((i_ahb_htrans == 2'h2)==0 && (i_ahb_htrans == 2'h3)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2465, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((i_ahb_htrans == 2'h2)==0 && (i_ahb_htrans == 2'h3)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2466, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_burst_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2466, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_burst_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2467, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hsel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2467, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hsel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2468, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2468, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 372, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2469, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 371, 23, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "371", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2469, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 371, 23, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "371", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2470, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 382, 16, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "382-383", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2470, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 382, 16, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "382-383", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2471, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 382, 17, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2471, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 382, 17, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2472, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 380, 11, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "elsif", "380-381", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2472, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 380, 11, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "elsif", "380-381", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2473, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 379, 23, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "379", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2473, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 379, 23, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "379", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2474, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 18, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "if", "389-393", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2474, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 18, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "if", "389-393", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2475, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 19, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "else", "394-395", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2475, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 19, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "else", "394-395", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2476, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h3)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2476, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h3)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2477, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2477, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2478, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((i_ahb_htrans == 2'h2)==0 && (i_ahb_htrans == 2'h3)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2478, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((i_ahb_htrans == 2'h2)==0 && (i_ahb_htrans == 2'h3)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2479, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_burst_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2479, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_burst_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2480, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hsel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2480, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hsel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2481, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2481, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 389, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2482, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 387, 13, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "elsif", "387-388", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2482, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 387, 13, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "elsif", "387-388", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2483, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 386, 11, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "386", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2483, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 386, 11, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "386", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2484, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 386, 12, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2484, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 386, 12, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2485, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 385, 23, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "385", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2485, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 385, 23, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "385", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2486, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 399, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "399", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2486, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 399, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "399", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2487, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 11, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "401-405", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2487, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 11, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "401-405", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2488, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 12, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "406-407", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2488, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 12, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "406-407", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2489, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h3)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2489, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h3)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2490, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2490, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==1 && i_ahb_hsel==1 && w_ahb_burst_valid==1 && (i_ahb_htrans == 2'h2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2491, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((i_ahb_htrans == 2'h2)==0 && (i_ahb_htrans == 2'h3)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2491, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((i_ahb_htrans == 2'h2)==0 && (i_ahb_htrans == 2'h3)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2492, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_burst_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2492, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_burst_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2493, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hsel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2493, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hsel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2494, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2494, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 401, 61, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_ahb_hready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2495, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 400, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "400", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2495, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 400, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "400", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2496, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 410, 9, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "410", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2496, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 410, 9, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "410", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2497, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 364, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "364-368", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2497, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 364, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "364-368", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2498, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 364, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "369-370", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2498, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 364, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "369-370", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2499, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 364, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_rst_n_ahb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2499, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 364, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_rst_n_ahb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2500, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 364, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_rst_n_ahb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2500, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 364, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_rst_n_ahb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2501, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 363, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "363", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2501, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 363, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "363", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2502, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 420, 21, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "420", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2502, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 420, 21, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "420", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2503, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 421, 21, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "421", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2503, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 421, 21, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "421", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2504, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 424, 11, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "424-425", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2504, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 424, 11, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "424-425", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2505, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 424, 12, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "427", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2505, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 424, 12, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "427", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2506, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 423, 9, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "423", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2506, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 423, 9, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "423", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2507, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 423, 10, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2507, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 423, 10, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2508, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 422, 21, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "422", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2508, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 422, 21, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "422", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2509, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 430, 24, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "430", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2509, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 430, 24, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "430", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2510, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 431, 24, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "431-433", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2510, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 431, 24, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "431-433", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2511, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 435, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "435-437", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2511, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 435, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "435-437", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2512, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 416, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "416-419", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2512, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 416, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "416-419", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2513, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 441, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_state == LPARA_AHB_WAIT)==1 && w_ahb_rsp_r_valid==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2513, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 441, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_state == LPARA_AHB_WAIT)==1 && w_ahb_rsp_r_valid==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2514, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 441, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_rsp_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2514, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 441, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_rsp_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2515, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 441, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_state == LPARA_AHB_WAIT)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2515, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 441, 64, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_ahb_state == LPARA_AHB_WAIT)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2516, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 442, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2516, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 442, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2517, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 442, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2517, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 442, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((PARA_AHB_ENDIAN == LPARA_AHB_ENDIAN_BE8)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2518, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 443, 25, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "443", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2518, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 443, 25, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "443", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2519, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 443, 26, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "444", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2519, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 443, 26, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "444", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2520, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 447, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_cmd_r_valid==1 && w_ahb_rsp_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2520, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 447, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_cmd_r_valid==1 && w_ahb_rsp_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2521, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 447, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2521, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 447, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2522, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 447, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2522, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 447, 42, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2523, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 454, 53, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue==1 && w_ahb_issue_write==0 && w_addr_mapped==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2523, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 454, 53, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue==1 && w_ahb_issue_write==0 && w_addr_mapped==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2524, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 454, 53, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_addr_mapped==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2524, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 454, 53, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_addr_mapped==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2525, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 454, 53, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue_write==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2525, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 454, 53, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue_write==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2526, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 454, 53, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2526, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 454, 53, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2527, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 455, 52, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue==1 && w_ahb_issue_write==1 && w_addr_mapped==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2527, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 455, 52, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue==1 && w_ahb_issue_write==1 && w_addr_mapped==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2528, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 455, 52, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_addr_mapped==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2528, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 455, 52, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_addr_mapped==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2529, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 455, 52, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue_write==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2529, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 455, 52, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue_write==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2530, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 455, 52, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2530, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 455, 52, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_ahb_issue==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2531, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 456, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_addr_mapped==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2531, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 456, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_addr_mapped==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2532, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 456, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_addr_mapped==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2532, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 456, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_addr_mapped==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2533, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 456, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "456", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2533, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 456, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "456", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2534, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 456, 46, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "456", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2534, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 456, 46, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "456", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2535, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 458, 49, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2535, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 458, 49, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2536, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 458, 49, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2536, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 458, 49, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2537, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 466, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2537, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 466, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2538, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 466, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2538, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 466, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2539, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 466, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2539, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 466, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2540, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 467, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2540, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 467, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2541, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 467, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2541, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 467, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2542, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 467, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2542, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 467, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2543, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 468, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2543, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 468, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2544, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 468, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2544, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 468, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2545, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 468, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2545, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 468, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2546, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 469, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2546, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 469, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2547, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 469, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2547, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 469, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2548, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 469, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2548, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 469, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2549, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2549, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2550, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2550, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2551, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2551, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2552, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2552, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2553, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2553, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2554, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2554, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 473, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2555, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 476, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_KEY_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2555, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 476, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==1 && (reg_addr == LPARA_KEY_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2556, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 476, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_KEY_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2556, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 476, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_KEY_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2557, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 476, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2557, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 476, 29, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2558, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 477, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2558, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 477, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2559, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 477, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2559, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 477, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2560, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 477, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2560, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 477, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2561, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 478, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2561, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 478, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2562, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 478, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2562, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 478, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2563, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 478, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2563, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 478, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2564, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 479, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2564, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 479, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2565, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 479, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2565, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 479, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2566, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 479, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2566, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 479, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2567, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 480, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2567, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 480, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2568, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 480, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2568, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 480, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2569, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 480, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2569, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 480, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2570, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2570, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2571, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2571, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2572, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2572, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2573, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2573, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2574, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2574, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2575, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2575, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 484, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2576, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2576, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2577, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2577, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2578, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2578, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2579, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2579, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2580, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2580, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2581, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2581, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2582, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 107, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "489", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2582, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 107, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "489", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2583, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "489", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2583, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 489, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "489", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2584, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 492, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2584, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 492, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2585, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 492, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2585, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 492, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2586, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 492, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2586, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 492, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2587, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 493, 29, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "492-493", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2587, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 493, 29, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "492-493", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2588, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 494, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "494", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2588, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 494, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "494", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2589, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 494, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "494", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2589, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 494, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "494", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2590, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 493, 30, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2590, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 493, 30, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2591, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 497, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2591, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 497, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2592, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 497, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2592, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 497, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2593, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 497, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "497", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2593, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 497, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "497", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2594, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 498, 83, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "498", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2594, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 498, 83, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "498", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2595, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 498, 84, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "498", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2595, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 498, 84, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "498", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2596, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 497, 57, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2596, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 497, 57, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2597, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 501, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2597, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 501, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2598, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 501, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2598, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 501, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2599, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 501, 60, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "501", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2599, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 501, 60, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "501", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2600, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 502, 85, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "502", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2600, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 502, 85, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "502", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2601, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 502, 86, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "502", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2601, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 502, 86, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "502", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2602, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 501, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2602, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 501, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2603, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 505, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2603, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 505, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2604, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 505, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2604, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 505, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2605, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 505, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "505", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2605, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 505, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "505", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2606, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 506, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "506", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2606, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 506, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "506", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2607, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 506, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "506", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2607, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 506, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "506", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2608, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 505, 63, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2608, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 505, 63, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2609, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 509, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2609, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 509, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2610, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 509, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2610, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 509, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_engine_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2611, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 509, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "509", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2611, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 509, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "509", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2612, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 510, 44, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "510", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2612, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 510, 44, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "510", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2613, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 510, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "510", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2613, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 510, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "510", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2614, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 509, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2614, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 509, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2615, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 514, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "514-520", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2615, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 514, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "514-520", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2616, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 514, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "521-527", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2616, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 514, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "521-527", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2617, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 514, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2617, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 514, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2618, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 514, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2618, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 514, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2619, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 513, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "513", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2619, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 513, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "513", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2620, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 540, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "540-548", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2620, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 540, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "540-548", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2621, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2621, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2622, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2622, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2623, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2623, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2624, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2624, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2625, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2625, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2626, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2626, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2627, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 107, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "552", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2627, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 107, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "552", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2628, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "552", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2628, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 552, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "552", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2629, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 555, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2629, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 555, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2630, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 555, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2630, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 555, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2631, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 555, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2631, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 555, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2632, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 556, 29, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "555-556", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2632, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 556, 29, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "555-556", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2633, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 557, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "557", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2633, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 557, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "557", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2634, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 557, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "557", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2634, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 557, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "557", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2635, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 556, 30, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2635, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 556, 30, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2636, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 560, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2636, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 560, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2637, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 560, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2637, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 560, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2638, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 560, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "560", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2638, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 560, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "560", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2639, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 561, 83, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "561", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2639, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 561, 83, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "561", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2640, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 561, 84, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "561", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2640, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 561, 84, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "561", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2641, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 560, 57, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2641, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 560, 57, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2642, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 564, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2642, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 564, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2643, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 564, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2643, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 564, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2644, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 564, 60, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "564", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2644, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 564, 60, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "564", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2645, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 565, 85, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "565", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2645, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 565, 85, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "565", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2646, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 565, 86, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "565", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2646, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 565, 86, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "565", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2647, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 564, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2647, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 564, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2648, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 568, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2648, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 568, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2649, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 568, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2649, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 568, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2650, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 568, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "568", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2650, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 568, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "568", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2651, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 569, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "569", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2651, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 569, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "569", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2652, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 569, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "569", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2652, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 569, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "569", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2653, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 568, 63, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2653, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 568, 63, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2654, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 572, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2654, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 572, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2655, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 572, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2655, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 572, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_0_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2656, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 572, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "572", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2656, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 572, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "572", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2657, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 573, 44, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "573", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2657, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 573, 44, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "573", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2658, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 573, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "573", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2658, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 573, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "573", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2659, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 572, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2659, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 572, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2660, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 577, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "577-583", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2660, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 577, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "577-583", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2661, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 577, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "584-590", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2661, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 577, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "584-590", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2662, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 577, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2662, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 577, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2663, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 577, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2663, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 577, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2664, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 576, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "576", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2664, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 576, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "576", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2665, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 603, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "603-611", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2665, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 603, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "603-611", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2666, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2666, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2667, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2667, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2668, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2668, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2669, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2669, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2670, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2670, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2671, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2671, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2672, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 107, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "615", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2672, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 107, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "615", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2673, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "615", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2673, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 615, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "615", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2674, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 618, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2674, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 618, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2675, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 618, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2675, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 618, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2676, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 618, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2676, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 618, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2677, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 619, 29, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "618-619", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2677, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 619, 29, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "618-619", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2678, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 620, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "620", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2678, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 620, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "620", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2679, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 620, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "620", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2679, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 620, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "620", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2680, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 619, 30, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2680, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 619, 30, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2681, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 623, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2681, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 623, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2682, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 623, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2682, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 623, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2683, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 623, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "623", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2683, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 623, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "623", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2684, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 624, 83, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "624", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2684, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 624, 83, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "624", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2685, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 624, 84, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "624", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2685, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 624, 84, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "624", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2686, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 623, 57, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2686, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 623, 57, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2687, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 627, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2687, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 627, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2688, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 627, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2688, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 627, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2689, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 627, 60, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "627", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2689, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 627, 60, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "627", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2690, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 628, 85, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "628", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2690, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 628, 85, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "628", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2691, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 628, 86, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "628", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2691, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 628, 86, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "628", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2692, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 627, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2692, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 627, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2693, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 631, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2693, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 631, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2694, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 631, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2694, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 631, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2695, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 631, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "631", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2695, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 631, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "631", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2696, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 632, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "632", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2696, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 632, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "632", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2697, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 632, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "632", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2697, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 632, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "632", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2698, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 631, 63, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2698, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 631, 63, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2699, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 635, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2699, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 635, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2700, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 635, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2700, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 635, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_1_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2701, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 635, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "635", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2701, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 635, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "635", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2702, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 636, 44, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "636", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2702, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 636, 44, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "636", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2703, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 636, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "636", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2703, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 636, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "636", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2704, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 635, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2704, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 635, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2705, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 640, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "640-646", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2705, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 640, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "640-646", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2706, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 640, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "647-653", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2706, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 640, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "647-653", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2707, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 640, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2707, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 640, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2708, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 640, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2708, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 640, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2709, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 639, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "639", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2709, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 639, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "639", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2710, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 666, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "666-674", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2710, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 666, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "666-674", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2711, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2711, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2712, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2712, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2713, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2713, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2714, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2714, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2715, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2715, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2716, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2716, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 43, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2717, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 107, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "678", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2717, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 107, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "678", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2718, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "678", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2718, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 678, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "678", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2719, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 681, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2719, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 681, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2720, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 681, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2720, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 681, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2721, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 681, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2721, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 681, 44, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2722, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 682, 29, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "681-682", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2722, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 682, 29, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "681-682", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2723, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 683, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "683", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2723, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 683, 53, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "683", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2724, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 683, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "683", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2724, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 683, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "683", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2725, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 682, 30, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2725, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 682, 30, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2726, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 686, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2726, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 686, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2727, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 686, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2727, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 686, 32, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2728, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 686, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "686", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2728, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 686, 56, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "686", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2729, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 687, 83, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "687", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2729, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 687, 83, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "687", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2730, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 687, 84, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "687", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2730, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 687, 84, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "687", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2731, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 686, 57, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2731, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 686, 57, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2732, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 690, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2732, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 690, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2733, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 690, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2733, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 690, 34, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2734, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 690, 60, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "690", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2734, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 690, 60, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "690", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2735, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 691, 85, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "691", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2735, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 691, 85, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "691", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2736, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 691, 86, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "691", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2736, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 691, 86, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "691", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2737, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 690, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2737, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 690, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2738, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 694, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2738, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 694, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2739, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 694, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2739, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 694, 35, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2740, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 694, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "694", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2740, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 694, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "694", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2741, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 695, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "695", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2741, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 695, 61, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "695", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2742, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 695, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "695", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2742, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 695, 62, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "695", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2743, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 694, 63, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2743, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 694, 63, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2744, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 698, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2744, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 698, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2745, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 698, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2745, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 698, 31, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_port_2_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2746, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 698, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "698", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2746, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 698, 54, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "698", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2747, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 699, 44, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "699", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2747, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 699, 44, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "699", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2748, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 699, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "699", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2748, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 699, 45, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "699", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2749, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 698, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2749, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 698, 55, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2750, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 703, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "703-709", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2750, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 703, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "703-709", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2751, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 703, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "710-716", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2751, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 703, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "710-716", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2752, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 703, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2752, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 703, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2753, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 703, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2753, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 703, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2754, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 702, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "702", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2754, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 702, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "702", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2755, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 729, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "729-737", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2755, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 729, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "729-737", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2756, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2756, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2757, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2757, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2758, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2758, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2759, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2759, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2760, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2760, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2761, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2761, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2762, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 134, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "743", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2762, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 134, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "743", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2763, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 135, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742-743", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2763, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 135, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742-743", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2764, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2764, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2765, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2765, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2766, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2766, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2767, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 123, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2767, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 123, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2768, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 313, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2768, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 313, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2769, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 314, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2769, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 314, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2770, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 124, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2770, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 124, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2771, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_error[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2771, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_error[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2772, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_error[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2772, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_error[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2773, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 102, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2773, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 102, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2774, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 188, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2774, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 188, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2775, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 189, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2775, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 189, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2776, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 103, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2776, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 103, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2777, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_pending[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2777, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_pending[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2778, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_pending[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2778, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_pending[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2779, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2779, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2780, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 196, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2780, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 196, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2781, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 197, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2781, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 197, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2782, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 109, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2782, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 109, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2783, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 71, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_overflow[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2783, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 71, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_overflow[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2784, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 71, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_overflow[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2784, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 71, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_overflow[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2785, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 111, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2785, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 111, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2786, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 165, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2786, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 165, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2787, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 166, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2787, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 166, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2788, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 112, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2788, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 112, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2789, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_match[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2789, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_match[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2790, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_match[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2790, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_match[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2791, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 102, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2791, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 102, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2792, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 139, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2792, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 139, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2793, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 140, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2793, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 140, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2794, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 103, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2794, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 103, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2795, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 81, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_monitor_key_fragment[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2795, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 81, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_monitor_key_fragment[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2796, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 81, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_monitor_key_fragment[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2796, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 81, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_monitor_key_fragment[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2797, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 93, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2797, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 93, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2798, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 183, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2798, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 183, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2799, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 184, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2799, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 184, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2800, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 94, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2800, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 94, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2801, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 750, 5, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "742,750-758", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2801, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 750, 5, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "742,750-758", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2802, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 7, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "742,762-769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2802, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 7, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "742,762-769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2803, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 8, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "742,770-777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2803, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 8, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "742,770-777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2804, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 11, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2804, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 11, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2805, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 11, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2805, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 11, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2806, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 761, 5, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "761", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2806, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 761, 5, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "761", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2807, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2807, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2808, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2808, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2809, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2809, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2810, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2810, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2811, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2811, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2812, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2812, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 70, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2813, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 134, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "743", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2813, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 134, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "743", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2814, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 135, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742-743", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2814, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 743, 135, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742-743", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2815, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2815, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2816, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2816, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2817, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2817, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 68, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2818, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 123, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2818, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 123, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2819, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 313, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2819, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 313, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2820, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 314, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2820, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 314, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,744", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2821, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 124, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2821, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 744, 124, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2822, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_error[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2822, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_error[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2823, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_error[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2823, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_error[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2824, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 102, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2824, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 102, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2825, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 188, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2825, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 188, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2826, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 189, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2826, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 189, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2827, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 103, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2827, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 745, 103, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2828, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_pending[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2828, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_pending[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2829, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_pending[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2829, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 69, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_pending[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2830, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2830, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 108, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2831, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 196, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2831, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 196, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2832, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 197, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2832, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 197, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,746", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2833, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 109, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2833, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 746, 109, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2834, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 71, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_overflow[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2834, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 71, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_overflow[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2835, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 71, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_overflow[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2835, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 71, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_overflow[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2836, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 111, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2836, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 111, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2837, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 165, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2837, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 165, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2838, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 166, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2838, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 166, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,747", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2839, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 112, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2839, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 747, 112, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2840, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_match[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2840, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_match[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2841, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_match[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2841, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 65, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_we_monitor_match[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2842, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 102, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2842, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 102, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "742,748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2843, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 139, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2843, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 139, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2844, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 140, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2844, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 140, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,748", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2845, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 103, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2845, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 748, 103, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2846, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 81, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_monitor_key_fragment[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2846, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 81, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_monitor_key_fragment[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2847, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 81, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_monitor_key_fragment[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2847, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 81, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_monitor_key_fragment[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2848, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 93, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2848, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 93, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2849, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 183, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2849, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 183, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2850, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 184, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2850, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 184, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "742,749", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2851, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 94, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2851, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 749, 94, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2852, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 750, 5, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "742,750-758", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2852, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 750, 5, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "742,750-758", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2853, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 7, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "742,762-769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2853, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 7, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "742,762-769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2854, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 8, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "742,770-777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2854, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 8, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "742,770-777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2855, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 11, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2855, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 11, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2856, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 11, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2856, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 762, 11, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2857, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 761, 5, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "761", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2857, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 761, 5, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "761", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2858, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 791, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_key_data==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2858, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 791, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_key_data==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2859, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 791, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_key_data==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2859, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 791, 27, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(i_hw_clear_key_data==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2860, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 791, 49, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "791", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2860, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 791, 49, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "791", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2861, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 792, 89, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "792", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2861, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 792, 89, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_then", "792", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2862, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 792, 90, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "793", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2862, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 792, 90, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "793", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2863, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 791, 50, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2863, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 791, 50, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2864, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 797, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "797-798", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2864, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 797, 5, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "797-798", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2865, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 797, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "799-800", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2865, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 797, 6, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "799-800", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2866, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 797, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2866, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 797, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2867, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 797, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2867, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 797, 9, ".tb_ahblite.u_dut", "v_expr/m_vlsi_ahb_le_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2868, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 796, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "796", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2868, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 796, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "796", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2869, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 808, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "808-809", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2869, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 808, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "808-809", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2870, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 818, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "818", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2870, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 818, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "818", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2871, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 819, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "819", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2871, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 819, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "819", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2872, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 820, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "820", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2872, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 820, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "820", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2873, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 821, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "821", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2873, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 821, 26, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "821", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2874, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 822, 76, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2874, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 822, 76, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2875, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 822, 77, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2875, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 822, 77, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2876, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 822, 74, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2876, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 822, 74, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2877, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 823, 76, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "823", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2877, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 823, 76, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "823", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2878, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 823, 77, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2878, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 823, 77, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2879, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 823, 74, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "823", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2879, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 823, 74, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "823", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2880, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 824, 76, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "824", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2880, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 824, 76, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "824", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2881, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 824, 77, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2881, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 824, 77, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2882, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 824, 74, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "824", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2882, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 824, 74, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "824", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2883, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 825, 76, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "825", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2883, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 825, 76, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "if", "825", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2884, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 825, 77, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2884, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 825, 77, ".tb_ahblite.u_dut", "v_branch/m_vlsi_ahb_le_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2885, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 825, 74, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "825", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2885, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 825, 74, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "825", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2886, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 826, 23, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "826", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2886, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 826, 23, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "826", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2887, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 827, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "827", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2887, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 827, 7, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "case", "827", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2888, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 814, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "814-817", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2888, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\m_vlsi_ahb_le_csr.sv", 814, 3, ".tb_ahblite.u_dut", "v_line/m_vlsi_ahb_le_csr", "block", "814-817", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 14, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 15, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1338, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 16, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1340, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 17, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "o_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 1558, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 18, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1342, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 19, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "o_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1344, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 20, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 1626, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 21, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "o_r_data");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 2889, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_mem[0]");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 2957, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_mem[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 1, vlSelf->__Vcoverage + 3025, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 24, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_wr_ptr");
    vlSelf->__vlCoverToggleInsert(0, 0, 1, vlSelf->__Vcoverage + 3027, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 25, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_rd_ptr");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 3029, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 26, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1338, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 27, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "w_wr_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1344, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 28, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "w_rd_hs");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3033, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3033, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3034, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3034, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3035, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3035, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3036, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3036, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3037, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3037, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3038, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3038, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3039, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3039, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3040, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3040, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3041, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3041, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3042, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3042, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3043, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3043, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3044, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3044, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3045, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3045, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3046, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3046, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3047, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3047, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3048, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3048, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3049, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3049, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3050, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3050, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3051, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3051, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3052, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3052, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3053, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3053, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3054, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3054, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3055, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3055, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3056, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3056, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3057, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3057, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3058, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "block", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3058, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "block", "37", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 14, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "i_clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 15, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "i_rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1332, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 16, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "i_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1334, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 17, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "o_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 52, 1, vlSelf->__Vcoverage + 1346, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 18, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "i_w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1336, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 19, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "o_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1338, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 20, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "i_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 52, 1, vlSelf->__Vcoverage + 1452, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 21, 34, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "o_r_data");
    vlSelf->__vlCoverToggleInsert(0, 52, 1, vlSelf->__Vcoverage + 3059, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "reg_mem[0]");
    vlSelf->__vlCoverToggleInsert(0, 52, 1, vlSelf->__Vcoverage + 3165, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "reg_mem[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 1, vlSelf->__Vcoverage + 3271, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 24, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "reg_wr_ptr");
    vlSelf->__vlCoverToggleInsert(0, 0, 1, vlSelf->__Vcoverage + 3273, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 25, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "reg_rd_ptr");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 3275, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 26, 27, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "reg_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3279, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 27, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "w_wr_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1338, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 28, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_toggle/m_csr_sync_fifo__P35", "w_rd_hs");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3281, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3281, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3282, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "((reg_count < PARA_DEPTH[1:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3282, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "((reg_count < PARA_DEPTH[1:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3283, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "((reg_count < PARA_DEPTH[1:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3283, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "((reg_count < PARA_DEPTH[1:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3284, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "((reg_count < PARA_DEPTH[1:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3284, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "((reg_count < PARA_DEPTH[1:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3285, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3285, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3286, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3286, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3287, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3287, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3288, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3288, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3289, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3289, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3290, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3290, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3291, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_line/m_csr_sync_fifo__P35", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3291, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_line/m_csr_sync_fifo__P35", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3292, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_line/m_csr_sync_fifo__P35", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3292, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_line/m_csr_sync_fifo__P35", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3293, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_line/m_csr_sync_fifo__P35", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3293, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_line/m_csr_sync_fifo__P35", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3294, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3294, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3295, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3295, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3296, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3296, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3297, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3297, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3298, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3298, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3299, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3299, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3300, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3300, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3301, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3301, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3302, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3302, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3303, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3303, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_branch/m_csr_sync_fifo__P35", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3304, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3304, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3305, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3305, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_expr/m_csr_sync_fifo__P35", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3306, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_line/m_csr_sync_fifo__P35", "block", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3306, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AHB_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_ahblite.u_dut.g_sync_ahb_fifo.u_ahb_cmd_fifo", "v_line/m_csr_sync_fifo__P35", "block", "37", "", "", "", "");
}
