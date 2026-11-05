// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axil.h for the primary calling header

#include "Vtb_axil__pch.h"

void Vtb_axil___024root___timing_ready(Vtb_axil___024root* vlSelf);

VL_ATTR_COLD void Vtb_axil___024root___eval_static(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_static\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0 
        = vlSelfRef.tb_axil__DOT__i_clk_axi;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_rst_n_axi__0 
        = vlSelfRef.tb_axil__DOT__i_rst_n_axi;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_reg__0 
        = vlSelfRef.tb_axil__DOT__i_clk_reg;
    Vtb_axil___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axil___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_axil___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_axil___024root___stl_sequent__TOP__0(Vtb_axil___024root* vlSelf);

VL_ATTR_COLD bool Vtb_axil___024root___eval_stl(Vtb_axil___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_stl\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axil___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_axil___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_axil___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_axil___024root___eval_dump_triggers__stl(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_dump_triggers__stl\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axil___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axil___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axil___024root___eval_dump_triggers__ico(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_dump_triggers__ico\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axil___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axil___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axil___024root___eval_dump_triggers__act(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_dump_triggers__act\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axil___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_axil___024root___eval_dump_triggers__nba(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_dump_triggers__nba\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axil___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_axil___024root___eval_dump_triggers__obs(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_dump_triggers__obs\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_axil___024root___eval_dump_triggers__react(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_dump_triggers__react\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_axil___024root___eval_final(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_final\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axil___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axil___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_axil___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_axil___024root___stl_sequent__TOP__0(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___stl_sequent__TOP__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_en;
    tb_axil__DOT__u_dut__DOT__w_rd_en = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_wr_en;
    tb_axil__DOT__u_dut__DOT__w_wr_en = 0;
    IData/*31:0*/ tb_axil__DOT__u_dut__DOT__w_rdata_nxt;
    tb_axil__DOT__u_dut__DOT__w_rdata_nxt = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_addr_mapped;
    tb_axil__DOT__u_dut__DOT__w_addr_mapped = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_issue_read;
    tb_axil__DOT__u_dut__DOT__w_issue_read = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_issue_write;
    tb_axil__DOT__u_dut__DOT__w_issue_write = 0;
    SData/*15:0*/ tb_axil__DOT__u_dut__DOT__w_issue_addr;
    tb_axil__DOT__u_dut__DOT__w_issue_addr = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_engine;
    tb_axil__DOT__u_dut__DOT__w_we_engine = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_engine;
    tb_axil__DOT__u_dut__DOT__w_rd_engine = 0;
    IData/*31:0*/ tb_axil__DOT__u_dut__DOT__w_engine_value;
    tb_axil__DOT__u_dut__DOT__w_engine_value = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_0;
    tb_axil__DOT__u_dut__DOT__w_we_port_0 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_0;
    tb_axil__DOT__u_dut__DOT__w_rd_port_0 = 0;
    IData/*31:0*/ tb_axil__DOT__u_dut__DOT__w_port_0_value;
    tb_axil__DOT__u_dut__DOT__w_port_0_value = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_1;
    tb_axil__DOT__u_dut__DOT__w_we_port_1 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_1;
    tb_axil__DOT__u_dut__DOT__w_rd_port_1 = 0;
    IData/*31:0*/ tb_axil__DOT__u_dut__DOT__w_port_1_value;
    tb_axil__DOT__u_dut__DOT__w_port_1_value = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_2;
    tb_axil__DOT__u_dut__DOT__w_we_port_2 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_2;
    tb_axil__DOT__u_dut__DOT__w_rd_port_2 = 0;
    IData/*31:0*/ tb_axil__DOT__u_dut__DOT__w_port_2_value;
    tb_axil__DOT__u_dut__DOT__w_port_2_value = 0;
    CData/*1:0*/ tb_axil__DOT__u_dut__DOT__w_we_monitor;
    tb_axil__DOT__u_dut__DOT__w_we_monitor = 0;
    CData/*1:0*/ tb_axil__DOT__u_dut__DOT__w_rd_monitor;
    tb_axil__DOT__u_dut__DOT__w_rd_monitor = 0;
    QData/*63:0*/ tb_axil__DOT__u_dut__DOT__w_monitor_value;
    tb_axil__DOT__u_dut__DOT__w_monitor_value = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_key;
    tb_axil__DOT__u_dut__DOT__w_we_key = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready = 0;
    CData/*1:0*/ __Vdfg_Regularize_135;
    __Vdfg_Regularize_135 = 0;
    // Body
    if (vlSelfRef.tb_axil__DOT__i_axi_wvalid) {
        ++(vlSelf->__Vcoverage[2471]);
    }
    if (vlSelfRef.tb_axil__DOT__i_axi_awvalid) {
        ++(vlSelf->__Vcoverage[2472]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid)) 
               & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid))))) {
        ++(vlSelf->__Vcoverage[2473]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[2527]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[2528]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2529]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[2530]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[2531]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2532]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) {
        ++(vlSelf->__Vcoverage[2538]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)))) {
        ++(vlSelf->__Vcoverage[2539]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)))) {
        ++(vlSelf->__Vcoverage[2540]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[3003]);
    }
    if ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3004]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[3005]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3006]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[3010]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[3011]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3012]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[3175]);
    }
    if ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3176]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[3177]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3178]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[3182]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[3183]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3184]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_clk_axi) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_clk_axi))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.tb_axil__DOT__i_clk_axi, vlSelfRef.tb_axil__DOT____Vtogcov__i_clk_axi);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_clk_axi 
            = vlSelfRef.tb_axil__DOT__i_clk_axi;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_clk_reg) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_clk_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2, vlSelfRef.tb_axil__DOT__i_clk_reg, vlSelfRef.tb_axil__DOT____Vtogcov__i_clk_reg);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_clk_reg 
            = vlSelfRef.tb_axil__DOT__i_clk_reg;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_rst_n_axi))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 4, vlSelfRef.tb_axil__DOT__i_rst_n_axi, vlSelfRef.tb_axil__DOT____Vtogcov__i_rst_n_axi);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_rst_n_axi 
            = vlSelfRef.tb_axil__DOT__i_rst_n_axi;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_rst_n_reg) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_rst_n_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6, vlSelfRef.tb_axil__DOT__i_rst_n_reg, vlSelfRef.tb_axil__DOT____Vtogcov__i_rst_n_reg);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_rst_n_reg 
            = vlSelfRef.tb_axil__DOT__i_rst_n_reg;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 8, vlSelfRef.tb_axil__DOT__i_axi_awvalid, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awvalid);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awvalid 
            = vlSelfRef.tb_axil__DOT__i_axi_awvalid;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__i_axi_awaddr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awaddr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 10, vlSelfRef.tb_axil__DOT__i_axi_awaddr, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awaddr);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awaddr 
            = vlSelfRef.tb_axil__DOT__i_axi_awaddr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__i_axi_awprot) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 42, vlSelfRef.tb_axil__DOT__i_axi_awprot, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awprot);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_awprot 
            = vlSelfRef.tb_axil__DOT__i_axi_awprot;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 48, vlSelfRef.tb_axil__DOT__i_axi_wvalid, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wvalid);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wvalid 
            = vlSelfRef.tb_axil__DOT__i_axi_wvalid;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__i_axi_wdata 
                ^ vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 50, vlSelfRef.tb_axil__DOT__i_axi_wdata, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wdata);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wdata 
            = vlSelfRef.tb_axil__DOT__i_axi_wdata;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__i_axi_wstrb) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 114, vlSelfRef.tb_axil__DOT__i_axi_wstrb, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wstrb);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_wstrb 
            = vlSelfRef.tb_axil__DOT__i_axi_wstrb;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_bready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_bready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 122, vlSelfRef.tb_axil__DOT__i_axi_bready, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_bready);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_bready 
            = vlSelfRef.tb_axil__DOT__i_axi_bready;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_arvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 124, vlSelfRef.tb_axil__DOT__i_axi_arvalid, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_arvalid);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_arvalid 
            = vlSelfRef.tb_axil__DOT__i_axi_arvalid;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__i_axi_araddr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_araddr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 126, vlSelfRef.tb_axil__DOT__i_axi_araddr, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_araddr);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_araddr 
            = vlSelfRef.tb_axil__DOT__i_axi_araddr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__i_axi_arprot) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_arprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 158, vlSelfRef.tb_axil__DOT__i_axi_arprot, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_arprot);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_arprot 
            = vlSelfRef.tb_axil__DOT__i_axi_arprot;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_rready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_rready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 164, vlSelfRef.tb_axil__DOT__i_axi_rready, vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_rready);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_axi_rready 
            = vlSelfRef.tb_axil__DOT__i_axi_rready;
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 170, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bvalid);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bvalid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count));
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 178, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rvalid);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rvalid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count));
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__o_data_value 
                ^ vlSelfRef.tb_axil__DOT____Vtogcov__o_data_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 248, vlSelfRef.tb_axil__DOT__o_data_value, vlSelfRef.tb_axil__DOT____Vtogcov__o_data_value);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_data_value 
            = vlSelfRef.tb_axil__DOT__o_data_value;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
                ^ vlSelfRef.tb_axil__DOT____Vtogcov__o_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 312, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data, vlSelfRef.tb_axil__DOT____Vtogcov__o_key_data);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_key_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 376, vlSelfRef.tb_axil__DOT__i_hw_clear_key_data, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data 
            = vlSelfRef.tb_axil__DOT__i_hw_clear_key_data;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 378, vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_start);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_start 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 380, vlSelfRef.tb_axil__DOT__i_hw_we_engine_start, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_start);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_start 
            = vlSelfRef.tb_axil__DOT__i_hw_we_engine_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 382, vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_fault, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_fault);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_fault 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 384, vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_fault);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_fault 
            = vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 386, vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_pending 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 388, vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_pending 
            = vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 390, vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_overflow 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 392, vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_overflow 
            = vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 394, vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_done, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_done);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_wdata_engine_done 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 396, vlSelfRef.tb_axil__DOT__i_hw_we_engine_done, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_done);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_we_engine_done 
            = vlSelfRef.tb_axil__DOT__i_hw_we_engine_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_engine_events) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_engine_events)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 398, vlSelfRef.tb_axil__DOT__cov_i_engine_events, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_engine_events);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_engine_events 
            = vlSelfRef.tb_axil__DOT__cov_i_engine_events;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_port_0_event_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_0_event_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 414, vlSelfRef.tb_axil__DOT__cov_i_port_0_event_count, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_0_event_count);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_0_event_count 
            = vlSelfRef.tb_axil__DOT__cov_i_port_0_event_count;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 430, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_start);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_start 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 432, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_start);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_start 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 434, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_fault, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_fault);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_fault 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 436, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_fault, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_fault);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_fault 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 438, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_pending, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_pending 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 440, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_pending, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_pending 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 442, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_overflow 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 444, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_overflow 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 446, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_done, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_done);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_done 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 448, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_done, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_done);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_done 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_port_1_event_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_1_event_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 450, vlSelfRef.tb_axil__DOT__cov_i_port_1_event_count, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_1_event_count);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_1_event_count 
            = vlSelfRef.tb_axil__DOT__cov_i_port_1_event_count;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 466, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_start);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_start 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 468, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_start);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_start 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 470, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_fault, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_fault);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_fault 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 472, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_fault, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_fault);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_fault 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 474, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_pending, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_pending 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 476, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_pending, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_pending 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 478, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_overflow 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 480, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_overflow 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 482, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_done, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_done);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_done 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 484, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_done, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_done);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_done 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_port_2_event_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_2_event_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 486, vlSelfRef.tb_axil__DOT__cov_i_port_2_event_count, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_2_event_count);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_port_2_event_count 
            = vlSelfRef.tb_axil__DOT__cov_i_port_2_event_count;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 502, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_start);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_start 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 504, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_start);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_start 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 506, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_fault, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_fault);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_fault 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 508, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_fault, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_fault);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_fault 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 510, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_pending, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_pending 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 512, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_pending, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_pending 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 514, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_overflow 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 516, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_overflow 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 518, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_done, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_done);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_done 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 520, vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_done, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_done);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_done 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_capture)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 554, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_capture);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_capture 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_capture)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 558, vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_capture);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_capture 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_error) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_error)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 562, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_error, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_error);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_error 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_error)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 566, vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_error);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_error 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 570, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_pending, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_pending 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 574, vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_pending);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_pending 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 578, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_overflow 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 582, vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_overflow);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_overflow 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_match) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 586, vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_match, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_match);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_match 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 590, vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_match);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_match 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clear_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 594, vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clear_monitor_key_fragment);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clear_monitor_key_fragment 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__old_value ^ vlSelfRef.tb_axil__DOT____Vtogcov__old_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 692, vlSelfRef.tb_axil__DOT__old_value, vlSelfRef.tb_axil__DOT____Vtogcov__old_value);
        vlSelfRef.tb_axil__DOT____Vtogcov__old_value 
            = vlSelfRef.tb_axil__DOT__old_value;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 809, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 817, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_start);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 819, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_fault);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 821, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 823, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 825, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 827, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 835, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_start);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 837, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_fault);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 839, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 841, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 843, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 845, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 853, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_start);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 855, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_fault);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 857, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 859, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 861, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 863, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 871, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_start);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 873, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_fault);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 875, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 877, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 879, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_capture)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 897, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_capture);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_capture 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_error)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 901, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_error);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_error 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 905, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 909, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 913, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1215, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_accept_read))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1217, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_accept_read);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_accept_read 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_rd_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1219, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_rd_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_rd_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wr_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1227, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wr_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wr_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1235, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1237, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_awaddr_hold)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1239, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_awaddr_hold);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_awaddr_hold 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata_hold))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1271, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata_hold);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata_hold 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb_hold)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1335, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb_hold);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb_hold 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold;
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1347, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count));
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1355, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_wr_ptr)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2987, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_rd_ptr)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2991, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2995, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3165, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3167, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3169, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_wr_ptr)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3617, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_rd_ptr)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3621, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 3625, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3725, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3727, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3729, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 172, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bresp);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bresp 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr];
    }
    if ((0U != (0x000000ffU & ((IData)(vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count) 
                               ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 522, vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count 
            = ((0xff00U & (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count)) 
               | (0x000000ffU & (IData)(vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count)));
    }
    if ((0U != (0x000000ffU & (((IData)(vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count) 
                                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count)) 
                               >> 8U)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 538, 
                               ((IData)(vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count) 
                                >> 8U), ((IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count) 
                                         >> 8U));
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count 
            = ((0x00ffU & (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count)) 
               | (0x0000ff00U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count)));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                               ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 881, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold 
            = ((0xf0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
               | (0x0000000fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 889, 
                               ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                >> 4U), ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold) 
                                         >> 4U));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold 
            = ((0x0fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
               | (0x000000f0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    if ((0U != (0x00007fffU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                               ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 917, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != (0x00007fffU & ((vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
                               >> 0x0000000fU)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 947, 
                               (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                >> 0x0000000fU), (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
                                                  >> 0x0000000fU));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr] 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1363, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                  [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 1499, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1671, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_r_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_r_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[0U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 3029, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[0U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[0U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[1U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 3097, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[1U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[1U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[0U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 3661, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[0U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[0U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[1U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 3693, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[1U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[1U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[0U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2971, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[0U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[0U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[1U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2975, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[1U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[1U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[2U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2979, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[2U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[2U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[2U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[2U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[3U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[3U]))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2983, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[3U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[3U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[3U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[3U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[0U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 3201, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[0U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[0U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[1U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 3305, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[1U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[1U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[2U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[2U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 3409, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[2U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[2U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[2U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[2U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[3U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[3U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 3513, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[3U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[3U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[3U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[3U];
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp 
        = (3U & (IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
                         [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr] 
                         >> 0x00000020U)));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
        = (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr]);
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data 
        = (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold)) 
            << 0x00000024U) | (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold)) 
                                << 4U) | (QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold))));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
           | (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid 
        = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending));
    vlSelfRef.__Vdfg_Regularize_134 = (0x0000000fU 
                                       & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                 [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr]));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask = 
        ((((0x0000ff00U & ((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                     >> 3U))))) 
                           << 8U)) | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                             [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                             >> 2U))))))) 
          << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                                    [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                                    >> 1U))))) 
                                             << 8U)) 
                             | (0x000000ffU & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                                    [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr])))))));
    vlSelfRef.__Vdfg_Regularize_133 = (IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                               >> 4U));
    tb_axil__DOT__u_dut__DOT__w_engine_value = ((((IData)(vlSelfRef.tb_axil__DOT__cov_i_engine_events) 
                                                  << 0x00000018U) 
                                                 | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                                                     << 0x00000014U) 
                                                    | (((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow))) 
                                                       << 0x00000010U))) 
                                                | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done) 
                                                   << 0x0000000fU));
    tb_axil__DOT__u_dut__DOT__w_port_0_value = ((((IData)(vlSelfRef.tb_axil__DOT__cov_i_port_0_event_count) 
                                                  << 0x00000018U) 
                                                 | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                                                     << 0x00000014U) 
                                                    | (((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow))) 
                                                       << 0x00000010U))) 
                                                | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done) 
                                                   << 0x0000000fU));
    tb_axil__DOT__u_dut__DOT__w_port_1_value = ((((IData)(vlSelfRef.tb_axil__DOT__cov_i_port_1_event_count) 
                                                  << 0x00000018U) 
                                                 | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                                                     << 0x00000014U) 
                                                    | (((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow))) 
                                                       << 0x00000010U))) 
                                                | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done) 
                                                   << 0x0000000fU));
    tb_axil__DOT__u_dut__DOT__w_port_2_value = ((((IData)(vlSelfRef.tb_axil__DOT__cov_i_port_2_event_count) 
                                                  << 0x00000018U) 
                                                 | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                                                     << 0x00000014U) 
                                                    | (((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow))) 
                                                       << 0x00000010U))) 
                                                | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done) 
                                                   << 0x0000000fU));
    tb_axil__DOT__u_dut__DOT__w_monitor_value = (((QData)((IData)(
                                                                  ((((0x0000ff00U 
                                                                      & (IData)(vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count)) 
                                                                     | ((0x000000f0U 
                                                                         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold)) 
                                                                        | ((((2U 
                                                                              & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture)) 
                                                                             | (1U 
                                                                                & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                                                                                >> 1U))) 
                                                                            << 2U) 
                                                                           | ((2U 
                                                                               & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending)) 
                                                                              | (1U 
                                                                                & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow) 
                                                                                >> 1U)))))) 
                                                                    << 0x00000010U) 
                                                                   | (0x00008000U 
                                                                      & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                                                                         << 0x0000000eU))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((0x0000ff00U 
                                                                       & ((IData)(vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count) 
                                                                          << 8U)) 
                                                                      | ((0x000000f0U 
                                                                          & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                                                             << 4U)) 
                                                                         | ((((2U 
                                                                               & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error))) 
                                                                             << 2U) 
                                                                            | ((2U 
                                                                                & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow)))))) 
                                                                     << 0x00000010U) 
                                                                    | (0x00008000U 
                                                                       & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                                                                          << 0x0000000fU))))));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_bready) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_rready) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)));
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 244, vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp, vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rresp);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rresp 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                ^ vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 180, vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata, vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rdata);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rdata 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata;
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 1395, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1753, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1351, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid;
    }
    if ((0U != ((IData)(vlSelfRef.__Vdfg_Regularize_134) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1073, vlSelfRef.__Vdfg_Regularize_134, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb 
            = vlSelfRef.__Vdfg_Regularize_134;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wmask))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1081, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wmask);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wmask 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask;
    }
    if ((0U != (vlSelfRef.__Vdfg_Regularize_133 ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1009, vlSelfRef.__Vdfg_Regularize_133, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata 
            = vlSelfRef.__Vdfg_Regularize_133;
    }
    if ((0U != (tb_axil__DOT__u_dut__DOT__w_engine_value 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1779, tb_axil__DOT__u_dut__DOT__w_engine_value, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_value);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_value 
            = tb_axil__DOT__u_dut__DOT__w_engine_value;
    }
    if ((0U != (tb_axil__DOT__u_dut__DOT__w_port_0_value 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1865, tb_axil__DOT__u_dut__DOT__w_port_0_value, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_value);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_value 
            = tb_axil__DOT__u_dut__DOT__w_port_0_value;
    }
    if ((0U != (tb_axil__DOT__u_dut__DOT__w_port_1_value 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1951, tb_axil__DOT__u_dut__DOT__w_port_1_value, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_value);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_value 
            = tb_axil__DOT__u_dut__DOT__w_port_1_value;
    }
    if ((0U != (tb_axil__DOT__u_dut__DOT__w_port_2_value 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2037, tb_axil__DOT__u_dut__DOT__w_port_2_value, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_value);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_value 
            = tb_axil__DOT__u_dut__DOT__w_port_2_value;
    }
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_monitor_value) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value)))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2205, (IData)(tb_axil__DOT__u_dut__DOT__w_monitor_value), (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0xffffffff00000000ULL & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_monitor_value)));
    }
    if ((0U != ((IData)((tb_axil__DOT__u_dut__DOT__w_monitor_value 
                         >> 0x00000020U)) ^ (IData)(
                                                    (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                     >> 0x00000020U))))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2269, (IData)(
                                                                       (tb_axil__DOT__u_dut__DOT__w_monitor_value 
                                                                        >> 0x00000020U)), (IData)(
                                                                                (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                                                >> 0x00000020U)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0x00000000ffffffffULL & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | ((QData)((IData)((IData)((tb_axil__DOT__u_dut__DOT__w_monitor_value 
                                           >> 0x00000020U)))) 
                  << 0x00000020U));
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1749, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready 
        = ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1747, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs));
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1361, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1359, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready;
    }
    tb_axil__DOT__u_dut__DOT__w_issue_read = 0U;
    tb_axil__DOT__u_dut__DOT__w_issue_write = 0U;
    if (((((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)) 
          & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read) {
            tb_axil__DOT__u_dut__DOT__w_issue_read = 1U;
            ++(vlSelf->__Vcoverage[2570]);
        } else {
            tb_axil__DOT__u_dut__DOT__w_issue_write = 1U;
            ++(vlSelf->__Vcoverage[2571]);
        }
        ++(vlSelf->__Vcoverage[2581]);
    } else {
        if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
             & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready))) {
            tb_axil__DOT__u_dut__DOT__w_issue_read = 1U;
            ++(vlSelf->__Vcoverage[2577]);
        } else {
            if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
                 & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
                tb_axil__DOT__u_dut__DOT__w_issue_write = 1U;
                ++(vlSelf->__Vcoverage[2572]);
            } else {
                ++(vlSelf->__Vcoverage[2573]);
            }
            if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
                 & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
                ++(vlSelf->__Vcoverage[2574]);
            }
            if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
                ++(vlSelf->__Vcoverage[2575]);
            }
            if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[2576]);
            }
        }
        if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
             & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready))) {
            ++(vlSelf->__Vcoverage[2578]);
        }
        if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
            ++(vlSelf->__Vcoverage[2579]);
        }
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[2580]);
        }
    }
    if (((((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)) 
          & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2582]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2583]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2584]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2585]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2586]);
    }
    ++(vlSelf->__Vcoverage[2587]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3007]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3008]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[3009]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write))) {
        ++(vlSelf->__Vcoverage[3635]);
    }
    if ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3636]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[3637]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3638]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write))) {
        ++(vlSelf->__Vcoverage[3642]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[3643]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3644]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1357, tb_axil__DOT__u_dut__DOT__w_issue_write, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_ready 
            = tb_axil__DOT__u_dut__DOT__w_issue_write;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)));
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3179]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3180]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3181]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read))) {
        ++(vlSelf->__Vcoverage[3737]);
    }
    if ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3738]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3739]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3740]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read))) {
        ++(vlSelf->__Vcoverage[3744]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3745]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3746]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1349, tb_axil__DOT__u_dut__DOT__w_issue_read, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready 
            = tb_axil__DOT__u_dut__DOT__w_issue_read;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready));
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2610]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2613]);
        if (tb_axil__DOT__u_dut__DOT__w_issue_write) {
            ++(vlSelf->__Vcoverage[2611]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2 = 1U;
        } else {
            ++(vlSelf->__Vcoverage[2612]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read;
        }
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3;
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2608]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2609]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)));
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2590]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr];
    } else {
        ++(vlSelf->__Vcoverage[2591]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0 
            = (0x0000ffffU & (IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                      >> 0x24U)));
    }
    tb_axil__DOT__u_dut__DOT__w_issue_addr = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0;
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2588]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2589]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3001, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3633, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready 
        = ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3173, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1755, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3735, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs));
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 977, tb_axil__DOT__u_dut__DOT__w_issue_addr, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr 
            = tb_axil__DOT__u_dut__DOT__w_issue_addr;
    }
    __Vdfg_Regularize_135 = (((0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                              << 1U) | (0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)));
    tb_axil__DOT__u_dut__DOT__w_rdata_nxt = 0U;
    tb_axil__DOT__u_dut__DOT__w_addr_mapped = 0U;
    if (((((((((0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
               | (0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) 
              | (0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) 
             | (0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) 
            | (0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) 
           | (0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) 
          | (0x0208U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) 
         | (0x020cU == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        if ((0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = tb_axil__DOT__u_dut__DOT__w_engine_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2952]);
        } else if ((0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = tb_axil__DOT__u_dut__DOT__w_port_0_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2953]);
        } else if ((0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = tb_axil__DOT__u_dut__DOT__w_port_1_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2954]);
        } else if ((0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = tb_axil__DOT__u_dut__DOT__w_port_2_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2955]);
        } else if ((0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = (IData)(tb_axil__DOT__u_dut__DOT__w_monitor_value);
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2956]);
            ++(vlSelf->__Vcoverage[2958]);
        } else if ((0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = (IData)(
                                                            (tb_axil__DOT__u_dut__DOT__w_monitor_value 
                                                             >> 0x20U));
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2959]);
            ++(vlSelf->__Vcoverage[2961]);
        } else if ((0x0208U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            ++(vlSelf->__Vcoverage[2963]);
            ++(vlSelf->__Vcoverage[2964]);
        } else {
            ++(vlSelf->__Vcoverage[2966]);
            ++(vlSelf->__Vcoverage[2967]);
        }
    } else if ((0x0400U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        tb_axil__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
        ++(vlSelf->__Vcoverage[2968]);
    } else {
        tb_axil__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_axil__DOT__u_dut__DOT__w_addr_mapped = 0U;
        ++(vlSelf->__Vcoverage[2969]);
    }
    ++(vlSelf->__Vcoverage[2970]);
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3639]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3640]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid)))) {
        ++(vlSelf->__Vcoverage[3641]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1353, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready;
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2484]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2485]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2486]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2487]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2488]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2489]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2490]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2491]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2492]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2493]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2494]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2495]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2498]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)))) {
        ++(vlSelf->__Vcoverage[2499]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) {
        ++(vlSelf->__Vcoverage[2500]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2501]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2502]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2503]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2504]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2505]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2506]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2507]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2508]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2509]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2510]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2511]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2512]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2515]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)))) {
        ++(vlSelf->__Vcoverage[2516]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) {
        ++(vlSelf->__Vcoverage[2517]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready 
        = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready) 
           & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
              & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) 
                 | (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)))));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready 
        = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready) 
           & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
              & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
                 | (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)))));
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1345, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready;
    }
    if (((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read))) {
        ++(vlSelf->__Vcoverage[2474]);
    }
    if (((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate)))) {
        ++(vlSelf->__Vcoverage[2475]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)))) {
        ++(vlSelf->__Vcoverage[2476]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read))) {
        ++(vlSelf->__Vcoverage[2477]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate)))) {
        ++(vlSelf->__Vcoverage[2478]);
    }
    if (((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2479]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2482]);
    }
    if ((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) {
        ++(vlSelf->__Vcoverage[2483]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready));
    if ((0U != (tb_axil__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1149, tb_axil__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = tb_axil__DOT__u_dut__DOT__w_rdata_nxt;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_addr_mapped) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1213, tb_axil__DOT__u_dut__DOT__w_addr_mapped, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped 
            = tb_axil__DOT__u_dut__DOT__w_addr_mapped;
    }
    if ((0U != (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2594]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 2U;
    } else {
        ++(vlSelf->__Vcoverage[2599]);
        if (tb_axil__DOT__u_dut__DOT__w_addr_mapped) {
            ++(vlSelf->__Vcoverage[2598]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 0U;
            ++(vlSelf->__Vcoverage[2597]);
        } else {
            ++(vlSelf->__Vcoverage[2595]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 3U;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1;
    if ((0U != (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2592]);
    }
    if ((0U == (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2593]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3631, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[2521]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[2522]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid)))) {
        ++(vlSelf->__Vcoverage[2523]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 166, vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready, vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_awready);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_awready 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
                                                   & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready));
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[2524]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[2525]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid)))) {
        ++(vlSelf->__Vcoverage[2526]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 168, vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready, vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_wready);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_wready 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid) 
                                                  & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready));
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[2518]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[2519]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2520]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 176, vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready, vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_arready);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_arready 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready));
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)))) {
        ++(vlSelf->__Vcoverage[2600]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp))) {
        ++(vlSelf->__Vcoverage[2601]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2602]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)))) {
        ++(vlSelf->__Vcoverage[2603]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp))) {
        ++(vlSelf->__Vcoverage[2604]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[2605]);
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1739, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp;
    }
    tb_axil__DOT__u_dut__DOT__w_rd_en = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
                                         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)));
    tb_axil__DOT__u_dut__DOT__w_wr_en = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
                                         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1743, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1745, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs;
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs))) {
        ++(vlSelf->__Vcoverage[2533]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs))) {
        ++(vlSelf->__Vcoverage[2534]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs)) 
               & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs))))) {
        ++(vlSelf->__Vcoverage[2535]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) {
        ++(vlSelf->__Vcoverage[2536]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) {
        ++(vlSelf->__Vcoverage[2537]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve 
        = ((~ ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
           & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs) 
              | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3741]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3742]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid)))) {
        ++(vlSelf->__Vcoverage[3743]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1343, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid));
    if (tb_axil__DOT__u_dut__DOT__w_rd_en) {
        ++(vlSelf->__Vcoverage[2606]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2607]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2640]);
    }
    if ((0U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2641]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2642]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2643]);
    }
    if ((0x0100U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2644]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2645]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2646]);
    }
    if ((0x0104U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2647]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2648]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2649]);
    }
    if ((0x0108U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2650]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2651]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2652]);
    }
    if ((0x0200U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2653]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2654]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2655]);
    }
    if ((0x0204U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2656]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2657]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1145, tb_axil__DOT__u_dut__DOT__w_rd_en, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en 
            = tb_axil__DOT__u_dut__DOT__w_rd_en;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data 
        = (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)) 
            << 0x00000020U) | (QData)((IData)((tb_axil__DOT__u_dut__DOT__w_rdata_nxt 
                                               & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))))));
    tb_axil__DOT__u_dut__DOT__w_rd_engine = ((0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_port_0 = ((0x0100U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_port_1 = ((0x0104U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_port_2 = ((0x0108U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_monitor = ((IData)(__Vdfg_Regularize_135) 
                                              & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en))));
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2619]);
    }
    if ((0U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2620]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2621]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2622]);
    }
    if ((0x0100U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2623]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2624]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2625]);
    }
    if ((0x0104U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2626]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2627]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2628]);
    }
    if ((0x0108U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2629]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2630]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2631]);
    }
    if ((0x0200U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2632]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2633]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2634]);
    }
    if ((0x0204U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2635]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2636]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0400U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2637]);
    }
    if ((0x0400U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2638]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2639]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1147, tb_axil__DOT__u_dut__DOT__w_wr_en, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en 
            = tb_axil__DOT__u_dut__DOT__w_wr_en;
    }
    tb_axil__DOT__u_dut__DOT__w_we_key = ((0x0400U 
                                           == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                          & (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en));
    tb_axil__DOT__u_dut__DOT__w_we_engine = ((0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en));
    tb_axil__DOT__u_dut__DOT__w_we_port_0 = ((0x0100U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en));
    tb_axil__DOT__u_dut__DOT__w_we_port_1 = ((0x0104U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en));
    tb_axil__DOT__u_dut__DOT__w_we_port_2 = ((0x0108U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en));
    tb_axil__DOT__u_dut__DOT__w_we_monitor = ((IData)(__Vdfg_Regularize_135) 
                                              & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en))));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1751, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3733, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs;
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1603, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_engine) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1759, tb_axil__DOT__u_dut__DOT__w_rd_engine, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine 
            = tb_axil__DOT__u_dut__DOT__w_rd_engine;
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2693]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_done;
    } else {
        ++(vlSelf->__Vcoverage[2696]);
        if (tb_axil__DOT__u_dut__DOT__w_rd_engine) {
            ++(vlSelf->__Vcoverage[2694]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2695]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2691]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_done)))) {
        ++(vlSelf->__Vcoverage[2692]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_0) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1845, tb_axil__DOT__u_dut__DOT__w_rd_port_0, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_0;
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_done) {
        ++(vlSelf->__Vcoverage[2738]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_done;
    } else {
        ++(vlSelf->__Vcoverage[2741]);
        if (tb_axil__DOT__u_dut__DOT__w_rd_port_0) {
            ++(vlSelf->__Vcoverage[2739]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2740]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_done) {
        ++(vlSelf->__Vcoverage[2736]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_done)))) {
        ++(vlSelf->__Vcoverage[2737]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_1) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1931, tb_axil__DOT__u_dut__DOT__w_rd_port_1, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_1;
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_done) {
        ++(vlSelf->__Vcoverage[2783]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_done;
    } else {
        ++(vlSelf->__Vcoverage[2786]);
        if (tb_axil__DOT__u_dut__DOT__w_rd_port_1) {
            ++(vlSelf->__Vcoverage[2784]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2785]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_done) {
        ++(vlSelf->__Vcoverage[2781]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_done)))) {
        ++(vlSelf->__Vcoverage[2782]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_2) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2017, tb_axil__DOT__u_dut__DOT__w_rd_port_2, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_2;
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_done) {
        ++(vlSelf->__Vcoverage[2828]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_done;
    } else {
        ++(vlSelf->__Vcoverage[2831]);
        if (tb_axil__DOT__u_dut__DOT__w_rd_port_2) {
            ++(vlSelf->__Vcoverage[2829]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2830]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_done) {
        ++(vlSelf->__Vcoverage[2826]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_done)))) {
        ++(vlSelf->__Vcoverage[2827]);
    }
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2201, tb_axil__DOT__u_dut__DOT__w_rd_monitor, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor 
            = tb_axil__DOT__u_dut__DOT__w_rd_monitor;
    }
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match))) {
        ++(vlSelf->__Vcoverage[2873]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_match));
    } else {
        ++(vlSelf->__Vcoverage[2876]);
        if ((1U & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor))) {
            ++(vlSelf->__Vcoverage[2874]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2875]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33 
                = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33));
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match))) {
        ++(vlSelf->__Vcoverage[2871]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match)))) {
        ++(vlSelf->__Vcoverage[2872]);
    }
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match))) {
        ++(vlSelf->__Vcoverage[2924]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_match) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[2927]);
        if ((2U & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor))) {
            ++(vlSelf->__Vcoverage[2925]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2926]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match))) {
        ++(vlSelf->__Vcoverage[2922]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2923]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_key) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2333, tb_axil__DOT__u_dut__DOT__w_we_key, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key 
            = tb_axil__DOT__u_dut__DOT__w_we_key;
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2942]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2945]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))) {
            ++(vlSelf->__Vcoverage[2943]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44 
                = ((vlSelfRef.__Vdfg_Regularize_133 
                    & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                   | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)));
        } else {
            ++(vlSelf->__Vcoverage[2944]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data;
        }
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45;
    if (vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2940]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_clear_key_data)))) {
        ++(vlSelf->__Vcoverage[2941]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1757, tb_axil__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = tb_axil__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2664]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2665]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2658]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2659]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2660]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2661]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2662]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2663]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2687]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2690]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_134)))) {
            ++(vlSelf->__Vcoverage[2688]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2689]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2685]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow)))) {
        ++(vlSelf->__Vcoverage[2686]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2669]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2672]);
        if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_start) {
            ++(vlSelf->__Vcoverage[2670]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start;
        } else {
            ++(vlSelf->__Vcoverage[2671]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2666]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2667]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2668]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2675]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_fault;
    } else {
        ++(vlSelf->__Vcoverage[2678]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2676]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2677]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2673]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault)))) {
        ++(vlSelf->__Vcoverage[2674]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2681]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending;
    } else {
        ++(vlSelf->__Vcoverage[2684]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2682]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2683]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2679]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending)))) {
        ++(vlSelf->__Vcoverage[2680]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1843, tb_axil__DOT__u_dut__DOT__w_we_port_0, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0 
            = tb_axil__DOT__u_dut__DOT__w_we_port_0;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2709]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2710]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2703]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2704]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2705]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2706]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2707]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2708]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_overflow) {
        ++(vlSelf->__Vcoverage[2732]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2735]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_134)))) {
            ++(vlSelf->__Vcoverage[2733]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2734]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_overflow) {
        ++(vlSelf->__Vcoverage[2730]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_overflow)))) {
        ++(vlSelf->__Vcoverage[2731]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2714]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2717]);
        if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start) {
            ++(vlSelf->__Vcoverage[2715]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
                = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start;
        } else {
            ++(vlSelf->__Vcoverage[2716]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2711]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2712]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2713]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_fault) {
        ++(vlSelf->__Vcoverage[2720]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_fault;
    } else {
        ++(vlSelf->__Vcoverage[2723]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2721]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2722]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_fault) {
        ++(vlSelf->__Vcoverage[2718]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_fault)))) {
        ++(vlSelf->__Vcoverage[2719]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_pending) {
        ++(vlSelf->__Vcoverage[2726]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_pending;
    } else {
        ++(vlSelf->__Vcoverage[2729]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2727]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2728]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_pending) {
        ++(vlSelf->__Vcoverage[2724]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_pending)))) {
        ++(vlSelf->__Vcoverage[2725]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1929, tb_axil__DOT__u_dut__DOT__w_we_port_1, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1 
            = tb_axil__DOT__u_dut__DOT__w_we_port_1;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2754]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2755]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2748]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2749]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2750]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2751]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2752]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2753]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_overflow) {
        ++(vlSelf->__Vcoverage[2777]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2780]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_134)))) {
            ++(vlSelf->__Vcoverage[2778]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2779]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_overflow) {
        ++(vlSelf->__Vcoverage[2775]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_overflow)))) {
        ++(vlSelf->__Vcoverage[2776]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2759]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2762]);
        if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start) {
            ++(vlSelf->__Vcoverage[2760]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
                = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start;
        } else {
            ++(vlSelf->__Vcoverage[2761]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2756]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2757]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2758]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_fault) {
        ++(vlSelf->__Vcoverage[2765]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_fault;
    } else {
        ++(vlSelf->__Vcoverage[2768]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2766]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2767]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_fault) {
        ++(vlSelf->__Vcoverage[2763]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_fault)))) {
        ++(vlSelf->__Vcoverage[2764]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_pending) {
        ++(vlSelf->__Vcoverage[2771]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_pending;
    } else {
        ++(vlSelf->__Vcoverage[2774]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2772]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2773]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_pending) {
        ++(vlSelf->__Vcoverage[2769]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_pending)))) {
        ++(vlSelf->__Vcoverage[2770]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2015, tb_axil__DOT__u_dut__DOT__w_we_port_2, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2 
            = tb_axil__DOT__u_dut__DOT__w_we_port_2;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2799]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2800]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2793]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2794]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2795]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2796]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2797]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2798]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_overflow) {
        ++(vlSelf->__Vcoverage[2822]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2825]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_134)))) {
            ++(vlSelf->__Vcoverage[2823]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2824]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_overflow) {
        ++(vlSelf->__Vcoverage[2820]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_overflow)))) {
        ++(vlSelf->__Vcoverage[2821]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2804]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2807]);
        if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start) {
            ++(vlSelf->__Vcoverage[2805]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
                = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start;
        } else {
            ++(vlSelf->__Vcoverage[2806]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2801]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2802]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2803]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_fault) {
        ++(vlSelf->__Vcoverage[2810]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_fault;
    } else {
        ++(vlSelf->__Vcoverage[2813]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2811]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2812]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_fault) {
        ++(vlSelf->__Vcoverage[2808]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_fault)))) {
        ++(vlSelf->__Vcoverage[2809]);
    }
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_pending) {
        ++(vlSelf->__Vcoverage[2816]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_pending;
    } else {
        ++(vlSelf->__Vcoverage[2819]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2817]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2818]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25;
    if (vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_pending) {
        ++(vlSelf->__Vcoverage[2814]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_pending)))) {
        ++(vlSelf->__Vcoverage[2815]);
    }
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2197, tb_axil__DOT__u_dut__DOT__w_we_monitor, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor 
            = tb_axil__DOT__u_dut__DOT__w_we_monitor;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2844]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2845]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28;
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2838]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2839]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2840]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2841]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2842]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2843]);
    }
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2895]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2896]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                              >> 4U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36;
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2889]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2890]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2891]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2892]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2893]);
    }
    if ((1U & (~ ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2894]);
    }
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow))) {
        ++(vlSelf->__Vcoverage[2867]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_overflow));
    } else {
        ++(vlSelf->__Vcoverage[2870]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_134)))) {
            ++(vlSelf->__Vcoverage[2868]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2869]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32 
                = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32));
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow))) {
        ++(vlSelf->__Vcoverage[2865]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow)))) {
        ++(vlSelf->__Vcoverage[2866]);
    }
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow))) {
        ++(vlSelf->__Vcoverage[2918]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_overflow) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[2921]);
        if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_134)))) {
            ++(vlSelf->__Vcoverage[2919]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2920]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow))) {
        ++(vlSelf->__Vcoverage[2916]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2917]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2849]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture))
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2852]);
        if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture))) {
            ++(vlSelf->__Vcoverage[2850]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
                = (1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture));
        } else {
            ++(vlSelf->__Vcoverage[2851]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
                = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29));
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2846]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2847]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2848]);
    }
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error))) {
        ++(vlSelf->__Vcoverage[2855]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_error));
    } else {
        ++(vlSelf->__Vcoverage[2858]);
        if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                   & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                      >> 0x12U)))) {
            ++(vlSelf->__Vcoverage[2856]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                         & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x12U))));
        } else {
            ++(vlSelf->__Vcoverage[2857]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
                = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30));
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error))) {
        ++(vlSelf->__Vcoverage[2853]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error)))) {
        ++(vlSelf->__Vcoverage[2854]);
    }
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending))) {
        ++(vlSelf->__Vcoverage[2861]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_pending));
    } else {
        ++(vlSelf->__Vcoverage[2864]);
        if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                   & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                      >> 0x11U)))) {
            ++(vlSelf->__Vcoverage[2862]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                         & ((vlSelfRef.__Vdfg_Regularize_133 
                             >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                             >> 0x11U)))));
        } else {
            ++(vlSelf->__Vcoverage[2863]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
                = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31));
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending))) {
        ++(vlSelf->__Vcoverage[2859]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending)))) {
        ++(vlSelf->__Vcoverage[2860]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2900]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture))
                                     ? ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture) 
                                        >> 1U) : ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                                  >> 1U)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2903]);
        if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture))) {
            ++(vlSelf->__Vcoverage[2901]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture) 
                         >> 1U));
        } else {
            ++(vlSelf->__Vcoverage[2902]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37) 
              << 1U));
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2897]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2898]);
    }
    if ((1U & (~ ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2899]);
    }
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error))) {
        ++(vlSelf->__Vcoverage[2906]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_error) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[2909]);
        if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                      >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                >> 0x00000012U)))) {
            ++(vlSelf->__Vcoverage[2907]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
                = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                            >> 1U) & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                                         >> 0x12U))));
        } else {
            ++(vlSelf->__Vcoverage[2908]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error))) {
        ++(vlSelf->__Vcoverage[2904]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2905]);
    }
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending))) {
        ++(vlSelf->__Vcoverage[2912]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_pending) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[2915]);
        if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                      >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                >> 0x00000011U)))) {
            ++(vlSelf->__Vcoverage[2913]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
                = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                            >> 1U) & ((vlSelfRef.__Vdfg_Regularize_133 
                                       >> 0x11U) | 
                                      (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                          >> 0x11U)))));
        } else {
            ++(vlSelf->__Vcoverage[2914]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending))) {
        ++(vlSelf->__Vcoverage[2910]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2911]);
    }
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2879]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_35 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2882]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
            ++(vlSelf->__Vcoverage[2880]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_133 
                                   & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                                  | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                     & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))));
        } else {
            ++(vlSelf->__Vcoverage[2881]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34 
                = (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment);
        }
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_35 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_35;
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2877]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[2878]);
    }
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2930]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_43 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2933]);
        if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
            ++(vlSelf->__Vcoverage[2931]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_133 
                                   & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                                  | ((vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                      >> 0x0fU) & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))));
        } else {
            ++(vlSelf->__Vcoverage[2932]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42 
                = (0x00007fffU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                  >> 0x0fU));
        }
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_43 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_43;
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2928]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2929]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1777, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1863, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1949, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2035, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2133, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2335, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1761, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1775, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1769, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1771, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1773, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1847, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1861, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1855, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1857, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1859, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1933, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1947, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1941, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1943, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1945, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2019, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2033, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2027, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2029, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2031, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__) 
                               ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2101, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0xf0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                               ^ ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                  >> 4U))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2109, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__, 
                               ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                >> 4U));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0x0fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2129, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2117, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2121, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2125, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt;
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__) 
                               ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2137, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                               ^ (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                  >> 0x0000000fU))))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2167, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__, 
                               (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                >> 0x0000000fU));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                  << 0x0000000fU));
    }
}

