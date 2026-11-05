// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_csr_golden.h for the primary calling header

#include "Vtb_csr_golden__pch.h"

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_static__TOP(Vtb_csr_golden___024root* vlSelf);
void Vtb_csr_golden___024root___timing_ready(Vtb_csr_golden___024root* vlSelf);

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_static(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_static\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_csr_golden___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__rst_n_apb__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_reg__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h099e188a__1 = 0U;
    vlSelfRef.__Vtrigprevexpr_h099e47ff__1 = 0U;
    vlSelfRef.__Vtrigprevexpr_h099e3870__1 = 0U;
    vlSelfRef.__Vtrigprevexpr_h099e691d__1 = 0U;
    Vtb_csr_golden___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_csr_golden___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_csr_golden___024root___stl_sequent__TOP__0(Vtb_csr_golden___024root* vlSelf);

VL_ATTR_COLD bool Vtb_csr_golden___024root___eval_stl(Vtb_csr_golden___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_stl\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_csr_golden___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_csr_golden___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_csr_golden___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__stl(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_dump_triggers__stl\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_csr_golden___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__ico(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_dump_triggers__ico\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_csr_golden___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__act(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_dump_triggers__act\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_csr_golden___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__nba(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_dump_triggers__nba\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_csr_golden___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__obs(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_dump_triggers__obs\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_dump_triggers__react(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_dump_triggers__react\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_final(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_final\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_csr_golden___024root___eval_static__TOP(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_static__TOP\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_csr_golden__DOT__clk_apb = 0U;
    ++(vlSelf->__Vcoverage[2]);
    vlSelfRef.tb_csr_golden__DOT__clk_reg = 0U;
    ++(vlSelf->__Vcoverage[5]);
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 0U;
    ++(vlSelf->__Vcoverage[8]);
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 0U;
    ++(vlSelf->__Vcoverage[11]);
    vlSelfRef.tb_csr_golden__DOT__psel = 0U;
    ++(vlSelf->__Vcoverage[22]);
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    ++(vlSelf->__Vcoverage[25]);
    vlSelfRef.tb_csr_golden__DOT__pwrite = 0U;
    ++(vlSelf->__Vcoverage[28]);
    vlSelfRef.tb_csr_golden__DOT__paddr = 0U;
    ++(vlSelf->__Vcoverage[61]);
    vlSelfRef.tb_csr_golden__DOT__pwdata = 0U;
    ++(vlSelf->__Vcoverage[126]);
    vlSelfRef.tb_csr_golden__DOT__pstrb = 0x0fU;
    ++(vlSelf->__Vcoverage[135]);
    vlSelfRef.tb_csr_golden__DOT__pprot = 0U;
    ++(vlSelf->__Vcoverage[142]);
    vlSelfRef.tb_csr_golden__DOT__protect_en = 1U;
    ++(vlSelf->__Vcoverage[213]);
    vlSelfRef.tb_csr_golden__DOT__slverr_en = 1U;
    ++(vlSelf->__Vcoverage[216]);
    vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count = 0U;
    ++(vlSelf->__Vcoverage[285]);
    vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count = 0U;
    ++(vlSelf->__Vcoverage[286]);
    vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count = 0U;
    ++(vlSelf->__Vcoverage[287]);
    vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr = 0U;
    ++(vlSelf->__Vcoverage[320]);
    vlSelfRef.tb_csr_golden__DOT__reg_wr_event_addr = 0U;
    ++(vlSelf->__Vcoverage[353]);
    vlSelfRef.tb_csr_golden__DOT__ro_flat = 0ULL;
    ++(vlSelf->__Vcoverage[482]);
    vlSelfRef.tb_csr_golden__DOT__hw_we_flat = 0ULL;
    ++(vlSelf->__Vcoverage[563]);
    vlSelfRef.tb_csr_golden__DOT__hw_wd_flat = 0ULL;
    ++(vlSelf->__Vcoverage[644]);
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data = 0U;
    ++(vlSelf->__Vcoverage[855]);
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
    ++(vlSelf->__Vcoverage[920]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = 0U;
    ++(vlSelf->__Vcoverage[1029]);
    vlSelfRef.tb_csr_golden__DOT__n_fail = 0U;
    ++(vlSelf->__Vcoverage[1030]);
    vlSelfRef.tb_csr_golden__DOT__seed = 1U;
    ++(vlSelf->__Vcoverage[1031]);
    vlSelfRef.tb_csr_golden__DOT__cov_rwi_sw = 0U;
    ++(vlSelf->__Vcoverage[1032]);
    vlSelfRef.tb_csr_golden__DOT__cov_w1c_hw = 0U;
    ++(vlSelf->__Vcoverage[1033]);
    vlSelfRef.tb_csr_golden__DOT__cov_w0c_hw = 0U;
    ++(vlSelf->__Vcoverage[1034]);
    vlSelfRef.tb_csr_golden__DOT__cov_w2c_hw = 0U;
    ++(vlSelf->__Vcoverage[1035]);
    vlSelfRef.tb_csr_golden__DOT__cov_r2c_hw = 0U;
    ++(vlSelf->__Vcoverage[1036]);
    vlSelfRef.tb_csr_golden__DOT__cov_hw_zero = 0U;
    ++(vlSelf->__Vcoverage[1037]);
    vlSelfRef.tb_csr_golden__DOT__cov_err = 0U;
    ++(vlSelf->__Vcoverage[1038]);
    vlSelfRef.tb_csr_golden__DOT__cov_ok_wr = 0U;
    ++(vlSelf->__Vcoverage[1039]);
    vlSelfRef.tb_csr_golden__DOT__cov_ok_rd = 0U;
    ++(vlSelf->__Vcoverage[1040]);
    vlSelfRef.tb_csr_golden__DOT__cov_unmapped = 0U;
    ++(vlSelf->__Vcoverage[1041]);
    vlSelfRef.tb_csr_golden__DOT__cov_b2b = 0U;
    ++(vlSelf->__Vcoverage[1042]);
    vlSelfRef.tb_csr_golden__DOT__cov_sva1 = 0U;
    ++(vlSelf->__Vcoverage[1043]);
    vlSelfRef.tb_csr_golden__DOT__cov_sva4 = 0U;
    ++(vlSelf->__Vcoverage[1044]);
    vlSelfRef.tb_csr_golden__DOT__cov_rst_mid = 0U;
    ++(vlSelf->__Vcoverage[1045]);
    vlSelfRef.tb_csr_golden__DOT__cov_r2c_clear = 0U;
    ++(vlSelf->__Vcoverage[1046]);
    vlSelfRef.tb_csr_golden__DOT__cov_w1c_clear = 0U;
    ++(vlSelf->__Vcoverage[1047]);
    vlSelfRef.tb_csr_golden__DOT__cov_w0c_clear = 0U;
    ++(vlSelf->__Vcoverage[1048]);
    vlSelfRef.tb_csr_golden__DOT__cov_w2c_clear = 0U;
    ++(vlSelf->__Vcoverage[1049]);
    vlSelfRef.tb_csr_golden__DOT__pready_q = 0U;
    ++(vlSelf->__Vcoverage[1058]);
    vlSelfRef.tb_csr_golden__DOT__good_rdata = 0U;
    ++(vlSelf->__Vcoverage[1205]);
    vlSelfRef.tb_csr_golden__DOT__chain = 0U;
    ++(vlSelf->__Vcoverage[1208]);
    vlSelfRef.tb_csr_golden__DOT__arm_wr = 0U;
    ++(vlSelf->__Vcoverage[1441]);
    vlSelfRef.tb_csr_golden__DOT__arm_rd = 0U;
    ++(vlSelf->__Vcoverage[1444]);
    vlSelfRef.tb_csr_golden__DOT__hw_clr = 0U;
    ++(vlSelf->__Vcoverage[1447]);
    vlSelfRef.tb_csr_golden__DOT__c_inst = 0U;
    ++(vlSelf->__Vcoverage[1448]);
    vlSelfRef.tb_csr_golden__DOT__c_f = 0U;
    ++(vlSelf->__Vcoverage[1449]);
    vlSelfRef.tb_csr_golden__DOT__c_val = 0U;
    ++(vlSelf->__Vcoverage[1452]);
    vlSelfRef.tb_csr_golden__DOT__arm_hits = 0U;
    ++(vlSelf->__Vcoverage[1453]);
    vlSelfRef.tb_csr_golden__DOT__test_phase = 0U;
    ++(vlSelf->__Vcoverage[1676]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_csr_golden___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_csr_golden___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_csr_golden___024root___stl_sequent__TOP__0(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___stl_sequent__TOP__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_csr_golden__DOT__u_dut__DOT__w_engine_value;
    tb_csr_golden__DOT__u_dut__DOT__w_engine_value = 0;
    IData/*31:0*/ tb_csr_golden__DOT__u_dut__DOT__w_port_0_value;
    tb_csr_golden__DOT__u_dut__DOT__w_port_0_value = 0;
    IData/*31:0*/ tb_csr_golden__DOT__u_dut__DOT__w_port_1_value;
    tb_csr_golden__DOT__u_dut__DOT__w_port_1_value = 0;
    IData/*31:0*/ tb_csr_golden__DOT__u_dut__DOT__w_port_2_value;
    tb_csr_golden__DOT__u_dut__DOT__w_port_2_value = 0;
    QData/*63:0*/ tb_csr_golden__DOT__u_dut__DOT__w_monitor_value;
    tb_csr_golden__DOT__u_dut__DOT__w_monitor_value = 0;
    // Body
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__psel) 
         & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__penable)))) {
        ++(vlSelf->__Vcoverage[2886]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__penable) {
        ++(vlSelf->__Vcoverage[2887]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__psel)))) {
        ++(vlSelf->__Vcoverage[2888]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         & (0U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2933]);
    }
    if ((0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2934]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)))) {
        ++(vlSelf->__Vcoverage[2935]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         & (0x0100U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2936]);
    }
    if ((0x0100U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2937]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)))) {
        ++(vlSelf->__Vcoverage[2938]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         & (0x0104U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2939]);
    }
    if ((0x0104U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2940]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)))) {
        ++(vlSelf->__Vcoverage[2941]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         & (0x0108U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2942]);
    }
    if ((0x0108U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2943]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)))) {
        ++(vlSelf->__Vcoverage[2944]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         & (0x0200U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2945]);
    }
    if ((0x0200U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2946]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)))) {
        ++(vlSelf->__Vcoverage[2947]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         & (0x0204U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2948]);
    }
    if ((0x0204U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2949]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)))) {
        ++(vlSelf->__Vcoverage[2950]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         & (0x0400U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2951]);
    }
    if ((0x0400U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2952]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)))) {
        ++(vlSelf->__Vcoverage[2953]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         & (0U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2954]);
    }
    if ((0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2955]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture)))) {
        ++(vlSelf->__Vcoverage[2956]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         & (0x0100U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2957]);
    }
    if ((0x0100U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2958]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture)))) {
        ++(vlSelf->__Vcoverage[2959]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         & (0x0104U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2960]);
    }
    if ((0x0104U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2961]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture)))) {
        ++(vlSelf->__Vcoverage[2962]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         & (0x0108U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2963]);
    }
    if ((0x0108U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2964]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture)))) {
        ++(vlSelf->__Vcoverage[2965]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         & (0x0200U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2966]);
    }
    if ((0x0200U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2967]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture)))) {
        ++(vlSelf->__Vcoverage[2968]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         & (0x0204U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2969]);
    }
    if ((0x0204U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2970]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture)))) {
        ++(vlSelf->__Vcoverage[2971]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         & (0U == (3U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))))) {
        ++(vlSelf->__Vcoverage[2972]);
    }
    if ((0U != (3U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2973]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture)))) {
        ++(vlSelf->__Vcoverage[2974]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__clk_apb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 0, vlSelfRef.tb_csr_golden__DOT__clk_apb, vlSelfRef.tb_csr_golden__DOT____Vtogcov__clk_apb);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__clk_apb 
            = vlSelfRef.tb_csr_golden__DOT__clk_apb;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__clk_reg) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__clk_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3, vlSelfRef.tb_csr_golden__DOT__clk_reg, vlSelfRef.tb_csr_golden__DOT____Vtogcov__clk_reg);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__clk_reg 
            = vlSelfRef.tb_csr_golden__DOT__clk_reg;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__rst_n_apb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 6, vlSelfRef.tb_csr_golden__DOT__rst_n_apb, vlSelfRef.tb_csr_golden__DOT____Vtogcov__rst_n_apb);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__rst_n_apb 
            = vlSelfRef.tb_csr_golden__DOT__rst_n_apb;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_reg) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__rst_n_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 9, vlSelfRef.tb_csr_golden__DOT__rst_n_reg, vlSelfRef.tb_csr_golden__DOT____Vtogcov__rst_n_reg);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__rst_n_reg 
            = vlSelfRef.tb_csr_golden__DOT__rst_n_reg;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__psel) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__psel))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 20, vlSelfRef.tb_csr_golden__DOT__psel, vlSelfRef.tb_csr_golden__DOT____Vtogcov__psel);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__psel 
            = vlSelfRef.tb_csr_golden__DOT__psel;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__penable) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__penable))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 23, vlSelfRef.tb_csr_golden__DOT__penable, vlSelfRef.tb_csr_golden__DOT____Vtogcov__penable);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__penable 
            = vlSelfRef.tb_csr_golden__DOT__penable;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__pwrite) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pwrite))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 26, vlSelfRef.tb_csr_golden__DOT__pwrite, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pwrite);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pwrite 
            = vlSelfRef.tb_csr_golden__DOT__pwrite;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__paddr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__paddr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 29, vlSelfRef.tb_csr_golden__DOT__paddr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__paddr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__paddr 
            = vlSelfRef.tb_csr_golden__DOT__paddr;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__pwdata 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__pwdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 62, vlSelfRef.tb_csr_golden__DOT__pwdata, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pwdata);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pwdata 
            = vlSelfRef.tb_csr_golden__DOT__pwdata;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__pstrb) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 127, vlSelfRef.tb_csr_golden__DOT__pstrb, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pstrb);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pstrb 
            = vlSelfRef.tb_csr_golden__DOT__pstrb;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__pprot) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pprot)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 136, vlSelfRef.tb_csr_golden__DOT__pprot, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pprot);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pprot 
            = vlSelfRef.tb_csr_golden__DOT__pprot;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 143, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pslverr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 145, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pslverr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pslverr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__prdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 147, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata, vlSelfRef.tb_csr_golden__DOT____Vtogcov__prdata);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__prdata 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__protect_en) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__protect_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 211, vlSelfRef.tb_csr_golden__DOT__protect_en, vlSelfRef.tb_csr_golden__DOT____Vtogcov__protect_en);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__protect_en 
            = vlSelfRef.tb_csr_golden__DOT__protect_en;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__slverr_en) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__slverr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 214, vlSelfRef.tb_csr_golden__DOT__slverr_en, vlSelfRef.tb_csr_golden__DOT____Vtogcov__slverr_en);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__slverr_en 
            = vlSelfRef.tb_csr_golden__DOT__slverr_en;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_event_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 288, vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_event_addr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_event_addr 
            = vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__reg_wr_event_addr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_event_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 321, vlSelfRef.tb_csr_golden__DOT__reg_wr_event_addr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_event_addr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_event_addr 
            = vlSelfRef.tb_csr_golden__DOT__reg_wr_event_addr;
    }
    if ((0ULL != (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                  ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__ro_flat))) {
        VL_COV_TOGGLE_CHG_ST_Q(64, vlSelf->__Vcoverage + 354, vlSelfRef.tb_csr_golden__DOT__ro_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__ro_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__ro_flat 
            = vlSelfRef.tb_csr_golden__DOT__ro_flat;
    }
    if ((0ULL != (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                  ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_we_flat))) {
        VL_COV_TOGGLE_CHG_ST_Q(40, vlSelf->__Vcoverage + 483, vlSelfRef.tb_csr_golden__DOT__hw_we_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_we_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_we_flat 
            = vlSelfRef.tb_csr_golden__DOT__hw_we_flat;
    }
    if ((0ULL != (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                  ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_wd_flat))) {
        VL_COV_TOGGLE_CHG_ST_Q(40, vlSelf->__Vcoverage + 564, vlSelfRef.tb_csr_golden__DOT__hw_wd_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_wd_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_wd_flat 
            = vlSelfRef.tb_csr_golden__DOT__hw_wd_flat;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 789, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data, vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_key_data);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_key_data 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clr_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 853, vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data, vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clr_key_data);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clr_key_data 
            = vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clr_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 916, vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment, vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clr_monitor_key_fragment);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clr_monitor_key_fragment 
            = vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o0)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 969, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o0);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o0 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o1)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 973, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o1);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o1 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o2)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 977, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o2);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o2 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o3)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 981, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o3);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o3 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o4)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 985, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o4);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o4 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__pready_q) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1056, vlSelfRef.tb_csr_golden__DOT__pready_q, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready_q);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready_q 
            = vlSelfRef.tb_csr_golden__DOT__pready_q;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__last_err) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_err))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1067, vlSelfRef.tb_csr_golden__DOT__last_err, vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_err);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_err 
            = vlSelfRef.tb_csr_golden__DOT__last_err;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__last_mode0) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_mode0)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1069, vlSelfRef.tb_csr_golden__DOT__last_mode0, vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_mode0);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_mode0 
            = vlSelfRef.tb_csr_golden__DOT__last_mode0;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1077, vlSelfRef.tb_csr_golden__DOT__last_rdata, vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_rdata);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__last_rdata 
            = vlSelfRef.tb_csr_golden__DOT__last_rdata;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__good_rdata 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__good_rdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1141, vlSelfRef.tb_csr_golden__DOT__good_rdata, vlSelfRef.tb_csr_golden__DOT____Vtogcov__good_rdata);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__good_rdata 
            = vlSelfRef.tb_csr_golden__DOT__good_rdata;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__chain) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__chain))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1206, vlSelfRef.tb_csr_golden__DOT__chain, vlSelfRef.tb_csr_golden__DOT____Vtogcov__chain);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__chain 
            = vlSelfRef.tb_csr_golden__DOT__chain;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__arm_wr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1439, vlSelfRef.tb_csr_golden__DOT__arm_wr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__arm_wr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__arm_wr 
            = vlSelfRef.tb_csr_golden__DOT__arm_wr;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__arm_rd) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__arm_rd))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1442, vlSelfRef.tb_csr_golden__DOT__arm_rd, vlSelfRef.tb_csr_golden__DOT____Vtogcov__arm_rd);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__arm_rd 
            = vlSelfRef.tb_csr_golden__DOT__arm_rd;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__hw_clr) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_clr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1445, vlSelfRef.tb_csr_golden__DOT__hw_clr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_clr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_clr 
            = vlSelfRef.tb_csr_golden__DOT__hw_clr;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__c_val) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__c_val))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1450, vlSelfRef.tb_csr_golden__DOT__c_val, vlSelfRef.tb_csr_golden__DOT____Vtogcov__c_val);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__c_val 
            = vlSelfRef.tb_csr_golden__DOT__c_val;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__r32 ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__r32))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1471, vlSelfRef.tb_csr_golden__DOT__r32, vlSelfRef.tb_csr_golden__DOT____Vtogcov__r32);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__r32 
            = vlSelfRef.tb_csr_golden__DOT__r32;
    }
    if ((0U != (0x000000ffU & ((IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat) 
                               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 1706, (IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events 
            = (0x000000ffU & (IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat));
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1722, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_mode);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1730, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start;
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1732, (IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_start 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat));
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat) 
               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1734, (IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_start 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1736, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 1U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1738, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 1U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 1U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 1U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1740, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 1U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 1U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1742, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 2U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1744, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 2U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 2U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 2U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1746, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 2U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 2U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1748, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 3U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1750, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 3U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 3U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 3U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1752, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 3U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 3U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1754, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 4U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1756, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 4U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 4U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 4U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1758, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 4U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 4U)));
    }
    if ((0U != (0x000000ffU & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                        >> 8U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 1760, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                                       >> 8U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count 
            = (0x000000ffU & (IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                      >> 8U)));
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1776, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_mode);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1784, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 5U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1786, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 5U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 5U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 5U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1788, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 5U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_start 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 5U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1790, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 6U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1792, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 6U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 6U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 6U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1794, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 6U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 6U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1796, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 7U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1798, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 7U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 7U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 7U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1800, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 7U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 7U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1802, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 8U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1804, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 8U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 8U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 8U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1806, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 8U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 8U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1808, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 9U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1810, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 9U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 9U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 9U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1812, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 9U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 9U)));
    }
    if ((0U != (0x000000ffU & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                        >> 0x00000010U)) 
                               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 1814, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                                       >> 0x00000010U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count 
            = (0x000000ffU & (IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                      >> 0x00000010U)));
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1830, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_mode);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1838, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000aU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1840, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000aU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_start 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000aU)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000aU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1842, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000aU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_start 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000aU)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1844, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000bU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1846, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000bU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000bU)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000bU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1848, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000bU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000bU)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1850, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000cU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1852, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000cU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000cU)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000cU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1854, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000cU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000cU)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1856, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000dU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1858, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000dU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000dU)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000dU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1860, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000dU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000dU)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1862, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000eU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1864, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000eU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000eU)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000eU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1866, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000eU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000eU)));
    }
    if ((0U != (0x000000ffU & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                        >> 0x00000018U)) 
                               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_2_event_count))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 1868, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                                       >> 0x00000018U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_2_event_count);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_2_event_count 
            = (0x000000ffU & (IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                      >> 0x00000018U)));
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1884, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_mode);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1892, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000fU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1894, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000fU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_start 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000fU)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000fU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1896, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000fU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_start 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000fU)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1898, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x00000010U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1900, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x00000010U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000010U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x00000010U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1902, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x00000010U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x00000010U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1904, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x00000011U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1906, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x00000011U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000011U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x00000011U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1908, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x00000011U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x00000011U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1910, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x00000012U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1912, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x00000012U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000012U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x00000012U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1914, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x00000012U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x00000012U)));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1916, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done;
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x00000013U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1918, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x00000013U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000013U)));
    }
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x00000013U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1920, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x00000013U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x00000013U)));
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1934, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_addr);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_addr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1966, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wdata);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wdata 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2030, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wstrb);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wstrb 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2102, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_en);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_en 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2104, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wr_en);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wr_en 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture;
    }
    if ((0U != (0x00007fffU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                               ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 856, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment, vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x3fff8000U & vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != (0x00007fffU & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment) 
                               >> 0x0000000fU)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 886, 
                               (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                >> 0x0000000fU), (vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment 
                                                  >> 0x0000000fU));
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x00007fffU & vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x3fff8000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != (0x000000ffU & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                        >> 0x00000020U)) 
                               ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_ro))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 921, (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                                      >> 0x00000020U)), vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_ro);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_ro 
            = ((0xff00U & (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_ro)) 
               | (0x000000ffU & (IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                         >> 0x00000020U))));
    }
    if ((0U != (0x000000ffU & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                        >> 0x00000028U)) 
                               ^ ((IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_ro) 
                                  >> 8U))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 937, (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                                      >> 0x00000028U)), 
                               ((IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_ro) 
                                >> 8U));
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_ro 
            = ((0x00ffU & (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_ro)) 
               | (0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> 0x00000028U)) 
                                 << 8U)));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                               ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_thr))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 953, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_thr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_thr 
            = ((0xf0U & (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_thr)) 
               | (0x0000000fU & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_thr)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 961, 
                               ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                                >> 4U), ((IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_thr) 
                                         >> 4U));
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_thr 
            = ((0x0fU & (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_thr)) 
               | (0x000000f0U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_mode[0U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1239, vlSelfRef.tb_csr_golden__DOT__m_mode[0U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[0U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[0U] 
            = vlSelfRef.tb_csr_golden__DOT__m_mode[0U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_mode[1U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1247, vlSelfRef.tb_csr_golden__DOT__m_mode[1U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[1U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[1U] 
            = vlSelfRef.tb_csr_golden__DOT__m_mode[1U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_mode[2U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1255, vlSelfRef.tb_csr_golden__DOT__m_mode[2U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[2U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[2U] 
            = vlSelfRef.tb_csr_golden__DOT__m_mode[2U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_mode[3U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[3U]))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1263, vlSelfRef.tb_csr_golden__DOT__m_mode[3U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[3U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[3U] 
            = vlSelfRef.tb_csr_golden__DOT__m_mode[3U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_mode[4U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[4U]))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1271, vlSelfRef.tb_csr_golden__DOT__m_mode[4U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[4U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[4U] 
            = vlSelfRef.tb_csr_golden__DOT__m_mode[4U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_mode[5U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[5U]))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1279, vlSelfRef.tb_csr_golden__DOT__m_mode[5U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[5U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[5U] 
            = vlSelfRef.tb_csr_golden__DOT__m_mode[5U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_mode[6U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[6U]))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1287, vlSelfRef.tb_csr_golden__DOT__m_mode[6U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[6U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[6U] 
            = vlSelfRef.tb_csr_golden__DOT__m_mode[6U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_mode[7U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[7U]))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1295, vlSelfRef.tb_csr_golden__DOT__m_mode[7U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[7U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_mode[7U] 
            = vlSelfRef.tb_csr_golden__DOT__m_mode[7U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_f[0U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1303, vlSelfRef.tb_csr_golden__DOT__m_f[0U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[0U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[0U] 
            = vlSelfRef.tb_csr_golden__DOT__m_f[0U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_f[1U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1313, vlSelfRef.tb_csr_golden__DOT__m_f[1U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[1U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[1U] 
            = vlSelfRef.tb_csr_golden__DOT__m_f[1U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_f[2U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1323, vlSelfRef.tb_csr_golden__DOT__m_f[2U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[2U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[2U] 
            = vlSelfRef.tb_csr_golden__DOT__m_f[2U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_f[3U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[3U]))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1333, vlSelfRef.tb_csr_golden__DOT__m_f[3U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[3U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[3U] 
            = vlSelfRef.tb_csr_golden__DOT__m_f[3U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_f[4U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[4U]))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1343, vlSelfRef.tb_csr_golden__DOT__m_f[4U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[4U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[4U] 
            = vlSelfRef.tb_csr_golden__DOT__m_f[4U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_f[5U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[5U]))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1353, vlSelfRef.tb_csr_golden__DOT__m_f[5U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[5U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[5U] 
            = vlSelfRef.tb_csr_golden__DOT__m_f[5U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_f[6U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[6U]))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1363, vlSelfRef.tb_csr_golden__DOT__m_f[6U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[6U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[6U] 
            = vlSelfRef.tb_csr_golden__DOT__m_f[6U];
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__m_f[7U] 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[7U]))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1373, vlSelfRef.tb_csr_golden__DOT__m_f[7U], vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[7U]);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__m_f[7U] 
            = vlSelfRef.tb_csr_golden__DOT__m_f[7U];
    }
    vlSelfRef.tb_csr_golden__DOT__o_mode_flat = ((0xff000000U 
                                                  & vlSelfRef.tb_csr_golden__DOT__o_mode_flat) 
                                                 | ((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                                                      << 0x00000010U) 
                                                     | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode) 
                                                        << 0x0000000cU)) 
                                                    | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode) 
                                                        << 8U) 
                                                       | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode) 
                                                           << 4U) 
                                                          | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode)))));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
           & (0U == (3U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_engine 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
           & (0U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
           & (0x0100U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
           & (0x0104U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
           & (0x0108U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    tb_csr_golden__DOT__u_dut__DOT__w_engine_value 
        = ((((0x0000ff00U & ((IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat) 
                             << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow))))) 
            << 0x00000010U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done) 
                               << 0x0000000fU));
    tb_csr_golden__DOT__u_dut__DOT__w_port_0_value 
        = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                      >> 8U)) << 8U)) 
             | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode) 
                 << 4U) | ((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start) 
                             << 3U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault) 
                                       << 2U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow))))) 
            << 0x00000010U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done) 
                               << 0x0000000fU));
    tb_csr_golden__DOT__u_dut__DOT__w_port_1_value 
        = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                      >> 0x00000010U)) 
                             << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow))))) 
            << 0x00000010U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done) 
                               << 0x0000000fU));
    tb_csr_golden__DOT__u_dut__DOT__w_port_2_value 
        = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                      >> 0x00000018U)) 
                             << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow))))) 
            << 0x00000010U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done) 
                               << 0x0000000fU));
    tb_csr_golden__DOT__u_dut__DOT__w_monitor_value 
        = (((QData)((IData)(((((0x0000ff00U & ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                        >> 0x00000028U)) 
                                               << 8U)) 
                               | ((0x000000f0U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold)) 
                                  | ((((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture)) 
                                       | (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                                                >> 1U))) 
                                      << 2U) | ((2U 
                                                 & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow) 
                                                      >> 1U)))))) 
                              << 0x00000010U) | (0x00008000U 
                                                 & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match) 
                                                    << 0x0000000eU))))) 
            << 0x00000020U) | (QData)((IData)(((((0x0000ff00U 
                                                  & ((IData)(
                                                             (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                              >> 0x00000020U)) 
                                                     << 8U)) 
                                                 | ((0x000000f0U 
                                                     & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow)))))) 
                                                << 0x00000010U) 
                                               | (0x00008000U 
                                                  & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match) 
                                                     << 0x0000000fU))))));
    vlSelfRef.tb_csr_golden__DOT__o_f_flat = ((0x000000ffc0000000ULL 
                                               & vlSelfRef.tb_csr_golden__DOT__o_f_flat) 
                                              | (IData)((IData)(
                                                                ((((((((2U 
                                                                        & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match)) 
                                                                       | (1U 
                                                                          & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow) 
                                                                             >> 1U))) 
                                                                      << 6U) 
                                                                     | (((2U 
                                                                          & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending)) 
                                                                         | (1U 
                                                                            & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                                                                               >> 1U))) 
                                                                        << 4U)) 
                                                                    | ((((2U 
                                                                          & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture)) 
                                                                         | (1U 
                                                                            & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending))))) 
                                                                   << 0x00000016U) 
                                                                  | ((((((2U 
                                                                          & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture))) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done) 
                                                                           << 4U) 
                                                                          | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow) 
                                                                             << 3U))) 
                                                                      | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start)))) 
                                                                     << 0x0000000fU)) 
                                                                 | (((((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done) 
                                                                         << 3U) 
                                                                        | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault))) 
                                                                      << 0x0000000bU) 
                                                                     | (((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start) 
                                                                           << 3U) 
                                                                          | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done) 
                                                                             << 2U)) 
                                                                         | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending))) 
                                                                        << 7U)) 
                                                                    | ((((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault) 
                                                                           << 3U) 
                                                                          | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start) 
                                                                             << 2U)) 
                                                                         | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow))) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start)))))))));
    vlSelfRef.tb_csr_golden__DOT__mon_we4 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                        >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                           >> 0x00000018U))));
    vlSelfRef.tb_csr_golden__DOT__mon_wd4 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                        >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                           >> 0x00000018U))));
    vlSelfRef.tb_csr_golden__DOT__mon_we3 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                        >> 0x0000001cU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                           >> 0x00000017U))));
    vlSelfRef.tb_csr_golden__DOT__mon_wd3 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                        >> 0x0000001cU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                           >> 0x00000017U))));
    vlSelfRef.tb_csr_golden__DOT__mon_we0 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                        >> 0x00000019U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                           >> 0x00000014U))));
    vlSelfRef.tb_csr_golden__DOT__mon_we1 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                        >> 0x0000001aU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                           >> 0x00000015U))));
    vlSelfRef.tb_csr_golden__DOT__mon_we2 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                        >> 0x0000001bU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                           >> 0x00000016U))));
    vlSelfRef.tb_csr_golden__DOT__mon_wd0 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                        >> 0x00000019U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                           >> 0x00000014U))));
    vlSelfRef.tb_csr_golden__DOT__mon_wd1 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                        >> 0x0000001aU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                           >> 0x00000015U))));
    vlSelfRef.tb_csr_golden__DOT__mon_wd2 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                        >> 0x0000001bU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                           >> 0x00000016U))));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup 
        = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__penable)) 
           & (IData)(vlSelfRef.tb_csr_golden__DOT__psel));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
           & (0x0400U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    if (vlSelfRef.tb_csr_golden__DOT__protect_en) {
        ++(vlSelf->__Vcoverage[2891]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_0 
            = (1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__pprot) 
                        >> 1U)));
    } else {
        ++(vlSelf->__Vcoverage[2892]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_0 = 1U;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_0;
    if (vlSelfRef.tb_csr_golden__DOT__protect_en) {
        ++(vlSelf->__Vcoverage[2889]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__protect_en)))) {
        ++(vlSelf->__Vcoverage[2890]);
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
           & (0U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
           & (0x0100U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
           & (0x0104U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
           & (0x0108U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    vlSelfRef.__Vdfg_Regularize_196 = (((0x0204U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)) 
                                        << 1U) | (0x0200U 
                                                  == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
        = ((((0x0000ff00U & ((- (IData)((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb) 
                                               >> 3U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb) 
                                                         >> 2U)))))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb) 
                                                              >> 1U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb)))))));
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_mode_flat))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 645, vlSelfRef.tb_csr_golden__DOT__o_mode_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_mode_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_mode_flat 
            = vlSelfRef.tb_csr_golden__DOT__o_mode_flat;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 217, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en, vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_en);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_en 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en;
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en) {
        ++(vlSelf->__Vcoverage[2977]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_2 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr;
    } else {
        ++(vlSelf->__Vcoverage[2978]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_2 = 0U;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_2;
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en) {
        ++(vlSelf->__Vcoverage[2975]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en)))) {
        ++(vlSelf->__Vcoverage[2976]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_engine) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2174, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_engine, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_engine);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_engine 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_engine;
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 4U)))) {
        ++(vlSelf->__Vcoverage[3043]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_9 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 4U)));
    } else {
        ++(vlSelf->__Vcoverage[3046]);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_engine) {
            ++(vlSelf->__Vcoverage[3044]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_9 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3045]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_9 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_done_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_9;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 4U)))) {
        ++(vlSelf->__Vcoverage[3041]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 4U))))) {
        ++(vlSelf->__Vcoverage[3042]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2260, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_0);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0;
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 9U)))) {
        ++(vlSelf->__Vcoverage[3088]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_15 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 9U)));
    } else {
        ++(vlSelf->__Vcoverage[3091]);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0) {
            ++(vlSelf->__Vcoverage[3089]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_15 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3090]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_15 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_done_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_15;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 9U)))) {
        ++(vlSelf->__Vcoverage[3086]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 9U))))) {
        ++(vlSelf->__Vcoverage[3087]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2346, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_1);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1;
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x0000000eU)))) {
        ++(vlSelf->__Vcoverage[3133]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_21 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000eU)));
    } else {
        ++(vlSelf->__Vcoverage[3136]);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1) {
            ++(vlSelf->__Vcoverage[3134]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_21 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3135]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_21 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_done_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_21;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x0000000eU)))) {
        ++(vlSelf->__Vcoverage[3131]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 0x0000000eU))))) {
        ++(vlSelf->__Vcoverage[3132]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2432, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_2);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2;
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[3178]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_27 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000013U)));
    } else {
        ++(vlSelf->__Vcoverage[3181]);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2) {
            ++(vlSelf->__Vcoverage[3179]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_27 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3180]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_27 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_done_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_27;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[3176]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 0x00000013U))))) {
        ++(vlSelf->__Vcoverage[3177]);
    }
    if ((0U != (tb_csr_golden__DOT__u_dut__DOT__w_engine_value 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2194, tb_csr_golden__DOT__u_dut__DOT__w_engine_value, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_value);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_value 
            = tb_csr_golden__DOT__u_dut__DOT__w_engine_value;
    }
    if ((0U != (tb_csr_golden__DOT__u_dut__DOT__w_port_0_value 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2280, tb_csr_golden__DOT__u_dut__DOT__w_port_0_value, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_value);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_value 
            = tb_csr_golden__DOT__u_dut__DOT__w_port_0_value;
    }
    if ((0U != (tb_csr_golden__DOT__u_dut__DOT__w_port_1_value 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2366, tb_csr_golden__DOT__u_dut__DOT__w_port_1_value, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_value);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_value 
            = tb_csr_golden__DOT__u_dut__DOT__w_port_1_value;
    }
    if ((0U != (tb_csr_golden__DOT__u_dut__DOT__w_port_2_value 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2452, tb_csr_golden__DOT__u_dut__DOT__w_port_2_value, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_value);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_value 
            = tb_csr_golden__DOT__u_dut__DOT__w_port_2_value;
    }
    if ((0U != ((IData)(tb_csr_golden__DOT__u_dut__DOT__w_monitor_value) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value)))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2620, (IData)(tb_csr_golden__DOT__u_dut__DOT__w_monitor_value), (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0xffffffff00000000ULL & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | (IData)((IData)(tb_csr_golden__DOT__u_dut__DOT__w_monitor_value)));
    }
    if ((0U != ((IData)((tb_csr_golden__DOT__u_dut__DOT__w_monitor_value 
                         >> 0x00000020U)) ^ (IData)(
                                                    (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                     >> 0x00000020U))))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2684, (IData)(
                                                                       (tb_csr_golden__DOT__u_dut__DOT__w_monitor_value 
                                                                        >> 0x00000020U)), (IData)(
                                                                                (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                                                >> 0x00000020U)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0x00000000ffffffffULL & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | ((QData)((IData)((IData)((tb_csr_golden__DOT__u_dut__DOT__w_monitor_value 
                                           >> 0x00000020U)))) 
                  << 0x00000020U));
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt = 0U;
    if ((0U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
            = tb_csr_golden__DOT__u_dut__DOT__w_engine_value;
        ++(vlSelf->__Vcoverage[3302]);
    } else if ((0x0100U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
            = tb_csr_golden__DOT__u_dut__DOT__w_port_0_value;
        ++(vlSelf->__Vcoverage[3303]);
    } else if ((0x0104U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
            = tb_csr_golden__DOT__u_dut__DOT__w_port_1_value;
        ++(vlSelf->__Vcoverage[3304]);
    } else if ((0x0108U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
            = tb_csr_golden__DOT__u_dut__DOT__w_port_2_value;
        ++(vlSelf->__Vcoverage[3305]);
    } else if ((0x0400U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        ++(vlSelf->__Vcoverage[3306]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        if ((0x0200U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
                = (IData)(tb_csr_golden__DOT__u_dut__DOT__w_monitor_value);
            ++(vlSelf->__Vcoverage[3307]);
            ++(vlSelf->__Vcoverage[3309]);
        } else if ((0x0204U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
                = (IData)((tb_csr_golden__DOT__u_dut__DOT__w_monitor_value 
                           >> 0x20U));
            ++(vlSelf->__Vcoverage[3310]);
            ++(vlSelf->__Vcoverage[3312]);
        } else if ((0x0208U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
            ++(vlSelf->__Vcoverage[3314]);
            ++(vlSelf->__Vcoverage[3315]);
        } else if ((0x020cU == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr))) {
            ++(vlSelf->__Vcoverage[3317]);
            ++(vlSelf->__Vcoverage[3318]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt = 0U;
            ++(vlSelf->__Vcoverage[3319]);
        }
        ++(vlSelf->__Vcoverage[3320]);
        ++(vlSelf->__Vcoverage[3322]);
        ++(vlSelf->__Vcoverage[3325]);
    }
    ++(vlSelf->__Vcoverage[3326]);
    if ((0ULL != (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                  ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_f_flat))) {
        VL_COV_TOGGLE_CHG_ST_Q(40, vlSelf->__Vcoverage + 709, vlSelfRef.tb_csr_golden__DOT__o_f_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_f_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_f_flat 
            = vlSelfRef.tb_csr_golden__DOT__o_f_flat;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we4) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we4)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1025, vlSelfRef.tb_csr_golden__DOT__mon_we4, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we4);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we4 
            = vlSelfRef.tb_csr_golden__DOT__mon_we4;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd4) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd4)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1005, vlSelfRef.tb_csr_golden__DOT__mon_wd4, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd4);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd4 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd4;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we3) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we3)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1021, vlSelfRef.tb_csr_golden__DOT__mon_we3, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we3);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we3 
            = vlSelfRef.tb_csr_golden__DOT__mon_we3;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd3) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd3)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1001, vlSelfRef.tb_csr_golden__DOT__mon_wd3, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd3);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd3 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd3;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we0)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1009, vlSelfRef.tb_csr_golden__DOT__mon_we0, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we0);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we0 
            = vlSelfRef.tb_csr_golden__DOT__mon_we0;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we1)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1013, vlSelfRef.tb_csr_golden__DOT__mon_we1, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we1);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we1 
            = vlSelfRef.tb_csr_golden__DOT__mon_we1;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we2)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1017, vlSelfRef.tb_csr_golden__DOT__mon_we2, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we2);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we2 
            = vlSelfRef.tb_csr_golden__DOT__mon_we2;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd0)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 989, vlSelfRef.tb_csr_golden__DOT__mon_wd0, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd0);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd0 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd0;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd1) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd1)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 993, vlSelfRef.tb_csr_golden__DOT__mon_wd1, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd1);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd1 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd1;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd2) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd2)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 997, vlSelfRef.tb_csr_golden__DOT__mon_wd2, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd2);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd2 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd2;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1922, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_key))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2748, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_key);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_key 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_prot_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1924, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_prot_ok);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_prot_ok 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok;
    }
    if (vlSelfRef.tb_csr_golden__DOT__slverr_en) {
        ++(vlSelf->__Vcoverage[2895]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_1 
            = (1U & (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok)) 
                      | (0U != (3U & (IData)(vlSelfRef.tb_csr_golden__DOT__paddr)))) 
                     | ((~ (0x0000000fU == (IData)(vlSelfRef.tb_csr_golden__DOT__pstrb))) 
                        & (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite))));
    } else {
        ++(vlSelf->__Vcoverage[2896]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_1 = 0U;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_1;
    if (vlSelfRef.tb_csr_golden__DOT__slverr_en) {
        ++(vlSelf->__Vcoverage[2893]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__slverr_en)))) {
        ++(vlSelf->__Vcoverage[2894]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2172, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine;
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 3U)))) {
        ++(vlSelf->__Vcoverage[3037]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_8 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 3U)));
    } else {
        ++(vlSelf->__Vcoverage[3040]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
             & (0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb)))) {
            ++(vlSelf->__Vcoverage[3038]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_8 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3039]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_8 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_8;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 3U)))) {
        ++(vlSelf->__Vcoverage[3035]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 3U))))) {
        ++(vlSelf->__Vcoverage[3036]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2258, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_0);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_0 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0;
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 8U)))) {
        ++(vlSelf->__Vcoverage[3082]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_14 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 8U)));
    } else {
        ++(vlSelf->__Vcoverage[3085]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
             & (0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb)))) {
            ++(vlSelf->__Vcoverage[3083]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_14 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3084]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_14 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_14;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 8U)))) {
        ++(vlSelf->__Vcoverage[3080]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 8U))))) {
        ++(vlSelf->__Vcoverage[3081]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2344, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_1);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_1 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1;
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x0000000dU)))) {
        ++(vlSelf->__Vcoverage[3127]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_20 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000dU)));
    } else {
        ++(vlSelf->__Vcoverage[3130]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
             & (0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb)))) {
            ++(vlSelf->__Vcoverage[3128]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_20 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3129]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_20 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_20;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x0000000dU)))) {
        ++(vlSelf->__Vcoverage[3125]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 0x0000000dU))))) {
        ++(vlSelf->__Vcoverage[3126]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2430, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_2);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_2 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2;
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x00000012U)))) {
        ++(vlSelf->__Vcoverage[3172]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_26 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000012U)));
    } else {
        ++(vlSelf->__Vcoverage[3175]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
             & (0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb)))) {
            ++(vlSelf->__Vcoverage[3173]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_26 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3174]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_26 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_26;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x00000012U)))) {
        ++(vlSelf->__Vcoverage[3170]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 0x00000012U))))) {
        ++(vlSelf->__Vcoverage[3171]);
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor 
        = ((IData)(vlSelfRef.__Vdfg_Regularize_196) 
           & (- (IData)((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture))));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor 
        = ((IData)(vlSelfRef.__Vdfg_Regularize_196) 
           & (- (IData)((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture))));
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wmask))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2038, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wmask);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wmask 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3014]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_4 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3015]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_4;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[3008]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[3009]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[3010]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[3011]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[3012]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[3013]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3059]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_10 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3060]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_10;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[3053]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[3054]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[3055]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[3056]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[3057]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[3058]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3104]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_16 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3105]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_16;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[3098]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[3099]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[3100]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[3101]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[3102]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[3103]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3149]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_22 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3150]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_22;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[3143]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[3144]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[3145]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[3146]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[3147]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[3148]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3019]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_5 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat))
                                     ? (IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat)
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[3022]);
        if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat))) {
            ++(vlSelf->__Vcoverage[3020]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_5 
                = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat));
        } else {
            ++(vlSelf->__Vcoverage[3021]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_start_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_5;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3016]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3017]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[3018]);
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 1U)))) {
        ++(vlSelf->__Vcoverage[3025]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_6 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 1U)));
    } else {
        ++(vlSelf->__Vcoverage[3028]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3026]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_6 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[3027]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_6 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_fault_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_6;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 1U)))) {
        ++(vlSelf->__Vcoverage[3023]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 1U))))) {
        ++(vlSelf->__Vcoverage[3024]);
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 2U)))) {
        ++(vlSelf->__Vcoverage[3031]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_7 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 2U)));
    } else {
        ++(vlSelf->__Vcoverage[3034]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3032]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_7 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[3033]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_7 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_pending_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_7;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 2U)))) {
        ++(vlSelf->__Vcoverage[3029]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 2U))))) {
        ++(vlSelf->__Vcoverage[3030]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3064]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_11 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 5U)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 5U))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[3067]);
        if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                           >> 5U)))) {
            ++(vlSelf->__Vcoverage[3065]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_11 
                = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                 >> 5U)));
        } else {
            ++(vlSelf->__Vcoverage[3066]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_11 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_start_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_11;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3061]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3062]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[3063]);
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 6U)))) {
        ++(vlSelf->__Vcoverage[3070]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_12 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 6U)));
    } else {
        ++(vlSelf->__Vcoverage[3073]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3071]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_12 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[3072]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_12 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_fault_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_12;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 6U)))) {
        ++(vlSelf->__Vcoverage[3068]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 6U))))) {
        ++(vlSelf->__Vcoverage[3069]);
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 7U)))) {
        ++(vlSelf->__Vcoverage[3076]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_13 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 7U)));
    } else {
        ++(vlSelf->__Vcoverage[3079]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3077]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_13 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[3078]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_13 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_pending_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_13;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 7U)))) {
        ++(vlSelf->__Vcoverage[3074]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 7U))))) {
        ++(vlSelf->__Vcoverage[3075]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3109]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_17 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 0x0000000aU)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 0x0000000aU))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[3112]);
        if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                           >> 0x0000000aU)))) {
            ++(vlSelf->__Vcoverage[3110]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_17 
                = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                 >> 0x0000000aU)));
        } else {
            ++(vlSelf->__Vcoverage[3111]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_17 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_start_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_17;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3106]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3107]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[3108]);
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x0000000bU)))) {
        ++(vlSelf->__Vcoverage[3115]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_18 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000bU)));
    } else {
        ++(vlSelf->__Vcoverage[3118]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3116]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_18 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[3117]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_18 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_fault_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_18;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x0000000bU)))) {
        ++(vlSelf->__Vcoverage[3113]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 0x0000000bU))))) {
        ++(vlSelf->__Vcoverage[3114]);
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x0000000cU)))) {
        ++(vlSelf->__Vcoverage[3121]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_19 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000cU)));
    } else {
        ++(vlSelf->__Vcoverage[3124]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3122]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_19 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[3123]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_19 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_pending_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_19;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x0000000cU)))) {
        ++(vlSelf->__Vcoverage[3119]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 0x0000000cU))))) {
        ++(vlSelf->__Vcoverage[3120]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3154]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_23 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 0x0000000fU)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 0x0000000fU))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[3157]);
        if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                           >> 0x0000000fU)))) {
            ++(vlSelf->__Vcoverage[3155]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_23 
                = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                 >> 0x0000000fU)));
        } else {
            ++(vlSelf->__Vcoverage[3156]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_23 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_start_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_23;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3151]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3152]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[3153]);
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x00000010U)))) {
        ++(vlSelf->__Vcoverage[3160]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_24 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000010U)));
    } else {
        ++(vlSelf->__Vcoverage[3163]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3161]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_24 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[3162]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_24 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_fault_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_24;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x00000010U)))) {
        ++(vlSelf->__Vcoverage[3158]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 0x00000010U))))) {
        ++(vlSelf->__Vcoverage[3159]);
    }
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x00000011U)))) {
        ++(vlSelf->__Vcoverage[3166]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_25 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000011U)));
    } else {
        ++(vlSelf->__Vcoverage[3169]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3167]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_25 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[3168]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_25 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending;
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_pending_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_25;
    if ((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                       >> 0x00000011U)))) {
        ++(vlSelf->__Vcoverage[3164]);
    }
    if ((1U & (~ (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                          >> 0x00000011U))))) {
        ++(vlSelf->__Vcoverage[3165]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data) {
        ++(vlSelf->__Vcoverage[3292]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_45 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3295]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask))) {
            ++(vlSelf->__Vcoverage[3293]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_44 
                = ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                    & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                   | (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)));
        } else {
            ++(vlSelf->__Vcoverage[3294]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_44 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data;
        }
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_45 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_44;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_45;
    if (vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data) {
        ++(vlSelf->__Vcoverage[3290]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data)))) {
        ++(vlSelf->__Vcoverage[3291]);
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 221, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_addr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_addr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_done_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2192, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_done_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_done_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2278, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_done_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_done_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2364, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_done_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_done_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2450, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_done_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_done_nxt;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2108, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup) 
         & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr)))) {
        ++(vlSelf->__Vcoverage[2897]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr) {
        ++(vlSelf->__Vcoverage[2898]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup)))) {
        ++(vlSelf->__Vcoverage[2899]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_slverr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1926, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_slverr);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_slverr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr) 
         & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup))) {
        ++(vlSelf->__Vcoverage[2998]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) {
        ++(vlSelf->__Vcoverage[2999]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) {
        ++(vlSelf->__Vcoverage[3000]);
    }
    if ((1U & (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)) 
                & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture))) 
               & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup))))) {
        ++(vlSelf->__Vcoverage[3001]);
    }
    if ((1U & (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)) 
                & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture))) 
               & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr))))) {
        ++(vlSelf->__Vcoverage[3002]);
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
           | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
              | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr) 
                 & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup))));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete 
        = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr)) 
           & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup));
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2190, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2276, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2362, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2448, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2616, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_monitor);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_monitor 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor;
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we4))) {
        ++(vlSelf->__Vcoverage[3223]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_33 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd4));
    } else {
        ++(vlSelf->__Vcoverage[3226]);
        if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor))) {
            ++(vlSelf->__Vcoverage[3224]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_33 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3225]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_33 
                = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_33));
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we4))) {
        ++(vlSelf->__Vcoverage[3221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we4)))) {
        ++(vlSelf->__Vcoverage[3222]);
    }
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we4))) {
        ++(vlSelf->__Vcoverage[3274]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_41 
            = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd4) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[3277]);
        if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor))) {
            ++(vlSelf->__Vcoverage[3275]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_41 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3276]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_41 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_41) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we4))) {
        ++(vlSelf->__Vcoverage[3272]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we4) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3273]);
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2612, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_monitor);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_monitor 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor;
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key) {
        ++(vlSelf->__Vcoverage[2979]);
    }
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor))) {
        ++(vlSelf->__Vcoverage[2980]);
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor))) {
        ++(vlSelf->__Vcoverage[2981]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) {
        ++(vlSelf->__Vcoverage[2982]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) {
        ++(vlSelf->__Vcoverage[2983]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) {
        ++(vlSelf->__Vcoverage[2984]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) {
        ++(vlSelf->__Vcoverage[2985]);
    }
    if (((((((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine)) 
             & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0))) 
            & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1))) 
           & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2))) 
          & (0U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor))) 
         & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key)))) {
        ++(vlSelf->__Vcoverage[2986]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3194]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3195]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_28;
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[3188]);
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[3189]);
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[3190]);
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[3191]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[3192]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[3193]);
    }
    if ((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3245]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3246]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                              >> 4U));
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_36;
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[3239]);
    }
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[3240]);
    }
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[3241]);
    }
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[3242]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[3243]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3244]);
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we3))) {
        ++(vlSelf->__Vcoverage[3217]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_32 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd3));
    } else {
        ++(vlSelf->__Vcoverage[3220]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb)))) {
            ++(vlSelf->__Vcoverage[3218]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_32 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3219]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_32 
                = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_32));
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we3))) {
        ++(vlSelf->__Vcoverage[3215]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we3)))) {
        ++(vlSelf->__Vcoverage[3216]);
    }
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we3))) {
        ++(vlSelf->__Vcoverage[3268]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_40 
            = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd3) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[3271]);
        if ((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb)))) {
            ++(vlSelf->__Vcoverage[3269]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_40 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[3270]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_40 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_40) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we3))) {
        ++(vlSelf->__Vcoverage[3266]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we3) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3267]);
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3199]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0))
                                     ? (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0)
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[3202]);
        if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0))) {
            ++(vlSelf->__Vcoverage[3200]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_29 
                = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0));
        } else {
            ++(vlSelf->__Vcoverage[3201]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_29 
                = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_29));
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3196]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3197]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[3198]);
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1))) {
        ++(vlSelf->__Vcoverage[3205]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_30 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd1));
    } else {
        ++(vlSelf->__Vcoverage[3208]);
        if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                   & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                      >> 0x12U)))) {
            ++(vlSelf->__Vcoverage[3206]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_30 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                         & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                               >> 0x12U))));
        } else {
            ++(vlSelf->__Vcoverage[3207]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_30 
                = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_30));
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1))) {
        ++(vlSelf->__Vcoverage[3203]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1)))) {
        ++(vlSelf->__Vcoverage[3204]);
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2))) {
        ++(vlSelf->__Vcoverage[3211]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_31 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd2));
    } else {
        ++(vlSelf->__Vcoverage[3214]);
        if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                   & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                      >> 0x11U)))) {
            ++(vlSelf->__Vcoverage[3212]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_31 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                         & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                             >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                             >> 0x11U)))));
        } else {
            ++(vlSelf->__Vcoverage[3213]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_31 
                = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_31));
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2))) {
        ++(vlSelf->__Vcoverage[3209]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2)))) {
        ++(vlSelf->__Vcoverage[3210]);
    }
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[3250]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_37 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0))
                                     ? ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0) 
                                        >> 1U) : ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture) 
                                                  >> 1U)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[3253]);
        if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0))) {
            ++(vlSelf->__Vcoverage[3251]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_37 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0) 
                         >> 1U));
        } else {
            ++(vlSelf->__Vcoverage[3252]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_37 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_37) 
              << 1U));
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[3247]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3248]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3249]);
    }
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1))) {
        ++(vlSelf->__Vcoverage[3256]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_38 
            = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd1) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[3259]);
        if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                      >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                >> 0x00000012U)))) {
            ++(vlSelf->__Vcoverage[3257]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_38 
                = (IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                            >> 1U) & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                                         >> 0x12U))));
        } else {
            ++(vlSelf->__Vcoverage[3258]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_38 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_38) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1))) {
        ++(vlSelf->__Vcoverage[3254]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3255]);
    }
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2))) {
        ++(vlSelf->__Vcoverage[3262]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_39 
            = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd2) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[3265]);
        if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                      >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                >> 0x00000011U)))) {
            ++(vlSelf->__Vcoverage[3263]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_39 
                = (IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                            >> 1U) & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                       >> 0x11U) | 
                                      (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask 
                                          >> 0x11U)))));
        } else {
            ++(vlSelf->__Vcoverage[3264]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_39 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_39) 
              << 1U));
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2))) {
        ++(vlSelf->__Vcoverage[3260]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3261]);
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3229]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_35 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3232]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)))) {
            ++(vlSelf->__Vcoverage[3230]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_34 
                = (0x00007fffU & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                   & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                                  | (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                     & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask))));
        } else {
            ++(vlSelf->__Vcoverage[3231]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_34 
                = (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment);
        }
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_35 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_34;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_35;
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3227]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[3228]);
    }
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3280]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_43 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3283]);
        if ((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask)))) {
            ++(vlSelf->__Vcoverage[3281]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_42 
                = (0x00007fffU & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                   & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask) 
                                  | ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                      >> 0x0fU) & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_wmask))));
        } else {
            ++(vlSelf->__Vcoverage[3282]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_42 
                = (0x00007fffU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                  >> 0x0fU));
        }
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_43 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_42;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_43;
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3278]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3279]);
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
           | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
              | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
                 | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
                    | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key) 
                       | (0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor)))))));
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2176, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_mode_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_mode_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2262, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_mode_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_mode_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2348, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_mode_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_mode_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2434, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_mode_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_start_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2184, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_start_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2186, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_fault_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2188, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_pending_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_start_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2270, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_start_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2272, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_fault_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2274, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_pending_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_start_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2356, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_start_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2358, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_fault_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2360, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_pending_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_start_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2442, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_start_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2444, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_fault_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2446, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_pending_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_pending_nxt;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2750, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__g_sync_csrw_pready_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2991, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__g_sync_csrw_pready_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__g_sync_csrw_pready_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__pwrite) 
         & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete))) {
        ++(vlSelf->__Vcoverage[2900]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete)))) {
        ++(vlSelf->__Vcoverage[2901]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite)))) {
        ++(vlSelf->__Vcoverage[2902]);
    }
    if (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite)) 
         & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete))) {
        ++(vlSelf->__Vcoverage[2903]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete)))) {
        ++(vlSelf->__Vcoverage[2904]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__pwrite) {
        ++(vlSelf->__Vcoverage[2905]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_complete))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1928, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_complete);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_complete 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__pwrite) 
           & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete));
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd 
        = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite)) 
           & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete));
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2548, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__) 
                               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2516, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0xf0U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                               ^ ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                  >> 4U))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 2524, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__, 
                               ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                >> 4U));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0x0fU & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2544, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2532, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2536, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2540, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt;
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__) 
                               ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2552, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x3fff8000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                               ^ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                  >> 0x0000000fU))))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2582, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__, 
                               (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                >> 0x0000000fU));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                  << 0x0000000fU));
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 219, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en, vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_en);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_en 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en;
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en) {
        ++(vlSelf->__Vcoverage[2989]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_3 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr;
    } else {
        ++(vlSelf->__Vcoverage[2990]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_3 = 0U;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_3;
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en) {
        ++(vlSelf->__Vcoverage[2987]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en)))) {
        ++(vlSelf->__Vcoverage[2988]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_wr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1930, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_wr);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_wr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_rd))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1932, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_rd);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_rd 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 253, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_addr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_addr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr;
    }
}

