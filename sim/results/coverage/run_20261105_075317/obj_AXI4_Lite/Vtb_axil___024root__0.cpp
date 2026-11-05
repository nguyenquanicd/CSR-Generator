// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axil.h for the primary calling header

#include "Vtb_axil__pch.h"

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__0(Vtb_axil___024root* vlSelf);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__1(Vtb_axil___024root* vlSelf);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2(Vtb_axil___024root* vlSelf);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__3(Vtb_axil___024root* vlSelf);

void Vtb_axil___024root___eval_initial(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        ++(vlSelf->__Vcoverage[2466]);
        ++(vlSelf->__Vcoverage[2464]);
        ++(vlSelf->__Vcoverage[2470]);
        ++(vlSelf->__Vcoverage[2468]);
        ++(vlSelf->__Vcoverage[2702]);
        ++(vlSelf->__Vcoverage[2747]);
        ++(vlSelf->__Vcoverage[2792]);
        ++(vlSelf->__Vcoverage[2837]);
        ++(vlSelf->__Vcoverage[2883]);
        ++(vlSelf->__Vcoverage[2934]);
        ++(vlSelf->__Vcoverage[2951]);
        if ((0U != vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_value)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2399, 0U, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_value);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_value = 0U;
        }
    }
    Vtb_axil___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_axil___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_axil___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_axil___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

void Vtb_axil___024root___eval_sample(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_sample\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axil___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_axil___024root___eval_ico(Vtb_axil___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_ico\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axil___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_axil___024root___timing_ready(Vtb_axil___024root* vlSelf);
void Vtb_axil___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axil___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_axil___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_axil___024root___timing_resume(Vtb_axil___024root* vlSelf);
void Vtb_axil___024root___act_comb__TOP__0(Vtb_axil___024root* vlSelf);

bool Vtb_axil___024root___eval_act(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_act\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_reg)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_reg__0)) 
                                                          << 4U) 
                                                         | (((((~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_axi)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0)) 
                                                              << 3U) 
                                                             | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_rst_n_axi__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tb_axil__DOT__i_clk_axi) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0 
            = vlSelfRef.tb_axil__DOT__i_clk_axi;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_rst_n_axi__0 
            = vlSelfRef.tb_axil__DOT__i_rst_n_axi;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_reg__0 
            = vlSelfRef.tb_axil__DOT__i_clk_reg;
    }
    Vtb_axil___024root___timing_ready(vlSelf);
    Vtb_axil___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axil___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_axil___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_axil___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_axil___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((0x000000000000001dULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_axil___024root___act_comb__TOP__0(vlSelf);
            }
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
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
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_axil___024root___eval_inact(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_inact\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_axil___024root___nba_sequent__TOP__0(Vtb_axil___024root* vlSelf);
void Vtb_axil___024root___nba_comb__TOP__0(Vtb_axil___024root* vlSelf);
void Vtb_axil___024root___nba_comb__TOP__1(Vtb_axil___024root* vlSelf);
void Vtb_axil___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_axil___024root___eval_nba(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_nba\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_axil___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_axil___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((0x000000000000001dULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_axil___024root___nba_comb__TOP__0(vlSelf);
            }
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
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
                }
            }
            if ((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_axil___024root___nba_comb__TOP__1(vlSelf);
            }
        }
        Vtb_axil___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_axil___024root___eval_obs(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_obs\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_axil___024root___eval_react(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_react\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_axil___024root___eval_postponed(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_postponed\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__0(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axil__DOT__i_clk_axi = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                             94);
        vlSelfRef.tb_axil__DOT__i_clk_axi = (1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_axi)));
        if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_axi)))) {
            ++(vlSelf->__Vcoverage[598]);
        }
        if (vlSelfRef.tb_axil__DOT__i_clk_axi) {
            ++(vlSelf->__Vcoverage[599]);
        }
        ++(vlSelf->__Vcoverage[600]);
    }
    ++(vlSelf->__Vcoverage[601]);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__1(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axil__DOT__i_clk_reg = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001b58ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                             98);
        vlSelfRef.tb_axil__DOT__i_clk_reg = (1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_reg)));
        if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_reg)))) {
            ++(vlSelf->__Vcoverage[602]);
        }
        if (vlSelfRef.tb_axil__DOT__i_clk_reg) {
            ++(vlSelf->__Vcoverage[603]);
        }
        ++(vlSelf->__Vcoverage[604]);
    }
    ++(vlSelf->__Vcoverage[605]);
    co_return;
}

void Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription);
void Vtb_axil___024root____VbeforeTrig_hde8656e6__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription);
void Vtb_axil___024root____VbeforeTrig_hc243f614__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_2__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_2__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_2__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_3__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_3__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_3__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_4__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_4__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_4__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_5__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_5__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_5__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_6__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_6__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_6__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_7__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_7__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_7__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_8__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_8__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_8__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_9__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_9__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_9__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_10__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_10__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_10__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_10__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_11__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_11__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_12__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_12__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_13__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_13__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_14__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_14__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_15__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_15__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_16__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_16__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_17__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_17__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_18__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_18__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_18__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_18__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_19__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_19__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_19__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_19__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_20__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_20__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_20__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_20__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_21__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_21__sync);
VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_21__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_21__sync);

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_axil__DOT__test_count;
    tb_axil__DOT__test_count = 0;
    IData/*31:0*/ tb_axil__DOT__cycles;
    tb_axil__DOT__cycles = 0;
    IData/*31:0*/ tb_axil__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_axil__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5;
    tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ tb_axil__DOT__unnamedblk1_7__DOT____Vrepeat6;
    tb_axil__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7;
    tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    IData/*31:0*/ tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8;
    tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_0;
    __Vtask_tb_axil__DOT__axi_read__address_0 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_1;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_1 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_2;
    __Vtask_tb_axil__DOT__axi_read__expected_data_2 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_3;
    __Vtask_tb_axil__DOT__axi_read__cycles_3 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_4;
    __Vtask_tb_axil__DOT__send_ar__address_4 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_5;
    __Vtask_tb_axil__DOT__send_ar__cycles_5 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_6;
    __Vtask_tb_axil__DOT__axi_write__address_6 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_7;
    __Vtask_tb_axil__DOT__axi_write__data_7 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_8;
    __Vtask_tb_axil__DOT__axi_write__strobe_8 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_9;
    __Vtask_tb_axil__DOT__axi_write__expected_9 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_16;
    __Vtask_tb_axil__DOT__wait_b__expected_16 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_17;
    __Vtask_tb_axil__DOT__wait_b__cycles_17 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_18;
    __Vtask_tb_axil__DOT__axi_read__address_18 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_19;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_19 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_20;
    __Vtask_tb_axil__DOT__axi_read__expected_data_20 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_21;
    __Vtask_tb_axil__DOT__axi_read__cycles_21 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_22;
    __Vtask_tb_axil__DOT__send_ar__address_22 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_23;
    __Vtask_tb_axil__DOT__send_ar__cycles_23 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_24;
    __Vtask_tb_axil__DOT__axi_read__address_24 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_25;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_25 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_26;
    __Vtask_tb_axil__DOT__axi_read__expected_data_26 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_27;
    __Vtask_tb_axil__DOT__axi_read__cycles_27 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_28;
    __Vtask_tb_axil__DOT__send_ar__address_28 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_29;
    __Vtask_tb_axil__DOT__send_ar__cycles_29 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_30;
    __Vtask_tb_axil__DOT__axi_read__address_30 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_31;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_31 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_32;
    __Vtask_tb_axil__DOT__axi_read__expected_data_32 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_33;
    __Vtask_tb_axil__DOT__axi_read__cycles_33 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_34;
    __Vtask_tb_axil__DOT__send_ar__address_34 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_35;
    __Vtask_tb_axil__DOT__send_ar__cycles_35 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_36;
    __Vtask_tb_axil__DOT__axi_write__address_36 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_37;
    __Vtask_tb_axil__DOT__axi_write__data_37 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_38;
    __Vtask_tb_axil__DOT__axi_write__strobe_38 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_39;
    __Vtask_tb_axil__DOT__axi_write__expected_39 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_46;
    __Vtask_tb_axil__DOT__wait_b__expected_46 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_47;
    __Vtask_tb_axil__DOT__wait_b__cycles_47 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_48;
    __Vtask_tb_axil__DOT__axi_read__address_48 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_49;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_49 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_50;
    __Vtask_tb_axil__DOT__axi_read__expected_data_50 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_51;
    __Vtask_tb_axil__DOT__axi_read__cycles_51 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_52;
    __Vtask_tb_axil__DOT__send_ar__address_52 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_53;
    __Vtask_tb_axil__DOT__send_ar__cycles_53 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_54;
    __Vtask_tb_axil__DOT__axi_write__address_54 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_55;
    __Vtask_tb_axil__DOT__axi_write__data_55 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_56;
    __Vtask_tb_axil__DOT__axi_write__strobe_56 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_57;
    __Vtask_tb_axil__DOT__axi_write__expected_57 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_64;
    __Vtask_tb_axil__DOT__wait_b__expected_64 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_65;
    __Vtask_tb_axil__DOT__wait_b__cycles_65 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_66;
    __Vtask_tb_axil__DOT__axi_read__address_66 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_67;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_67 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_68;
    __Vtask_tb_axil__DOT__axi_read__expected_data_68 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_69;
    __Vtask_tb_axil__DOT__axi_read__cycles_69 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_70;
    __Vtask_tb_axil__DOT__send_ar__address_70 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_71;
    __Vtask_tb_axil__DOT__send_ar__cycles_71 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_72;
    __Vtask_tb_axil__DOT__axi_write__address_72 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_73;
    __Vtask_tb_axil__DOT__axi_write__data_73 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_74;
    __Vtask_tb_axil__DOT__axi_write__strobe_74 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_75;
    __Vtask_tb_axil__DOT__axi_write__expected_75 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_82;
    __Vtask_tb_axil__DOT__wait_b__expected_82 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_83;
    __Vtask_tb_axil__DOT__wait_b__cycles_83 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_84;
    __Vtask_tb_axil__DOT__axi_read__address_84 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_85;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_85 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_86;
    __Vtask_tb_axil__DOT__axi_read__expected_data_86 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_87;
    __Vtask_tb_axil__DOT__axi_read__cycles_87 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_88;
    __Vtask_tb_axil__DOT__send_ar__address_88 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_89;
    __Vtask_tb_axil__DOT__send_ar__cycles_89 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_90;
    __Vtask_tb_axil__DOT__axi_read__address_90 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_91;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_91 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_92;
    __Vtask_tb_axil__DOT__axi_read__expected_data_92 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_93;
    __Vtask_tb_axil__DOT__axi_read__cycles_93 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_94;
    __Vtask_tb_axil__DOT__send_ar__address_94 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_95;
    __Vtask_tb_axil__DOT__send_ar__cycles_95 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_96;
    __Vtask_tb_axil__DOT__axi_write__address_96 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_97;
    __Vtask_tb_axil__DOT__axi_write__data_97 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_98;
    __Vtask_tb_axil__DOT__axi_write__strobe_98 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_99;
    __Vtask_tb_axil__DOT__axi_write__expected_99 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_106;
    __Vtask_tb_axil__DOT__wait_b__expected_106 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_107;
    __Vtask_tb_axil__DOT__wait_b__cycles_107 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_108;
    __Vtask_tb_axil__DOT__axi_read__address_108 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_109;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_109 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_110;
    __Vtask_tb_axil__DOT__axi_read__expected_data_110 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_111;
    __Vtask_tb_axil__DOT__axi_read__cycles_111 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_112;
    __Vtask_tb_axil__DOT__send_ar__address_112 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_113;
    __Vtask_tb_axil__DOT__send_ar__cycles_113 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_114;
    __Vtask_tb_axil__DOT__axi_read__address_114 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_115;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_115 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_116;
    __Vtask_tb_axil__DOT__axi_read__expected_data_116 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_117;
    __Vtask_tb_axil__DOT__axi_read__cycles_117 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_118;
    __Vtask_tb_axil__DOT__send_ar__address_118 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_119;
    __Vtask_tb_axil__DOT__send_ar__cycles_119 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_120;
    __Vtask_tb_axil__DOT__axi_write__address_120 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_121;
    __Vtask_tb_axil__DOT__axi_write__data_121 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_122;
    __Vtask_tb_axil__DOT__axi_write__strobe_122 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_123;
    __Vtask_tb_axil__DOT__axi_write__expected_123 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_130;
    __Vtask_tb_axil__DOT__wait_b__expected_130 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_131;
    __Vtask_tb_axil__DOT__wait_b__cycles_131 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_132;
    __Vtask_tb_axil__DOT__axi_read__address_132 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_133;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_133 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_134;
    __Vtask_tb_axil__DOT__axi_read__expected_data_134 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_135;
    __Vtask_tb_axil__DOT__axi_read__cycles_135 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_136;
    __Vtask_tb_axil__DOT__send_ar__address_136 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_137;
    __Vtask_tb_axil__DOT__send_ar__cycles_137 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_138;
    __Vtask_tb_axil__DOT__axi_read__address_138 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_139;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_139 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_140;
    __Vtask_tb_axil__DOT__axi_read__expected_data_140 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_141;
    __Vtask_tb_axil__DOT__axi_read__cycles_141 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_142;
    __Vtask_tb_axil__DOT__send_ar__address_142 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_143;
    __Vtask_tb_axil__DOT__send_ar__cycles_143 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_144;
    __Vtask_tb_axil__DOT__axi_write__address_144 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_145;
    __Vtask_tb_axil__DOT__axi_write__data_145 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_146;
    __Vtask_tb_axil__DOT__axi_write__strobe_146 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_147;
    __Vtask_tb_axil__DOT__axi_write__expected_147 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_154;
    __Vtask_tb_axil__DOT__wait_b__expected_154 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_155;
    __Vtask_tb_axil__DOT__wait_b__cycles_155 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_156;
    __Vtask_tb_axil__DOT__axi_read__address_156 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_157;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_157 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_158;
    __Vtask_tb_axil__DOT__axi_read__expected_data_158 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_159;
    __Vtask_tb_axil__DOT__axi_read__cycles_159 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_160;
    __Vtask_tb_axil__DOT__send_ar__address_160 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_161;
    __Vtask_tb_axil__DOT__send_ar__cycles_161 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_162;
    __Vtask_tb_axil__DOT__axi_write__address_162 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_163;
    __Vtask_tb_axil__DOT__axi_write__data_163 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_164;
    __Vtask_tb_axil__DOT__axi_write__strobe_164 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_165;
    __Vtask_tb_axil__DOT__axi_write__expected_165 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_172;
    __Vtask_tb_axil__DOT__wait_b__expected_172 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_173;
    __Vtask_tb_axil__DOT__wait_b__cycles_173 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_174;
    __Vtask_tb_axil__DOT__axi_write__address_174 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_175;
    __Vtask_tb_axil__DOT__axi_write__data_175 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_176;
    __Vtask_tb_axil__DOT__axi_write__strobe_176 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_177;
    __Vtask_tb_axil__DOT__axi_write__expected_177 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_184;
    __Vtask_tb_axil__DOT__wait_b__expected_184 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_185;
    __Vtask_tb_axil__DOT__wait_b__cycles_185 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_186;
    __Vtask_tb_axil__DOT__axi_read__address_186 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_187;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_187 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_188;
    __Vtask_tb_axil__DOT__axi_read__expected_data_188 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_189;
    __Vtask_tb_axil__DOT__axi_read__cycles_189 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_190;
    __Vtask_tb_axil__DOT__send_ar__address_190 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_191;
    __Vtask_tb_axil__DOT__send_ar__cycles_191 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_192;
    __Vtask_tb_axil__DOT__axi_write__address_192 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_193;
    __Vtask_tb_axil__DOT__axi_write__data_193 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_194;
    __Vtask_tb_axil__DOT__axi_write__strobe_194 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_195;
    __Vtask_tb_axil__DOT__axi_write__expected_195 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_202;
    __Vtask_tb_axil__DOT__wait_b__expected_202 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_203;
    __Vtask_tb_axil__DOT__wait_b__cycles_203 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_204;
    __Vtask_tb_axil__DOT__axi_read__address_204 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_205;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_205 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_206;
    __Vtask_tb_axil__DOT__axi_read__expected_data_206 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_207;
    __Vtask_tb_axil__DOT__axi_read__cycles_207 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_208;
    __Vtask_tb_axil__DOT__send_ar__address_208 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_209;
    __Vtask_tb_axil__DOT__send_ar__cycles_209 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210;
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__check_full_queued_limit__index_211;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_211 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_212;
    __Vtask_tb_axil__DOT__send_ar__address_212 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_213;
    __Vtask_tb_axil__DOT__send_ar__cycles_213 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_214;
    __Vtask_tb_axil__DOT__send_ar__address_214 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_215;
    __Vtask_tb_axil__DOT__send_ar__cycles_215 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__coverage_burst____VlefExpr_0_216;
    __Vtask_tb_axil__DOT__coverage_burst____VlefExpr_0_216 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__coverage_burst__q_217;
    __Vtask_tb_axil__DOT__coverage_burst__q_217 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__coverage_burst__pick_218;
    __Vtask_tb_axil__DOT__coverage_burst__pick_218 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__coverage_burst__addr_219;
    __Vtask_tb_axil__DOT__coverage_burst__addr_219 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__coverage_burst__data_220;
    __Vtask_tb_axil__DOT__coverage_burst__data_220 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__coverage_burst__strb_221;
    __Vtask_tb_axil__DOT__coverage_burst__strb_221 = 0;
    VlUnpacked<SData/*15:0*/, 7> __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[__Vi0] = 0;
    }
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_223;
    __Vtask_tb_axil__DOT__axi_write__address_223 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_224;
    __Vtask_tb_axil__DOT__axi_write__data_224 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_225;
    __Vtask_tb_axil__DOT__axi_write__strobe_225 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_226;
    __Vtask_tb_axil__DOT__axi_write__expected_226 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_233;
    __Vtask_tb_axil__DOT__wait_b__expected_233 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_234;
    __Vtask_tb_axil__DOT__wait_b__cycles_234 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_235;
    __Vtask_tb_axil__DOT__axi_write__address_235 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_236;
    __Vtask_tb_axil__DOT__axi_write__data_236 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_237;
    __Vtask_tb_axil__DOT__axi_write__strobe_237 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_238;
    __Vtask_tb_axil__DOT__axi_write__expected_238 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_245;
    __Vtask_tb_axil__DOT__wait_b__expected_245 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_246;
    __Vtask_tb_axil__DOT__wait_b__cycles_246 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_247;
    __Vtask_tb_axil__DOT__axi_write__address_247 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_248;
    __Vtask_tb_axil__DOT__axi_write__data_248 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_249;
    __Vtask_tb_axil__DOT__axi_write__strobe_249 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_250;
    __Vtask_tb_axil__DOT__axi_write__expected_250 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_257;
    __Vtask_tb_axil__DOT__wait_b__expected_257 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_258;
    __Vtask_tb_axil__DOT__wait_b__cycles_258 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_259;
    __Vtask_tb_axil__DOT__axi_write__address_259 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_260;
    __Vtask_tb_axil__DOT__axi_write__data_260 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_261;
    __Vtask_tb_axil__DOT__axi_write__strobe_261 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_262;
    __Vtask_tb_axil__DOT__axi_write__expected_262 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_269;
    __Vtask_tb_axil__DOT__wait_b__expected_269 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_270;
    __Vtask_tb_axil__DOT__wait_b__cycles_270 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read_response__address_271;
    __Vtask_tb_axil__DOT__axi_read_response__address_271 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read_response__expected_resp_272;
    __Vtask_tb_axil__DOT__axi_read_response__expected_resp_272 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273;
    __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_274;
    __Vtask_tb_axil__DOT__send_ar__address_274 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_275;
    __Vtask_tb_axil__DOT__send_ar__cycles_275 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__cov_toggle_inputs__cov_i_276;
    __Vtask_tb_axil__DOT__cov_toggle_inputs__cov_i_276 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_277;
    __Vtask_tb_axil__DOT__axi_read__address_277 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_278;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_278 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_279;
    __Vtask_tb_axil__DOT__axi_read__expected_data_279 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_280;
    __Vtask_tb_axil__DOT__axi_read__cycles_280 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_281;
    __Vtask_tb_axil__DOT__send_ar__address_281 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_282;
    __Vtask_tb_axil__DOT__send_ar__cycles_282 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_283;
    __Vtask_tb_axil__DOT__axi_write__address_283 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_284;
    __Vtask_tb_axil__DOT__axi_write__data_284 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_285;
    __Vtask_tb_axil__DOT__axi_write__strobe_285 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_286;
    __Vtask_tb_axil__DOT__axi_write__expected_286 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_293;
    __Vtask_tb_axil__DOT__wait_b__expected_293 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_294;
    __Vtask_tb_axil__DOT__wait_b__cycles_294 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_295;
    __Vtask_tb_axil__DOT__axi_read__address_295 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_296;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_296 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_297;
    __Vtask_tb_axil__DOT__axi_read__expected_data_297 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_298;
    __Vtask_tb_axil__DOT__axi_read__cycles_298 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_299;
    __Vtask_tb_axil__DOT__send_ar__address_299 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_300;
    __Vtask_tb_axil__DOT__send_ar__cycles_300 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_301;
    __Vtask_tb_axil__DOT__axi_write__address_301 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_302;
    __Vtask_tb_axil__DOT__axi_write__data_302 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_303;
    __Vtask_tb_axil__DOT__axi_write__strobe_303 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_304;
    __Vtask_tb_axil__DOT__axi_write__expected_304 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_311;
    __Vtask_tb_axil__DOT__wait_b__expected_311 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_312;
    __Vtask_tb_axil__DOT__wait_b__cycles_312 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_313;
    __Vtask_tb_axil__DOT__axi_read__address_313 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_314;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_314 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_315;
    __Vtask_tb_axil__DOT__axi_read__expected_data_315 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_316;
    __Vtask_tb_axil__DOT__axi_read__cycles_316 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_317;
    __Vtask_tb_axil__DOT__send_ar__address_317 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_318;
    __Vtask_tb_axil__DOT__send_ar__cycles_318 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_319;
    __Vtask_tb_axil__DOT__axi_read__address_319 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_320;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_320 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_321;
    __Vtask_tb_axil__DOT__axi_read__expected_data_321 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_322;
    __Vtask_tb_axil__DOT__axi_read__cycles_322 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_323;
    __Vtask_tb_axil__DOT__send_ar__address_323 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_324;
    __Vtask_tb_axil__DOT__send_ar__cycles_324 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_325;
    __Vtask_tb_axil__DOT__axi_write__address_325 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_326;
    __Vtask_tb_axil__DOT__axi_write__data_326 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_327;
    __Vtask_tb_axil__DOT__axi_write__strobe_327 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_328;
    __Vtask_tb_axil__DOT__axi_write__expected_328 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_335;
    __Vtask_tb_axil__DOT__wait_b__expected_335 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_336;
    __Vtask_tb_axil__DOT__wait_b__cycles_336 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_337;
    __Vtask_tb_axil__DOT__axi_read__address_337 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_338;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_338 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_339;
    __Vtask_tb_axil__DOT__axi_read__expected_data_339 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_340;
    __Vtask_tb_axil__DOT__axi_read__cycles_340 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_341;
    __Vtask_tb_axil__DOT__send_ar__address_341 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_342;
    __Vtask_tb_axil__DOT__send_ar__cycles_342 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_343;
    __Vtask_tb_axil__DOT__axi_write__address_343 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_344;
    __Vtask_tb_axil__DOT__axi_write__data_344 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_345;
    __Vtask_tb_axil__DOT__axi_write__strobe_345 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_346;
    __Vtask_tb_axil__DOT__axi_write__expected_346 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_353;
    __Vtask_tb_axil__DOT__wait_b__expected_353 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_354;
    __Vtask_tb_axil__DOT__wait_b__cycles_354 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_355;
    __Vtask_tb_axil__DOT__axi_write__address_355 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_356;
    __Vtask_tb_axil__DOT__axi_write__data_356 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_357;
    __Vtask_tb_axil__DOT__axi_write__strobe_357 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_358;
    __Vtask_tb_axil__DOT__axi_write__expected_358 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_365;
    __Vtask_tb_axil__DOT__wait_b__expected_365 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_366;
    __Vtask_tb_axil__DOT__wait_b__cycles_366 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_367;
    __Vtask_tb_axil__DOT__axi_write__address_367 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_368;
    __Vtask_tb_axil__DOT__axi_write__data_368 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_369;
    __Vtask_tb_axil__DOT__axi_write__strobe_369 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_370;
    __Vtask_tb_axil__DOT__axi_write__expected_370 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_377;
    __Vtask_tb_axil__DOT__wait_b__expected_377 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_378;
    __Vtask_tb_axil__DOT__wait_b__cycles_378 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_379;
    __Vtask_tb_axil__DOT__axi_read__address_379 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_380;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_380 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_381;
    __Vtask_tb_axil__DOT__axi_read__expected_data_381 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_382;
    __Vtask_tb_axil__DOT__axi_read__cycles_382 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_383;
    __Vtask_tb_axil__DOT__send_ar__address_383 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_384;
    __Vtask_tb_axil__DOT__send_ar__cycles_384 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_385;
    __Vtask_tb_axil__DOT__axi_write__address_385 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_386;
    __Vtask_tb_axil__DOT__axi_write__data_386 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_387;
    __Vtask_tb_axil__DOT__axi_write__strobe_387 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_388;
    __Vtask_tb_axil__DOT__axi_write__expected_388 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_395;
    __Vtask_tb_axil__DOT__wait_b__expected_395 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_396;
    __Vtask_tb_axil__DOT__wait_b__cycles_396 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_397;
    __Vtask_tb_axil__DOT__axi_read__address_397 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_398;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_398 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_399;
    __Vtask_tb_axil__DOT__axi_read__expected_data_399 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_400;
    __Vtask_tb_axil__DOT__axi_read__cycles_400 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_401;
    __Vtask_tb_axil__DOT__send_ar__address_401 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_402;
    __Vtask_tb_axil__DOT__send_ar__cycles_402 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_403;
    __Vtask_tb_axil__DOT__send_ar__address_403 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_404;
    __Vtask_tb_axil__DOT__send_ar__cycles_404 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_405;
    __Vtask_tb_axil__DOT__wait_b__expected_405 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_406;
    __Vtask_tb_axil__DOT__wait_b__cycles_406 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_407;
    __Vtask_tb_axil__DOT__axi_read__address_407 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_408;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_408 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_409;
    __Vtask_tb_axil__DOT__axi_read__expected_data_409 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_410;
    __Vtask_tb_axil__DOT__axi_read__cycles_410 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_411;
    __Vtask_tb_axil__DOT__send_ar__address_411 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_412;
    __Vtask_tb_axil__DOT__send_ar__cycles_412 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413;
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__check_full_queued_limit__index_414;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_414 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_415;
    __Vtask_tb_axil__DOT__send_ar__address_415 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_416;
    __Vtask_tb_axil__DOT__send_ar__cycles_416 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_417;
    __Vtask_tb_axil__DOT__send_ar__address_417 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_418;
    __Vtask_tb_axil__DOT__send_ar__cycles_418 = 0;
    // Body
    vlSelfRef.tb_axil__DOT__i_rst_n_axi = 0U;
    vlSelfRef.tb_axil__DOT__i_rst_n_reg = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_awprot = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_wdata = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_araddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_arprot = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_clear_key_data = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_start = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_fault = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_overflow = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_done = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_done = 0U;
    tb_axil__DOT__test_count = 0U;
    tb_axil__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             632);
        tb_axil__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_axil__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[756]);
    }
    vlSelfRef.tb_axil__DOT__i_rst_n_axi = 1U;
    tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_axil___024root____VbeforeTrig_hde8656e6__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_reg)");
        co_await vlSelfRef.__VtrigSched_hde8656e6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             634);
        tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[757]);
    }
    vlSelfRef.tb_axil__DOT__i_rst_n_reg = 1U;
    tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             636);
        tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[758]);
    }
    vlSelfRef.tb_axil__DOT__cov_i_engine_events = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_port_0_event_count = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_fault = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_fault = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_pending = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_pending = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_overflow = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_overflow = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_done = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_done = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_port_1_event_count = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_fault = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_fault = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_pending = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_pending = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_overflow = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_overflow = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_done = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_done = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_port_2_event_count = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_fault = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_fault = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_pending = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_pending = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_overflow = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_overflow = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_done = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_done = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_error = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_pending = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_overflow = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_match = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment = 0U;
    vlSelfRef.tb_axil__DOT__cov_i_engine_events = 0x12U;
    vlSelfRef.tb_axil__DOT__cov_i_port_0_event_count = 0x34U;
    vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count = 0x7856U;
    __Vtask_tb_axil__DOT__axi_read__expected_data_2 = 0x12000000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_1 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_0 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_3 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_4 = __Vtask_tb_axil__DOT__axi_read__address_0;
    __Vtask_tb_axil__DOT__send_ar__cycles_5 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_4;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_5 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_5))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_5 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__send_ar__cycles_5);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_5))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_5)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_4));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_3 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_3))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_3 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_3);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_3))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_3)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_0));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_1))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_1);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_1)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_2))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_2);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_1)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_2))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_2)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_1))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_9 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_8 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_7 = 0x00b80000U;
    __Vtask_tb_axil__DOT__axi_write__address_6 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_12 
        = __Vtask_tb_axil__DOT__axi_write__strobe_8;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_11 
        = __Vtask_tb_axil__DOT__axi_write__data_7;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_10 
        = __Vtask_tb_axil__DOT__axi_write__address_6;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_13 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15 = 0;
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(vlSelf, __Vfork_1__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(vlSelf, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_16 = __Vtask_tb_axil__DOT__axi_write__expected_9;
    __Vtask_tb_axil__DOT__wait_b__cycles_17 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_17 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_17))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_17 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__wait_b__cycles_17);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_17))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_17)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_16))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_16);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_20 = 0x12b80000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_19 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_18 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_21 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_22 = __Vtask_tb_axil__DOT__axi_read__address_18;
    __Vtask_tb_axil__DOT__send_ar__cycles_23 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_22;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_23 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_23))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_23 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_23);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_23))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_23)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_22));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_21 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_21))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_21 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_21);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_21))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_21)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_18));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_19))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_19);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_19)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_20))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_20);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_19)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_20))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_20)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_19))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         544);
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_start = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_fault = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_overflow = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_done = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_done = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         555);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         556);
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_start = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow = 0U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_done = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_data_26 = 0x12bf8000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_25 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_24 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_27 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_28 = __Vtask_tb_axil__DOT__axi_read__address_24;
    __Vtask_tb_axil__DOT__send_ar__cycles_29 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_28;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_29 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_29))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_29 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_29);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_29))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_29)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_28));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_27 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_27))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_27 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_27);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_27))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_27)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_24));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_25))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_25);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_25)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_26))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_26);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_25)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_26))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_26)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_25))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_32 = 0x12bf0000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_31 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_30 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_33 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_34 = __Vtask_tb_axil__DOT__axi_read__address_30;
    __Vtask_tb_axil__DOT__send_ar__cycles_35 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_34;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_35 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_35))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_35 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_35);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_35))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_35)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_34));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_33 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_33))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_33 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_33);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_33))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_33)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_30));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_31))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_31);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_31)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_32))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_32);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_31)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_32))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_32)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_31))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_39 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_38 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_37 = 0U;
    __Vtask_tb_axil__DOT__axi_write__address_36 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_42 
        = __Vtask_tb_axil__DOT__axi_write__strobe_38;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_41 
        = __Vtask_tb_axil__DOT__axi_write__data_37;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_40 
        = __Vtask_tb_axil__DOT__axi_write__address_36;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_43 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45 = 0;
    {
        VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(vlSelf, __Vfork_2__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_2__1(vlSelf, __Vfork_2__sync);
        co_await __Vfork_2__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_46 = __Vtask_tb_axil__DOT__axi_write__expected_39;
    __Vtask_tb_axil__DOT__wait_b__cycles_47 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_47 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_47))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_47 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__wait_b__cycles_47);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_47))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_47)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_46))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_46);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_50 = 0x12040000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_49 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_48 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_51 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_52 = __Vtask_tb_axil__DOT__axi_read__address_48;
    __Vtask_tb_axil__DOT__send_ar__cycles_53 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_52;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_53 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_53))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_53 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_53);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_53))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_53)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_52));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_51 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_51))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_51 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_51);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_51))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_51)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_48));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_49))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_49);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_49)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_50))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_50);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_49)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_50))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_50)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_49))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_57 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_56 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_55 = 0x00040000U;
    __Vtask_tb_axil__DOT__axi_write__address_54 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_60 
        = __Vtask_tb_axil__DOT__axi_write__strobe_56;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_59 
        = __Vtask_tb_axil__DOT__axi_write__data_55;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_58 
        = __Vtask_tb_axil__DOT__axi_write__address_54;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_61 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63 = 0;
    {
        VlForkSync __Vfork_3__sync;
        __Vfork_3__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(vlSelf, __Vfork_3__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_3__1(vlSelf, __Vfork_3__sync);
        co_await __Vfork_3__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_64 = __Vtask_tb_axil__DOT__axi_write__expected_57;
    __Vtask_tb_axil__DOT__wait_b__cycles_65 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_65 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_65))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_65 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__wait_b__cycles_65);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_65))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_65)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_64))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_64);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_68 = 0x12000000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_67 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_66 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_69 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_70 = __Vtask_tb_axil__DOT__axi_read__address_66;
    __Vtask_tb_axil__DOT__send_ar__cycles_71 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_70;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_71 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_71))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_71 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_71);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_71))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_71)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_70));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_69 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_69))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_69 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_69);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_69))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_69)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_66));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_67))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_67);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_67)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_68))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_68);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_67)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_68))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_68)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_67))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         569);
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         572);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         573);
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending = 0U;
    __Vtask_tb_axil__DOT__axi_write__expected_75 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_74 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_73 = 0x00020000U;
    __Vtask_tb_axil__DOT__axi_write__address_72 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_78 
        = __Vtask_tb_axil__DOT__axi_write__strobe_74;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_77 
        = __Vtask_tb_axil__DOT__axi_write__data_73;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_76 
        = __Vtask_tb_axil__DOT__axi_write__address_72;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_79 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81 = 0;
    {
        VlForkSync __Vfork_4__sync;
        __Vfork_4__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(vlSelf, __Vfork_4__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_4__1(vlSelf, __Vfork_4__sync);
        co_await __Vfork_4__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_82 = __Vtask_tb_axil__DOT__axi_write__expected_75;
    __Vtask_tb_axil__DOT__wait_b__cycles_83 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_83 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_83))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_83 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__wait_b__cycles_83);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_83))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_83)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_82))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_82);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_86 = 0x12020000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_85 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_84 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_87 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_88 = __Vtask_tb_axil__DOT__axi_read__address_84;
    __Vtask_tb_axil__DOT__send_ar__cycles_89 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_88;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_89 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_89))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_89 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_89);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_89))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_89)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_88));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_87 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_87))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_87 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_87);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_87))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_87)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_84));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_85))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_85);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_85)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_86))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_86);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_85)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_86))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_86)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_85))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_92 = 0x34000000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_91 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_90 = 0x0100U;
    __Vtask_tb_axil__DOT__axi_read__cycles_93 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_94 = __Vtask_tb_axil__DOT__axi_read__address_90;
    __Vtask_tb_axil__DOT__send_ar__cycles_95 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_94;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_95 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_95))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_95 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_95);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_95))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_95)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_94));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_93 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_93))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_93 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_93);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_93))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_93)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_90));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_91))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_91);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_91)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_92))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_92);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_91)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_92))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_92)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_91))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_99 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_98 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_97 = 0x00a80000U;
    __Vtask_tb_axil__DOT__axi_write__address_96 = 0x0100U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_102 
        = __Vtask_tb_axil__DOT__axi_write__strobe_98;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_101 
        = __Vtask_tb_axil__DOT__axi_write__data_97;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_100 
        = __Vtask_tb_axil__DOT__axi_write__address_96;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_103 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105 = 0;
    {
        VlForkSync __Vfork_5__sync;
        __Vfork_5__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(vlSelf, __Vfork_5__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_5__1(vlSelf, __Vfork_5__sync);
        co_await __Vfork_5__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_106 = __Vtask_tb_axil__DOT__axi_write__expected_99;
    __Vtask_tb_axil__DOT__wait_b__cycles_107 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_107 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_107))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_107 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_107);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_107))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_107)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_106))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_106);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_110 = 0x34a80000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_109 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_108 = 0x0100U;
    __Vtask_tb_axil__DOT__axi_read__cycles_111 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_112 = __Vtask_tb_axil__DOT__axi_read__address_108;
    __Vtask_tb_axil__DOT__send_ar__cycles_113 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_112;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_113 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_113))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_113 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_113);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_113))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_113)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_112));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_111 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_111))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_111 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_111);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_111))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_111)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_108));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_109))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_109);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_109)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_110))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_110);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_109)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_110))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_110)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_109))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_116 = 0x56000000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_115 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_114 = 0x0200U;
    __Vtask_tb_axil__DOT__axi_read__cycles_117 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_118 = __Vtask_tb_axil__DOT__axi_read__address_114;
    __Vtask_tb_axil__DOT__send_ar__cycles_119 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_118;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_119 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_119))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_119 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_119);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_119))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_119)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_118));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_117 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_117))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_117 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_117);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_117))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_117)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_114));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_115))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_115);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_115)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_116))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_116);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_115)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_116))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_116)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_115))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_123 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_122 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_121 = 0x00580000U;
    __Vtask_tb_axil__DOT__axi_write__address_120 = 0x0200U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_126 
        = __Vtask_tb_axil__DOT__axi_write__strobe_122;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_125 
        = __Vtask_tb_axil__DOT__axi_write__data_121;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_124 
        = __Vtask_tb_axil__DOT__axi_write__address_120;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_127 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129 = 0;
    {
        VlForkSync __Vfork_6__sync;
        __Vfork_6__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(vlSelf, __Vfork_6__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_6__1(vlSelf, __Vfork_6__sync);
        co_await __Vfork_6__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_130 = __Vtask_tb_axil__DOT__axi_write__expected_123;
    __Vtask_tb_axil__DOT__wait_b__cycles_131 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_131 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_131))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_131 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_131);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_131))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_131)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_130))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_130);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_134 = 0x56580000U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_133 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_132 = 0x0200U;
    __Vtask_tb_axil__DOT__axi_read__cycles_135 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_136 = __Vtask_tb_axil__DOT__axi_read__address_132;
    __Vtask_tb_axil__DOT__send_ar__cycles_137 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_136;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_137 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_137))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_137 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_137);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_137))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_137)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_136));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_135 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_135))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_135 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_135);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_135))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_135)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_132));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_133))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_133);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_133)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_134))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_134);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_133)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_134))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_134)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_133))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_140 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_139 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_138 = 0x0400U;
    __Vtask_tb_axil__DOT__axi_read__cycles_141 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_142 = __Vtask_tb_axil__DOT__axi_read__address_138;
    __Vtask_tb_axil__DOT__send_ar__cycles_143 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_142;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_143 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_143))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_143 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_143);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_143))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_143)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_142));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_141 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_141))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_141 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_141);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_141))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_141)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_138));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_139))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_139);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_139)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_140))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_140);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_139)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_140))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_140)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_139))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_147 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_146 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_145 = 0xa1b2c3d4U;
    __Vtask_tb_axil__DOT__axi_write__address_144 = 0x0400U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_150 
        = __Vtask_tb_axil__DOT__axi_write__strobe_146;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_149 
        = __Vtask_tb_axil__DOT__axi_write__data_145;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_148 
        = __Vtask_tb_axil__DOT__axi_write__address_144;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_151 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153 = 0;
    {
        VlForkSync __Vfork_7__sync;
        __Vfork_7__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(vlSelf, __Vfork_7__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_7__1(vlSelf, __Vfork_7__sync);
        co_await __Vfork_7__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_154 = __Vtask_tb_axil__DOT__axi_write__expected_147;
    __Vtask_tb_axil__DOT__wait_b__cycles_155 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_155 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_155))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_155 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_155);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_155))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_155)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_154))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_154);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    if (VL_UNLIKELY(((0xa1b2c3d4U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:587: Assertion failed in %m: example WO field did not store the key\n",3, 'M',vlSymsp->name(),"tb_axil.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 587, "", false);
    } else {
        ++(vlSelf->__Vcoverage[688]);
    }
    __Vtask_tb_axil__DOT__axi_read__expected_data_158 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_157 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_156 = 0x0400U;
    __Vtask_tb_axil__DOT__axi_read__cycles_159 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_160 = __Vtask_tb_axil__DOT__axi_read__address_156;
    __Vtask_tb_axil__DOT__send_ar__cycles_161 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_160;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_161 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_161))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_161 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_161);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_161))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_161)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_160));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_159 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_159))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_159 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_159);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_159))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_159)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_156));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_157))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_157);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_157)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_158))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_158);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_157)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_158))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_158)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_157))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    vlSelfRef.tb_axil__DOT__i_hw_clear_key_data = 1U;
    __Vtask_tb_axil__DOT__axi_write__expected_165 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_164 = 1U;
    __Vtask_tb_axil__DOT__axi_write__data_163 = 0xffffffffU;
    __Vtask_tb_axil__DOT__axi_write__address_162 = 0x0400U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_168 
        = __Vtask_tb_axil__DOT__axi_write__strobe_164;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_167 
        = __Vtask_tb_axil__DOT__axi_write__data_163;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_166 
        = __Vtask_tb_axil__DOT__axi_write__address_162;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_169 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171 = 0;
    {
        VlForkSync __Vfork_8__sync;
        __Vfork_8__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(vlSelf, __Vfork_8__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_8__1(vlSelf, __Vfork_8__sync);
        co_await __Vfork_8__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_172 = __Vtask_tb_axil__DOT__axi_write__expected_165;
    __Vtask_tb_axil__DOT__wait_b__cycles_173 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_173 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_173))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_173 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_173);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_173))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_173)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_172))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_172);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    vlSelfRef.tb_axil__DOT__i_hw_clear_key_data = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:592: Assertion failed in %m: example WO clear did not override write\n",3, 'M',vlSymsp->name(),"tb_axil.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 592, "", false);
    } else {
        ++(vlSelf->__Vcoverage[689]);
    }
    __Vtask_tb_axil__DOT__axi_write__expected_177 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_176 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_175 = 0x55667788U;
    __Vtask_tb_axil__DOT__axi_write__address_174 = 0x0400U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_180 
        = __Vtask_tb_axil__DOT__axi_write__strobe_176;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_179 
        = __Vtask_tb_axil__DOT__axi_write__data_175;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_178 
        = __Vtask_tb_axil__DOT__axi_write__address_174;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_181 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183 = 0;
    {
        VlForkSync __Vfork_9__sync;
        __Vfork_9__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(vlSelf, __Vfork_9__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_9__1(vlSelf, __Vfork_9__sync);
        co_await __Vfork_9__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                      312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_184 = __Vtask_tb_axil__DOT__axi_write__expected_177;
    __Vtask_tb_axil__DOT__wait_b__cycles_185 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_185 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_185))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_185 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_185);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_185))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_185)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_184))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_184);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    if (VL_UNLIKELY(((0x55667788U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:594: Assertion failed in %m: example WO write after clear failed\n",3, 'M',vlSymsp->name(),"tb_axil.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 594, "", false);
    } else {
        ++(vlSelf->__Vcoverage[690]);
    }
    __Vtask_tb_axil__DOT__axi_read__expected_data_188 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_187 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_186 = 0x0400U;
    __Vtask_tb_axil__DOT__axi_read__cycles_189 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_190 = __Vtask_tb_axil__DOT__axi_read__address_186;
    __Vtask_tb_axil__DOT__send_ar__cycles_191 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_190;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_191 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_191))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_191 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_191);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_191))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_191)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_190));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_189 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_189))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_189 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_189);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_189))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_189)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_186));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_187))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_187);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_187)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_188))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_188);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_187)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_188))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_188)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_187))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_195 = 2U;
    __Vtask_tb_axil__DOT__axi_write__strobe_194 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_193 = 0x11111111U;
    __Vtask_tb_axil__DOT__axi_write__address_192 = 2U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_198 
        = __Vtask_tb_axil__DOT__axi_write__strobe_194;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_197 
        = __Vtask_tb_axil__DOT__axi_write__data_193;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_196 
        = __Vtask_tb_axil__DOT__axi_write__address_192;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_199 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201 = 0;
    {
        VlForkSync __Vfork_10__sync;
        __Vfork_10__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_10__0(vlSelf, __Vfork_10__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_10__1(vlSelf, __Vfork_10__sync);
        co_await __Vfork_10__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                       312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_202 = __Vtask_tb_axil__DOT__axi_write__expected_195;
    __Vtask_tb_axil__DOT__wait_b__cycles_203 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_203 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_203))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_203 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_203);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_203))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_203)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_202))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_202);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_206 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_205 = 3U;
    __Vtask_tb_axil__DOT__axi_read__address_204 = 0x0300U;
    __Vtask_tb_axil__DOT__axi_read__cycles_207 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_208 = __Vtask_tb_axil__DOT__axi_read__address_204;
    __Vtask_tb_axil__DOT__send_ar__cycles_209 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_208;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_209 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_209))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_209 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_209);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_209))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_209)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_208));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_207 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_207))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_207 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_207);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_207))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_207)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_204));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_205))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_205);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_205)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_206))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_206);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_205)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_206))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_206)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_205))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 = 0;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_211 = 0;
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    __Vtask_tb_axil__DOT__send_ar__address_212 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_213 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_212;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_213 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_213))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_213 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_213);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_213))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_213)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_212));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__send_ar__address_214 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_215 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_214;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_215 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_215))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_215 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_215);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_215))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_215)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_214));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         405);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             410);
        if (VL_UNLIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:411: Assertion failed in %m: QUEUED mode exceeded configured read depth\n",3, 'M',vlSymsp->name(),"tb_axil.check_full_queued_limit", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 411, "", false);
        } else {
            ++(vlSelf->__Vcoverage[673]);
        }
        __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210);
        ++(vlSelf->__Vcoverage[674]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         414);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_211 = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_axil__DOT__check_full_queued_limit__index_211)) {
        __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210))) {
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 420);
            __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 
                = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210);
            if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                 & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210))) {
                ++(vlSelf->__Vcoverage[675]);
            }
            if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210)) {
                ++(vlSelf->__Vcoverage[676]);
            }
            if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[677]);
            }
            ++(vlSelf->__Vcoverage[678]);
        }
        if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
            ++(vlSelf->__Vcoverage[679]);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:423: Assertion failed in %m: queued response timeout\n",3, 'M',vlSymsp->name(),"tb_axil.check_full_queued_limit", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 423, "", false);
        }
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             424);
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[680]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[681]);
        }
        __Vtask_tb_axil__DOT__check_full_queued_limit__index_211 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__index_211);
        ++(vlSelf->__Vcoverage[682]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         426);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: independent read depth limit\n",0);
    ++(vlSelf->__Vcoverage[683]);
    ++(vlSelf->__Vcoverage[685]);
    __Vtask_tb_axil__DOT__coverage_burst__q_217 = 0;
    __Vtask_tb_axil__DOT__coverage_burst__pick_218 = 0;
    __Vtask_tb_axil__DOT__coverage_burst__addr_219 = 0;
    __Vtask_tb_axil__DOT__coverage_burst__data_220 = 0;
    __Vtask_tb_axil__DOT__coverage_burst__strb_221 = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[__Vi0] = 0;
    }
    __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[0U] = 0U;
    __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[1U] = 0x0100U;
    __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[2U] = 0x0104U;
    __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[3U] = 0x0108U;
    __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[4U] = 0x0200U;
    __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[5U] = 0x0204U;
    __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222[6U] = 0x0400U;
    __Vtask_tb_axil__DOT__coverage_burst__q_217 = 0U;
    while (VL_GTS_III(32, 0x00000060U, __Vtask_tb_axil__DOT__coverage_burst__q_217)) {
        __Vtask_tb_axil__DOT__coverage_burst__data_220 
            = VL_RANDOM_I();
        __Vtask_tb_axil__DOT__coverage_burst____VlefExpr_0_216 
            = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
        __Vtask_tb_axil__DOT__coverage_burst__strb_221 
            = (0x0000000fU & __Vtask_tb_axil__DOT__coverage_burst____VlefExpr_0_216);
        if ((0U == VL_MODDIVS_III(32, __Vtask_tb_axil__DOT__coverage_burst__q_217, (IData)(4U)))) {
            __Vtask_tb_axil__DOT__coverage_burst__pick_218 
                = VL_URANDOM_RANGE_I(0U, 6U);
            __Vtask_tb_axil__DOT__coverage_burst__addr_219 
                = ((6U >= (7U & __Vtask_tb_axil__DOT__coverage_burst__pick_218))
                    ? __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222
                   [(7U & __Vtask_tb_axil__DOT__coverage_burst__pick_218)]
                    : 0U);
            __Vtask_tb_axil__DOT__axi_write__expected_226 = 0U;
            __Vtask_tb_axil__DOT__axi_write__strobe_225 
                = __Vtask_tb_axil__DOT__coverage_burst__strb_221;
            __Vtask_tb_axil__DOT__axi_write__data_224 
                = __Vtask_tb_axil__DOT__coverage_burst__data_220;
            __Vtask_tb_axil__DOT__axi_write__address_223 
                = __Vtask_tb_axil__DOT__coverage_burst__addr_219;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_229 
                = __Vtask_tb_axil__DOT__axi_write__strobe_225;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_228 
                = __Vtask_tb_axil__DOT__axi_write__data_224;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_227 
                = __Vtask_tb_axil__DOT__axi_write__address_223;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_230 = 0U;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_231 = 0;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_232 = 0;
            {
                VlForkSync __Vfork_11__sync;
                __Vfork_11__sync.init(2U, nullptr);
                Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__0(vlSelf, __Vfork_11__sync);
                Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__1(vlSelf, __Vfork_11__sync);
                co_await __Vfork_11__sync.join(nullptr, 
                                               "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                               312);
            }
            ++(vlSelf->__Vcoverage[649]);
            __Vtask_tb_axil__DOT__wait_b__expected_233 
                = __Vtask_tb_axil__DOT__axi_write__expected_226;
            __Vtask_tb_axil__DOT__wait_b__cycles_234 = 0;
            __Vtask_tb_axil__DOT__wait_b__cycles_234 = 0U;
            while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
                    & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_234))) {
                Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                               "@(posedge tb_axil.i_clk_axi)");
                co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_axil.i_clk_axi)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                     351);
                __Vtask_tb_axil__DOT__wait_b__cycles_234 
                    = ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_234);
                if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
                     & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_234))) {
                    ++(vlSelf->__Vcoverage[650]);
                }
                if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_234)) {
                    ++(vlSelf->__Vcoverage[651]);
                }
                if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                    ++(vlSelf->__Vcoverage[652]);
                }
                ++(vlSelf->__Vcoverage[653]);
            }
            if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
                ++(vlSelf->__Vcoverage[654]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
            }
            if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                              [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                              != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_233))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                             [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                             , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_233);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
            } else {
                ++(vlSelf->__Vcoverage[657]);
            }
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 356);
            vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 358);
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 359);
            vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
            if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[655]);
            }
            if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[656]);
            }
            ++(vlSelf->__Vcoverage[658]);
            ++(vlSelf->__Vcoverage[659]);
            ++(vlSelf->__Vcoverage[618]);
        } else if ((1U == VL_MODDIVS_III(32, __Vtask_tb_axil__DOT__coverage_burst__q_217, (IData)(4U)))) {
            __Vtask_tb_axil__DOT__coverage_burst__addr_219 
                = (0x8000U | (0x7ffcU & VL_RANDOM_I()));
            __Vtask_tb_axil__DOT__axi_write__expected_238 = 3U;
            __Vtask_tb_axil__DOT__axi_write__strobe_237 
                = __Vtask_tb_axil__DOT__coverage_burst__strb_221;
            __Vtask_tb_axil__DOT__axi_write__data_236 
                = __Vtask_tb_axil__DOT__coverage_burst__data_220;
            __Vtask_tb_axil__DOT__axi_write__address_235 
                = __Vtask_tb_axil__DOT__coverage_burst__addr_219;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_241 
                = __Vtask_tb_axil__DOT__axi_write__strobe_237;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_240 
                = __Vtask_tb_axil__DOT__axi_write__data_236;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_239 
                = __Vtask_tb_axil__DOT__axi_write__address_235;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_242 = 0U;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_243 = 0;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_244 = 0;
            {
                VlForkSync __Vfork_12__sync;
                __Vfork_12__sync.init(2U, nullptr);
                Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__0(vlSelf, __Vfork_12__sync);
                Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__1(vlSelf, __Vfork_12__sync);
                co_await __Vfork_12__sync.join(nullptr, 
                                               "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                               312);
            }
            ++(vlSelf->__Vcoverage[649]);
            __Vtask_tb_axil__DOT__wait_b__expected_245 
                = __Vtask_tb_axil__DOT__axi_write__expected_238;
            __Vtask_tb_axil__DOT__wait_b__cycles_246 = 0;
            __Vtask_tb_axil__DOT__wait_b__cycles_246 = 0U;
            while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
                    & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_246))) {
                Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                               "@(posedge tb_axil.i_clk_axi)");
                co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_axil.i_clk_axi)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                     351);
                __Vtask_tb_axil__DOT__wait_b__cycles_246 
                    = ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_246);
                if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
                     & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_246))) {
                    ++(vlSelf->__Vcoverage[650]);
                }
                if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_246)) {
                    ++(vlSelf->__Vcoverage[651]);
                }
                if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                    ++(vlSelf->__Vcoverage[652]);
                }
                ++(vlSelf->__Vcoverage[653]);
            }
            if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
                ++(vlSelf->__Vcoverage[654]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
            }
            if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                              [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                              != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_245))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                             [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                             , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_245);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
            } else {
                ++(vlSelf->__Vcoverage[657]);
            }
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 356);
            vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 358);
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 359);
            vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
            if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[655]);
            }
            if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[656]);
            }
            ++(vlSelf->__Vcoverage[658]);
            ++(vlSelf->__Vcoverage[659]);
            ++(vlSelf->__Vcoverage[619]);
        } else if ((2U == VL_MODDIVS_III(32, __Vtask_tb_axil__DOT__coverage_burst__q_217, (IData)(4U)))) {
            __Vtask_tb_axil__DOT__coverage_burst__addr_219 
                = (1U | (0xfffcU & VL_RANDOM_I()));
            __Vtask_tb_axil__DOT__axi_write__expected_250 = 2U;
            __Vtask_tb_axil__DOT__axi_write__strobe_249 
                = __Vtask_tb_axil__DOT__coverage_burst__strb_221;
            __Vtask_tb_axil__DOT__axi_write__data_248 
                = __Vtask_tb_axil__DOT__coverage_burst__data_220;
            __Vtask_tb_axil__DOT__axi_write__address_247 
                = __Vtask_tb_axil__DOT__coverage_burst__addr_219;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_253 
                = __Vtask_tb_axil__DOT__axi_write__strobe_249;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_252 
                = __Vtask_tb_axil__DOT__axi_write__data_248;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_251 
                = __Vtask_tb_axil__DOT__axi_write__address_247;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_254 = 0U;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_255 = 0;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_256 = 0;
            {
                VlForkSync __Vfork_13__sync;
                __Vfork_13__sync.init(2U, nullptr);
                Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__0(vlSelf, __Vfork_13__sync);
                Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__1(vlSelf, __Vfork_13__sync);
                co_await __Vfork_13__sync.join(nullptr, 
                                               "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                               312);
            }
            ++(vlSelf->__Vcoverage[649]);
            __Vtask_tb_axil__DOT__wait_b__expected_257 
                = __Vtask_tb_axil__DOT__axi_write__expected_250;
            __Vtask_tb_axil__DOT__wait_b__cycles_258 = 0;
            __Vtask_tb_axil__DOT__wait_b__cycles_258 = 0U;
            while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
                    & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_258))) {
                Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                               "@(posedge tb_axil.i_clk_axi)");
                co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_axil.i_clk_axi)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                     351);
                __Vtask_tb_axil__DOT__wait_b__cycles_258 
                    = ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_258);
                if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
                     & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_258))) {
                    ++(vlSelf->__Vcoverage[650]);
                }
                if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_258)) {
                    ++(vlSelf->__Vcoverage[651]);
                }
                if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                    ++(vlSelf->__Vcoverage[652]);
                }
                ++(vlSelf->__Vcoverage[653]);
            }
            if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
                ++(vlSelf->__Vcoverage[654]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
            }
            if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                              [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                              != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_257))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                             [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                             , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_257);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
            } else {
                ++(vlSelf->__Vcoverage[657]);
            }
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 356);
            vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 358);
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 359);
            vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
            if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[655]);
            }
            if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[656]);
            }
            ++(vlSelf->__Vcoverage[658]);
            ++(vlSelf->__Vcoverage[659]);
            ++(vlSelf->__Vcoverage[620]);
        } else {
            __Vtask_tb_axil__DOT__coverage_burst__addr_219 
                = (2U | (0xfffcU & VL_RANDOM_I()));
            __Vtask_tb_axil__DOT__axi_write__expected_262 = 2U;
            __Vtask_tb_axil__DOT__axi_write__strobe_261 
                = __Vtask_tb_axil__DOT__coverage_burst__strb_221;
            __Vtask_tb_axil__DOT__axi_write__data_260 
                = __Vtask_tb_axil__DOT__coverage_burst__data_220;
            __Vtask_tb_axil__DOT__axi_write__address_259 
                = __Vtask_tb_axil__DOT__coverage_burst__addr_219;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_265 
                = __Vtask_tb_axil__DOT__axi_write__strobe_261;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_264 
                = __Vtask_tb_axil__DOT__axi_write__data_260;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_263 
                = __Vtask_tb_axil__DOT__axi_write__address_259;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_266 = 0U;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_267 = 0;
            vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_268 = 0;
            {
                VlForkSync __Vfork_14__sync;
                __Vfork_14__sync.init(2U, nullptr);
                Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__0(vlSelf, __Vfork_14__sync);
                Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__1(vlSelf, __Vfork_14__sync);
                co_await __Vfork_14__sync.join(nullptr, 
                                               "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                               312);
            }
            ++(vlSelf->__Vcoverage[649]);
            __Vtask_tb_axil__DOT__wait_b__expected_269 
                = __Vtask_tb_axil__DOT__axi_write__expected_262;
            __Vtask_tb_axil__DOT__wait_b__cycles_270 = 0;
            __Vtask_tb_axil__DOT__wait_b__cycles_270 = 0U;
            while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
                    & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_270))) {
                Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                               "@(posedge tb_axil.i_clk_axi)");
                co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_axil.i_clk_axi)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                     351);
                __Vtask_tb_axil__DOT__wait_b__cycles_270 
                    = ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_270);
                if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
                     & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_270))) {
                    ++(vlSelf->__Vcoverage[650]);
                }
                if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_270)) {
                    ++(vlSelf->__Vcoverage[651]);
                }
                if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                    ++(vlSelf->__Vcoverage[652]);
                }
                ++(vlSelf->__Vcoverage[653]);
            }
            if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
                ++(vlSelf->__Vcoverage[654]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
            }
            if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                              [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                              != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_269))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                             [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                             , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_269);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
            } else {
                ++(vlSelf->__Vcoverage[657]);
            }
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 356);
            vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 358);
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 359);
            vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
            if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[655]);
            }
            if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[656]);
            }
            ++(vlSelf->__Vcoverage[658]);
            ++(vlSelf->__Vcoverage[659]);
            ++(vlSelf->__Vcoverage[621]);
        }
        if ((0U == VL_MODDIVS_III(32, __Vtask_tb_axil__DOT__coverage_burst__q_217, (IData)(8U)))) {
            __Vtask_tb_axil__DOT__axi_read_response__expected_resp_272 = 0U;
            __Vtask_tb_axil__DOT__axi_read_response__address_271 
                = ((6U >= (7U & VL_MODDIVS_III(32, 
                                               VL_DIVS_III(32, __Vtask_tb_axil__DOT__coverage_burst__q_217, (IData)(8U)), (IData)(7U))))
                    ? __Vtask_tb_axil__DOT__coverage_burst__legal_addr_222
                   [(7U & VL_MODDIVS_III(32, VL_DIVS_III(32, __Vtask_tb_axil__DOT__coverage_burst__q_217, (IData)(8U)), (IData)(7U)))]
                    : 0U);
            __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273 = 0;
            __Vtask_tb_axil__DOT__send_ar__address_274 
                = __Vtask_tb_axil__DOT__axi_read_response__address_271;
            __Vtask_tb_axil__DOT__send_ar__cycles_275 = 0;
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 291);
            vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_274;
            vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
            __Vtask_tb_axil__DOT__send_ar__cycles_275 = 0U;
            while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
                    & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_275))) {
                Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                               "@(negedge tb_axil.i_clk_axi)");
                co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_axil.i_clk_axi)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                     296);
                __Vtask_tb_axil__DOT__send_ar__cycles_275 
                    = ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_275);
                if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
                     & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_275))) {
                    ++(vlSelf->__Vcoverage[626]);
                }
                if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_275)) {
                    ++(vlSelf->__Vcoverage[627]);
                }
                if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
                    ++(vlSelf->__Vcoverage[628]);
                }
                ++(vlSelf->__Vcoverage[629]);
            }
            if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
                ++(vlSelf->__Vcoverage[630]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_274));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
            }
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 300);
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 301);
            vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
                ++(vlSelf->__Vcoverage[631]);
            }
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
                ++(vlSelf->__Vcoverage[632]);
            }
            ++(vlSelf->__Vcoverage[633]);
            __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273 = 0U;
            while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                    & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273))) {
                Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                               "@(posedge tb_axil.i_clk_axi)");
                co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_axil.i_clk_axi)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                     236);
                __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273 
                    = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273);
                if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                     & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273))) {
                    ++(vlSelf->__Vcoverage[609]);
                }
                if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read_response__wait_cycles_273)) {
                    ++(vlSelf->__Vcoverage[610]);
                }
                if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
                    ++(vlSelf->__Vcoverage[611]);
                }
                ++(vlSelf->__Vcoverage[612]);
            }
            if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                              | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                                 != (IData)(__Vtask_tb_axil__DOT__axi_read_response__expected_resp_272)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:240: Assertion failed in %m: coverage read response mismatch at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read_response", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read_response__address_271));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 240, "", false);
            } else {
                ++(vlSelf->__Vcoverage[613]);
            }
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 241);
            vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 243);
            Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                           "@(negedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 244);
            vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
            if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                 != (IData)(__Vtask_tb_axil__DOT__axi_read_response__expected_resp_272))) {
                ++(vlSelf->__Vcoverage[614]);
            }
            if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[615]);
            }
            if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                 & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                    == (IData)(__Vtask_tb_axil__DOT__axi_read_response__expected_resp_272)))) {
                ++(vlSelf->__Vcoverage[616]);
            }
            ++(vlSelf->__Vcoverage[617]);
            ++(vlSelf->__Vcoverage[622]);
        } else {
            ++(vlSelf->__Vcoverage[623]);
        }
        __Vtask_tb_axil__DOT__coverage_burst__q_217 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__coverage_burst__q_217);
        ++(vlSelf->__Vcoverage[624]);
    }
    __Vtask_tb_axil__DOT__cov_toggle_inputs__cov_i_276 = 0;
    __Vtask_tb_axil__DOT__cov_toggle_inputs__cov_i_276 = 0U;
    while (VL_GTS_III(32, 0x00000100U, __Vtask_tb_axil__DOT__cov_toggle_inputs__cov_i_276)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             438);
        vlSelfRef.tb_axil__DOT__cov_i_engine_events 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_port_0_event_count 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_port_1_event_count 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_port_2_event_count 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_monitor_sample_count 
            = (0x0000ffffU & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_error 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_error 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_pending 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_pending 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_overflow 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_overflow 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_match 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_match 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_axil__DOT__cov_i_hw_clear_monitor_key_fragment 
            = (3U & VL_RANDOM_I());
        __Vtask_tb_axil__DOT__cov_toggle_inputs__cov_i_276 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__cov_toggle_inputs__cov_i_276);
        ++(vlSelf->__Vcoverage[686]);
    }
    ++(vlSelf->__Vcoverage[687]);
    ++(vlSelf->__Vcoverage[625]);
    ++(vlSelf->__Vcoverage[691]);
    VL_WRITEF_NX("PASS AXIL example map: full field access, mapped/unmapped, and WO hardware clear\n",0);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 641, "");
    ++(vlSelf->__Vcoverage[759]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_279 = 0x12345678U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_278 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_277 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_280 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_281 = __Vtask_tb_axil__DOT__axi_read__address_277;
    __Vtask_tb_axil__DOT__send_ar__cycles_282 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_281;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_282 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_282))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_282 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_282);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_282))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_282)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_281));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_280 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_280))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_280 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_280);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_280))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_280)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_277));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_278))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_278);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_278)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_279))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_279);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_278)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_279))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_279)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_278))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: reset value and selected clock-mode read path\n",0);
    __Vtask_tb_axil__DOT__axi_write__expected_286 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_285 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_284 = 0xaabbccddU;
    __Vtask_tb_axil__DOT__axi_write__address_283 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_289 
        = __Vtask_tb_axil__DOT__axi_write__strobe_285;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_288 
        = __Vtask_tb_axil__DOT__axi_write__data_284;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_287 
        = __Vtask_tb_axil__DOT__axi_write__address_283;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_290 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_291 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_292 = 0;
    {
        VlForkSync __Vfork_15__sync;
        __Vfork_15__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__0(vlSelf, __Vfork_15__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__1(vlSelf, __Vfork_15__sync);
        co_await __Vfork_15__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                       312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_293 = __Vtask_tb_axil__DOT__axi_write__expected_286;
    __Vtask_tb_axil__DOT__wait_b__cycles_294 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_294 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_294))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_294 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_294);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_294))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_294)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_293))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_293);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_297 = 0xaabbccddU;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_296 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_295 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_298 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_299 = __Vtask_tb_axil__DOT__axi_read__address_295;
    __Vtask_tb_axil__DOT__send_ar__cycles_300 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_299;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_300 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_300))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_300 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_300);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_300))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_300)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_299));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_298 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_298))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_298 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_298);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_298))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_298)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_295));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_296))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_296);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_296)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_297))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_297);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_296)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_297))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_297)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_296))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: full-word write/read and independent AW/W handshakes\n",0);
    __Vtask_tb_axil__DOT__axi_write__expected_304 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_303 = 2U;
    __Vtask_tb_axil__DOT__axi_write__data_302 = 0x0000ee00U;
    __Vtask_tb_axil__DOT__axi_write__address_301 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_307 
        = __Vtask_tb_axil__DOT__axi_write__strobe_303;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_306 
        = __Vtask_tb_axil__DOT__axi_write__data_302;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_305 
        = __Vtask_tb_axil__DOT__axi_write__address_301;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_308 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_309 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_310 = 0;
    {
        VlForkSync __Vfork_16__sync;
        __Vfork_16__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__0(vlSelf, __Vfork_16__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__1(vlSelf, __Vfork_16__sync);
        co_await __Vfork_16__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                       312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_311 = __Vtask_tb_axil__DOT__axi_write__expected_304;
    __Vtask_tb_axil__DOT__wait_b__cycles_312 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_312 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_312))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_312 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_312);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_312))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_312)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_311))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_311);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_315 = 0xaabbeeddU;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_314 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_313 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_316 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_317 = __Vtask_tb_axil__DOT__axi_read__address_313;
    __Vtask_tb_axil__DOT__send_ar__cycles_318 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_317;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_318 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_318))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_318 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_318);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_318))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_318)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_317));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_316 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_316))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_316 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_316);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_316))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_316)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_313));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_314))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_314);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_314)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_315))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_315);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_314)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_315))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_315)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_314))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: WSTRB updates only the selected byte lane\n",0);
    __Vtask_tb_axil__DOT__axi_read__expected_data_321 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_320 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_319 = 0x0010U;
    __Vtask_tb_axil__DOT__axi_read__cycles_322 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_323 = __Vtask_tb_axil__DOT__axi_read__address_319;
    __Vtask_tb_axil__DOT__send_ar__cycles_324 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_323;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_324 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_324))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_324 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_324);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_324))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_324)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_323));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_322 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_322))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_322 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_322);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_322))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_322)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_319));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_320))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_320);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_320)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_321))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_321);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_320)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_321))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_321)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_320))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_328 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_327 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_326 = 0xa1b2c3d4U;
    __Vtask_tb_axil__DOT__axi_write__address_325 = 0x0010U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_331 
        = __Vtask_tb_axil__DOT__axi_write__strobe_327;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_330 
        = __Vtask_tb_axil__DOT__axi_write__data_326;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_329 
        = __Vtask_tb_axil__DOT__axi_write__address_325;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_332 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_333 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_334 = 0;
    {
        VlForkSync __Vfork_17__sync;
        __Vfork_17__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__0(vlSelf, __Vfork_17__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__1(vlSelf, __Vfork_17__sync);
        co_await __Vfork_17__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                       312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_335 = __Vtask_tb_axil__DOT__axi_write__expected_328;
    __Vtask_tb_axil__DOT__wait_b__cycles_336 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_336 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_336))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_336 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_336);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_336))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_336)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_335))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_335);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    if (VL_UNLIKELY(((0xa1b2c3d4U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:660: Assertion failed in %m: WO storage did not capture software write\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 660, "", false);
    } else {
        ++(vlSelf->__Vcoverage[761]);
    }
    __Vtask_tb_axil__DOT__axi_read__expected_data_339 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_338 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_337 = 0x0010U;
    __Vtask_tb_axil__DOT__axi_read__cycles_340 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_341 = __Vtask_tb_axil__DOT__axi_read__address_337;
    __Vtask_tb_axil__DOT__send_ar__cycles_342 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_341;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_342 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_342))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_342 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_342);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_342))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_342)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_341));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_340 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_340))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_340 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_340);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_340))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_340)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_337));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_338))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_338);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_338)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_339))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_339);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_338)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_339))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_339)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_338))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    __Vtask_tb_axil__DOT__axi_write__expected_346 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_345 = 2U;
    __Vtask_tb_axil__DOT__axi_write__data_344 = 0x0000ee00U;
    __Vtask_tb_axil__DOT__axi_write__address_343 = 0x0010U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_349 
        = __Vtask_tb_axil__DOT__axi_write__strobe_345;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_348 
        = __Vtask_tb_axil__DOT__axi_write__data_344;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_347 
        = __Vtask_tb_axil__DOT__axi_write__address_343;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_350 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_351 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_352 = 0;
    {
        VlForkSync __Vfork_18__sync;
        __Vfork_18__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_18__0(vlSelf, __Vfork_18__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_18__1(vlSelf, __Vfork_18__sync);
        co_await __Vfork_18__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                       312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_353 = __Vtask_tb_axil__DOT__axi_write__expected_346;
    __Vtask_tb_axil__DOT__wait_b__cycles_354 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_354 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_354))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_354 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_354);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_354))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_354)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_353))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_353);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    if (VL_UNLIKELY(((0xa1b2eed4U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:663: Assertion failed in %m: WO WSTRB did not update selected byte lane\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 663, "", false);
    } else {
        ++(vlSelf->__Vcoverage[762]);
    }
    vlSelfRef.tb_axil__DOT__i_hw_clear_key_data = 1U;
    __Vtask_tb_axil__DOT__axi_write__expected_358 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_357 = 1U;
    __Vtask_tb_axil__DOT__axi_write__data_356 = 0xffffffffU;
    __Vtask_tb_axil__DOT__axi_write__address_355 = 0x0010U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_361 
        = __Vtask_tb_axil__DOT__axi_write__strobe_357;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_360 
        = __Vtask_tb_axil__DOT__axi_write__data_356;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_359 
        = __Vtask_tb_axil__DOT__axi_write__address_355;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_362 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_363 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_364 = 0;
    {
        VlForkSync __Vfork_19__sync;
        __Vfork_19__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_19__0(vlSelf, __Vfork_19__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_19__1(vlSelf, __Vfork_19__sync);
        co_await __Vfork_19__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                       312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_365 = __Vtask_tb_axil__DOT__axi_write__expected_358;
    __Vtask_tb_axil__DOT__wait_b__cycles_366 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_366 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_366))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_366 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_366);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_366))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_366)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_365))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_365);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    vlSelfRef.tb_axil__DOT__i_hw_clear_key_data = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:667: Assertion failed in %m: WO hardware clear did not override concurrent software write\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 667, "", false);
    } else {
        ++(vlSelf->__Vcoverage[763]);
    }
    tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4 = 2U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             668);
        tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[764]);
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:669: Assertion failed in %m: WO field changed after clear was released\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 669, "", false);
    } else {
        ++(vlSelf->__Vcoverage[765]);
    }
    __Vtask_tb_axil__DOT__axi_write__expected_370 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_369 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_368 = 0x55667788U;
    __Vtask_tb_axil__DOT__axi_write__address_367 = 0x0010U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_373 
        = __Vtask_tb_axil__DOT__axi_write__strobe_369;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_372 
        = __Vtask_tb_axil__DOT__axi_write__data_368;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_371 
        = __Vtask_tb_axil__DOT__axi_write__address_367;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_374 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_375 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_376 = 0;
    {
        VlForkSync __Vfork_20__sync;
        __Vfork_20__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_20__0(vlSelf, __Vfork_20__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_20__1(vlSelf, __Vfork_20__sync);
        co_await __Vfork_20__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                       312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_377 = __Vtask_tb_axil__DOT__axi_write__expected_370;
    __Vtask_tb_axil__DOT__wait_b__cycles_378 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_378 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_378))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_378 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_378);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_378))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_378)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_377))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_377);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    if (VL_UNLIKELY(((0x55667788U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:671: Assertion failed in %m: WO field did not accept a write after clear release\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 671, "", false);
    } else {
        ++(vlSelf->__Vcoverage[766]);
    }
    __Vtask_tb_axil__DOT__axi_read__expected_data_381 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_380 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_379 = 0x0010U;
    __Vtask_tb_axil__DOT__axi_read__cycles_382 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_383 = __Vtask_tb_axil__DOT__axi_read__address_379;
    __Vtask_tb_axil__DOT__send_ar__cycles_384 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_383;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_384 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_384))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_384 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_384);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_384))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_384)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_383));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_382 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_382))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_382 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_382);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_382))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_382)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_379));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_380))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_380);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_380)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_381))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_381);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_380)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_381))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_381)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_380))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: WO read-zero, WSTRB, storage, clear priority, and post-clear write\n",0);
    __Vtask_tb_axil__DOT__axi_write__expected_388 = 2U;
    __Vtask_tb_axil__DOT__axi_write__strobe_387 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_386 = 0x11111111U;
    __Vtask_tb_axil__DOT__axi_write__address_385 = 2U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_391 
        = __Vtask_tb_axil__DOT__axi_write__strobe_387;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_390 
        = __Vtask_tb_axil__DOT__axi_write__data_386;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_389 
        = __Vtask_tb_axil__DOT__axi_write__address_385;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_392 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_393 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_394 = 0;
    {
        VlForkSync __Vfork_21__sync;
        __Vfork_21__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_21__0(vlSelf, __Vfork_21__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_21__1(vlSelf, __Vfork_21__sync);
        co_await __Vfork_21__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                       312);
    }
    ++(vlSelf->__Vcoverage[649]);
    __Vtask_tb_axil__DOT__wait_b__expected_395 = __Vtask_tb_axil__DOT__axi_write__expected_388;
    __Vtask_tb_axil__DOT__wait_b__cycles_396 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_396 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_396))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_396 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_396);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_396))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_396)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_395))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_395);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    ++(vlSelf->__Vcoverage[659]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_399 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_398 = 3U;
    __Vtask_tb_axil__DOT__axi_read__address_397 = 4U;
    __Vtask_tb_axil__DOT__axi_read__cycles_400 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_401 = __Vtask_tb_axil__DOT__axi_read__address_397;
    __Vtask_tb_axil__DOT__send_ar__cycles_402 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_401;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_402 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_402))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_402 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_402);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_402))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_402)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_401));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_400 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_400))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_400 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_400);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_400))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_400)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_397));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_398))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_398);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_398)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_399))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_399);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_398)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_399))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_399)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_398))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: misaligned SLVERR and unmapped DECERR\n",0);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    __Vtask_tb_axil__DOT__send_ar__address_403 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_404 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_403;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_404 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_404))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_404 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_404);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_404))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_404)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_403));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    tb_axil__DOT__cycles = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, tb_axil__DOT__cycles))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             685);
        tb_axil__DOT__cycles = ((IData)(1U) + tb_axil__DOT__cycles);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, tb_axil__DOT__cycles))) {
            ++(vlSelf->__Vcoverage[767]);
        }
        if (VL_LTES_III(32, 0x00000064U, tb_axil__DOT__cycles)) {
            ++(vlSelf->__Vcoverage[768]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[769]);
        }
        ++(vlSelf->__Vcoverage[770]);
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                      | (0xaabbeeddU != vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:688: Assertion failed in %m: R response was not valid/stable\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 688, "", false);
    } else {
        ++(vlSelf->__Vcoverage[771]);
    }
    tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5 = 3U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             690);
        if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                          | (0xaabbeeddU != vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:691: Assertion failed in %m: R response changed under backpressure\n",3, 'M',vlSymsp->name(),"tb_axil.unnamedblk1_6", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 691, "", false);
        } else {
            ++(vlSelf->__Vcoverage[775]);
        }
        if ((0xaabbeeddU != vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata)) {
            ++(vlSelf->__Vcoverage[776]);
        }
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[777]);
        }
        if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & (0xaabbeeddU == vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata))) {
            ++(vlSelf->__Vcoverage[778]);
        }
        tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[779]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         693);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         695);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         696);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: RVALID and RDATA remain stable under backpressure\n",0);
    vlSelfRef.tb_axil__DOT__i_rst_n_axi = 0U;
    vlSelfRef.tb_axil__DOT__i_rst_n_reg = 0U;
    tb_axil__DOT__unnamedblk1_7__DOT____Vrepeat6 = 5U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             704);
        tb_axil__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (tb_axil__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[780]);
    }
    vlSelfRef.tb_axil__DOT__i_rst_n_axi = 1U;
    tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7 = 2U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        Vtb_axil___024root____VbeforeTrig_hde8656e6__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_reg)");
        co_await vlSelfRef.__VtrigSched_hde8656e6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             706);
        tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[781]);
    }
    vlSelfRef.tb_axil__DOT__i_rst_n_reg = 1U;
    tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             708);
        tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8 
            = (tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[782]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         713);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.tb_axil__DOT__i_axi_wdata = 0xcafebabeU;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = 0x0fU;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                         721);
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[783]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:722: Assertion failed in %m: read was not accepted in concurrent arbitration test\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 722, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
                            | (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:724: Assertion failed in %m: READ_WRITE/QUEUED mode did not accept one read and one write concurrently\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 724, "", false);
    } else {
        ++(vlSelf->__Vcoverage[786]);
    }
    ++(vlSelf->__Vcoverage[791]);
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         727);
    vlSelfRef.tb_axil__DOT__old_value = 0x12345678U;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         729);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    ++(vlSelf->__Vcoverage[797]);
    tb_axil__DOT__cycles = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, tb_axil__DOT__cycles))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             740);
        tb_axil__DOT__cycles = ((IData)(1U) + tb_axil__DOT__cycles);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, tb_axil__DOT__cycles))) {
            ++(vlSelf->__Vcoverage[798]);
        }
        if (VL_LTES_III(32, 0x00000064U, tb_axil__DOT__cycles)) {
            ++(vlSelf->__Vcoverage[799]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[800]);
        }
        ++(vlSelf->__Vcoverage[801]);
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                      | (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != vlSelfRef.tb_axil__DOT__old_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:743: Assertion failed in %m: round-robin read did not observe pre-write value\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 743, "", false);
    } else {
        ++(vlSelf->__Vcoverage[802]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         744);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         746);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         747);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    ++(vlSelf->__Vcoverage[807]);
    __Vtask_tb_axil__DOT__wait_b__expected_405 = 0U;
    __Vtask_tb_axil__DOT__wait_b__cycles_406 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_406 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_406))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             351);
        __Vtask_tb_axil__DOT__wait_b__cycles_406 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_406);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_406))) {
            ++(vlSelf->__Vcoverage[650]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_406)) {
            ++(vlSelf->__Vcoverage[651]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[652]);
        }
        ++(vlSelf->__Vcoverage[653]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[654]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:354: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 354, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_405))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:355: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_405);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 355, "", false);
    } else {
        ++(vlSelf->__Vcoverage[657]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         356);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         358);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         359);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[655]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[656]);
    }
    ++(vlSelf->__Vcoverage[658]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_409 = 0xcafebabeU;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_408 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_407 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_410 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_411 = __Vtask_tb_axil__DOT__axi_read__address_407;
    __Vtask_tb_axil__DOT__send_ar__cycles_412 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_411;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_412 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_412))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_412 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_412);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_412))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_412)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_411));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__axi_read__cycles_410 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_410))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             382);
        __Vtask_tb_axil__DOT__axi_read__cycles_410 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_410);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_410))) {
            ++(vlSelf->__Vcoverage[660]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_410)) {
            ++(vlSelf->__Vcoverage[661]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[662]);
        }
        ++(vlSelf->__Vcoverage[663]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[664]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:385: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_407));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 385, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_408))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:386: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_408);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 386, "", false);
    } else {
        ++(vlSelf->__Vcoverage[667]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_408)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_409))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:388: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_409);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 388, "", false);
    } else {
        ++(vlSelf->__Vcoverage[668]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         389);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         391);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         392);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[665]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[666]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_408)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_409))) {
        ++(vlSelf->__Vcoverage[669]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_409)) {
        ++(vlSelf->__Vcoverage[670]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_408))) {
        ++(vlSelf->__Vcoverage[671]);
    }
    ++(vlSelf->__Vcoverage[672]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: reset-read round-robin arbitration and response ordering\n",0);
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413 = 0;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_414 = 0;
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    __Vtask_tb_axil__DOT__send_ar__address_415 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_416 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_415;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_416 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_416))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_416 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_416);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_416))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_416)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_415));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    __Vtask_tb_axil__DOT__send_ar__address_417 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_418 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         291);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_417;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_418 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_418))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             296);
        __Vtask_tb_axil__DOT__send_ar__cycles_418 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_418);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_418))) {
            ++(vlSelf->__Vcoverage[626]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_418)) {
            ++(vlSelf->__Vcoverage[627]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[628]);
        }
        ++(vlSelf->__Vcoverage[629]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[630]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:299: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_417));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 299, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         300);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[631]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[632]);
    }
    ++(vlSelf->__Vcoverage[633]);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         405);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413 = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             410);
        if (VL_UNLIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:411: Assertion failed in %m: QUEUED mode exceeded configured read depth\n",3, 'M',vlSymsp->name(),"tb_axil.check_full_queued_limit", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 411, "", false);
        } else {
            ++(vlSelf->__Vcoverage[673]);
        }
        __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413);
        ++(vlSelf->__Vcoverage[674]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         414);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_414 = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_axil__DOT__check_full_queued_limit__index_414)) {
        __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413 = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413))) {
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                                 420);
            __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413 
                = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413);
            if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                 & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413))) {
                ++(vlSelf->__Vcoverage[675]);
            }
            if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_413)) {
                ++(vlSelf->__Vcoverage[676]);
            }
            if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[677]);
            }
            ++(vlSelf->__Vcoverage[678]);
        }
        if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
            ++(vlSelf->__Vcoverage[679]);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:423: Assertion failed in %m: queued response timeout\n",3, 'M',vlSymsp->name(),"tb_axil.check_full_queued_limit", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 423, "", false);
        }
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             424);
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[680]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[681]);
        }
        __Vtask_tb_axil__DOT__check_full_queued_limit__index_414 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__index_414);
        ++(vlSelf->__Vcoverage[682]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         426);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: independent read depth limit\n",0);
    ++(vlSelf->__Vcoverage[683]);
    ++(vlSelf->__Vcoverage[685]);
    VL_WRITEF_NX("PASS AXIL: mode=2 asynchronous=0, cases=%0d\n",1
                 , '~',32,tb_axil__DOT__test_count);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 758, "");
    if ((0xaabbeeddU != vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata)) {
        ++(vlSelf->__Vcoverage[772]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[773]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (0xaabbeeddU == vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata))) {
        ++(vlSelf->__Vcoverage[774]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[784]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[785]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[787]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[788]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[789]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
               & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))))) {
        ++(vlSelf->__Vcoverage[794]);
    }
    ++(vlSelf->__Vcoverage[795]);
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         != vlSelfRef.tb_axil__DOT__old_value)) {
        ++(vlSelf->__Vcoverage[803]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[804]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            == vlSelfRef.tb_axil__DOT__old_value))) {
        ++(vlSelf->__Vcoverage[805]);
    }
    ++(vlSelf->__Vcoverage[808]);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_21__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_21__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_21__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_392 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_392)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_392 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_392 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_390;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_391;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_394 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_394))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_394 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_394);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_394))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_394)) {
            ++(vlSelf->__Vcoverage[643]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[644]);
        }
        ++(vlSelf->__Vcoverage[645]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[646]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:337: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_21__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_21__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_21__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_21__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_389;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_393 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_393))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_393 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_393);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_393))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_393)) {
            ++(vlSelf->__Vcoverage[635]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[636]);
        }
        ++(vlSelf->__Vcoverage[637]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[638]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:322: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_389));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_21__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_20__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_20__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_20__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_374 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_374)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_374 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_374 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_372;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_373;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_376 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_376))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_376 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_376);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_376))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_376)) {
            ++(vlSelf->__Vcoverage[643]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[644]);
        }
        ++(vlSelf->__Vcoverage[645]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[646]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:337: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_20__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_20__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_20__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_20__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_371;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_375 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_375))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_375 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_375);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_375))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_375)) {
            ++(vlSelf->__Vcoverage[635]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[636]);
        }
        ++(vlSelf->__Vcoverage[637]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[638]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:322: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_371));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_20__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_19__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_19__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_19__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_362 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_362)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_362 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_362 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_360;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_361;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_364 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_364))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_364 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_364);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_364))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_364)) {
            ++(vlSelf->__Vcoverage[643]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[644]);
        }
        ++(vlSelf->__Vcoverage[645]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[646]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:337: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_19__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_19__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_19__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_19__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_359;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_363 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_363))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_363 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_363);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_363))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_363)) {
            ++(vlSelf->__Vcoverage[635]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[636]);
        }
        ++(vlSelf->__Vcoverage[637]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[638]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:322: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_359));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_19__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_18__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_18__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_18__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_350 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_350)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_350 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_350 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_348;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_349;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_352 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_352))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_352 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_352);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_352))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_352)) {
            ++(vlSelf->__Vcoverage[643]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[644]);
        }
        ++(vlSelf->__Vcoverage[645]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[646]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:337: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_18__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_18__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_18__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_18__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_347;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_351 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_351))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_351 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_351);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_351))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_351)) {
            ++(vlSelf->__Vcoverage[635]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[636]);
        }
        ++(vlSelf->__Vcoverage[637]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[638]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:322: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_347));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_18__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_17__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_332 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_332)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_332 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_332 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_330;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_331;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_334 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_334))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_334 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_334);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_334))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_334)) {
            ++(vlSelf->__Vcoverage[643]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[644]);
        }
        ++(vlSelf->__Vcoverage[645]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[646]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:337: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_17__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_17__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_329;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_333 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_333))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_333 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_333);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_333))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_333)) {
            ++(vlSelf->__Vcoverage[635]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[636]);
        }
        ++(vlSelf->__Vcoverage[637]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[638]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:322: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_329));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_17__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_16__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_308 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_308)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_308 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_308 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_306;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_307;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_310 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_310))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_310 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_310);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_310))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_310)) {
            ++(vlSelf->__Vcoverage[643]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[644]);
        }
        ++(vlSelf->__Vcoverage[645]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[646]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:337: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_16__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_16__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_305;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_309 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_309))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_309 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_309);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_309))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_309)) {
            ++(vlSelf->__Vcoverage[635]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[636]);
        }
        ++(vlSelf->__Vcoverage[637]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[638]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:322: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_305));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_16__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_15__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_290 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_290)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_290 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_290 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_288;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_289;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_292 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_292))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_292 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_292);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_292))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_292)) {
            ++(vlSelf->__Vcoverage[643]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[644]);
        }
        ++(vlSelf->__Vcoverage[645]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[646]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:337: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_15__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_15__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_287;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_291 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_291))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_291 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_291);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_291))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_291)) {
            ++(vlSelf->__Vcoverage[635]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[636]);
        }
        ++(vlSelf->__Vcoverage[637]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[638]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:322: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_287));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_15__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_14__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_266 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_266)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_266 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_266 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_264;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_265;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_268 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_268))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_268 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_268);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_268))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_268)) {
            ++(vlSelf->__Vcoverage[643]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[644]);
        }
        ++(vlSelf->__Vcoverage[645]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[646]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:337: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_14__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_075317\\tb_AXI4_Lite.sv", 
                          327);
    co_return;
}