bool Vtb_axil___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axil___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axil___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_axil___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axil___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axil___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_axil.i_clk_axi)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_axil.i_rst_n_axi)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_axil.i_clk_axi)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge tb_axil.i_clk_reg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axil___024root___ctor_var_reset(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___ctor_var_reset\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_axil__DOT__i_clk_axi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17597766006358653963ull);
    vlSelf->tb_axil__DOT__i_clk_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7125391080028818476ull);
    vlSelf->tb_axil__DOT__i_rst_n_axi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3416115568597902360ull);
    vlSelf->tb_axil__DOT__i_rst_n_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8607848366973673181ull);
    vlSelf->tb_axil__DOT__i_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3306683926600504240ull);
    vlSelf->tb_axil__DOT__i_axi_awaddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8734683658086344822ull);
    vlSelf->tb_axil__DOT__i_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7246989818969606972ull);
    vlSelf->tb_axil__DOT__i_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14968657689674551789ull);
    vlSelf->tb_axil__DOT__i_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6632280892008314585ull);
    vlSelf->tb_axil__DOT__i_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6364544379097688909ull);
    vlSelf->tb_axil__DOT__i_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 393452671763326541ull);
    vlSelf->tb_axil__DOT__i_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8501955401392788467ull);
    vlSelf->tb_axil__DOT__i_axi_araddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18373675655612782773ull);
    vlSelf->tb_axil__DOT__i_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9882285543216648588ull);
    vlSelf->tb_axil__DOT__i_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12957282246042588697ull);
    vlSelf->tb_axil__DOT__o_data_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8060824458762628600ull);
    vlSelf->tb_axil__DOT__i_hw_clear_key_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18174043120906097009ull);
    vlSelf->tb_axil__DOT__i_hw_wdata_engine_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15812348614019169628ull);
    vlSelf->tb_axil__DOT__i_hw_we_engine_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2669662423540775795ull);
    vlSelf->tb_axil__DOT__i_hw_wdata_engine_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16137578622087987976ull);
    vlSelf->tb_axil__DOT__i_hw_we_engine_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3322663279767360451ull);
    vlSelf->tb_axil__DOT__i_hw_wdata_engine_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14099087804694449758ull);
    vlSelf->tb_axil__DOT__i_hw_we_engine_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11740645897083155454ull);
    vlSelf->tb_axil__DOT__i_hw_wdata_engine_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13050472642607858117ull);
    vlSelf->tb_axil__DOT__i_hw_we_engine_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2848168518635923090ull);
    vlSelf->tb_axil__DOT__i_hw_wdata_engine_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10387135483153580433ull);
    vlSelf->tb_axil__DOT__i_hw_we_engine_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9394571582546686396ull);
    vlSelf->tb_axil__DOT__cov_i_engine_events = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10767848101615269161ull);
    vlSelf->tb_axil__DOT__cov_i_port_0_event_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1032991120408244940ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_0_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10216675738529461895ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_0_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10672866429308412412ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_0_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17600640086364388099ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_0_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8574305971034774656ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_0_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2067988908192365447ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_0_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7172945666529778440ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_0_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16531425557677385893ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_0_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12689532415350835018ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_0_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17551535995377015535ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_0_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16086293781011318082ull);
    vlSelf->tb_axil__DOT__cov_i_port_1_event_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13566022769491387566ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_1_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13901111410352498098ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_1_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8969220988918316386ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_1_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11707828159088522499ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_1_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 170231182639283548ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_1_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16643079947467129295ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_1_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18396474949186939390ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_1_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2691788182215634007ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_1_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5350609920397351123ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9546289447929300375ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7080058524504913948ull);
    vlSelf->tb_axil__DOT__cov_i_port_2_event_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11269895767269456604ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_2_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15274437404670219459ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_2_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416075260669006175ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_2_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5550005192965310670ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_2_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 295591931282242652ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_2_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 94844644746253713ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_2_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981095837827630899ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_2_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15879122296975421182ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_2_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7397507108273193738ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_port_2_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263200954995517070ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_port_2_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17902830666879447331ull);
    vlSelf->tb_axil__DOT__cov_i_monitor_sample_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4635041304455230013ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_monitor_capture = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8733489708457969917ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_monitor_capture = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2567251001064597288ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_monitor_error = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8881994548221558885ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_monitor_error = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 335536710660810007ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_monitor_pending = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17804603911734134202ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_monitor_pending = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9892826587568759613ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_monitor_overflow = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7010996788900059284ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_monitor_overflow = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3922327952267681271ull);
    vlSelf->tb_axil__DOT__cov_i_hw_wdata_monitor_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5284104527371919245ull);
    vlSelf->tb_axil__DOT__cov_i_hw_we_monitor_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1262697775722683091ull);
    vlSelf->tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10553389467864008176ull);
    vlSelf->tb_axil__DOT__old_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4538560569455312868ull);
    vlSelf->tb_axil__DOT____Vtogcov__i_clk_axi = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_clk_reg = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_rst_n_axi = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_rst_n_reg = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_awvalid = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_awaddr = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_awprot = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_wvalid = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_wdata = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_wstrb = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_bready = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_arvalid = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_araddr = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_arprot = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_axi_rready = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_axi_awready = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_axi_wready = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_axi_bvalid = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_axi_bresp = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_axi_arready = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_axi_rvalid = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_axi_rdata = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_axi_rresp = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_data_value = 0;
    vlSelf->tb_axil__DOT____Vtogcov__o_key_data = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_clear_key_data = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_wdata_engine_start = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_we_engine_start = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_wdata_engine_fault = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_we_engine_fault = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_wdata_engine_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_we_engine_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_wdata_engine_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_we_engine_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_wdata_engine_done = 0;
    vlSelf->tb_axil__DOT____Vtogcov__i_hw_we_engine_done = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_engine_events = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_port_0_event_count = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_start = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_start = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_fault = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_fault = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_0_done = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_0_done = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_port_1_event_count = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_start = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_start = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_fault = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_fault = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_1_done = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_1_done = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_port_2_event_count = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_start = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_start = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_fault = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_fault = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_port_2_done = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_port_2_done = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_monitor_sample_count = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_capture = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_capture = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_error = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_error = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_pending = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_overflow = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_wdata_monitor_match = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_we_monitor_match = 0;
    vlSelf->tb_axil__DOT____Vtogcov__cov_i_hw_clear_monitor_key_fragment = 0;
    vlSelf->tb_axil__DOT____Vtogcov__old_value = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__o_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10255041271548587828ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__o_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912281905609808311ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__o_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13461430518462485408ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__o_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1761967491162590283ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__o_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8982697303868280959ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_wmask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7284339917832430634ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_axi_rr_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1164999582654034692ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_axi_accept_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10366980963873142601ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_rd_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15858751496499393675ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_wr_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9827118575277012659ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_aw_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9685750438510450513ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_w_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8913859171843399045ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_awaddr_hold = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15814514386729948248ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_wdata_hold = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8181822928238473767ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_wstrb_hold = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4554225326008589242ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4933069286719627007ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8102706958004912888ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16685077473564463311ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1509806812731127121ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13660029171482418749ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9937634969315069567ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_wr_reserve = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8525133923345708777ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_write_candidate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2693931606928223667ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_issue_resp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3465808944102572937ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1373301626999676320ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_engine_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18126631476720080183ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17815436471361767357ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_engine_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18076209157030609597ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_engine_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7185569898088847298ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_engine_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8017738143519895380ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8224784615980222845ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_engine_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4715945628258877628ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16902675990149198679ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_engine_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3481370163399085680ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8026742751190836117ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_engine_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9412602577074659590ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_engine_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15578675802660827162ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_0_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5537026693967925277ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10804056624260225686ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_0_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828038304463540766ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13956178758985217325ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_0_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4369015007827317599ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7659818648788674791ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_0_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2989551024764103951ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 965112812129053016ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_0_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13040710065540875738ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8206174417884658125ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_0_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9216904836935339726ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4817941389576490442ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_1_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 648219539928646398ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15853769653728886946ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_1_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5204647898333527315ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5187338550528023867ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_1_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16079197777877077671ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13743192512288556090ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_1_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3079871474169532324ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16230421976321463581ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_1_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12012389169673389639ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15501494825031861408ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14965151197387199878ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5419294177108960434ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_2_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16378377117158367553ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1632952185108231775ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_2_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4586895257515288780ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3540951586170370483ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_2_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2325028823035655293ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9872388491870050779ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_2_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1581524780128209693ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12741383063147634775ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_2_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4264225782888476285ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1411833291315525354ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_port_2_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3000008394811712185ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 686994844318904348ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_monitor_threshold = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14990604389416565998ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3075660343310075292ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4075230236670108343ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_monitor_capture = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3110316814266120906ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6772369143447239061ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_monitor_error = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15137117790476280846ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12282305106629278952ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_monitor_pending = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1864446116246976837ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 985959019691924421ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_monitor_overflow = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6597353556636277624ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13326751052620014529ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_monitor_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17335101766616084373ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11382377682202657891ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 2231804808988034777ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1800496545753647307ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4658359448713233599ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__reg_key_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2831593074617805485ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__w_key_data_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11383542845445896129ull);
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_start = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_fault = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_pending = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_start = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_fault = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_pending = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_start = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_fault = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_pending = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_start = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_fault = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_pending = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_capture = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_error = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_pending = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wmask = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_accept_read = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_rd_count = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wr_count = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_awaddr_hold = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata_hold = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb_hold = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_ready = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_ready = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_r_data = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_value = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0 = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_value = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1 = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_value = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2 = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_value = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_value = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5032276535231247106ull);
    }
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 335589182673443584ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2750276782609925920ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11916338441731908974ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8755667573242636904ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14999792205609179187ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[__Vi0] = 0;
    }
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_wr_ptr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_rd_ptr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17888954786335198217ull);
    }
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16823507020481321192ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6190112876023368145ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6772100708765109080ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10912478064645340405ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2383284585219730329ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[__Vi0] = 0;
    }
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_wr_ptr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_rd_ptr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5409767514873765740ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 1794977323448433968ull);
    }
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8142256760170497316ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14074941914427486805ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17894031079964528167ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12030895550373347416ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12633668472420573437ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[__Vi0] = 0;
    }
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_wr_ptr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_rd_ptr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11377052414594026654ull);
    }
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16115635812505047416ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5016758651073610279ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9300704082805443063ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14633036529510944257ull);
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16456069957506489529ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[__Vi0] = 0;
    }
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_wr_ptr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_rd_ptr = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs = 0;
    vlSelf->tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_10 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_11 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_12 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_13 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_14 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_15 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_40 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_41 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_42 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_43 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_44 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_45 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_58 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_59 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_60 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_61 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_62 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_63 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_76 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_77 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_78 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_79 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_80 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_81 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_100 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_101 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_102 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_103 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_104 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_105 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_124 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_125 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_126 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_127 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_128 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_129 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_148 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_149 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_150 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_151 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_152 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_153 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_166 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_167 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_168 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_169 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_170 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_171 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_178 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_179 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_180 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_181 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_182 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_183 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_196 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_197 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_198 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_199 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_200 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_201 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_227 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_228 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_229 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_230 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_231 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_232 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_239 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_240 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_241 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_242 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_243 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_244 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_251 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_252 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_253 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_254 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_255 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_256 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_263 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_264 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_265 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_266 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_267 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_268 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_287 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_288 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_289 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_290 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_291 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_292 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_305 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_306 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_307 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_308 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_309 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_310 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_329 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_330 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_331 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_332 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_333 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_334 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_347 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_348 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_349 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_350 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_351 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_352 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_359 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_360 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_361 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_362 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_363 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_364 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_371 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_372 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_373 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_374 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_375 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_376 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__address_389 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__data_390 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__strobe_391 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_392 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__aw_cycles_393 = 0;
    vlSelf->__Vtask_tb_axil__DOT__write_request__w_cycles_394 = 0;
    vlSelf->__Vdfg_Regularize_133 = 0;
    vlSelf->__Vdfg_Regularize_134 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axil__DOT__i_rst_n_axi__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_reg__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