bool Vtb_csr_golden___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_csr_golden___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_csr_golden___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_csr_golden___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_csr_golden.clk_apb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_csr_golden.clk_apb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_csr_golden.rst_n_apb)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_csr_golden.clk_reg)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( (32'sh1 == tb_csr_golden.test_phase))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( (32'sh2 == tb_csr_golden.test_phase))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( (32'sh3 == tb_csr_golden.test_phase))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( (32'sh4 == tb_csr_golden.test_phase))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_csr_golden___024root___ctor_var_reset(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___ctor_var_reset\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_csr_golden__DOT__o_mode_flat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 943478137240340266ull);
    vlSelf->tb_csr_golden__DOT__o_f_flat = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7767874197411839092ull);
    vlSelf->tb_csr_golden__DOT__mon_wd0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11821781155224352902ull);
    vlSelf->tb_csr_golden__DOT__mon_wd1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3585439191130441744ull);
    vlSelf->tb_csr_golden__DOT__mon_wd2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14517333232497579919ull);
    vlSelf->tb_csr_golden__DOT__mon_wd3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16334277006577492687ull);
    vlSelf->tb_csr_golden__DOT__mon_wd4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16196343638215717076ull);
    vlSelf->tb_csr_golden__DOT__mon_we0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4098201074227744143ull);
    vlSelf->tb_csr_golden__DOT__mon_we1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7257481796609013518ull);
    vlSelf->tb_csr_golden__DOT__mon_we2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11480659372307633803ull);
    vlSelf->tb_csr_golden__DOT__mon_we3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3244317408213793061ull);
    vlSelf->tb_csr_golden__DOT__mon_we4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1095846893238342303ull);
    vlSelf->tb_csr_golden__DOT__last_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18248328175928353435ull);
    vlSelf->tb_csr_golden__DOT__last_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 942292959766005179ull);
    vlSelf->tb_csr_golden__DOT__last_mode0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17577115385665235449ull);
    vlSelf->tb_csr_golden__DOT__last_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13256724868396710861ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_csr_golden__DOT__m_mode[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14899488282060154392ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_csr_golden__DOT__m_f[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5343038911867090991ull);
    }
    vlSelf->tb_csr_golden__DOT__r32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6476823167473980430ull);
    vlSelf->tb_csr_golden__DOT____Vtogcov__clk_apb = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__clk_reg = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__rst_n_apb = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__rst_n_reg = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__psel = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__penable = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__pwrite = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__paddr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__pwdata = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__pstrb = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__pprot = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__pready = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__pslverr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__prdata = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__protect_en = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__slverr_en = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__reg_rd_en = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__reg_wr_en = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__reg_rd_addr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__reg_wr_addr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__reg_rd_event_addr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__reg_wr_event_addr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__ro_flat = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__hw_we_flat = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__hw_wd_flat = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__o_mode_flat = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__o_f_flat = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__o_key_data = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__i_hw_clr_key_data = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__o_monitor_key_fragment = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__i_hw_clr_monitor_key_fragment = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_ro = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_thr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_o0 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_o1 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_o2 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_o3 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_o4 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_wd0 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_wd1 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_wd2 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_wd3 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_wd4 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_we0 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_we1 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_we2 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_we3 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__mon_we4 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__pready_q = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__last_err = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__last_mode0 = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__last_rdata = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__good_rdata = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__chain = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_csr_golden__DOT____Vtogcov__m_mode[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_csr_golden__DOT____Vtogcov__m_f[__Vi0] = 0;
    }
    vlSelf->tb_csr_golden__DOT____Vtogcov__arm_wr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__arm_rd = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__hw_clr = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__c_val = 0;
    vlSelf->tb_csr_golden__DOT____Vtogcov__r32 = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11694548771336143621ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3746618245885164062ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651203121102034752ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17804716554793944613ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_apb_setup = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940402231567582173ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15497489144077205616ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9191788233519395630ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_apb_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9034836324262308437ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_apb_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13978084332700367721ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_apb_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3793143567763635273ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12146567411545988910ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9582688357729406846ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17726469219634117817ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_wmask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6840824636856094428ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_slverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5987422043643593804ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7405534726219187143ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14556876522034868982ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_we_engine = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5734168380282756903ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_rd_engine = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16154572465091946328ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16197681474950790975ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_engine_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9218156487358750325ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_engine_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14845544547884362975ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_engine_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9431712743424918727ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1643371960772550125ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_engine_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4528402703815378956ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3775058996006534417ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_engine_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2406939231349758534ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2915960178271431066ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3697445714143471678ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_engine_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3172378269988095134ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_engine_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9192853364980039929ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_we_port_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9853080838656282839ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4128063470357808472ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13813918680432458051ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_0_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15927447754418726154ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2415968513317368314ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_0_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10376766957829793604ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15660626521568856734ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_0_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13598516951683082271ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9869735538824495992ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_0_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14732541633069740385ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17147642263772801940ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9654182983514579818ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4372227907189266785ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_0_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5603056828599256411ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_we_port_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17726964090656566430ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3789532833163343795ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8872992402676025815ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_1_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9783920702700695707ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5458833606467119092ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_1_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15432324508378502355ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4901423493061373119ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_1_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2650400440626955227ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9369747212691696426ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_1_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3926466792060193193ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4906590028877646947ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10212241156511653888ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15740802001484154465ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_1_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5251420417731613455ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_we_port_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8121205047221256465ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1888994643806453441ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16415307279162596187ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_2_mode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 865521792598453001ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16265906707915318078ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_2_start_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8068856012537929731ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3805403504645555840ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_2_fault_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4777895247699638090ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2776675542222589174ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_2_pending_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17780525673455127889ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1056782522336357336ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12711718565073902739ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12915116705018621674ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_port_2_done_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15830426948214919313ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12690480490897159161ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15226519492049659179ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12231230033873544519ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14986957756658048890ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3243428273550115203ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15753469948701100809ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8223444365815992190ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7054097503954552453ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11153251378393805862ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10786162247502706979ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5603222300195375304ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15497560061575352732ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6626016642489056016ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 1511490827646045246ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18427347079096834133ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6870596024100691994ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_we_monitor = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18244597466047031900ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4324263089444907580ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_we_key = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6510098352205896259ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__reg_key_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5279793824670109373ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12950267017231626592ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_mode = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_mode = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_mode = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_port_2_event_count = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_mode = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_start = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_fault = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_pending = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_overflow = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_done = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_prot_ok = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_slverr = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_complete = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_wr = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_rd = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_addr = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wdata = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wstrb = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wmask = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_en = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wr_en = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_ack_fall = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_engine = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_engine = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_value = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_0 = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_value = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_1 = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_value = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_2 = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_value = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_monitor = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_monitor = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_value = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_key = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_value = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT____Vtogcov__g_sync_csrw_pready_nxt = 0;
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7996116309217953707ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17066618724295489888ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15097971514958046949ull);
    vlSelf->tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3873784422223362201ull);
    vlSelf->__Vdfg_Regularize_196 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_csr_golden__DOT__rst_n_apb__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_reg__0 = 0;
    vlSelf->__Vtrigprevexpr_h099e188a__1 = 0;
    vlSelf->__Vtrigprevexpr_h099e47ff__1 = 0;
    vlSelf->__Vtrigprevexpr_h099e3870__1 = 0;
    vlSelf->__Vtrigprevexpr_h099e691d__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