VL_ATTR_COLD void Vtb_axil___024root___configure_coverage(Vtb_axil___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___configure_coverage\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 8, 9, ".tb_axil", "v_toggle/tb_axil", "i_clk_axi");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 9, 9, ".tb_axil", "v_toggle/tb_axil", "i_clk_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 10, 9, ".tb_axil", "v_toggle/tb_axil", "i_rst_n_axi");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 6, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 11, 9, ".tb_axil", "v_toggle/tb_axil", "i_rst_n_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 8, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 12, 9, ".tb_axil", "v_toggle/tb_axil", "i_axi_awvalid");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 10, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 13, 16, ".tb_axil", "v_toggle/tb_axil", "i_axi_awaddr");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 42, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 14, 15, ".tb_axil", "v_toggle/tb_axil", "i_axi_awprot");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 48, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 15, 9, ".tb_axil", "v_toggle/tb_axil", "i_axi_wvalid");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 50, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 16, 16, ".tb_axil", "v_toggle/tb_axil", "i_axi_wdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 114, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 17, 15, ".tb_axil", "v_toggle/tb_axil", "i_axi_wstrb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 122, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 18, 9, ".tb_axil", "v_toggle/tb_axil", "i_axi_bready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 124, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 19, 9, ".tb_axil", "v_toggle/tb_axil", "i_axi_arvalid");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 126, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 20, 16, ".tb_axil", "v_toggle/tb_axil", "i_axi_araddr");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 158, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 21, 15, ".tb_axil", "v_toggle/tb_axil", "i_axi_arprot");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 164, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 22, 9, ".tb_axil", "v_toggle/tb_axil", "i_axi_rready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 166, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 23, 8, ".tb_axil", "v_toggle/tb_axil", "o_axi_awready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 168, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 24, 8, ".tb_axil", "v_toggle/tb_axil", "o_axi_wready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 170, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 25, 8, ".tb_axil", "v_toggle/tb_axil", "o_axi_bvalid");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 172, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 26, 14, ".tb_axil", "v_toggle/tb_axil", "o_axi_bresp");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 176, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 27, 8, ".tb_axil", "v_toggle/tb_axil", "o_axi_arready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 178, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 28, 8, ".tb_axil", "v_toggle/tb_axil", "o_axi_rvalid");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 180, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 29, 15, ".tb_axil", "v_toggle/tb_axil", "o_axi_rdata");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 244, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 30, 14, ".tb_axil", "v_toggle/tb_axil", "o_axi_rresp");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 248, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 31, 15, ".tb_axil", "v_toggle/tb_axil", "o_data_value");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 312, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 32, 15, ".tb_axil", "v_toggle/tb_axil", "o_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 376, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 33, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_clear_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 378, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 34, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_wdata_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 380, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 35, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_we_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 382, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 36, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_wdata_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 384, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 37, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_we_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 386, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 38, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_wdata_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 388, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 39, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_we_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 390, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 40, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_wdata_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 392, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 41, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_we_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 394, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 42, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_wdata_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 396, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 43, 9, ".tb_axil", "v_toggle/tb_axil", "i_hw_we_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 398, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 44, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_engine_events");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 414, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 45, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_port_0_event_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 430, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 46, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 432, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 47, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 434, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 48, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 436, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 49, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 438, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 50, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 440, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 51, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 442, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 52, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 444, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 53, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 446, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 54, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 448, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 55, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 450, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 56, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_port_1_event_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 466, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 57, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 468, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 58, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 470, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 59, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 472, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 60, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 474, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 61, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 476, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 62, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 478, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 63, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 480, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 64, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 482, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 65, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 484, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 66, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 486, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 67, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_port_2_event_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 502, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 68, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 504, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 69, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 506, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 70, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 508, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 71, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 510, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 72, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 512, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 73, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 514, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 74, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 516, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 75, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 518, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 76, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 520, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 77, 9, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 522, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 78, 20, ".tb_axil", "v_toggle/tb_axil", "cov_i_monitor_sample_count[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 538, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 78, 20, ".tb_axil", "v_toggle/tb_axil", "cov_i_monitor_sample_count[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 554, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 79, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 558, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 80, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 562, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 81, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 566, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 82, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 570, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 83, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 574, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 84, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 578, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 85, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 582, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 86, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 586, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 87, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_wdata_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 590, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 88, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_we_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 594, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 89, 15, ".tb_axil", "v_toggle/tb_axil", "cov_i_hw_clear_monitor_key_fragment");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 598, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 94, 28, ".tb_axil", "v_expr/tb_axil", "(i_clk_axi==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 598, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 94, 28, ".tb_axil", "v_expr/tb_axil", "(i_clk_axi==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 599, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 94, 28, ".tb_axil", "v_expr/tb_axil", "(i_clk_axi==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 599, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 94, 28, ".tb_axil", "v_expr/tb_axil", "(i_clk_axi==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 600, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 94, 5, ".tb_axil", "v_line/tb_axil", "block", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 600, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 94, 5, ".tb_axil", "v_line/tb_axil", "block", "94", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 601, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 92, 3, ".tb_axil", "v_line/tb_axil", "block", "92-93", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 601, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 92, 3, ".tb_axil", "v_line/tb_axil", "block", "92-93", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 602, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 98, 28, ".tb_axil", "v_expr/tb_axil", "(i_clk_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 602, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 98, 28, ".tb_axil", "v_expr/tb_axil", "(i_clk_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 603, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 98, 28, ".tb_axil", "v_expr/tb_axil", "(i_clk_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 603, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 98, 28, ".tb_axil", "v_expr/tb_axil", "(i_clk_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 604, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 98, 5, ".tb_axil", "v_line/tb_axil", "block", "98", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 604, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 98, 5, ".tb_axil", "v_line/tb_axil", "block", "98", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 605, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 96, 3, ".tb_axil", "v_line/tb_axil", "block", "96-97", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 605, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 96, 3, ".tb_axil", "v_line/tb_axil", "block", "96-97", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 606, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 224, 77, ".tb_axil", "v_line/tb_axil", "case", "224", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 606, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 224, 77, ".tb_axil", "v_line/tb_axil", "case", "224", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 607, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 225, 9, ".tb_axil", "v_line/tb_axil", "case", "225", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 607, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 225, 9, ".tb_axil", "v_line/tb_axil", "case", "225", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 608, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 221, 26, ".tb_axil", "v_line/tb_axil", "block", "221-223", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 608, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 221, 26, ".tb_axil", "v_line/tb_axil", "block", "221-223", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 609, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 235, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (wait_cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 609, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 235, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (wait_cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 610, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 235, 28, ".tb_axil", "v_expr/tb_axil", "((wait_cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 610, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 235, 28, ".tb_axil", "v_expr/tb_axil", "((wait_cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 611, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 235, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 611, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 235, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 612, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 235, 7, ".tb_axil", "v_line/tb_axil", "block", "235-237", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 612, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 235, 7, ".tb_axil", "v_line/tb_axil", "block", "235-237", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 613, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 239, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 613, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 239, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 614, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 239, 25, ".tb_axil", "v_expr/tb_axil", "((o_axi_rresp !== expected_resp)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 614, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 239, 25, ".tb_axil", "v_expr/tb_axil", "((o_axi_rresp !== expected_resp)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 615, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 239, 25, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 615, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 239, 25, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 616, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 239, 25, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1 && (o_axi_rresp !== expected_resp)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 616, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 239, 25, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1 && (o_axi_rresp !== expected_resp)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 617, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 230, 18, ".tb_axil", "v_line/tb_axil", "block", "230-234,241-245", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 617, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 230, 18, ".tb_axil", "v_line/tb_axil", "block", "230-234,241-245", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 618, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 264, 12, ".tb_axil", "v_line/tb_axil", "case", "264-267", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 618, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 264, 12, ".tb_axil", "v_line/tb_axil", "case", "264-267", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 619, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 269, 12, ".tb_axil", "v_line/tb_axil", "case", "269-271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 619, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 269, 12, ".tb_axil", "v_line/tb_axil", "case", "269-271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 620, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 273, 12, ".tb_axil", "v_line/tb_axil", "case", "273-275", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 620, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 273, 12, ".tb_axil", "v_line/tb_axil", "case", "273-275", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 621, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 277, 11, ".tb_axil", "v_line/tb_axil", "case", "277-279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 621, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 277, 11, ".tb_axil", "v_line/tb_axil", "case", "277-279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 622, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 282, 9, ".tb_axil", "v_branch/tb_axil", "if", "282", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 622, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 282, 9, ".tb_axil", "v_branch/tb_axil", "if", "282", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 623, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 282, 10, ".tb_axil", "v_branch/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 623, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 282, 10, ".tb_axil", "v_branch/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 624, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 260, 7, ".tb_axil", "v_line/tb_axil", "block", "260-263", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 624, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 260, 7, ".tb_axil", "v_line/tb_axil", "block", "260-263", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 625, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 249, 18, ".tb_axil", "v_line/tb_axil", "block", "249-260,284", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 625, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 249, 18, ".tb_axil", "v_line/tb_axil", "block", "249-260,284", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 626, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 295, 29, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==0 && (cycles < 32'sh50)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 626, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 295, 29, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==0 && (cycles < 32'sh50)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 627, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 295, 29, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh50)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 627, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 295, 29, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh50)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 628, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 295, 29, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 628, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 295, 29, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 629, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 295, 7, ".tb_axil", "v_line/tb_axil", "block", "295-297", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 629, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 295, 7, ".tb_axil", "v_line/tb_axil", "block", "295-297", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 630, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 299, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 630, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 299, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 631, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 299, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 631, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 299, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 632, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 299, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 632, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 299, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 633, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 288, 18, ".tb_axil", "v_line/tb_axil", "block", "288-294,300-302", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 633, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 288, 18, ".tb_axil", "v_line/tb_axil", "block", "288-294,300-302", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 634, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 318, 33, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==0 && (aw_cycles < 32'sh50)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 634, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 318, 33, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==0 && (aw_cycles < 32'sh50)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 635, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 318, 33, ".tb_axil", "v_expr/tb_axil", "((aw_cycles < 32'sh50)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 635, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 318, 33, ".tb_axil", "v_expr/tb_axil", "((aw_cycles < 32'sh50)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 636, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 318, 33, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 636, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 318, 33, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 637, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 318, 11, ".tb_axil", "v_line/tb_axil", "block", "318-320", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 637, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 318, 11, ".tb_axil", "v_line/tb_axil", "block", "318-320", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 638, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 322, 12, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 638, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 322, 12, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 639, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 322, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 639, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 322, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 640, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 322, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 640, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 322, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 641, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 328, 11, ".tb_axil", "v_line/tb_axil", "block", "328", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 641, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 328, 11, ".tb_axil", "v_line/tb_axil", "block", "328", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 642, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 333, 32, ".tb_axil", "v_expr/tb_axil", "(o_axi_wready==0 && (w_cycles < 32'sh50)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 642, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 333, 32, ".tb_axil", "v_expr/tb_axil", "(o_axi_wready==0 && (w_cycles < 32'sh50)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 643, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 333, 32, ".tb_axil", "v_expr/tb_axil", "((w_cycles < 32'sh50)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 643, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 333, 32, ".tb_axil", "v_expr/tb_axil", "((w_cycles < 32'sh50)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 644, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 333, 32, ".tb_axil", "v_expr/tb_axil", "(o_axi_wready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 644, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 333, 32, ".tb_axil", "v_expr/tb_axil", "(o_axi_wready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 645, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 333, 11, ".tb_axil", "v_line/tb_axil", "block", "333-335", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 645, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 333, 11, ".tb_axil", "v_line/tb_axil", "block", "333-335", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 646, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 337, 12, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 646, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 337, 12, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 647, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 337, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_wready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 647, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 337, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_wready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 648, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 337, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_wready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 648, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 337, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_wready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 649, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 306, 18, ".tb_axil", "v_line/tb_axil", "block", "306,309-317,323-325,327-332,338-340", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 649, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 306, 18, ".tb_axil", "v_line/tb_axil", "block", "306,309-317,323-325,327-332,338-340", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 650, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 350, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_bvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 650, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 350, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_bvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 651, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 350, 28, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 651, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 350, 28, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 652, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 350, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_bvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 652, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 350, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_bvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 653, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 350, 7, ".tb_axil", "v_line/tb_axil", "block", "350-352", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 653, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 350, 7, ".tb_axil", "v_line/tb_axil", "block", "350-352", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 654, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 354, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 654, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 354, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 655, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 354, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_bvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 655, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 354, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_bvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 656, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 354, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_bvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 656, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 354, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_bvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 657, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 355, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 657, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 355, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 658, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 346, 18, ".tb_axil", "v_line/tb_axil", "block", "346-349,356-360", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 658, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 346, 18, ".tb_axil", "v_line/tb_axil", "block", "346-349,356-360", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 659, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 364, 18, ".tb_axil", "v_line/tb_axil", "block", "364,368-370", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 659, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 364, 18, ".tb_axil", "v_line/tb_axil", "block", "364,368-370", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 660, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 381, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 660, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 381, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 661, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 381, 28, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 661, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 381, 28, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 662, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 381, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 662, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 381, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 663, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 381, 7, ".tb_axil", "v_line/tb_axil", "block", "381-383", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 663, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 381, 7, ".tb_axil", "v_line/tb_axil", "block", "381-383", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 664, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 385, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 664, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 385, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 665, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 385, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 665, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 385, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 666, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 385, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 666, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 385, 11, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 667, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 386, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 667, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 386, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 668, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 387, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 668, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 387, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 669, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 387, 36, ".tb_axil", "v_expr/tb_axil", "((expected_resp == 2'h0)==1 && (o_axi_rdata !== expected_data)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 669, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 387, 36, ".tb_axil", "v_expr/tb_axil", "((expected_resp == 2'h0)==1 && (o_axi_rdata !== expected_data)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 670, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 387, 36, ".tb_axil", "v_expr/tb_axil", "((o_axi_rdata !== expected_data)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 670, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 387, 36, ".tb_axil", "v_expr/tb_axil", "((o_axi_rdata !== expected_data)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 671, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 387, 36, ".tb_axil", "v_expr/tb_axil", "((expected_resp == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 671, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 387, 36, ".tb_axil", "v_expr/tb_axil", "((expected_resp == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 672, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 374, 18, ".tb_axil", "v_line/tb_axil", "block", "374,377-380,389-393", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 672, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 374, 18, ".tb_axil", "v_line/tb_axil", "block", "374,377-380,389-393", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 673, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 411, 12, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 673, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 411, 12, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 674, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 409, 9, ".tb_axil", "v_line/tb_axil", "block", "409-410,412", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 674, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 409, 9, ".tb_axil", "v_line/tb_axil", "block", "409-410,412", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 675, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 419, 32, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 675, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 419, 32, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 676, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 419, 32, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 676, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 419, 32, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 677, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 419, 32, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 677, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 419, 32, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 678, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 419, 11, ".tb_axil", "v_line/tb_axil", "block", "419-421", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 678, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 419, 11, ".tb_axil", "v_line/tb_axil", "block", "419-421", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 679, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 423, 12, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 679, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 423, 12, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 680, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 423, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 680, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 423, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 681, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 423, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 681, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 423, 15, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 682, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 417, 9, ".tb_axil", "v_line/tb_axil", "block", "417-418,424", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 682, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 417, 9, ".tb_axil", "v_line/tb_axil", "block", "417-418,424", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 683, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 401, 7, ".tb_axil", "v_branch/tb_axil", "if", "401-408,414-417,426-429", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 683, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 401, 7, ".tb_axil", "v_branch/tb_axil", "if", "401-408,414-417,426-429", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 684, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 401, 8, ".tb_axil", "v_branch/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 684, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 401, 8, ".tb_axil", "v_branch/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 685, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 397, 18, ".tb_axil", "v_line/tb_axil", "block", "397-400", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 685, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 397, 18, ".tb_axil", "v_line/tb_axil", "block", "397-400", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 686, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 437, 7, ".tb_axil", "v_line/tb_axil", "block", "437-484", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 686, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 437, 7, ".tb_axil", "v_line/tb_axil", "block", "437-484", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 687, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 434, 18, ".tb_axil", "v_line/tb_axil", "block", "434-437", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 687, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 434, 18, ".tb_axil", "v_line/tb_axil", "block", "434-437", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 688, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 587, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 688, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 587, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 689, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 592, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 689, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 592, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 690, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 594, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 690, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 594, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 691, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 489, 18, ".tb_axil", "v_line/tb_axil", "block", "489-542,544-567,569-576,578-583,585-586,588-591,593,595,597-600", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 691, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 489, 18, ".tb_axil", "v_line/tb_axil", "block", "489-542,544-567,569-576,578-583,585-586,588-591,593,595,597-600", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 692, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 605, 16, ".tb_axil", "v_toggle/tb_axil", "old_value");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 756, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 632, 5, ".tb_axil", "v_line/tb_axil", "block", "632", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 756, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 632, 5, ".tb_axil", "v_line/tb_axil", "block", "632", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 757, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 634, 5, ".tb_axil", "v_line/tb_axil", "block", "634", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 757, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 634, 5, ".tb_axil", "v_line/tb_axil", "block", "634", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 758, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 636, 5, ".tb_axil", "v_line/tb_axil", "block", "636", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 758, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 636, 5, ".tb_axil", "v_line/tb_axil", "block", "636", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 759, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 638, 5, ".tb_axil", "v_branch/tb_axil", "if", "638-641", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 759, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 638, 5, ".tb_axil", "v_branch/tb_axil", "if", "638-641", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 760, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 638, 6, ".tb_axil", "v_branch/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 760, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 638, 6, ".tb_axil", "v_branch/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 761, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 660, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 761, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 660, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 762, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 663, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 762, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 663, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 763, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 667, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 763, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 667, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 764, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 668, 5, ".tb_axil", "v_line/tb_axil", "block", "668", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 764, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 668, 5, ".tb_axil", "v_line/tb_axil", "block", "668", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 765, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 669, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 765, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 669, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 766, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 671, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 766, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 671, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 767, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 684, 26, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 767, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 684, 26, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 768, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 684, 26, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 768, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 684, 26, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 769, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 684, 26, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 769, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 684, 26, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 770, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 684, 5, ".tb_axil", "v_line/tb_axil", "block", "684-686", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 770, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 684, 5, ".tb_axil", "v_line/tb_axil", "block", "684-686", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 771, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 688, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 771, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 688, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 772, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 688, 23, ".tb_axil", "v_expr/tb_axil", "((o_axi_rdata !== 32'haabbeedd)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 772, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 688, 23, ".tb_axil", "v_expr/tb_axil", "((o_axi_rdata !== 32'haabbeedd)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 773, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 688, 23, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 773, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 688, 23, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 774, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 688, 23, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1 && (o_axi_rdata !== 32'haabbeedd)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 774, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 688, 23, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1 && (o_axi_rdata !== 32'haabbeedd)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 775, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 691, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 775, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 691, 8, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 776, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 691, 25, ".tb_axil", "v_expr/tb_axil", "((o_axi_rdata !== 32'haabbeedd)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 776, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 691, 25, ".tb_axil", "v_expr/tb_axil", "((o_axi_rdata !== 32'haabbeedd)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 777, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 691, 25, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 777, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 691, 25, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 778, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 691, 25, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1 && (o_axi_rdata !== 32'haabbeedd)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 778, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 691, 25, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1 && (o_axi_rdata !== 32'haabbeedd)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 779, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 689, 5, ".tb_axil", "v_line/tb_axil", "block", "689-690", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 779, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 689, 5, ".tb_axil", "v_line/tb_axil", "block", "689-690", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 780, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 704, 5, ".tb_axil", "v_line/tb_axil", "block", "704", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 780, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 704, 5, ".tb_axil", "v_line/tb_axil", "block", "704", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 781, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 706, 5, ".tb_axil", "v_line/tb_axil", "block", "706", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 781, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 706, 5, ".tb_axil", "v_line/tb_axil", "block", "706", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 782, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 708, 5, ".tb_axil", "v_line/tb_axil", "block", "708", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 782, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 708, 5, ".tb_axil", "v_line/tb_axil", "block", "708", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 783, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 722, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 783, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 722, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 784, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 722, 9, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 784, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 722, 9, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 785, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 722, 9, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 785, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 722, 9, ".tb_axil", "v_expr/tb_axil", "(o_axi_arready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 786, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 786, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 787, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE != 32'h0)==1 && o_axi_wready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 787, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE != 32'h0)==1 && o_axi_wready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 788, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE != 32'h0)==1 && o_axi_awready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 788, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE != 32'h0)==1 && o_axi_awready==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 789, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==1 && o_axi_wready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 789, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==1 && o_axi_wready==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 790, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE != 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 790, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 723, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE != 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 791, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 791, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 792, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE == 32'h0)==1 && o_axi_wready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 792, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE == 32'h0)==1 && o_axi_wready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 793, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE == 32'h0)==1 && o_axi_awready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 793, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE == 32'h0)==1 && o_axi_awready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 794, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==0 && o_axi_wready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 794, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 28, ".tb_axil", "v_expr/tb_axil", "(o_axi_awready==0 && o_axi_wready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 795, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE == 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 795, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 725, 28, ".tb_axil", "v_expr/tb_axil", "((TEST_MODE == 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 796, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 731, 5, ".tb_axil", "v_branch/tb_axil", "if", "731-733", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 796, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 731, 5, ".tb_axil", "v_branch/tb_axil", "if", "731-733", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 797, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 731, 6, ".tb_axil", "v_branch/tb_axil", "else", "734-736", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 797, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 731, 6, ".tb_axil", "v_branch/tb_axil", "else", "734-736", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 798, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 739, 26, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 798, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 739, 26, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0 && (cycles < 32'sh64)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 799, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 739, 26, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 799, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 739, 26, ".tb_axil", "v_expr/tb_axil", "((cycles < 32'sh64)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 800, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 739, 26, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 800, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 739, 26, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 801, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 739, 5, ".tb_axil", "v_line/tb_axil", "block", "739-741", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 801, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 739, 5, ".tb_axil", "v_line/tb_axil", "block", "739-741", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 802, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 743, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 802, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 743, 6, ".tb_axil", "v_line/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 803, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 743, 23, ".tb_axil", "v_expr/tb_axil", "((o_axi_rdata !== old_value)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 803, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 743, 23, ".tb_axil", "v_expr/tb_axil", "((o_axi_rdata !== old_value)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 804, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 743, 23, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 804, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 743, 23, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 805, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 743, 23, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1 && (o_axi_rdata !== old_value)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 805, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 743, 23, ".tb_axil", "v_expr/tb_axil", "(o_axi_rvalid==1 && (o_axi_rdata !== old_value)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 806, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 749, 5, ".tb_axil", "v_branch/tb_axil", "if", "749-750", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 806, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 749, 5, ".tb_axil", "v_branch/tb_axil", "if", "749-750", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 807, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 749, 6, ".tb_axil", "v_branch/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 807, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 749, 6, ".tb_axil", "v_branch/tb_axil", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 808, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 606, 3, ".tb_axil", "v_line/tb_axil", "block", "606-636,644-646,648-651,653-656,658-659,661-662,664-666,668,670,672-674,676-679,681-683,689,693-699,702-708,711-721,727-730,738,744-748,751-754,756-758", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 808, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AXI4_Lite.sv", 606, 3, ".tb_axil", "v_line/tb_axil", "block", "606-636,644-646,648-651,653-656,658-659,661-662,664-666,668,670,672-674,676-679,681-683,689,693-699,702-708,711-721,727-730,738,744-748,751-754,756-758", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 61, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_clk_axi");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 62, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_rst_n_axi");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 63, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_clk_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 6, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 64, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_rst_n_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 8, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 67, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_awvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 166, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 68, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_axi_awready");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 10, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 69, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_awaddr");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 42, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 70, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_awprot");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 48, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 71, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_wvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 168, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 72, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_axi_wready");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 50, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 73, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_wdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 114, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 74, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_wstrb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 170, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 75, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_axi_bvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 122, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 76, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_bready");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 172, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 77, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_axi_bresp");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 124, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 78, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_arvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 176, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 79, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_axi_arready");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 126, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 80, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_araddr");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 158, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 81, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_arprot");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 178, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 82, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_axi_rvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 164, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 83, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_axi_rready");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 180, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 84, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_axi_rdata");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 244, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 85, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_axi_rresp");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 398, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 88, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_engine_events");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 809, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 89, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_engine_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 817, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 90, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 378, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 91, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 380, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 92, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 819, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 93, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 382, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 94, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 384, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 95, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 821, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 96, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 386, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 97, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 388, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 98, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 823, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 99, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 390, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 100, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 392, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 101, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 825, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 102, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 394, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 103, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 396, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 104, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 414, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 107, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_port_0_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 827, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 108, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_0_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 835, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 109, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 430, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 110, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 432, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 111, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 837, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 112, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 434, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 113, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 436, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 114, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 839, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 115, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 438, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 116, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 440, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 117, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 841, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 118, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 442, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 119, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 444, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 120, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 843, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 121, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 446, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 122, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 448, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 123, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 450, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 126, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_port_1_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 845, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 127, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_1_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 853, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 128, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 466, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 129, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 468, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 130, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 855, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 131, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 470, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 132, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 472, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 133, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 857, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 134, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 474, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 135, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 476, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 136, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 859, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 137, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 478, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 138, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 480, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 139, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 861, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 140, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 482, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 141, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 484, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 142, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 486, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 145, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_port_2_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 863, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 146, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_2_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 871, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 147, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 502, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 148, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 504, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 149, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 873, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 150, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 506, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 151, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 508, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 152, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 875, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 153, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 510, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 154, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 512, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 155, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 877, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 156, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 514, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 157, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 516, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 158, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 879, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 159, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 518, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 160, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 520, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 161, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 522, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 164, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_monitor_sample_count[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 538, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 164, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_monitor_sample_count[1]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 881, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 165, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_threshold[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 889, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 165, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_threshold[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 897, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 166, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 554, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 167, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 558, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 168, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 901, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 169, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 562, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 170, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 566, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 171, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 905, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 172, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 570, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 173, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 574, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 174, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 909, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 175, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 578, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 176, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 582, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 177, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 913, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 178, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 586, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 179, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_wdata_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 590, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 180, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_we_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 917, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 181, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_key_fragment[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 947, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 181, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_monitor_key_fragment[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 594, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 182, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_clear_monitor_key_fragment");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 312, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 185, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "o_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 376, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 186, 47, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "i_hw_clear_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 190, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_clk_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 191, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rst_n_reg");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 977, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 192, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1009, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 193, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_wdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1073, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 194, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_wstrb");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1081, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 195, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_wmask");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1145, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 196, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1147, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 197, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_en");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1149, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 198, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rdata_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1213, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 199, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_addr_mapped");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1215, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 200, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_axi_rr_read");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1217, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 201, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_axi_accept_read");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1219, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 202, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_rd_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1227, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 203, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_wr_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1235, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 204, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_aw_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1237, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 205, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_w_pending");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 1239, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 206, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_awaddr_hold");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1271, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 207, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_wdata_hold");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1335, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 208, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_wstrb_hold");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1343, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 209, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_cmd_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1345, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 210, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_cmd_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1347, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 211, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_cmd_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1349, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 212, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_cmd_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1351, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 213, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_cmd_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1353, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 214, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_cmd_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1355, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 215, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_cmd_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1357, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 216, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_cmd_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1349, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 217, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_rsp_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1359, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 218, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_rsp_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 178, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 219, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_rsp_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 164, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 220, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_rsp_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1357, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 221, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_rsp_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1361, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 222, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_rsp_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 170, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 223, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_rsp_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 122, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 224, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_rsp_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 126, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 225, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_cmd_w_data");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 1363, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 226, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_cmd_r_data");
    vlSelf->__vlCoverToggleInsert(0, 51, 1, vlSelf->__Vcoverage + 1395, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 227, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_cmd_w_data");
    vlSelf->__vlCoverToggleInsert(0, 51, 1, vlSelf->__Vcoverage + 1499, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 228, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_cmd_r_data");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 1603, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 229, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_rsp_w_data");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 1671, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 230, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_rsp_r_data");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1739, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 231, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_rsp_w_data");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 172, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 232, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_rsp_r_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1343, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 233, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_ar_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1743, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 234, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_aw_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1745, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 235, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_w_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1747, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 236, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_r_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1749, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 237, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_b_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1751, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 238, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_wr_reserve");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1753, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 239, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_write_candidate");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1349, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 240, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_issue_read");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1357, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 241, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_issue_write");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 977, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 242, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_issue_addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1009, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 243, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_issue_wdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1073, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 244, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_issue_wstrb");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1739, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 245, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_issue_resp");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1755, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 246, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_axi_rr_read_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1757, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 247, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_we_engine");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1759, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 248, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_engine");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 809, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 249, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_engine_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1761, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 250, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_engine_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 817, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 251, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1769, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 252, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_engine_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 819, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 253, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1771, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 254, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_engine_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 821, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 255, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1773, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 256, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_engine_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 823, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 257, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1775, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 258, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_engine_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 825, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 259, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1777, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 260, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_engine_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1779, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 261, 28, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_engine_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1843, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 262, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_we_port_0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1845, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 263, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_port_0");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 827, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 264, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_0_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1847, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 265, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_0_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 835, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 266, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1855, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 267, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_0_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 837, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 268, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1857, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 269, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_0_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 839, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 270, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1859, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 271, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_0_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 841, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 272, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1861, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 273, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_0_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 843, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 274, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1863, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 275, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_0_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1865, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 276, 28, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_0_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1929, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 277, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_we_port_1");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1931, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 278, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_port_1");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 845, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 279, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_1_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1933, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 280, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_1_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 853, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 281, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1941, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 282, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_1_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 855, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 283, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1943, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 284, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_1_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 857, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 285, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1945, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 286, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_1_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 859, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 287, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1947, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 288, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_1_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 861, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 289, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1949, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 290, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_1_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1951, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 291, 28, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_1_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2015, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 292, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_we_port_2");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2017, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 293, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_port_2");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 863, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 294, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_2_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2019, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 295, 15, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_2_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 871, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 296, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2027, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 297, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_2_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 873, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 298, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2029, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 299, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_2_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 875, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 300, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2031, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 301, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_2_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 877, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 302, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2033, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 303, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_2_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 879, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 304, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2035, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 305, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_2_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2037, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 306, 28, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_port_2_value");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 881, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 307, 39, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_threshold[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 889, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 307, 39, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_threshold[1]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2101, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 308, 39, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_threshold_nxt[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2109, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 308, 39, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_threshold_nxt[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 897, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 309, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2117, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 310, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_capture_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 901, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 311, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2121, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 312, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_error_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 905, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 313, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2125, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 314, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 909, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 315, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2129, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 316, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 913, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 317, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2133, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 318, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_match_nxt");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 917, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 319, 40, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_key_fragment[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 947, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 319, 40, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_monitor_key_fragment[1]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 2137, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 320, 40, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_key_fragment_nxt[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 2167, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 320, 40, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_key_fragment_nxt[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2197, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 321, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_we_monitor");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2201, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 322, 34, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_rd_monitor");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2205, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 323, 52, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_value[0]");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2269, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 323, 52, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_monitor_value[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2333, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 324, 9, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_we_key");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 312, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 325, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "reg_key_data");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2335, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 326, 16, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_key_data_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2399, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 327, 28, ".tb_axil.u_dut", "v_toggle/m_vlsi_axil_queued_csr", "w_key_value");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2463, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 330, 41, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2463, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 330, 41, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2464, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 330, 41, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2464, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 330, 41, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2465, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 330, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "330", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2465, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 330, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "330", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2466, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 330, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "330", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2466, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 330, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "330", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2467, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 331, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2467, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 331, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2468, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 331, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2468, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 331, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2469, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 331, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "331", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2469, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 331, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "331", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2470, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 331, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "331", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2470, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 331, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "331", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2471, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 335, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_wvalid==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2471, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 335, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_wvalid==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2472, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 335, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_awvalid==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2472, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 335, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_awvalid==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2473, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 335, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_awvalid==0 && i_axi_wvalid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2473, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 335, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_awvalid==0 && i_axi_wvalid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2474, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (reg_wr_count == 4'h0)==1 && reg_axi_accept_read==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2474, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (reg_wr_count == 4'h0)==1 && reg_axi_accept_read==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2475, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (reg_wr_count == 4'h0)==1 && w_write_candidate==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2475, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (reg_wr_count == 4'h0)==1 && w_write_candidate==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2476, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (reg_wr_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2476, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (reg_wr_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2477, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2477, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2478, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && w_write_candidate==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2478, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && w_write_candidate==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2479, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2479, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==1 && w_rd_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2480, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && w_write_candidate==1 && reg_axi_accept_read==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2480, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && w_write_candidate==1 && reg_axi_accept_read==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2481, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && (reg_wr_count == 4'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2481, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && (reg_wr_count == 4'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2482, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2482, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2483, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2483, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 338, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_rd_count < LPARA_AXI_RD_LIMIT)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2484, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2484, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2485, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2485, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2486, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2486, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2487, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2487, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2488, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2488, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2489, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2489, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2490, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2490, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2491, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2491, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2492, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2492, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2493, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2493, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2494, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2494, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2495, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2495, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2496, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && i_axi_arvalid==1 && reg_axi_accept_read==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2496, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && i_axi_arvalid==1 && reg_axi_accept_read==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2497, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && (reg_rd_count == 4'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2497, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && (reg_rd_count == 4'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2498, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2498, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2499, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_wr_count < LPARA_AXI_WR_LIMIT)==0 && reg_w_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2499, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_wr_count < LPARA_AXI_WR_LIMIT)==0 && reg_w_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2500, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2500, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 341, 24, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2501, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2501, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2502, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2502, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2503, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2503, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2504, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2504, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2505, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2505, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2506, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2506, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && reg_aw_pending==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2507, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2507, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2508, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2508, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2509, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2509, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (reg_rd_count == 4'h0)==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2510, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2510, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && reg_axi_accept_read==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2511, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2511, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1 && i_axi_arvalid==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2512, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2512, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0 && (reg_wr_count < LPARA_AXI_WR_LIMIT)==1 && w_wr_cmd_w_ready==1 && (PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2513, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && i_axi_arvalid==1 && reg_axi_accept_read==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2513, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && i_axi_arvalid==1 && reg_axi_accept_read==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2514, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && (reg_rd_count == 4'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2514, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((PARA_AXI_OUTSTANDING_MODE != LPARA_AXI_OUT_SINGLE)==0 && (reg_rd_count == 4'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2515, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2515, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2516, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_wr_count < LPARA_AXI_WR_LIMIT)==0 && reg_aw_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2516, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_wr_count < LPARA_AXI_WR_LIMIT)==0 && reg_aw_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2517, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2517, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 344, 23, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2518, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 345, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_arvalid==1 && o_axi_arready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2518, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 345, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_arvalid==1 && o_axi_arready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2519, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 345, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(o_axi_arready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2519, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 345, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(o_axi_arready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2520, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 345, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_arvalid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2520, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 345, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_arvalid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2521, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 346, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_awvalid==1 && o_axi_awready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2521, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 346, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_awvalid==1 && o_axi_awready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2522, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 346, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(o_axi_awready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2522, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 346, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(o_axi_awready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2523, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 346, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_awvalid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2523, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 346, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_awvalid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2524, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 347, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_wvalid==1 && o_axi_wready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2524, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 347, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_wvalid==1 && o_axi_wready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2525, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 347, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(o_axi_wready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2525, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 347, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(o_axi_wready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2526, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 347, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_wvalid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2526, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 347, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_wvalid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2527, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 348, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_rsp_r_valid==1 && i_axi_rready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2527, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 348, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_rsp_r_valid==1 && i_axi_rready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2528, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 348, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_rready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2528, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 348, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_rready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2529, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 348, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_rsp_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2529, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 348, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_rsp_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2530, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 349, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_rsp_r_valid==1 && i_axi_bready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2530, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 349, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_rsp_r_valid==1 && i_axi_bready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2531, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 349, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_bready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2531, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 349, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_axi_bready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2532, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 349, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_rsp_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2532, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 349, 36, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_rsp_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2533, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==0 && w_w_hs==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2533, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==0 && w_w_hs==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2534, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==0 && w_aw_hs==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2534, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0 && reg_w_pending==0 && w_aw_hs==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2535, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_aw_hs==0 && w_w_hs==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2535, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_aw_hs==0 && w_w_hs==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2536, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2536, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2537, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2537, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 350, 59, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2538, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 353, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==1 && reg_w_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2538, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 353, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==1 && reg_w_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2539, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 353, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2539, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 353, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_w_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2540, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 353, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2540, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 353, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_aw_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2541, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 368, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "368-370", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2541, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 368, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "368-370", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2542, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 368, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2542, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 368, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2543, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 372, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "372-375", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2543, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 372, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "372-375", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2544, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 372, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2544, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 372, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2545, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "if", "364-366", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2545, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "if", "364-366", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2546, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 15, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "else", "367", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2546, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 15, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "else", "367", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2547, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_valid==1 && w_wr_cmd_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2547, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_valid==1 && w_wr_cmd_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2548, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2548, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2549, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2549, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 364, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2550, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 358, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "elsif", "358-363", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2550, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 358, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "elsif", "358-363", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2551, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 358, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_rst_n_axi==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2551, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 358, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_rst_n_axi==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2552, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 358, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_rst_n_axi==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2552, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 358, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_rst_n_axi==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2553, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 357, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "357", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2553, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 357, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "357", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2554, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 388, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "388", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2554, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 388, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "388", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2555, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 389, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "389", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2555, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 389, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "389", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2556, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 390, 9, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "390", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2556, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 390, 9, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "390", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2557, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 393, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "393", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2557, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 393, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "393", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2558, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 394, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "394", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2558, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 394, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "394", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2559, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 395, 9, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "395", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2559, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 395, 9, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "395", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2560, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 400, 14, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "400-401", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2560, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 400, 14, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "400-401", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2561, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 400, 15, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2561, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 400, 15, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2562, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 398, 9, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "elsif", "398-399", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2562, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 398, 9, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "elsif", "398-399", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2563, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 397, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "397", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2563, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 397, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "397", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2564, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 397, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2564, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 397, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2565, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 382, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "382-385", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2565, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 382, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "382-385", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2566, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 382, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "386-387,392", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2566, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 382, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "386-387,392", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2567, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 382, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_rst_n_axi==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2567, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 382, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_rst_n_axi==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2568, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 382, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_rst_n_axi==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2568, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 382, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_rst_n_axi==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2569, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 381, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "381", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2569, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 381, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "381", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2570, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 448, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "448-449", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2570, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 448, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "448-449", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2571, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 448, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "451", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2571, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 448, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "451", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2572, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 14, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "454-455", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2572, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 14, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "454-455", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2573, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 15, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2573, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 15, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2574, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_r_valid==1 && w_wr_rsp_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2574, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_r_valid==1 && w_wr_rsp_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2575, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2575, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2576, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2576, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 454, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2577, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 452, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "elsif", "452-453", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2577, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 452, 14, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "elsif", "452-453", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2578, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 452, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_r_valid==1 && w_rd_rsp_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2578, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 452, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_r_valid==1 && w_rd_rsp_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2579, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 452, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2579, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 452, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2580, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 452, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2580, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 452, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2581, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "elsif", "447", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2581, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "elsif", "447", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2582, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_r_valid==1 && w_rd_rsp_w_ready==1 && w_wr_cmd_r_valid==1 && w_wr_rsp_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2582, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_r_valid==1 && w_rd_rsp_w_ready==1 && w_wr_cmd_r_valid==1 && w_wr_rsp_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2583, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2583, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2584, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2584, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2585, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2585, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_rsp_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2586, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2586, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 447, 64, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_cmd_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2587, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 444, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "444-446", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2587, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 444, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "444-446", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2588, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 460, 25, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2588, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 460, 25, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2589, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 460, 25, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2589, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 460, 25, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2590, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 460, 40, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "460", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2590, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 460, 40, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "460", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2591, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 460, 41, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "460", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2591, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 460, 41, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "460", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2592, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 466, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((w_issue_addr[1:0] != 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2592, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 466, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((w_issue_addr[1:0] != 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2593, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 466, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((w_issue_addr[1:0] != 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2593, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 466, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((w_issue_addr[1:0] != 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2594, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 466, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "466", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2594, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 466, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "466", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2595, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 467, 43, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "467", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2595, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 467, 43, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "467", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2596, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 469, 28, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "469", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2596, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 469, 28, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "469", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2597, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 469, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "469", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2597, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 469, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "469", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2598, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 467, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2598, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 467, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2599, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 466, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2599, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 466, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2600, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 470, 33, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==1 && (w_issue_resp == LPARA_AXI_RESP_OKAY)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2600, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 470, 33, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==1 && (w_issue_resp == LPARA_AXI_RESP_OKAY)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2601, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 470, 33, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((w_issue_resp == LPARA_AXI_RESP_OKAY)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2601, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 470, 33, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((w_issue_resp == LPARA_AXI_RESP_OKAY)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2602, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 470, 33, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2602, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 470, 33, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2603, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 471, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_write==1 && (w_issue_resp == LPARA_AXI_RESP_OKAY)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2603, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 471, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_write==1 && (w_issue_resp == LPARA_AXI_RESP_OKAY)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2604, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 471, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((w_issue_resp == LPARA_AXI_RESP_OKAY)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2604, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 471, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((w_issue_resp == LPARA_AXI_RESP_OKAY)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2605, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 471, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_write==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2605, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 471, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_write==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2606, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 473, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2606, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 473, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2607, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 473, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2607, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 473, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2608, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2608, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2609, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2609, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_issue_read==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2610, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 47, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "476", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2610, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 47, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "476", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2611, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 71, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "476", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2611, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 71, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "476", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2612, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 72, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "476", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2612, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 72, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "476", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2613, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 48, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2613, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 476, 48, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2614, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 478, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "478-479", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2614, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 478, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "478-479", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2615, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 478, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "481", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2615, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 478, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "481", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2616, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 478, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2616, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 478, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2617, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 478, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2617, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 478, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2618, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 477, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "477", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2618, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 477, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "477", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2619, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 490, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2619, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 490, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2620, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 490, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2620, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 490, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2621, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 490, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2621, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 490, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2622, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 491, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2622, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 491, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2623, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 491, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2623, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 491, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2624, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 491, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2624, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 491, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2625, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 492, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2625, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 492, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2626, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 492, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2626, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 492, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2627, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 492, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2627, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 492, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2628, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 493, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2628, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 493, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2629, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 493, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2629, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 493, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2630, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 493, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2630, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 493, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2631, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2631, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2632, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2632, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2633, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2633, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2634, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2634, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2635, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2635, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2636, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2636, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 497, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2637, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 500, 29, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_KEY_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2637, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 500, 29, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==1 && (reg_addr == LPARA_KEY_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2638, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 500, 29, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_KEY_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2638, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 500, 29, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_KEY_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2639, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 500, 29, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2639, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 500, 29, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2640, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 501, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2640, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 501, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2641, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 501, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2641, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 501, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2642, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 501, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2642, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 501, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2643, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 502, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2643, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 502, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2644, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 502, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2644, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 502, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2645, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 502, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2645, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 502, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2646, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 503, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2646, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 503, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2647, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 503, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2647, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 503, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2648, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 503, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2648, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 503, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2649, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 504, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2649, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 504, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2650, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 504, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2650, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 504, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2651, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 504, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2651, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 504, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2652, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2652, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2653, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2653, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2654, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2654, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2655, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2655, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2656, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2656, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2657, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2657, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 508, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2658, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2658, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2659, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2659, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2660, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2660, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2661, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2661, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2662, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2662, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2663, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2663, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2664, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 107, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "513", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2664, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 107, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "513", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2665, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "513", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2665, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 513, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "513", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2666, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 516, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2666, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 516, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2667, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 516, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2667, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 516, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2668, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 516, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2668, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 516, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2669, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 517, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "516-517", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2669, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 517, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "516-517", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2670, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 518, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "518", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2670, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 518, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "518", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2671, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 518, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "518", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2671, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 518, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "518", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2672, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 517, 30, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2672, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 517, 30, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2673, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 521, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2673, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 521, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2674, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 521, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2674, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 521, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2675, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 521, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "521", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2675, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 521, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "521", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2676, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 522, 83, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "522", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2676, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 522, 83, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "522", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2677, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 522, 84, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "522", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2677, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 522, 84, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "522", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2678, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 521, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2678, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 521, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2679, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 525, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2679, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 525, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2680, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 525, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2680, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 525, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2681, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 525, 60, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "525", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2681, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 525, 60, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "525", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2682, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 526, 85, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "526", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2682, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 526, 85, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "526", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2683, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 526, 86, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "526", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2683, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 526, 86, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "526", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2684, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 525, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2684, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 525, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2685, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 529, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2685, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 529, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2686, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 529, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2686, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 529, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2687, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 529, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "529", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2687, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 529, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "529", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2688, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 530, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "530", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2688, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 530, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "530", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2689, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 530, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "530", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2689, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 530, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "530", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2690, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 529, 63, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2690, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 529, 63, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2691, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 533, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2691, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 533, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2692, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 533, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2692, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 533, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_engine_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2693, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 533, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "533", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2693, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 533, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "533", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2694, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 534, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "534", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2694, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 534, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "534", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2695, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 534, 45, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "534", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2695, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 534, 45, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "534", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2696, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 533, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2696, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 533, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2697, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 538, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "538-544", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2697, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 538, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "538-544", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2698, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 538, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "545-551", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2698, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 538, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "545-551", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2699, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 538, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2699, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 538, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2700, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 538, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2700, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 538, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2701, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 537, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "537", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2701, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 537, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "537", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2702, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 564, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "564-572", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2702, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 564, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "564-572", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2703, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2703, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2704, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2704, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2705, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2705, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2706, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2706, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2707, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2707, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2708, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2708, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2709, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 107, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "576", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2709, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 107, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "576", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2710, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "576", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2710, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 576, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "576", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2711, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 579, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2711, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 579, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2712, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 579, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2712, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 579, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2713, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 579, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2713, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 579, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2714, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 580, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "579-580", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2714, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 580, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "579-580", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2715, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 581, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "581", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2715, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 581, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "581", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2716, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 581, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "581", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2716, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 581, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "581", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2717, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 580, 30, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2717, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 580, 30, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2718, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 584, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2718, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 584, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2719, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 584, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2719, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 584, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2720, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 584, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "584", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2720, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 584, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "584", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2721, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 585, 83, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "585", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2721, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 585, 83, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "585", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2722, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 585, 84, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "585", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2722, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 585, 84, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "585", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2723, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 584, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2723, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 584, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2724, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 588, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2724, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 588, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2725, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 588, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2725, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 588, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2726, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 588, 60, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "588", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2726, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 588, 60, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "588", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2727, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 589, 85, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "589", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2727, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 589, 85, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "589", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2728, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 589, 86, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "589", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2728, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 589, 86, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "589", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2729, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 588, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2729, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 588, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2730, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 592, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2730, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 592, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2731, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 592, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2731, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 592, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2732, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 592, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "592", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2732, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 592, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "592", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2733, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 593, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "593", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2733, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 593, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "593", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2734, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 593, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "593", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2734, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 593, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "593", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2735, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 592, 63, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2735, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 592, 63, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2736, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 596, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2736, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 596, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2737, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 596, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2737, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 596, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_0_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2738, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 596, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "596", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2738, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 596, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "596", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2739, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 597, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "597", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2739, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 597, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "597", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2740, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 597, 45, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "597", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2740, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 597, 45, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "597", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2741, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 596, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2741, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 596, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2742, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 601, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "601-607", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2742, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 601, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "601-607", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2743, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 601, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "608-614", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2743, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 601, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "608-614", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2744, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 601, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2744, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 601, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2745, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 601, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2745, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 601, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2746, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 600, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "600", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2746, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 600, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "600", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2747, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 627, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "627-635", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2747, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 627, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "627-635", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2748, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2748, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2749, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2749, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2750, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2750, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2751, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2751, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2752, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2752, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2753, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2753, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2754, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 107, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "639", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2754, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 107, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "639", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2755, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "639", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2755, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 639, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "639", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2756, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 642, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2756, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 642, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2757, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 642, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2757, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 642, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2758, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 642, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2758, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 642, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2759, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 643, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "642-643", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2759, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 643, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "642-643", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2760, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 644, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2760, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 644, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2761, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 644, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2761, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 644, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2762, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 643, 30, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2762, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 643, 30, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2763, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 647, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2763, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 647, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2764, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 647, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2764, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 647, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2765, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 647, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "647", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2765, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 647, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "647", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2766, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 648, 83, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "648", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2766, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 648, 83, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "648", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2767, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 648, 84, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "648", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2767, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 648, 84, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "648", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2768, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 647, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2768, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 647, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2769, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 651, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2769, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 651, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2770, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 651, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2770, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 651, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2771, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 651, 60, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "651", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2771, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 651, 60, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "651", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2772, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 652, 85, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "652", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2772, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 652, 85, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "652", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2773, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 652, 86, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "652", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2773, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 652, 86, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "652", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2774, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 651, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2774, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 651, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2775, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 655, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2775, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 655, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2776, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 655, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2776, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 655, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2777, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 655, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "655", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2777, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 655, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "655", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2778, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 656, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "656", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2778, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 656, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "656", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2779, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 656, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "656", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2779, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 656, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "656", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2780, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 655, 63, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2780, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 655, 63, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2781, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 659, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2781, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 659, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2782, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 659, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2782, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 659, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_1_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2783, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 659, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "659", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2783, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 659, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "659", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2784, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 660, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "660", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2784, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 660, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "660", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2785, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 660, 45, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "660", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2785, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 660, 45, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "660", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2786, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 659, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2786, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 659, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2787, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 664, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "664-670", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2787, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 664, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "664-670", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2788, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 664, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "671-677", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2788, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 664, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "671-677", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2789, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 664, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2789, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 664, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2790, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 664, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2790, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 664, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2791, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 663, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "663", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2791, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 663, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "663", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2792, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 690, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "690-698", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2792, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 690, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "690-698", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2793, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2793, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2794, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2794, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2795, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2795, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2796, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2796, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2797, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2797, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2798, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2798, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 43, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2799, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 107, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "702", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2799, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 107, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "702", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2800, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "702", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2800, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 702, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "702", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2801, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 705, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2801, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 705, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2802, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 705, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2802, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 705, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2803, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 705, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2803, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 705, 44, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2804, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 706, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "705-706", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2804, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 706, 29, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "705-706", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2805, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 707, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2805, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 707, 53, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2806, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 707, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2806, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 707, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2807, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 706, 30, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2807, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 706, 30, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2808, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 710, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2808, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 710, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2809, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 710, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2809, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 710, 32, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2810, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 710, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "710", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2810, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 710, 56, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "710", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2811, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 711, 83, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "711", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2811, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 711, 83, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "711", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2812, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 711, 84, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "711", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2812, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 711, 84, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "711", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2813, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 710, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2813, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 710, 57, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2814, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 714, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2814, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 714, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2815, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 714, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2815, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 714, 34, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2816, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 714, 60, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "714", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2816, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 714, 60, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "714", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2817, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 715, 85, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "715", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2817, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 715, 85, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "715", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2818, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 715, 86, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "715", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2818, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 715, 86, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "715", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2819, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 714, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2819, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 714, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2820, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 718, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2820, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 718, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2821, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 718, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2821, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 718, 35, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2822, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 718, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "718", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2822, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 718, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "718", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2823, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 719, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "719", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2823, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 719, 61, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "719", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2824, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 719, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "719", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2824, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 719, 62, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "719", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2825, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 718, 63, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2825, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 718, 63, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2826, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 722, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2826, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 722, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2827, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 722, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2827, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 722, 31, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_port_2_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2828, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 722, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "722", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2828, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 722, 54, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "722", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2829, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 723, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "723", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2829, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 723, 44, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "723", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2830, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 723, 45, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "723", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2830, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 723, 45, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "723", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2831, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 722, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2831, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 722, 55, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2832, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 727, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "727-733", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2832, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 727, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "727-733", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2833, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 727, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "734-740", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2833, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 727, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "734-740", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2834, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 727, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2834, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 727, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2835, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 727, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2835, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 727, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2836, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 726, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "726", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2836, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 726, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "726", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2837, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 753, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "753-761", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2837, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 753, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "753-761", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2838, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2838, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2839, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2839, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2840, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2840, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2841, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2841, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2842, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2842, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2843, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2843, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2844, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 134, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "767", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2844, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 134, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "767", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2845, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 135, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766-767", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2845, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 135, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766-767", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2846, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2846, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2847, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2847, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2848, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2848, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2849, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 123, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2849, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 123, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2850, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 313, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2850, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 313, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2851, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 314, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2851, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 314, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2852, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 124, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2852, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 124, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2853, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_error[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2853, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_error[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2854, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_error[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2854, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_error[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2855, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 102, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2855, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 102, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2856, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 188, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2856, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 188, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2857, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 189, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2857, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 189, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2858, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 103, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2858, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 103, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2859, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 69, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_pending[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2859, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 69, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_pending[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2860, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 69, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_pending[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2860, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 69, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_pending[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2861, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2861, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2862, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 196, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2862, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 196, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2863, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 197, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2863, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 197, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2864, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 109, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2864, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 109, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2865, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 71, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_overflow[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2865, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 71, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_overflow[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2866, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 71, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_overflow[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2866, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 71, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_overflow[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2867, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 111, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2867, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 111, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2868, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 165, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2868, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 165, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2869, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 166, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2869, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 166, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2870, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 112, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2870, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 112, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2871, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_match[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2871, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_match[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2872, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_match[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2872, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_match[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2873, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 102, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2873, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 102, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2874, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 139, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2874, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 139, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2875, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 140, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2875, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 140, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2876, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 103, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2876, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 103, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2877, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 81, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_monitor_key_fragment[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2877, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 81, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_monitor_key_fragment[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2878, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 81, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_monitor_key_fragment[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2878, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 81, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_monitor_key_fragment[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2879, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 93, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2879, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 93, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2880, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 183, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2880, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 183, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2881, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 184, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2881, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 184, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2882, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 94, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2882, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 94, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2883, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 774, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "766,774-782", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2883, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 774, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "766,774-782", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2884, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "766,786-793", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2884, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "766,786-793", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2885, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "766,794-801", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2885, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "766,794-801", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2886, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 11, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2886, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 11, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2887, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 11, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2887, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 11, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2888, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 785, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "785", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2888, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 785, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "785", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2889, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2889, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2890, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2890, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2891, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2891, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2892, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2892, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2893, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2893, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[23:20][0]==0 && reg_wmask[23:20][1]==0 && reg_wmask[23:20][2]==0 && reg_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2894, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2894, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 70, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2895, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 134, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "767", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2895, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 134, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "767", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2896, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 135, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766-767", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2896, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 767, 135, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766-767", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2897, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2897, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==1 && reg_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2898, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2898, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(reg_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2899, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2899, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 68, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2900, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 123, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2900, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 123, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2901, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 313, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2901, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 313, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2902, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 314, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2902, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 314, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,768", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2903, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 124, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2903, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 768, 124, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2904, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_error[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2904, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_error[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2905, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_error[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2905, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_error[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2906, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 102, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2906, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 102, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2907, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 188, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2907, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 188, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2908, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 189, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2908, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 189, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,769", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2909, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 103, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2909, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 769, 103, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2910, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 69, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_pending[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2910, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 69, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_pending[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2911, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 69, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_pending[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2911, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 69, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_pending[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2912, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2912, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 108, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2913, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 196, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2913, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 196, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2914, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 197, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2914, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 197, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,770", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2915, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 109, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2915, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 770, 109, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2916, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 71, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_overflow[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2916, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 71, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_overflow[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2917, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 71, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_overflow[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2917, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 71, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_overflow[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2918, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 111, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2918, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 111, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2919, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 165, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2919, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 165, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2920, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 166, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2920, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 166, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,771", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2921, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 112, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2921, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 771, 112, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2922, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_match[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2922, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_match[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2923, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_match[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2923, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 65, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_we_monitor_match[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2924, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 102, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2924, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 102, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "766,772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2925, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 139, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2925, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 139, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2926, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 140, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2926, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 140, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2927, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 103, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2927, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 772, 103, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2928, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 81, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_monitor_key_fragment[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2928, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 81, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_monitor_key_fragment[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2929, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 81, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_monitor_key_fragment[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2929, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 81, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_monitor_key_fragment[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2930, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 93, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2930, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 93, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2931, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 183, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2931, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 183, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2932, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 184, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2932, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 184, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "766,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2933, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 94, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2933, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 773, 94, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2934, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 774, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "766,774-782", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2934, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 774, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "766,774-782", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2935, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "766,786-793", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2935, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 7, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "766,786-793", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2936, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "766,794-801", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2936, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 8, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "766,794-801", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2937, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 11, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2937, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 11, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2938, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 11, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2938, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 786, 11, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2939, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 785, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "785", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2939, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 785, 5, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "785", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2940, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 815, 27, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_key_data==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2940, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 815, 27, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_key_data==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2941, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 815, 27, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_key_data==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2941, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 815, 27, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(i_hw_clear_key_data==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2942, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 815, 49, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "815", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2942, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 815, 49, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "815", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2943, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 816, 89, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "816", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2943, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 816, 89, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_then", "816", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2944, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 816, 90, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "817", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2944, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 816, 90, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "817", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2945, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 815, 50, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2945, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 815, 50, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2946, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 821, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "821-822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2946, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 821, 5, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "821-822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2947, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 821, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "823-824", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2947, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 821, 6, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "823-824", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2948, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 821, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2948, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 821, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2949, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 821, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2949, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 821, 9, ".tb_axil.u_dut", "v_expr/m_vlsi_axil_queued_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2950, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 820, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "820", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2950, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 820, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "820", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2951, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 832, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "832-833", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2951, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 832, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "832-833", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2952, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 842, 26, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "842", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2952, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 842, 26, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "842", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2953, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 843, 26, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "843", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2953, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 843, 26, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "843", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2954, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 844, 26, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "844", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2954, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 844, 26, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "844", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2955, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 845, 26, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "845", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2955, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 845, 26, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "845", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2956, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 846, 76, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "846", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2956, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 846, 76, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "846", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2957, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 846, 77, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2957, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 846, 77, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2958, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 846, 74, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "846", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2958, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 846, 74, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "846", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2959, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 847, 76, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "847", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2959, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 847, 76, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "847", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2960, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 847, 77, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2960, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 847, 77, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2961, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 847, 74, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "847", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2961, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 847, 74, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "847", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2962, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 848, 76, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "848", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2962, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 848, 76, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "848", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2963, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 848, 77, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2963, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 848, 77, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2964, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 848, 74, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "848", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2964, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 848, 74, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "848", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2965, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 849, 76, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "849", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2965, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 849, 76, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "if", "849", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2966, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 849, 77, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2966, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 849, 77, ".tb_axil.u_dut", "v_branch/m_vlsi_axil_queued_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2967, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 849, 74, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "849", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2967, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 849, 74, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "849", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2968, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 850, 23, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "850", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2968, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 850, 23, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "850", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2969, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 851, 7, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "851", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2969, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 851, 7, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "case", "851", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2970, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 838, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "838-841", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2970, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\m_vlsi_axil_queued_csr.sv", 838, 3, ".tb_axil.u_dut", "v_line/m_vlsi_axil_queued_csr", "block", "838-841", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 14, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "i_clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 15, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "i_rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1357, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 16, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "i_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1361, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 17, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "o_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1739, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 18, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "i_w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 170, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 19, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "o_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 122, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 20, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "i_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 172, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 21, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "o_r_data");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2971, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "reg_mem[0]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2975, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "reg_mem[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2979, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "reg_mem[2]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2983, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "reg_mem[3]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2987, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 24, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "reg_wr_ptr");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2991, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 25, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "reg_rd_ptr");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 2995, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 26, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "reg_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3001, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 27, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "w_wr_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1749, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 28, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_toggle/m_csr_sync_fifo__P2_PB4", "w_rd_hs");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3003, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3003, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3004, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "((reg_count < PARA_DEPTH[2:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3004, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "((reg_count < PARA_DEPTH[2:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3005, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "((reg_count < PARA_DEPTH[2:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3005, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "((reg_count < PARA_DEPTH[2:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3006, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "((reg_count < PARA_DEPTH[2:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3006, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "((reg_count < PARA_DEPTH[2:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3007, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3007, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3008, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3008, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3009, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3009, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3010, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3010, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3011, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3011, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3012, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3012, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3013, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_line/m_csr_sync_fifo__P2_PB4", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3013, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_line/m_csr_sync_fifo__P2_PB4", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3014, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_line/m_csr_sync_fifo__P2_PB4", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3014, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_line/m_csr_sync_fifo__P2_PB4", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3015, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_line/m_csr_sync_fifo__P2_PB4", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3015, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_line/m_csr_sync_fifo__P2_PB4", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3016, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3016, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3017, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3017, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3018, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3018, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3019, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3019, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3020, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3020, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3021, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3021, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3022, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3022, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3023, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3023, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3024, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3024, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3025, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3025, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_branch/m_csr_sync_fifo__P2_PB4", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3026, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3026, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3027, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3027, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_expr/m_csr_sync_fifo__P2_PB4", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3028, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_line/m_csr_sync_fifo__P2_PB4", "block", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3028, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_rsp_fifo", "v_line/m_csr_sync_fifo__P2_PB4", "block", "37", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 14, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 15, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1349, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 16, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1359, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 17, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "o_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 1603, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 18, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 178, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 19, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "o_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 164, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 20, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "i_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 1671, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 21, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "o_r_data");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 3029, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_mem[0]");
    vlSelf->__vlCoverToggleInsert(0, 33, 1, vlSelf->__Vcoverage + 3097, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_mem[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 1, vlSelf->__Vcoverage + 3165, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 24, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_wr_ptr");
    vlSelf->__vlCoverToggleInsert(0, 0, 1, vlSelf->__Vcoverage + 3167, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 25, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_rd_ptr");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 3169, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 26, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "reg_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3173, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 27, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "w_wr_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1747, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 28, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_toggle/m_csr_sync_fifo__P22", "w_rd_hs");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3175, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3175, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3176, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3176, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3177, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3177, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3178, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3178, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "((reg_count < PARA_DEPTH[1:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3179, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3179, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3180, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3180, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3181, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3181, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3182, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3182, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3183, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3183, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3184, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3184, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3185, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3185, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3186, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3186, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3187, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3187, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3188, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3188, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3189, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3189, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3190, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3190, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3191, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3191, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3192, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3192, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3193, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3193, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3194, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3194, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3195, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3195, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3196, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3196, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3197, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3197, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_branch/m_csr_sync_fifo__P22", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3198, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3198, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3199, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3199, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_expr/m_csr_sync_fifo__P22", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3200, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "block", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3200, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_rsp_fifo", "v_line/m_csr_sync_fifo__P22", "block", "37", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 14, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "i_clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 15, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "i_rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1351, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 16, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "i_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1353, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 17, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "o_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 51, 1, vlSelf->__Vcoverage + 1395, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 18, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "i_w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1355, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 19, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "o_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1357, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 20, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "i_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 51, 1, vlSelf->__Vcoverage + 1499, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 21, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "o_r_data");
    vlSelf->__vlCoverToggleInsert(0, 51, 1, vlSelf->__Vcoverage + 3201, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "reg_mem[0]");
    vlSelf->__vlCoverToggleInsert(0, 51, 1, vlSelf->__Vcoverage + 3305, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "reg_mem[1]");
    vlSelf->__vlCoverToggleInsert(0, 51, 1, vlSelf->__Vcoverage + 3409, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "reg_mem[2]");
    vlSelf->__vlCoverToggleInsert(0, 51, 1, vlSelf->__Vcoverage + 3513, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "reg_mem[3]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 3617, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 24, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "reg_wr_ptr");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 3621, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 25, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "reg_rd_ptr");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 3625, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 26, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "reg_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3631, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 27, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "w_wr_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3633, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 28, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_toggle/m_csr_sync_fifo__P34_PB4", "w_rd_hs");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3635, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3635, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3636, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "((reg_count < PARA_DEPTH[2:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3636, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "((reg_count < PARA_DEPTH[2:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3637, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "((reg_count < PARA_DEPTH[2:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3637, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "((reg_count < PARA_DEPTH[2:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3638, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "((reg_count < PARA_DEPTH[2:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3638, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "((reg_count < PARA_DEPTH[2:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3639, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3639, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3640, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3640, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3641, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3641, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3642, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3642, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3643, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3643, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3644, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3644, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3645, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_line/m_csr_sync_fifo__P34_PB4", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3645, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_line/m_csr_sync_fifo__P34_PB4", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3646, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_line/m_csr_sync_fifo__P34_PB4", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3646, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_line/m_csr_sync_fifo__P34_PB4", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3647, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_line/m_csr_sync_fifo__P34_PB4", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3647, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_line/m_csr_sync_fifo__P34_PB4", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3648, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3648, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3649, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3649, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3650, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3650, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3651, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3651, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3652, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3652, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3653, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3653, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3654, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3654, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3655, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3655, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3656, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3656, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3657, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3657, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_branch/m_csr_sync_fifo__P34_PB4", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3658, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3658, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3659, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3659, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_expr/m_csr_sync_fifo__P34_PB4", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3660, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_line/m_csr_sync_fifo__P34_PB4", "block", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3660, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_wr_cmd_fifo", "v_line/m_csr_sync_fifo__P34_PB4", "block", "37", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 14, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "i_clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 4, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 15, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "i_rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1343, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 16, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "i_w_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1345, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 17, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "o_w_ready");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 126, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 18, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "i_w_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1347, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 19, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "o_r_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1349, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 20, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "i_r_ready");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 1363, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 21, 34, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "o_r_data");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 3661, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "reg_mem[0]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 3693, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 23, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "reg_mem[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 1, vlSelf->__Vcoverage + 3725, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 24, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "reg_wr_ptr");
    vlSelf->__vlCoverToggleInsert(0, 0, 1, vlSelf->__Vcoverage + 3727, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 25, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "reg_rd_ptr");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 3729, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 26, 27, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "reg_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3733, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 27, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "w_wr_hs");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3735, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 28, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_toggle/m_csr_sync_fifo__P10", "w_rd_hs");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3737, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3737, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3738, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "((reg_count < PARA_DEPTH[1:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3738, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "((reg_count < PARA_DEPTH[1:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3739, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "((reg_count < PARA_DEPTH[1:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3739, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "((reg_count < PARA_DEPTH[1:0])==0 && i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3740, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "((reg_count < PARA_DEPTH[1:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3740, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 31, 61, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "((reg_count < PARA_DEPTH[1:0])==0 && o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3741, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3741, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_w_valid==1 && o_w_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3742, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3742, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(o_w_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3743, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3743, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 33, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_w_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3744, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3744, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(o_r_valid==1 && i_r_ready==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3745, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3745, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_r_ready==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3746, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3746, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 34, 30, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(o_r_valid==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3747, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_line/m_csr_sync_fifo__P10", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3747, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 44, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_line/m_csr_sync_fifo__P10", "case", "44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3748, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_line/m_csr_sync_fifo__P10", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3748, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 45, 14, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_line/m_csr_sync_fifo__P10", "case", "45", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3749, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_line/m_csr_sync_fifo__P10", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3749, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 46, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_line/m_csr_sync_fifo__P10", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3750, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3750, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "50-51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3751, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3751, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 50, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3752, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3752, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "48-49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3753, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3753, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 48, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3754, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3754, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "56-57", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3755, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3755, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 56, 10, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "59", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3756, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3756, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 7, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "55", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3757, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3757, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 55, 8, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3758, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3758, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 5, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "if", "38-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3759, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3759, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 6, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_branch/m_csr_sync_fifo__P10", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3760, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3760, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_rst_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3761, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3761, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 38, 9, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_expr/m_csr_sync_fifo__P10", "(i_rst_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3762, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_line/m_csr_sync_fifo__P10", "block", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3762, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\AXI4_Lite\\RTL\\models\\m_csr_sync_fifo.sv", 37, 3, ".tb_axil.u_dut.g_sync_axi_fifo.u_axi_rd_cmd_fifo", "v_line/m_csr_sync_fifo__P10", "block", "37", "", "", "", "");
}