VL_ATTR_COLD void Vtb_csr_golden___024root___configure_coverage(Vtb_csr_golden___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___configure_coverage\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 24, 7, ".tb_csr_golden", "v_toggle/tb_csr_golden", "clk_apb");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 24, 17, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "24", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 24, 17, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "24", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 24, 20, ".tb_csr_golden", "v_toggle/tb_csr_golden", "clk_reg");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 5, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 24, 30, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "24", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 5, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 24, 30, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "24", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 6, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 25, 7, ".tb_csr_golden", "v_toggle/tb_csr_golden", "rst_n_apb");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 8, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 25, 19, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 8, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 25, 19, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "25", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 9, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 25, 22, ".tb_csr_golden", "v_toggle/tb_csr_golden", "rst_n_reg");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 11, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 25, 34, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 11, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 25, 34, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 12, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 26, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "(clk_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 12, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 26, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "(clk_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 13, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 26, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "(clk_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 13, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 26, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "(clk_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 14, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 26, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 14, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 26, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "26", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 15, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 27, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "(clk_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 15, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 27, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "(clk_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 16, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 27, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "(clk_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 16, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 27, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "(clk_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 17, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 27, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 17, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 27, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "27", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 28, 8, ".tb_csr_golden", "v_toggle/tb_csr_golden", "clk_r");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 18, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 28, 24, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_then", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 18, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 28, 24, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_then", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 19, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 28, 25, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_else", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 19, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 28, 25, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_else", "28", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 20, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "psel");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 22, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 21, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 22, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 21, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "30", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 23, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 24, ".tb_csr_golden", "v_toggle/tb_csr_golden", "penable");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 25, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 34, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 25, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 34, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "30", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 26, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 37, ".tb_csr_golden", "v_toggle/tb_csr_golden", "pwrite");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 28, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 46, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 28, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 30, 46, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "30", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 29, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 31, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "paddr");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 61, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 31, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 61, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 31, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "31", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 62, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 32, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "pwdata");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 126, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 32, 23, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "32", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 126, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 32, 23, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "32", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 127, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 33, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "pstrb");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 135, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 33, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "33", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 135, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 33, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "33", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 136, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 34, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "pprot");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 142, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 34, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "34", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 142, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 34, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "34", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 143, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 35, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "pready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 145, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 35, 22, ".tb_csr_golden", "v_toggle/tb_csr_golden", "pslverr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 147, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 36, 15, ".tb_csr_golden", "v_toggle/tb_csr_golden", "prdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 211, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 37, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "protect_en");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 213, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 37, 27, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 213, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 37, 27, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "37", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 214, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 37, 30, ".tb_csr_golden", "v_toggle/tb_csr_golden", "slverr_en");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 216, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 37, 42, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 216, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 37, 42, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "37", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 217, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 39, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "reg_rd_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 219, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 39, 25, ".tb_csr_golden", "v_toggle/tb_csr_golden", "reg_wr_en");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 221, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 40, 15, ".tb_csr_golden", "v_toggle/tb_csr_golden", "reg_rd_addr");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 253, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 40, 28, ".tb_csr_golden", "v_toggle/tb_csr_golden", "reg_wr_addr");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 285, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 41, 35, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 285, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 41, 35, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 286, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 41, 59, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 286, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 41, 59, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 287, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 41, 84, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 287, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 41, 84, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "41", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 288, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 42, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "reg_rd_event_addr");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 320, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 42, 34, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "42", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 320, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 42, 34, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "42", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 321, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 42, 37, ".tb_csr_golden", "v_toggle/tb_csr_golden", "reg_wr_event_addr");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 353, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 42, 57, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "42", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 353, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 42, 57, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "42", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 63, 1, vlSelf->__Vcoverage + 354, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 46, 15, ".tb_csr_golden", "v_toggle/tb_csr_golden", "ro_flat");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 482, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 46, 27, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 482, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 46, 27, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "46", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 39, 1, vlSelf->__Vcoverage + 483, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 47, 15, ".tb_csr_golden", "v_toggle/tb_csr_golden", "hw_we_flat");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 563, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 47, 28, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "47", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 563, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 47, 28, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "47", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 39, 1, vlSelf->__Vcoverage + 564, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 48, 15, ".tb_csr_golden", "v_toggle/tb_csr_golden", "hw_wd_flat");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 644, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 48, 28, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "48", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 644, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 48, 28, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "48", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 645, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 49, 15, ".tb_csr_golden", "v_toggle/tb_csr_golden", "o_mode_flat");
    vlSelf->__vlCoverToggleInsert(0, 39, 1, vlSelf->__Vcoverage + 709, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 50, 15, ".tb_csr_golden", "v_toggle/tb_csr_golden", "o_f_flat");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 789, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 51, 15, ".tb_csr_golden", "v_toggle/tb_csr_golden", "o_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 853, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 52, 7, ".tb_csr_golden", "v_toggle/tb_csr_golden", "i_hw_clr_key_data");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 855, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 52, 27, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "52", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 855, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 52, 27, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "52", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 856, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 53, 23, ".tb_csr_golden", "v_toggle/tb_csr_golden", "o_monitor_key_fragment[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 886, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 53, 23, ".tb_csr_golden", "v_toggle/tb_csr_golden", "o_monitor_key_fragment[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 916, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 54, 16, ".tb_csr_golden", "v_toggle/tb_csr_golden", "i_hw_clr_monitor_key_fragment");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 920, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 54, 48, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "54", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 920, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 54, 48, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "54", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 921, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 56, 22, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_ro[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 937, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 56, 22, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_ro[1]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 953, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 57, 22, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_thr[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 961, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 57, 22, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_thr[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 969, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 58, 17, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_o0");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 973, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 58, 25, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_o1");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 977, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 58, 33, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_o2");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 981, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 58, 41, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_o3");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 985, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 58, 49, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_o4");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 989, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 59, 17, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_wd0");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 993, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 59, 26, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_wd1");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 997, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 59, 35, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_wd2");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1001, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 59, 44, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_wd3");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1005, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 59, 53, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_wd4");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1009, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 60, 17, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_we0");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1013, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 60, 26, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_we1");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1017, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 60, 35, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_we2");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1021, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 60, 44, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_we3");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1025, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 60, 53, ".tb_csr_golden", "v_toggle/tb_csr_golden", "mon_we4");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1029, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 131, 19, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "131", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1029, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 131, 19, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "131", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1030, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 131, 31, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "131", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1030, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 131, 31, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "131", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1031, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 132, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "132", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1031, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 132, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "132", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1032, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 24, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1032, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 24, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1033, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 40, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1033, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 40, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1034, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 56, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1034, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 56, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1035, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 72, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1035, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 72, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1036, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 88, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1036, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 133, 88, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "133", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1037, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 25, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1037, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 25, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1038, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 38, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1038, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 38, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1039, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 53, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1039, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 53, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1040, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 68, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1040, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 68, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1041, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 86, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1041, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 86, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1042, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 99, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1042, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 134, 99, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "134", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1043, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 135, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "135", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1043, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 135, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "135", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1044, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 135, 36, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "135", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1044, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 135, 36, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "135", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1045, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 25, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1045, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 25, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1046, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 44, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1046, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 44, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1047, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 63, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1047, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 63, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1048, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 82, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1048, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 82, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1049, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 101, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1049, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 136, 101, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1050, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 141, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "141-143", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1050, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 141, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "141-143", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1051, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 141, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1051, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 141, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1052, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 141, 11, ".tb_csr_golden", "v_expr/tb_csr_golden", "(ok==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1052, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 141, 11, ".tb_csr_golden", "v_expr/tb_csr_golden", "(ok==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1053, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 141, 11, ".tb_csr_golden", "v_expr/tb_csr_golden", "(ok==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1053, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 141, 11, ".tb_csr_golden", "v_expr/tb_csr_golden", "(ok==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1054, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 138, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "138-140", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1054, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 138, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "138-140", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1055, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 148, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "148-150", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1055, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 148, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "148-150", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1056, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 155, 7, ".tb_csr_golden", "v_toggle/tb_csr_golden", "pready_q");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1058, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 155, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "155", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1058, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 155, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "155", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1059, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 160, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((psel === 1'h1)==1 && (penable === 1'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1059, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 160, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((psel === 1'h1)==1 && (penable === 1'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1060, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 160, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((penable === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1060, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 160, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((penable === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1061, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 160, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((psel === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1061, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 160, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((psel === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1062, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 158, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "158-161", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1062, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 158, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "158-161", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1063, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 158, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1063, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 158, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1064, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 157, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "157,163", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1064, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 157, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "157,163", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1065, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 157, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "164-165", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1065, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 157, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "164-165", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1066, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 156, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "156", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1066, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 156, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "156", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1067, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 173, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "last_err");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1069, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 174, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "last_mode0");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1077, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 175, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "last_rdata");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1141, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 176, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "good_rdata");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1205, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 176, 27, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "176", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1205, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 176, 27, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "176", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1206, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 177, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "chain");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1208, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 177, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "177", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1208, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 177, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "177", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1209, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 183, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "183", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1209, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 183, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "183", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1210, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 183, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1210, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 183, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1211, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 183, 11, ".tb_csr_golden", "v_expr/tb_csr_golden", "(chain==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1211, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 183, 11, ".tb_csr_golden", "v_expr/tb_csr_golden", "(chain==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1212, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 183, 11, ".tb_csr_golden", "v_expr/tb_csr_golden", "(chain==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1212, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 183, 11, ".tb_csr_golden", "v_expr/tb_csr_golden", "(chain==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1213, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 189, 14, ".tb_csr_golden", "v_expr/tb_csr_golden", "(done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1213, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 189, 14, ".tb_csr_golden", "v_expr/tb_csr_golden", "(done==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1214, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 189, 14, ".tb_csr_golden", "v_expr/tb_csr_golden", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1214, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 189, 14, ".tb_csr_golden", "v_expr/tb_csr_golden", "(done==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1215, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 192, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "192-196", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1215, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 192, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "192-196", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1216, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 192, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1216, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 192, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1217, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 198, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "198-203", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1217, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 198, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "198-203", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1218, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 198, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1218, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 198, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1219, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 189, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "189-191", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1219, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 189, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "189-191", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1220, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 208, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "208-209", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1220, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 208, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "208-209", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1221, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 208, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "210-212", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1221, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 208, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "210-212", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1222, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 179, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "179-182,184-188,206-207", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1222, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 179, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "179-182,184-188,206-207", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1223, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 223, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == (rd_before + 32'sh1))==1 && (reg_rd_event_addr == 16'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1223, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 223, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == (rd_before + 32'sh1))==1 && (reg_rd_event_addr == 16'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1224, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 223, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_addr == 16'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1224, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 223, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_addr == 16'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1225, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 223, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == (rd_before + 32'sh1))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1225, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 223, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == (rd_before + 32'sh1))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1226, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 228, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == (rd_before + 32'sh1))==1 && (reg_rd_event_addr == 16'h4)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1226, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 228, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == (rd_before + 32'sh1))==1 && (reg_rd_event_addr == 16'h4)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1227, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 228, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_addr == 16'h4)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1227, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 228, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_addr == 16'h4)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1228, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 228, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == (rd_before + 32'sh1))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1228, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 228, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == (rd_before + 32'sh1))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1229, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 233, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (reg_rd_event_count == rd_before)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1229, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 233, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (reg_rd_event_count == rd_before)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1230, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 233, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == rd_before)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1230, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 233, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count == rd_before)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1231, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 233, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1231, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 233, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1232, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 238, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_count == (wr_before + 32'sh1))==1 && (reg_wr_event_addr == 16'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1232, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 238, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_count == (wr_before + 32'sh1))==1 && (reg_wr_event_addr == 16'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1233, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 238, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_addr == 16'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1233, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 238, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_addr == 16'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1234, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 238, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_count == (wr_before + 32'sh1))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1234, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 238, 47, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_count == (wr_before + 32'sh1))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1235, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 248, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (reg_wr_event_count == wr_before)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1235, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 248, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (reg_wr_event_count == wr_before)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1236, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 248, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_count == wr_before)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1236, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 248, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_count == wr_before)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1237, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 248, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1237, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 248, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1238, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 218, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "218-224,226-229,231-234,236-239,241-244,246-250", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1238, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 218, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "218-224,226-229,231-234,236-239,241-244,246-250", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1239, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 258, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_mode[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1247, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 258, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_mode[1]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1255, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 258, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_mode[2]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1263, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 258, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_mode[3]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1271, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 258, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_mode[4]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1279, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 258, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_mode[5]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1287, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 258, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_mode[6]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1295, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 258, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_mode[7]");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 1303, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 259, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_f[0]");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 1313, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 259, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_f[1]");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 1323, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 259, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_f[2]");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 1333, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 259, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_f[3]");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 1343, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 259, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_f[4]");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 1353, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 259, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_f[5]");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 1363, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 259, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_f[6]");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, vlSelf->__Vcoverage + 1373, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 259, 13, ".tb_csr_golden", "v_toggle/tb_csr_golden", "m_f[7]");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1383, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 12, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "268", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1383, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 12, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "268", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1384, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 13, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1384, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 13, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1385, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 57, ".tb_csr_golden", "v_expr/tb_csr_golden", "((a >= 16'h200)==1 && (a < (32'h200 + (32'sh4 * MC)))==1 && (a[1:0] == 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1385, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 57, ".tb_csr_golden", "v_expr/tb_csr_golden", "((a >= 16'h200)==1 && (a < (32'h200 + (32'sh4 * MC)))==1 && (a[1:0] == 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1386, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 57, ".tb_csr_golden", "v_expr/tb_csr_golden", "((a[1:0] == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1386, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 57, ".tb_csr_golden", "v_expr/tb_csr_golden", "((a[1:0] == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1387, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 57, ".tb_csr_golden", "v_expr/tb_csr_golden", "((a < (32'h200 + (32'sh4 * MC)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1387, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 57, ".tb_csr_golden", "v_expr/tb_csr_golden", "((a < (32'h200 + (32'sh4 * MC)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1388, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 57, ".tb_csr_golden", "v_expr/tb_csr_golden", "((a >= 16'h200)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1388, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 268, 57, ".tb_csr_golden", "v_expr/tb_csr_golden", "((a >= 16'h200)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1389, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 267, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "267", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1389, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 267, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "267", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1390, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 266, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "266", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1390, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 266, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "266", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1391, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 265, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "265", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1391, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 265, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "265", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1392, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 264, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "264", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1392, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 264, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "264", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1393, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 261, 30, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "261-263", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1393, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 261, 30, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "261-263", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1394, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "280-281", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1394, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "280-281", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1395, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1395, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1396, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_addr[1:0] != 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1396, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_addr[1:0] != 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1397, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_addr !== paddr)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1397, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_addr !== paddr)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1398, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "(pwrite==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1398, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "(pwrite==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1399, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "(penable==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1399, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "(penable==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1400, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1400, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1401, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==1 && penable==1 && pwrite==0 && (reg_rd_addr !== paddr)==0 && (reg_rd_addr[1:0] != 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1401, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 280, 68, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==1 && penable==1 && pwrite==0 && (reg_rd_addr !== paddr)==0 && (reg_rd_addr[1:0] != 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1402, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 282, 16, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "282-283", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1402, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 282, 16, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "282-283", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1403, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 282, 17, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1403, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 282, 17, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1404, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 277, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "277-279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1404, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 277, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "277-279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1405, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "288,290", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1405, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "288,290", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1406, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1406, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1407, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "((lookup(paddr) < 32'sh0)==1 && (paddr != 16'h400)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1407, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "((lookup(paddr) < 32'sh0)==1 && (paddr != 16'h400)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1408, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_addr !== paddr)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1408, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_addr !== paddr)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1409, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(pwrite==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1409, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(pwrite==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1410, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(penable==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1410, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(penable==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1411, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1411, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1412, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==1 && penable==1 && pwrite==1 && (reg_wr_addr !== paddr)==0 && (paddr != 16'h400)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1412, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==1 && penable==1 && pwrite==1 && (reg_wr_addr !== paddr)==0 && (paddr != 16'h400)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1413, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==1 && penable==1 && pwrite==1 && (reg_wr_addr !== paddr)==0 && (lookup(paddr) < 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1413, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 288, 69, ".tb_csr_golden", "v_expr/tb_csr_golden", "(psel==1 && penable==1 && pwrite==1 && (reg_wr_addr !== paddr)==0 && (lookup(paddr) < 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1414, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 291, 16, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "291-292", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1414, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 291, 16, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "291-292", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1415, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 291, 17, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1415, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 291, 17, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1416, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 285, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "285-287", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1416, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 285, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "285-287", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1417, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 276, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "276", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1417, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 276, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "276", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1418, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 276, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1418, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 276, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1419, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 275, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "275", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1419, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 275, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "275", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1420, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 301, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "if", "301", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1420, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 301, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "if", "301", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1421, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 301, 13, ".tb_csr_golden", "v_line/tb_csr_golden", "else", "302", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1421, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 301, 13, ".tb_csr_golden", "v_line/tb_csr_golden", "else", "302", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1422, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 300, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "300", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1422, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 300, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "elsif", "300", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1423, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 298, 29, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "298-299", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1423, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 298, 29, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "298-299", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1424, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 306, 29, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "306-308", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1424, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 306, 29, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "306-308", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1425, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 317, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((m_f[i[2:0]])[1]==1 && d[18]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1425, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 317, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((m_f[i[2:0]])[1]==1 && d[18]==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1426, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 317, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "(d[18]==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1426, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 317, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "(d[18]==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1427, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 317, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((m_f[i[2:0]])[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1427, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 317, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((m_f[i[2:0]])[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1428, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 318, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((m_f[i[2:0]])[2]==1 && d[17]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1428, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 318, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((m_f[i[2:0]])[2]==1 && d[17]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1429, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 318, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "(d[17]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1429, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 318, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "(d[17]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1430, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 318, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((m_f[i[2:0]])[2]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1430, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 318, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((m_f[i[2:0]])[2]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1431, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 314, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "314-319", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1431, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 314, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "314-319", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1432, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 314, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1432, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 314, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1433, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 312, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "312-313", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1433, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 312, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "312-313", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1434, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 327, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "327-332", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1434, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 327, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "327-332", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1435, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 324, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "324-327", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1435, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 324, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "324-327", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1436, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 340, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "340-342", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1436, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 340, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "340-342", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1437, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 337, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "337-340", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1437, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 337, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "337-340", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1438, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 348, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "348-355", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1438, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 348, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "348-355", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1439, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 11, ".tb_csr_golden", "v_toggle/tb_csr_golden", "arm_wr");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1441, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 20, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "360", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1441, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 20, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "360", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1442, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 23, ".tb_csr_golden", "v_toggle/tb_csr_golden", "arm_rd");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1444, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 32, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "360", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1444, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 32, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "360", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1445, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 35, ".tb_csr_golden", "v_toggle/tb_csr_golden", "hw_clr");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1447, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 44, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "360", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1447, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 360, 44, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "360", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1448, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 361, 20, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "361", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1448, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 361, 20, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "361", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1449, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 361, 29, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "361", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1449, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 361, 29, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "361", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1450, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 362, 11, ".tb_csr_golden", "v_toggle/tb_csr_golden", "c_val");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1452, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 362, 19, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "362", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1452, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 362, 19, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "362", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1453, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 363, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "363", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1453, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 363, 22, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "363", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1454, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 365, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "365-367", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1454, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 365, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "365-367", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1455, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 365, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1455, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 365, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1456, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "369-375", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1456, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "369-375", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1457, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1457, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1458, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(arm_rd==1 && u_dut.w_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1458, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(arm_rd==1 && u_dut.w_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1459, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(arm_wr==1 && u_dut.w_wr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1459, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(arm_wr==1 && u_dut.w_wr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1460, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(u_dut.w_wr_en==0 && u_dut.w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1460, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(u_dut.w_wr_en==0 && u_dut.w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1461, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(u_dut.w_wr_en==0 && arm_rd==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1461, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(u_dut.w_wr_en==0 && arm_rd==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1462, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(arm_wr==0 && u_dut.w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1462, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(arm_wr==0 && u_dut.w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1463, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(arm_wr==0 && arm_rd==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1463, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 369, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "(arm_wr==0 && arm_rd==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1464, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 364, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "364", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1464, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 364, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "364", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1465, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 379, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "379-383", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1465, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 379, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "379-383", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1466, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 387, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "387-394", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1466, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 387, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "387-394", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1467, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 410, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "410", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1467, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 410, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "410", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1468, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 411, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "411", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1468, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 411, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "411", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1469, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 416, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "416", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1469, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 416, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "416", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1470, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 401, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "401-417", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1470, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 401, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "401-417", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1471, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 425, 14, ".tb_csr_golden", "v_toggle/tb_csr_golden", "r32");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1535, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 429, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pready === 1'h0)==1 && (pslverr === 1'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1535, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 429, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pready === 1'h0)==1 && (pslverr === 1'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1536, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 429, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pslverr === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1536, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 429, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pslverr === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1537, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 429, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pready === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1537, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 429, 27, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pready === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1538, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 432, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "432-433", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1538, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 432, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "432-433", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1539, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 427, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "427-432", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1539, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 427, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "427-432", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1540, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 440, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "440-447", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1540, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 440, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "440-447", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1541, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 453, 55, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata[31:24] === ro_flat[(32'sh8 * i)[5:0]+:8])==1 && (last_rdata[14:0] === 15'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1541, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 453, 55, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata[31:24] === ro_flat[(32'sh8 * i)[5:0]+:8])==1 && (last_rdata[14:0] === 15'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1542, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 453, 55, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata[14:0] === 15'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1542, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 453, 55, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata[14:0] === 15'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1543, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 453, 55, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata[31:24] === ro_flat[(32'sh8 * i)[5:0]+:8])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1543, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 453, 55, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata[31:24] === ro_flat[(32'sh8 * i)[5:0]+:8])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1544, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 450, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "450-453", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1544, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 450, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "450-453", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1545, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 438, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "438-440,450", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1545, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 438, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "438-440,450", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1546, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 462, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (o_key_data === 32'ha1b2c3d4)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1546, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 462, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (o_key_data === 32'ha1b2c3d4)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1547, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 462, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((o_key_data === 32'ha1b2c3d4)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1547, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 462, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((o_key_data === 32'ha1b2c3d4)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1548, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 462, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1548, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 462, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1549, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 464, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata === 32'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1549, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 464, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata === 32'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1550, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 464, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata === 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1550, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 464, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata === 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1551, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 464, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1551, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 464, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1552, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 468, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (o_key_data === 32'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1552, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 468, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (o_key_data === 32'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1553, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 468, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((o_key_data === 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1553, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 468, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((o_key_data === 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1554, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 468, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1554, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 468, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1555, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 474, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "474", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1555, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 474, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "474", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1556, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 458, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "458-477", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1556, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 458, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "458-477", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1557, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 488, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (o_monitor_key_fragment[(32'hf * a)[4:0]+:15] === (15'h5555 + a))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1557, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 488, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (o_monitor_key_fragment[(32'hf * a)[4:0]+:15] === (15'h5555 + a))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1558, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 488, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((o_monitor_key_fragment[(32'hf * a)[4:0]+:15] === (15'h5555 + a))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1558, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 488, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((o_monitor_key_fragment[(32'hf * a)[4:0]+:15] === (15'h5555 + a))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1559, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 488, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1559, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 488, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1560, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 486, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "486-489", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1560, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 486, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "486-489", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1561, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 497, 49, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b <= a)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1561, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 497, 49, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b <= a)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1562, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 497, 49, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b <= a)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1562, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 497, 49, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b <= a)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1563, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 499, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b <= a)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1563, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 499, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b <= a)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1564, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 499, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b <= a)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1564, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 499, 35, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b <= a)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1565, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 496, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "496-499", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1565, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 496, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "496-499", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1566, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 491, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "491-496", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1566, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 491, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "491-496", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1567, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 507, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (o_monitor_key_fragment[(32'hf * 32'sh0)[4:0]+:15] === 15'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1567, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 507, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (o_monitor_key_fragment[(32'hf * 32'sh0)[4:0]+:15] === 15'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1568, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 507, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((o_monitor_key_fragment[(32'hf * 32'sh0)[4:0]+:15] === 15'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1568, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 507, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((o_monitor_key_fragment[(32'hf * 32'sh0)[4:0]+:15] === 15'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1569, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 507, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1569, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 507, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1570, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 513, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata[14:0] === 15'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1570, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 513, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata[14:0] === 15'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1571, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 513, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata[14:0] === 15'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1571, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 513, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata[14:0] === 15'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1572, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 513, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1572, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 513, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1573, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 511, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "511-514", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1573, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 511, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "511-514", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1574, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 481, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "481-486,491,502-511", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1574, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 481, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "481-486,491,502-511", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1575, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 522, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "522,524-533,535-543,545-547,549,551-555", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1575, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 522, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "522,524-533,535-543,545-547,549,551-555", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1576, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 519, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "519-522,557", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1576, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 519, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "519-522,557", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1577, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 561, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "561-567", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1577, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 561, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "561-567", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1578, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 574, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "574-576,578-582,584-592,594-602,604-609,611-621,623-629", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1578, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 574, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "574-576,578-582,584-592,594-602,604-609,611-621,623-629", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1579, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 571, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "571-574,631", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1579, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 571, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "571-574,631", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1580, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 639, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "639-641", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1580, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 639, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "639-641", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1581, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 644, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1581, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 644, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1582, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 646, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "646", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1582, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 646, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "646", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1583, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 650, 43, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b > a)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1583, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 650, 43, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b > a)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1584, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 650, 43, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b > a)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1584, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 650, 43, ".tb_csr_golden", "v_expr/tb_csr_golden", "((b > a)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1585, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 649, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "649-650", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1585, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 649, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "649-650", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1586, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 647, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "647-649", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1586, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 647, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "647-649", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1587, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 661, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata === 32'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1587, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 661, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata === 32'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1588, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 661, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata === 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1588, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 661, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata === 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1589, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 661, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1589, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 661, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1590, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 659, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "659-664", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1590, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 659, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "659-664", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1591, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 635, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "635-639,643-644,646-647,654-659,666", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1591, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 635, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "635-639,643-644,646-647,654-659,666", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1592, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 681, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (last_cycles == 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1592, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 681, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (last_cycles == 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1593, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 681, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_cycles == 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1593, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 681, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_cycles == 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1594, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 681, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1594, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 681, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1595, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 680, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "680-684", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1595, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 680, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "680-684", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1596, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 680, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "685-688", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1596, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 680, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "685-688", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1597, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 693, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (last_cycles == 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1597, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 693, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (last_cycles == 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1598, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 693, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_cycles == 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1598, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 693, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_cycles == 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1599, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 693, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1599, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 693, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1600, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 692, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "692-694", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1600, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 692, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "692-694", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1601, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 692, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "695-696", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1601, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 692, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "695-696", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1602, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 701, 38, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata === 32'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1602, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 701, 38, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata === 32'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1603, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 701, 38, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata === 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1603, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 701, 38, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata === 32'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1604, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 701, 38, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1604, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 701, 38, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1605, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 700, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "700", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1605, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 700, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "700", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1606, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 700, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "701", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1606, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 700, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "701", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1607, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 705, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (last_cycles == 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1607, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 705, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (last_cycles == 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1608, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 705, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_cycles == 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1608, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 705, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_cycles == 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1609, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 705, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1609, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 705, 31, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1610, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "704-707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1610, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 7, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "704-707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1611, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "708-711", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1611, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 8, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "708-711", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1612, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 16, ".tb_csr_golden", "v_expr/tb_csr_golden", "(prot==1 && slv==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1612, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 16, ".tb_csr_golden", "v_expr/tb_csr_golden", "(prot==1 && slv==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1613, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 16, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1613, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 16, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1614, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 16, ".tb_csr_golden", "v_expr/tb_csr_golden", "(prot==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1614, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 704, 16, ".tb_csr_golden", "v_expr/tb_csr_golden", "(prot==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1615, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 719, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata === predict(32'sh0))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1615, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 719, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==1 && (last_rdata === predict(32'sh0))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1616, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 719, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata === predict(32'sh0))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1616, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 719, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_rdata === predict(32'sh0))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1617, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 719, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1617, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 719, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1618, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 721, 28, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1618, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 721, 28, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1619, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 721, 28, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pslverr === 1'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1619, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 721, 28, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pslverr === 1'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1620, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 721, 28, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pslverr === 1'h0)==0 && slv==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1620, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 721, 28, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pslverr === 1'h0)==0 && slv==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1621, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 671, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "671-677,679,691,698-699,703,714-716,718-719,721", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1621, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 671, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "671-677,679,691,698-699,703,714-716,718-719,721", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1622, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 731, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "731", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1622, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 731, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "731", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1623, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 731, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1623, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 731, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1624, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 732, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "732", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1624, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 732, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "732", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1625, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 732, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "733", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1625, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 732, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "733", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1626, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 734, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "734-736", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1626, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 734, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "734-736", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1627, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 734, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "738", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1627, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 734, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "738", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1628, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 729, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "729-730", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1628, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 729, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "729-730", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1629, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 726, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "726-729,741-747,749-752", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1629, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 726, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "726-729,741-747,749-752", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1630, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 766, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "766", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1630, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 766, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "766", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1631, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 770, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pready === 1'h0)==1 && (pslverr === 1'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1631, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 770, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pready === 1'h0)==1 && (pslverr === 1'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1632, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 770, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pslverr === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1632, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 770, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pslverr === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1633, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 770, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pready === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1633, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 770, 29, ".tb_csr_golden", "v_expr/tb_csr_golden", "((pready === 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1634, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 772, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1634, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 772, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1635, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 775, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1635, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 775, 9, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1636, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 760, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "760-780", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1636, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 760, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "760-780", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1637, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 757, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "757-760", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1637, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 757, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "757-760", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1638, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 798, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "798-801", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1638, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 798, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "798-801", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1639, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 798, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1639, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 798, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1640, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 804, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "804", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1640, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 804, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "804", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1641, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 804, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1641, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 804, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1642, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 808, 15, ".tb_csr_golden", "v_line/tb_csr_golden", "case", "808", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1642, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 808, 15, ".tb_csr_golden", "v_line/tb_csr_golden", "case", "808", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1643, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 809, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "case", "809", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1643, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 809, 12, ".tb_csr_golden", "v_line/tb_csr_golden", "case", "809", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1644, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 810, 11, ".tb_csr_golden", "v_line/tb_csr_golden", "case", "810", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1644, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 810, 11, ".tb_csr_golden", "v_line/tb_csr_golden", "case", "810", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1645, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 815, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((e[5:4] == 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1645, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 815, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((e[5:4] == 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1646, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 815, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((e[5:4] == 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1646, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 815, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((e[5:4] == 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1647, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 815, 31, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_then", "815", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1647, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 815, 31, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_then", "815", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1648, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 815, 32, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_else", "815", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1648, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 815, 32, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_else", "815", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1649, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 816, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((e[7:6] == 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1649, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 816, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((e[7:6] == 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1650, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 816, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((e[7:6] == 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1650, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 816, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((e[7:6] == 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1651, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 816, 31, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_then", "816", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1651, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 816, 31, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_then", "816", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1652, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 816, 32, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_else", "816", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1652, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 816, 32, ".tb_csr_golden", "v_branch/tb_csr_golden", "cond_else", "816", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1653, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==1 && wr==1 && (st != 4'hf)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1653, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==1 && wr==1 && (st != 4'hf)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1654, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==1 && (ad[1:0] != 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1654, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==1 && (ad[1:0] != 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1655, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==1 && prot==1 && pr[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1655, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==1 && prot==1 && pr[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1656, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(pr[1]==0 && (ad[1:0] != 2'h0)==0 && (st != 4'hf)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1656, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(pr[1]==0 && (ad[1:0] != 2'h0)==0 && (st != 4'hf)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1657, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(pr[1]==0 && (ad[1:0] != 2'h0)==0 && wr==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1657, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(pr[1]==0 && (ad[1:0] != 2'h0)==0 && wr==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1658, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(prot==0 && (ad[1:0] != 2'h0)==0 && (st != 4'hf)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1658, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(prot==0 && (ad[1:0] != 2'h0)==0 && (st != 4'hf)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1659, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(prot==0 && (ad[1:0] != 2'h0)==0 && wr==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1659, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(prot==0 && (ad[1:0] != 2'h0)==0 && wr==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1660, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1660, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 817, 19, ".tb_csr_golden", "v_expr/tb_csr_golden", "(slv==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1661, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 821, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (last_cycles == 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1661, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 821, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==1 && (last_cycles == 32'sh2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1662, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 821, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_cycles == 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1662, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 821, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_cycles == 32'sh2)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1663, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 821, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1663, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 821, 33, ".tb_csr_golden", "v_expr/tb_csr_golden", "((last_err === 1'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1664, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 827, 13, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "827-828", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1664, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 827, 13, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "827-828", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1665, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 827, 14, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1665, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 827, 14, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1666, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 832, 13, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "832-834", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1666, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 832, 13, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "832-834", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1667, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 832, 14, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "835-836", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1667, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 832, 14, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "835-836", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1668, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 825, 11, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "825-826", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1668, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 825, 11, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "825-826", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1669, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 825, 12, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "830-831", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1669, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 825, 12, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "830-831", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1670, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 839, 11, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "839", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1670, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 839, 11, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "839", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1671, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 839, 12, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1671, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 839, 12, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1672, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 820, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "820-822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1672, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 820, 9, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "820-822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1673, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 820, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "823-824", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1673, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 820, 10, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "823-824", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1674, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 795, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "795-796,803,806-807,812-819,841", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1674, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 795, 7, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "795-796,803,806-807,812-819,841", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1675, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 786, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "786-795", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1675, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 786, 18, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "786-795", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1676, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 849, 24, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "849", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1676, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 849, 24, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "849", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1677, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 853, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "853-855,857-858,860-864", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1677, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 853, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "853-855,857-858,860-864", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1678, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 867, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "867-873", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1678, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 867, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "867-873", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1679, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 876, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "876-882", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1679, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 876, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "876-882", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1680, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 885, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "885-891", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1680, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 885, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "885-891", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1681, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_rwi_sw > 32'sh0)==1 && (cov_w1c_hw > 32'sh0)==1 && (cov_w0c_hw > 32'sh0)==1 && (cov_w2c_hw > 32'sh0)==1 && (cov_r2c_hw > 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1681, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_rwi_sw > 32'sh0)==1 && (cov_w1c_hw > 32'sh0)==1 && (cov_w0c_hw > 32'sh0)==1 && (cov_w2c_hw > 32'sh0)==1 && (cov_r2c_hw > 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1682, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_r2c_hw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1682, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_r2c_hw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1683, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_w2c_hw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1683, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_w2c_hw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1684, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_w0c_hw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1684, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_w0c_hw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1685, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_w1c_hw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1685, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_w1c_hw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1686, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_rwi_sw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1686, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 909, 78, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_rwi_sw > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1687, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 910, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_sva1 > 32'sh0)==1 && (cov_sva4 > 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1687, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 910, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_sva1 > 32'sh0)==1 && (cov_sva4 > 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1688, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 910, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_sva4 > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1688, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 910, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_sva4 > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1689, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 910, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_sva1 > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1689, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 910, 22, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_sva1 > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1690, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_err > 32'sh0)==1 && (cov_ok_wr > 32'sh0)==1 && (cov_ok_rd > 32'sh0)==1 && (cov_unmapped > 32'sh0)==1 && (cov_b2b > 32'sh0)==1 && (cov_rst_mid > 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1690, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_err > 32'sh0)==1 && (cov_ok_wr > 32'sh0)==1 && (cov_ok_rd > 32'sh0)==1 && (cov_unmapped > 32'sh0)==1 && (cov_b2b > 32'sh0)==1 && (cov_rst_mid > 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1691, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_rst_mid > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1691, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_rst_mid > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1692, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_b2b > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1692, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_b2b > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1693, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_unmapped > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1693, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_unmapped > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1694, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_ok_rd > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1694, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_ok_rd > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1695, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_ok_wr > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1695, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_ok_wr > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1696, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_err > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1696, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 911, 90, ".tb_csr_golden", "v_expr/tb_csr_golden", "((cov_err > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1697, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 913, 58, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count > 32'sh0)==1 && (reg_wr_event_count > 32'sh0)==1 && (reg_event_bad_count == 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1697, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 913, 58, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count > 32'sh0)==1 && (reg_wr_event_count > 32'sh0)==1 && (reg_event_bad_count == 32'sh0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1698, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 913, 58, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_event_bad_count == 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1698, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 913, 58, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_event_bad_count == 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1699, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 913, 58, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_count > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1699, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 913, 58, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_wr_event_count > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1700, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 913, 58, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1700, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 913, 58, ".tb_csr_golden", "v_expr/tb_csr_golden", "((reg_rd_event_count > 32'sh0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1701, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 922, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "922", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1701, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 922, 5, ".tb_csr_golden", "v_branch/tb_csr_golden", "if", "922", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1702, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 922, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "923", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1702, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 922, 6, ".tb_csr_golden", "v_branch/tb_csr_golden", "else", "923", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1703, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 894, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "894-897,899-901,903-907,909-911,913-915,917-921,924", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1703, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 894, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "894-897,899-901,903-907,909-911,913-915,917-921,924", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1704, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 928, 5, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "928", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1704, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 928, 5, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "928", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 1705, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 927, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "927-930", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 1705, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 927, 3, ".tb_csr_golden", "v_line/tb_csr_golden", "block", "927-930", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 38, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_clk_apb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 6, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 39, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_rst_n_apb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 3, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 42, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_clk_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 9, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 43, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_rst_n_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 20, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 46, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_apb_psel");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 23, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 47, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_apb_penable");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 26, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 48, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_apb_pwrite");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 29, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 49, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_apb_paddr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 62, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 50, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_apb_pwdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 127, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 51, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_apb_pstrb");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 136, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 52, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_apb_pprot");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 143, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 53, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_apb_pready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 145, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 54, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_apb_pslverr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 147, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 55, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_apb_prdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 211, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 58, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_protect_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 214, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 59, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_slverr_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 217, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 62, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_reg_rd_en");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 221, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 63, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_reg_rd_addr");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 219, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 64, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_reg_wr_en");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 253, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 65, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_reg_wr_addr");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 1706, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 68, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_engine_events");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1722, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 69, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_engine_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1730, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 70, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1732, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 71, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1734, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 72, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1736, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 73, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1738, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 74, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1740, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 75, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1742, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 76, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1744, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 77, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1746, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 78, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1748, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 79, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1750, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 80, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1752, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 81, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1754, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 82, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1756, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 83, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1758, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 84, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 1760, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 87, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_port_0_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1776, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 88, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_0_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1784, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 89, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1786, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 90, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1788, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 91, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1790, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 92, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1792, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 93, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1794, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 94, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1796, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 95, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1798, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 96, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1800, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 97, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1802, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 98, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1804, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 99, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1806, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 100, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1808, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 101, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1810, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 102, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1812, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 103, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 1814, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 106, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_port_1_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1830, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 107, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_1_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1838, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 108, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1840, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 109, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1842, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 110, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1844, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 111, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1846, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 112, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1848, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 113, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1850, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 114, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1852, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 115, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1854, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 116, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1856, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 117, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1858, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 118, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1860, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 119, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1862, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 120, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1864, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 121, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1866, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 122, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 1868, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 125, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_port_2_event_count");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1884, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 126, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_2_mode");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1892, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 127, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1894, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 128, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1896, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 129, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1898, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 130, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1900, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 131, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1902, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 132, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1904, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 133, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1906, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 134, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1908, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 135, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1910, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 136, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1912, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 137, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1914, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 138, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1916, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 139, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1918, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 140, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1920, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 141, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 921, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 144, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_monitor_sample_count[0]");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, vlSelf->__Vcoverage + 937, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 144, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_monitor_sample_count[1]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 953, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 145, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_threshold[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 961, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 145, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_threshold[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 969, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 146, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 989, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 147, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1009, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 148, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 973, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 149, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 993, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 150, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1013, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 151, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 977, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 152, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 997, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 153, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1017, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 154, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 981, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 155, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1001, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 156, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1021, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 157, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 985, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 158, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1005, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 159, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_wdata_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 1025, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 160, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_we_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 856, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 161, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_key_fragment[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 886, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 161, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_monitor_key_fragment[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 916, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 162, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_clr_monitor_key_fragment");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 789, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 165, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "o_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 853, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 166, 47, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "i_hw_clr_key_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1922, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 170, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_apb_setup");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1924, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 171, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_apb_prot_ok");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1926, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 172, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_apb_slverr");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1928, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 173, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_apb_complete");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1930, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 174, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_apb_wr");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1932, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 175, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_apb_rd");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 1934, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 176, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_addr");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 1966, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 177, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_wdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2030, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 178, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_wstrb");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2038, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 179, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_wmask");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 145, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 180, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_slverr");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2102, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 181, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rd_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2104, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 182, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_wr_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2106, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 183, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rd_ack_fall");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2108, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 184, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rdata_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 147, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 185, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_rdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 0, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 186, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_clk_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 6, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 187, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rst_n_reg");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2172, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 188, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_we_engine");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2174, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 189, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rd_engine");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1722, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 190, 15, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_engine_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2176, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 191, 15, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_engine_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1730, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 192, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_engine_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2184, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 193, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_engine_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1736, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 194, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_engine_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2186, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 195, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_engine_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1742, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 196, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_engine_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2188, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 197, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_engine_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1748, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 198, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_engine_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2190, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 199, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_engine_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1754, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 200, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_engine_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2192, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 201, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_engine_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2194, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 202, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_engine_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2258, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 203, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_we_port_0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2260, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 204, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rd_port_0");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1776, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 205, 15, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_0_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2262, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 206, 15, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_0_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1784, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 207, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_0_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2270, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 208, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_0_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1790, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 209, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_0_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2272, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 210, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_0_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1796, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 211, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_0_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2274, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 212, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_0_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1802, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 213, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_0_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2276, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 214, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_0_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1808, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 215, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_0_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2278, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 216, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_0_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2280, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 217, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_0_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2344, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 218, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_we_port_1");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2346, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 219, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rd_port_1");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1830, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 220, 15, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_1_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2348, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 221, 15, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_1_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1838, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 222, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_1_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2356, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 223, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_1_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1844, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 224, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_1_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2358, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 225, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_1_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1850, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 226, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_1_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2360, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 227, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_1_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1856, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 228, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_1_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2362, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 229, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_1_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1862, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 230, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_1_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2364, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 231, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_1_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2366, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 232, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_1_value");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2430, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 233, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_we_port_2");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2432, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 234, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rd_port_2");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 1884, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 235, 15, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_2_mode");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2434, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 236, 15, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_2_mode_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1892, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 237, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_2_start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2442, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 238, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_2_start_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1898, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 239, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_2_fault");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2444, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 240, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_2_fault_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1904, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 241, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_2_pending");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2446, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 242, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_2_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1910, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 243, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_2_overflow");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2448, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 244, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_2_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 1916, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 245, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_port_2_done");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2450, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 246, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_2_done_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2452, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 247, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_port_2_value");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 953, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 248, 39, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_threshold[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 961, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 248, 39, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_threshold[1]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2516, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 249, 39, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_threshold_nxt[0]");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, vlSelf->__Vcoverage + 2524, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 249, 39, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_threshold_nxt[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 969, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 250, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_capture");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2532, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 251, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_capture_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 973, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 252, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_error");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2536, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 253, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_error_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 977, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 254, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_pending");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2540, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 255, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_pending_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 981, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 256, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_overflow");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2544, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 257, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_overflow_nxt");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 985, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 258, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2548, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 259, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_match_nxt");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 856, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 260, 40, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_key_fragment[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 886, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 260, 40, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_monitor_key_fragment[1]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 2552, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 261, 40, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_key_fragment_nxt[0]");
    vlSelf->__vlCoverToggleInsert(0, 14, 1, vlSelf->__Vcoverage + 2582, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 261, 40, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_key_fragment_nxt[1]");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2612, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 262, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_we_monitor");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, vlSelf->__Vcoverage + 2616, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 263, 34, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_rd_monitor");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2620, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 264, 52, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_value[0]");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2684, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 264, 52, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_monitor_value[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2748, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 265, 9, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_we_key");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 789, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 266, 16, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "reg_key_data");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2750, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 267, 16, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_key_data_nxt");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, vlSelf->__Vcoverage + 2814, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 268, 28, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "w_key_value");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2878, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 271, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2878, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 271, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2879, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 271, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2879, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 271, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2880, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 271, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2880, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 271, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2881, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 271, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2881, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 271, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "271", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2882, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 272, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2882, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 272, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_ASYNCHRONOUS == 32'h1)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2883, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 272, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2883, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 272, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_ASYNCHRONOUS == 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2884, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 272, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "272", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2884, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 272, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "272", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2885, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 272, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "272", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2885, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 272, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "272", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2886, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 278, 38, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_psel==1 && i_apb_penable==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2886, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 278, 38, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_psel==1 && i_apb_penable==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2887, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 278, 38, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_penable==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2887, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 278, 38, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_penable==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2888, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 278, 38, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_psel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2888, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 278, 38, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_psel==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2889, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 279, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_protect_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2889, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 279, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_protect_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2890, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 279, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_protect_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2890, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 279, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_protect_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2891, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 279, 42, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2891, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 279, 42, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2892, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 279, 43, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2892, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 279, 43, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "279", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2893, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 280, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_slverr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2893, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 280, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_slverr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2894, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 280, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_slverr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2894, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 280, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_slverr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2895, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 282, 42, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "280-282", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2895, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 282, 42, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "280-282", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2896, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 282, 43, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "282", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2896, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 282, 43, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "282", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2897, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 285, 39, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_setup==1 && w_apb_slverr==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2897, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 285, 39, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_setup==1 && w_apb_slverr==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2898, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 285, 39, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_slverr==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2898, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 285, 39, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_slverr==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2899, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 285, 39, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_setup==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2899, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 285, 39, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_setup==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2900, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 286, 40, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_pwrite==1 && w_apb_complete==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2900, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 286, 40, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_pwrite==1 && w_apb_complete==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2901, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 286, 40, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_complete==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2901, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 286, 40, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_complete==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2902, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 286, 40, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_pwrite==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2902, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 286, 40, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_pwrite==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2903, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 287, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_pwrite==0 && w_apb_complete==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2903, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 287, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_pwrite==0 && w_apb_complete==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2904, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 287, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_complete==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2904, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 287, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_complete==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2905, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 287, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_pwrite==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2905, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 287, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_apb_pwrite==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2906, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 293, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "293-294", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2906, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 293, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "293-294", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2907, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 293, 11, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2907, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 293, 11, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2908, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 291, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "291-292", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2908, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 291, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "291-292", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2909, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 291, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2909, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 291, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2910, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 291, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2910, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 291, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2911, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 290, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "290", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2911, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 290, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "290", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2912, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 301, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "301-302", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2912, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 301, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "301-302", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2913, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 301, 11, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2913, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 301, 11, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2914, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 299, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "299-300", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2914, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 299, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "299-300", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2915, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 299, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2915, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 299, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2916, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 299, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2916, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 299, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2917, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 298, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "298", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2917, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 298, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "298", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2918, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 309, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "309-310", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2918, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 309, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "309-310", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2919, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 309, 11, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2919, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 309, 11, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2920, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 307, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "307-308", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2920, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 307, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "307-308", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2921, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 307, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2921, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 307, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2922, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 307, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2922, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 307, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2923, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 306, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "306", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2923, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 306, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "306", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2924, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "322-323", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2924, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "322-323", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2925, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 11, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2925, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 11, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2926, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_setup==1 && i_slverr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2926, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_setup==1 && i_slverr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2927, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_slverr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2927, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_slverr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2928, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_setup==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2928, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 322, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_setup==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2929, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 320, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "320-321", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2929, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 320, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "320-321", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2930, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 320, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2930, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 320, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2931, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 320, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2931, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 320, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2932, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 319, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "319", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2932, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 319, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "319", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2933, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 330, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2933, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 330, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2934, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 330, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2934, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 330, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2935, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 330, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2935, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 330, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2936, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 331, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2936, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 331, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2937, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 331, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2937, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 331, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2938, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 331, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2938, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 331, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2939, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 332, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2939, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 332, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2940, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 332, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2940, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 332, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2941, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 332, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2941, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 332, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2942, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 333, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2942, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 333, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2943, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 333, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2943, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 333, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2944, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 333, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2944, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 333, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2945, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2945, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2946, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2946, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2947, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2947, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2948, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2948, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2949, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2949, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2950, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2950, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 337, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2951, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 340, 29, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_KEY_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2951, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 340, 29, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1 && (reg_addr == LPARA_KEY_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2952, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 340, 29, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_KEY_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2952, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 340, 29, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_KEY_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2953, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 340, 29, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2953, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 340, 29, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2954, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 341, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2954, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 341, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == LPARA_ENGINE_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2955, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 341, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2955, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 341, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_ENGINE_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2956, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 341, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2956, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 341, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2957, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 342, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2957, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 342, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_0_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2958, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 342, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2958, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 342, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_0_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2959, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 342, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2959, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 342, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2960, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 343, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2960, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 343, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_1_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2961, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 343, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2961, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 343, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_1_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2962, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 343, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2962, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 343, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2963, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 344, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2963, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 344, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == LPARA_PORT_2_OFFSET[15:0])==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2964, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 344, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2964, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 344, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == LPARA_PORT_2_OFFSET[15:0])==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2965, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 344, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2965, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 344, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2966, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2966, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2967, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2967, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh0 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2968, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2968, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2969, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2969, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2970, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2970, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr == (LPARA_MONITOR_BASE_OFFSET + (32'sh1 * LPARA_MONITOR_OFFSET_STRIDE)))==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2971, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2971, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 348, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2972, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 355, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr[1:0] == 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2972, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 355, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1 && (reg_addr[1:0] == 2'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2973, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 355, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr[1:0] == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2973, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 355, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((reg_addr[1:0] == 2'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2974, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 355, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2974, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 355, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2975, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 356, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(o_reg_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2975, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 356, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(o_reg_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2976, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 356, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(o_reg_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2976, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 356, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(o_reg_rd_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2977, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 356, 40, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "356", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2977, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 356, 40, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "356", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2978, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 356, 41, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "356", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2978, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 356, 41, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "356", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2979, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_key[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2979, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_key[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2980, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2980, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2981, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2981, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2982, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2982, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2983, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2983, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2984, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2984, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2985, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2985, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2986, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine[0]==0 && w_we_port_0[0]==0 && w_we_port_1[0]==0 && w_we_port_2[0]==0 && w_we_monitor[0]==0 && w_we_monitor[1]==0 && w_we_key[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2986, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 366, 5, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine[0]==0 && w_we_port_0[0]==0 && w_we_port_1[0]==0 && w_we_port_2[0]==0 && w_we_monitor[0]==0 && w_we_monitor[1]==0 && w_we_key[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2987, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 367, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(o_reg_wr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2987, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 367, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(o_reg_wr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2988, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 367, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(o_reg_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2988, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 367, 26, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(o_reg_wr_en==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2989, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 367, 40, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "367", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2989, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 367, 40, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "367", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2990, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 367, 41, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "367", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2990, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 367, 41, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "367", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2102, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 485, 13, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "g_sync_csr.reg_rd_capture");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2104, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 486, 13, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "g_sync_csr.reg_wr_capture");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 2991, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 487, 13, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "g_sync_csr.w_pready_nxt");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 143, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 488, 13, ".tb_csr_golden.u_dut", "v_toggle/m_vlsi_apb4_csr", "g_sync_csr.reg_pready");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2993, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 492, 9, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "492-494", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2993, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 492, 9, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "492-494", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2994, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 492, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "495-497", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2994, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 492, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "495-497", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2995, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 492, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2995, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 492, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2996, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 492, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2996, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 492, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2997, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 491, 7, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "491", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2997, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 491, 7, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "491", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2998, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_slverr==1 && w_apb_setup==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2998, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_apb_slverr==1 && w_apb_setup==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 2999, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2999, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rd_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3000, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3000, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3001, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0 && w_rd_en==0 && w_apb_setup==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3001, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0 && w_rd_en==0 && w_apb_setup==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3002, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0 && w_rd_en==0 && w_apb_slverr==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3002, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 505, 47, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wr_en==0 && w_rd_en==0 && w_apb_slverr==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3003, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 507, 9, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "507-508", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3003, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 507, 9, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "507-508", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3004, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 507, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "510", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3004, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 507, 10, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "510", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3005, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 507, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3005, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 507, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3006, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 507, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3006, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 507, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3007, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 506, 7, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "506", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3007, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 506, 7, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "506", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3008, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3008, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3009, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3009, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3010, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3010, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3011, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3011, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3012, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3012, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3013, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3013, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3014, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "518", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3014, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "518", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3015, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 104, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "518", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3015, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 518, 104, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "518", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3016, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 521, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3016, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 521, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3017, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 521, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3017, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 521, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3018, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 521, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3018, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 521, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_engine==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3019, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 522, 29, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "521-522", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3019, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 522, 29, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "521-522", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3020, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 523, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "523", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3020, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 523, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "523", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3021, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 523, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "523", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3021, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 523, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "523", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3022, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 522, 30, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3022, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 522, 30, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3023, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 526, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3023, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 526, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3024, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 526, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3024, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 526, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3025, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 526, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "526", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3025, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 526, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "526", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3026, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 527, 81, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "527", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3026, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 527, 81, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "527", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3027, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 527, 82, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "527", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3027, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 527, 82, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "527", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3028, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 526, 57, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3028, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 526, 57, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3029, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 530, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3029, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 530, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3030, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 530, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3030, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 530, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3031, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 530, 60, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "530", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3031, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 530, 60, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "530", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3032, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 531, 83, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "531", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3032, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 531, 83, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "531", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3033, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 531, 84, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "531", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3033, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 531, 84, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "531", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3034, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 530, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3034, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 530, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3035, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 534, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3035, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 534, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3036, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 534, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3036, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 534, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3037, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 534, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "534", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3037, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 534, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "534", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3038, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 535, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "535", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3038, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 535, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "535", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3039, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 535, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "535", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3039, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 535, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "535", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3040, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 534, 63, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3040, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 534, 63, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3041, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 538, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3041, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 538, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3042, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 538, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3042, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 538, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_engine_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3043, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 538, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "538", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3043, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 538, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "538", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3044, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 539, 44, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "539", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3044, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 539, 44, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "539", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3045, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 539, 45, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "539", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3045, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 539, 45, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "539", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3046, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 538, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3046, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 538, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3047, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 543, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "543-549", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3047, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 543, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "543-549", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3048, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 543, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "550-556", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3048, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 543, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "550-556", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3049, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 543, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3049, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 543, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3050, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 543, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3050, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 543, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3051, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 542, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "542", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3051, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 542, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "542", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3052, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 569, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "569-577", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3052, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 569, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "569-577", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3053, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3053, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3054, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3054, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3055, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3055, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3056, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3056, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3057, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3057, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3058, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3058, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3059, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "581", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3059, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "581", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3060, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 104, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "581", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3060, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 581, 104, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "581", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3061, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 584, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3061, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 584, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3062, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 584, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3062, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 584, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3063, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 584, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3063, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 584, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_0==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3064, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 585, 29, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "584-585", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3064, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 585, 29, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "584-585", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3065, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 586, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "586", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3065, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 586, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "586", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3066, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 586, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "586", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3066, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 586, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "586", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3067, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 585, 30, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3067, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 585, 30, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3068, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 589, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3068, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 589, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3069, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 589, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3069, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 589, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3070, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 589, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "589", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3070, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 589, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "589", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3071, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 590, 81, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "590", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3071, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 590, 81, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "590", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3072, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 590, 82, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "590", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3072, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 590, 82, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "590", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3073, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 589, 57, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3073, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 589, 57, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3074, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 593, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3074, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 593, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3075, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 593, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3075, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 593, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3076, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 593, 60, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "593", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3076, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 593, 60, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "593", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3077, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 594, 83, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "594", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3077, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 594, 83, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "594", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3078, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 594, 84, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "594", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3078, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 594, 84, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "594", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3079, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 593, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3079, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 593, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3080, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 597, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3080, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 597, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3081, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 597, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3081, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 597, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3082, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 597, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "597", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3082, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 597, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "597", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3083, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 598, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "598", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3083, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 598, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "598", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3084, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 598, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "598", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3084, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 598, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "598", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3085, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 597, 63, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3085, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 597, 63, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3086, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 601, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3086, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 601, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3087, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 601, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3087, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 601, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_0_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3088, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 601, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "601", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3088, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 601, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "601", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3089, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 602, 44, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "602", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3089, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 602, 44, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "602", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3090, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 602, 45, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "602", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3090, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 602, 45, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "602", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3091, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 601, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3091, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 601, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3092, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 606, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "606-612", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3092, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 606, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "606-612", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3093, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 606, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "613-619", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3093, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 606, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "613-619", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3094, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 606, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3094, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 606, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3095, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 606, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3095, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 606, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3096, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 605, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "605", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3096, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 605, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "605", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3097, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 632, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "632-640", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3097, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 632, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "632-640", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3098, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3098, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3099, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3099, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3100, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3100, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3101, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3101, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3102, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3102, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3103, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3103, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3104, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3104, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3105, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 104, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3105, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 644, 104, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "644", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3106, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 647, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3106, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 647, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3107, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 647, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3107, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 647, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3108, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 647, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3108, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 647, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_1==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3109, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 648, 29, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "647-648", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3109, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 648, 29, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "647-648", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3110, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 649, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "649", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3110, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 649, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "649", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3111, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 649, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "649", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3111, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 649, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "649", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3112, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 648, 30, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3112, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 648, 30, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3113, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 652, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3113, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 652, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3114, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 652, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3114, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 652, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3115, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 652, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "652", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3115, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 652, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "652", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3116, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 653, 81, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "653", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3116, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 653, 81, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "653", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3117, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 653, 82, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "653", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3117, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 653, 82, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "653", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3118, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 652, 57, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3118, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 652, 57, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3119, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 656, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3119, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 656, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3120, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 656, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3120, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 656, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3121, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 656, 60, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "656", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3121, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 656, 60, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "656", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3122, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 657, 83, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "657", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3122, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 657, 83, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "657", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3123, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 657, 84, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "657", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3123, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 657, 84, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "657", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3124, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 656, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3124, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 656, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3125, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 660, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3125, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 660, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3126, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 660, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3126, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 660, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3127, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 660, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "660", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3127, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 660, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "660", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3128, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 661, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "661", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3128, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 661, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "661", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3129, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 661, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "661", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3129, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 661, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "661", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3130, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 660, 63, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3130, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 660, 63, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3131, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 664, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3131, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 664, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3132, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 664, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3132, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 664, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_1_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3133, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 664, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "664", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3133, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 664, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "664", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3134, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 665, 44, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "665", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3134, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 665, 44, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "665", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3135, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 665, 45, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "665", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3135, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 665, 45, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "665", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3136, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 664, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3136, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 664, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3137, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 669, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "669-675", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3137, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 669, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "669-675", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3138, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 669, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "676-682", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3138, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 669, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "676-682", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3139, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 669, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3139, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 669, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3140, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 669, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3140, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 669, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3141, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 668, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "668", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3141, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 668, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "668", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3142, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 695, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "695-703", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3142, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 695, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "695-703", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3143, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3143, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3144, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3144, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3145, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3145, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3146, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3146, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3147, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3147, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3148, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3148, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 43, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3149, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3149, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3150, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 104, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3150, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 707, 104, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "707", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3151, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 710, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3151, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 710, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3152, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 710, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3152, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 710, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3153, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 710, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3153, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 710, 44, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_port_2==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3154, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 711, 29, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "710-711", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3154, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 711, 29, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "710-711", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3155, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 712, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "712", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3155, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 712, 53, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "712", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3156, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 712, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "712", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3156, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 712, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "712", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3157, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 711, 30, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3157, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 711, 30, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3158, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 715, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3158, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 715, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_fault==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3159, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 715, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3159, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 715, 32, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_fault==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3160, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 715, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "715", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3160, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 715, 56, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "715", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3161, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 716, 81, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "716", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3161, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 716, 81, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "716", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3162, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 716, 82, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "716", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3162, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 716, 82, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "716", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3163, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 715, 57, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3163, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 715, 57, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3164, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 719, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3164, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 719, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_pending==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3165, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 719, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3165, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 719, 34, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_pending==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3166, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 719, 60, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "719", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3166, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 719, 60, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "719", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3167, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 720, 83, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "720", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3167, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 720, 83, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "720", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3168, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 720, 84, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "720", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3168, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 720, 84, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "720", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3169, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 719, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3169, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 719, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3170, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 723, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3170, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 723, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_overflow==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3171, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 723, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3171, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 723, 35, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_overflow==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3172, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 723, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "723", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3172, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 723, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "723", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3173, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 724, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "724", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3173, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 724, 61, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "724", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3174, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 724, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "724", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3174, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 724, 62, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "724", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3175, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 723, 63, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3175, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 723, 63, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3176, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 727, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3176, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 727, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_done==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3177, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 727, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3177, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 727, 31, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_port_2_done==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3178, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 727, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "727", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3178, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 727, 54, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "727", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3179, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 728, 44, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "728", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3179, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 728, 44, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "728", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3180, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 728, 45, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "728", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3180, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 728, 45, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "728", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3181, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 727, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3181, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 727, 55, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3182, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 732, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "732-738", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3182, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 732, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "732-738", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3183, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 732, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "739-745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3183, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 732, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "739-745", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3184, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 732, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3184, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 732, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3185, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 732, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3185, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 732, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3186, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 731, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "731", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3186, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 731, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "731", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3187, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 758, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "758-766", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3187, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 758, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "758-766", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3188, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3188, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3189, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3189, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3190, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3190, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3191, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3191, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3192, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3192, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3193, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3193, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3194, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 130, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3194, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 130, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3195, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 131, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771-772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3195, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 131, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771-772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3196, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3196, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3197, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3197, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3198, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3198, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3199, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 119, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3199, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 119, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3200, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 307, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3200, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 307, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3201, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 308, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3201, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 308, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3202, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 120, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3202, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 120, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3203, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_error[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3203, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_error[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3204, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_error[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3204, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_error[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3205, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 102, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3205, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 102, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3206, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 186, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3206, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 186, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3207, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 187, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3207, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 187, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3208, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3208, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3209, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 69, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_pending[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3209, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 69, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_pending[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3210, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 69, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_pending[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3210, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 69, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_pending[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3211, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 108, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3211, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 108, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3212, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 194, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3212, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 194, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3213, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 195, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3213, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 195, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3214, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 109, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3214, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 109, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3215, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 71, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_overflow[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3215, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 71, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_overflow[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3216, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 71, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_overflow[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3216, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 71, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_overflow[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3217, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 111, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3217, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 111, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3218, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 165, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3218, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 165, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3219, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 166, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3219, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 166, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3220, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 112, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3220, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 112, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3221, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_match[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3221, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_match[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3222, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_match[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3222, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_match[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3223, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 102, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3223, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 102, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3224, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 139, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3224, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 139, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3225, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 140, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3225, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 140, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3226, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3226, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3227, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 79, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_monitor_key_fragment[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3227, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 79, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_monitor_key_fragment[0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3228, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 79, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_monitor_key_fragment[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3228, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 79, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_monitor_key_fragment[0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3229, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 91, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3229, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 91, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3230, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 177, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3230, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 177, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3231, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 178, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3231, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 178, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3232, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 92, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3232, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 92, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3233, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 779, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "771,779-787", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3233, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 779, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "771,779-787", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3234, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 7, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "771,791-798", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3234, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 7, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "771,791-798", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3235, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 8, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "771,799-806", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3235, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 8, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "771,799-806", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3236, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 11, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3236, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 11, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3237, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 11, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3237, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 11, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3238, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 790, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "790", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3238, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 790, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "790", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3239, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3239, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[23:20][3]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3240, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3240, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[23:20][2]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3241, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3241, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[23:20][1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3242, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3242, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[23:20][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3243, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3243, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[23:20][0]==0 && w_wmask[23:20][1]==0 && w_wmask[23:20][2]==0 && w_wmask[23:20][3]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3244, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3244, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 70, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3245, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 130, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3245, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 130, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3246, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 131, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771-772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3246, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 772, 131, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771-772", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3247, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3247, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==1 && w_wmask[19][0]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3248, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3248, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_wmask[19][0]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3249, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3249, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 68, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_we_monitor[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3250, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 119, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3250, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 119, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3251, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 307, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3251, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 307, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3252, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 308, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3252, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 308, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,773", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3253, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 120, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3253, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 773, 120, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3254, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_error[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3254, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_error[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3255, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_error[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3255, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_error[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3256, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 102, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3256, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 102, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3257, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 186, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3257, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 186, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3258, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 187, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3258, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 187, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,774", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3259, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3259, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 774, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3260, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 69, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_pending[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3260, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 69, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_pending[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3261, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 69, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_pending[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3261, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 69, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_pending[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3262, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 108, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3262, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 108, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3263, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 194, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3263, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 194, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3264, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 195, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3264, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 195, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,775", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3265, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 109, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3265, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 775, 109, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3266, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 71, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_overflow[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3266, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 71, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_overflow[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3267, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 71, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_overflow[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3267, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 71, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_overflow[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3268, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 111, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3268, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 111, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3269, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 165, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3269, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 165, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3270, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 166, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3270, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 166, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,776", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3271, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 112, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3271, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 776, 112, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3272, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_match[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3272, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_match[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3273, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_match[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3273, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 65, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_we_monitor_match[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3274, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 102, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3274, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 102, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "771,777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3275, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 139, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3275, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 139, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3276, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 140, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3276, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 140, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,777", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3277, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3277, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 777, 103, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3278, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 79, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_monitor_key_fragment[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3278, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 79, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_monitor_key_fragment[1]==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3279, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 79, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_monitor_key_fragment[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3279, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 79, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_monitor_key_fragment[1]==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3280, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 91, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3280, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 91, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3281, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 177, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3281, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 177, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3282, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 178, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3282, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 178, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "771,778", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3283, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 92, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3283, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 778, 92, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3284, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 779, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "771,779-787", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3284, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 779, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "771,779-787", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3285, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 7, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "771,791-798", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3285, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 7, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "771,791-798", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3286, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 8, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "771,799-806", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3286, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 8, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "771,799-806", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3287, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 11, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3287, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 11, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3288, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 11, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3288, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 791, 11, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3289, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 790, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "790", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3289, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 790, 5, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "790", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3290, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 820, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_key_data==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3290, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 820, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_key_data==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3291, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 820, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_key_data==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3291, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 820, 27, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_hw_clr_key_data==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3292, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 820, 47, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "820", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3292, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 820, 47, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "820", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3293, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 821, 85, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "821", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3293, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 821, 85, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_then", "821", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3294, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 821, 86, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3294, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 821, 86, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "822", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3295, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 820, 48, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3295, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 820, 48, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "cond_else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3296, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 826, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "826-827", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3296, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 826, 5, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "826-827", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3297, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 826, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "828-829", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3297, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 826, 6, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "828-829", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3298, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 826, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3298, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 826, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3299, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 826, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3299, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 826, 9, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(w_rst_n_reg==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3300, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 825, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "825", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3300, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 825, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "825", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3301, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 837, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "837-838", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3301, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 837, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "837-838", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3302, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 846, 26, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "846", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3302, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 846, 26, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "846", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3303, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 847, 26, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "847", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3303, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 847, 26, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "847", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3304, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 848, 26, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "848", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3304, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 848, 26, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "848", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3305, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 849, 26, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "849", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3305, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 849, 26, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "849", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3306, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 850, 23, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "850", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3306, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 850, 23, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "850", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3307, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 856, 13, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "856-857", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3307, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 856, 13, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "856-857", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3308, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 856, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3308, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 856, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3309, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 855, 78, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "855", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3309, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 855, 78, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "855", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3310, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 860, 13, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "860-861", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3310, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 860, 13, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "860-861", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3311, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 860, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3311, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 860, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3312, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 859, 78, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "859", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3312, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 859, 78, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "859", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3313, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 864, 13, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "864-865", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3313, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 864, 13, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "864-865", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3314, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 864, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3314, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 864, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3315, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 863, 78, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "863", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3315, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 863, 78, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "863", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3316, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 868, 13, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "868-869", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3316, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 868, 13, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "868-869", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3317, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 868, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3317, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 868, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3318, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 867, 78, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "867", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3318, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 867, 78, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "867", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3319, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 871, 11, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "871", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3319, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 871, 11, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "871", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3320, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 7, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "853-854", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3320, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 7, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "853-854", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3321, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 8, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3321, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 8, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3322, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_MONITOR_COUNT >= 32'h1)==1 && (PARA_MONITOR_COUNT <= LPARA_MONITOR_MAX_COUNT)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3322, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_MONITOR_COUNT >= 32'h1)==1 && (PARA_MONITOR_COUNT <= LPARA_MONITOR_MAX_COUNT)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3323, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_MONITOR_COUNT <= LPARA_MONITOR_MAX_COUNT)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3323, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_MONITOR_COUNT <= LPARA_MONITOR_MAX_COUNT)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3324, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_MONITOR_COUNT >= 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3324, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 853, 41, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "((PARA_MONITOR_COUNT >= 32'h1)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3325, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 851, 7, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "851-852", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3325, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 851, 7, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "case", "851-852", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3326, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 843, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "843-845", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3326, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 843, 3, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "843-845", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3327, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 904, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "904-905", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3327, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 904, 14, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "if", "904-905", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3328, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 904, 15, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3328, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 904, 15, ".tb_csr_golden.u_dut", "v_branch/m_vlsi_apb4_csr", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3329, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 902, 9, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "902-903", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3329, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 902, 9, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "elsif", "902-903", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3330, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 902, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3330, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 902, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3331, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 902, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3331, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 902, 13, ".tb_csr_golden.u_dut", "v_expr/m_vlsi_apb4_csr", "(i_rst_n_apb==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 3332, first, true, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 901, 7, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "901", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 3332, first, false, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\examples\\APB4_Synchronous\\RTL\\m_vlsi_apb4_csr.sv", 901, 7, ".tb_csr_golden.u_dut", "v_line/m_vlsi_apb4_csr", "block", "901", "", "", "", "");
}
