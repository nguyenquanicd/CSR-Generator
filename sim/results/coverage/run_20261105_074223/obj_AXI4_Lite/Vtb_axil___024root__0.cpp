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
        ++(vlSelf->__Vcoverage[2330]);
        ++(vlSelf->__Vcoverage[2328]);
        ++(vlSelf->__Vcoverage[2334]);
        ++(vlSelf->__Vcoverage[2332]);
        ++(vlSelf->__Vcoverage[2566]);
        ++(vlSelf->__Vcoverage[2611]);
        ++(vlSelf->__Vcoverage[2656]);
        ++(vlSelf->__Vcoverage[2701]);
        ++(vlSelf->__Vcoverage[2747]);
        ++(vlSelf->__Vcoverage[2798]);
        ++(vlSelf->__Vcoverage[2815]);
        if ((0U != (0x12U ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_engine_events)))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 587, 0x12U, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_engine_events);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_engine_events = 0x12U;
        }
        if ((0U != (0x34U ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count)))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 621, 0x34U, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count = 0x34U;
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 647, 0U, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start = 0U;
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 657, 0U, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count = 0U;
        }
        if ((0U != (0x000000ffU & (0x56U ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count))))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 709, 0x56U, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count 
                = (0x00000056U | (0xff00U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count)));
        }
        if ((0U != (0x000000ffU & (0x78U ^ ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count) 
                                            >> 8U))))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 725, 0x78U, 
                                   ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count) 
                                    >> 8U));
            vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count 
                = (0x00007800U | (0x00ffU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count)));
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_monitor_capture))) {
            VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 761, 0U, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_monitor_capture);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_monitor_capture = 0U;
        }
        if ((0U != vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_value)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2263, 0U, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_value);
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
        VL_FATAL_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                             48);
        vlSelfRef.tb_axil__DOT__i_clk_axi = (1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_axi)));
        if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_axi)))) {
            ++(vlSelf->__Vcoverage[398]);
        }
        if (vlSelfRef.tb_axil__DOT__i_clk_axi) {
            ++(vlSelf->__Vcoverage[399]);
        }
        ++(vlSelf->__Vcoverage[400]);
    }
    ++(vlSelf->__Vcoverage[401]);
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
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                             52);
        vlSelfRef.tb_axil__DOT__i_clk_reg = (1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_reg)));
        if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_reg)))) {
            ++(vlSelf->__Vcoverage[402]);
        }
        if (vlSelfRef.tb_axil__DOT__i_clk_reg) {
            ++(vlSelf->__Vcoverage[403]);
        }
        ++(vlSelf->__Vcoverage[404]);
    }
    ++(vlSelf->__Vcoverage[405]);
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
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_216;
    __Vtask_tb_axil__DOT__axi_read__address_216 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_217;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_217 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_218;
    __Vtask_tb_axil__DOT__axi_read__expected_data_218 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_219;
    __Vtask_tb_axil__DOT__axi_read__cycles_219 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_220;
    __Vtask_tb_axil__DOT__send_ar__address_220 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_221;
    __Vtask_tb_axil__DOT__send_ar__cycles_221 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_222;
    __Vtask_tb_axil__DOT__axi_write__address_222 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_223;
    __Vtask_tb_axil__DOT__axi_write__data_223 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_224;
    __Vtask_tb_axil__DOT__axi_write__strobe_224 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_225;
    __Vtask_tb_axil__DOT__axi_write__expected_225 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_232;
    __Vtask_tb_axil__DOT__wait_b__expected_232 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_233;
    __Vtask_tb_axil__DOT__wait_b__cycles_233 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_234;
    __Vtask_tb_axil__DOT__axi_read__address_234 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_235;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_235 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_236;
    __Vtask_tb_axil__DOT__axi_read__expected_data_236 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_237;
    __Vtask_tb_axil__DOT__axi_read__cycles_237 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_238;
    __Vtask_tb_axil__DOT__send_ar__address_238 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_239;
    __Vtask_tb_axil__DOT__send_ar__cycles_239 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_240;
    __Vtask_tb_axil__DOT__axi_write__address_240 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_241;
    __Vtask_tb_axil__DOT__axi_write__data_241 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_242;
    __Vtask_tb_axil__DOT__axi_write__strobe_242 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_243;
    __Vtask_tb_axil__DOT__axi_write__expected_243 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_250;
    __Vtask_tb_axil__DOT__wait_b__expected_250 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_251;
    __Vtask_tb_axil__DOT__wait_b__cycles_251 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_252;
    __Vtask_tb_axil__DOT__axi_read__address_252 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_253;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_253 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_254;
    __Vtask_tb_axil__DOT__axi_read__expected_data_254 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_255;
    __Vtask_tb_axil__DOT__axi_read__cycles_255 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_256;
    __Vtask_tb_axil__DOT__send_ar__address_256 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_257;
    __Vtask_tb_axil__DOT__send_ar__cycles_257 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_258;
    __Vtask_tb_axil__DOT__axi_read__address_258 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_259;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_259 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_260;
    __Vtask_tb_axil__DOT__axi_read__expected_data_260 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_261;
    __Vtask_tb_axil__DOT__axi_read__cycles_261 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_262;
    __Vtask_tb_axil__DOT__send_ar__address_262 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_263;
    __Vtask_tb_axil__DOT__send_ar__cycles_263 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_264;
    __Vtask_tb_axil__DOT__axi_write__address_264 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_265;
    __Vtask_tb_axil__DOT__axi_write__data_265 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_266;
    __Vtask_tb_axil__DOT__axi_write__strobe_266 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_267;
    __Vtask_tb_axil__DOT__axi_write__expected_267 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_274;
    __Vtask_tb_axil__DOT__wait_b__expected_274 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_275;
    __Vtask_tb_axil__DOT__wait_b__cycles_275 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_276;
    __Vtask_tb_axil__DOT__axi_read__address_276 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_277;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_277 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_278;
    __Vtask_tb_axil__DOT__axi_read__expected_data_278 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_279;
    __Vtask_tb_axil__DOT__axi_read__cycles_279 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_280;
    __Vtask_tb_axil__DOT__send_ar__address_280 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_281;
    __Vtask_tb_axil__DOT__send_ar__cycles_281 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_282;
    __Vtask_tb_axil__DOT__axi_write__address_282 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_283;
    __Vtask_tb_axil__DOT__axi_write__data_283 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_284;
    __Vtask_tb_axil__DOT__axi_write__strobe_284 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_285;
    __Vtask_tb_axil__DOT__axi_write__expected_285 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_292;
    __Vtask_tb_axil__DOT__wait_b__expected_292 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_293;
    __Vtask_tb_axil__DOT__wait_b__cycles_293 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_294;
    __Vtask_tb_axil__DOT__axi_write__address_294 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_295;
    __Vtask_tb_axil__DOT__axi_write__data_295 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_296;
    __Vtask_tb_axil__DOT__axi_write__strobe_296 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_297;
    __Vtask_tb_axil__DOT__axi_write__expected_297 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_304;
    __Vtask_tb_axil__DOT__wait_b__expected_304 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_305;
    __Vtask_tb_axil__DOT__wait_b__cycles_305 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_306;
    __Vtask_tb_axil__DOT__axi_write__address_306 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_307;
    __Vtask_tb_axil__DOT__axi_write__data_307 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_308;
    __Vtask_tb_axil__DOT__axi_write__strobe_308 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_309;
    __Vtask_tb_axil__DOT__axi_write__expected_309 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_316;
    __Vtask_tb_axil__DOT__wait_b__expected_316 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_317;
    __Vtask_tb_axil__DOT__wait_b__cycles_317 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_318;
    __Vtask_tb_axil__DOT__axi_read__address_318 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_319;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_319 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_320;
    __Vtask_tb_axil__DOT__axi_read__expected_data_320 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_321;
    __Vtask_tb_axil__DOT__axi_read__cycles_321 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_322;
    __Vtask_tb_axil__DOT__send_ar__address_322 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_323;
    __Vtask_tb_axil__DOT__send_ar__cycles_323 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_write__address_324;
    __Vtask_tb_axil__DOT__axi_write__address_324 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_write__data_325;
    __Vtask_tb_axil__DOT__axi_write__data_325 = 0;
    CData/*3:0*/ __Vtask_tb_axil__DOT__axi_write__strobe_326;
    __Vtask_tb_axil__DOT__axi_write__strobe_326 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_write__expected_327;
    __Vtask_tb_axil__DOT__axi_write__expected_327 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_334;
    __Vtask_tb_axil__DOT__wait_b__expected_334 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_335;
    __Vtask_tb_axil__DOT__wait_b__cycles_335 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_336;
    __Vtask_tb_axil__DOT__axi_read__address_336 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_337;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_337 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_338;
    __Vtask_tb_axil__DOT__axi_read__expected_data_338 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_339;
    __Vtask_tb_axil__DOT__axi_read__cycles_339 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_340;
    __Vtask_tb_axil__DOT__send_ar__address_340 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_341;
    __Vtask_tb_axil__DOT__send_ar__cycles_341 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_342;
    __Vtask_tb_axil__DOT__send_ar__address_342 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_343;
    __Vtask_tb_axil__DOT__send_ar__cycles_343 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__wait_b__expected_344;
    __Vtask_tb_axil__DOT__wait_b__expected_344 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__wait_b__cycles_345;
    __Vtask_tb_axil__DOT__wait_b__cycles_345 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__axi_read__address_346;
    __Vtask_tb_axil__DOT__axi_read__address_346 = 0;
    CData/*1:0*/ __Vtask_tb_axil__DOT__axi_read__expected_resp_347;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_347 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__expected_data_348;
    __Vtask_tb_axil__DOT__axi_read__expected_data_348 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__axi_read__cycles_349;
    __Vtask_tb_axil__DOT__axi_read__cycles_349 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_350;
    __Vtask_tb_axil__DOT__send_ar__address_350 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_351;
    __Vtask_tb_axil__DOT__send_ar__cycles_351 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352;
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__check_full_queued_limit__index_353;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_353 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_354;
    __Vtask_tb_axil__DOT__send_ar__address_354 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_355;
    __Vtask_tb_axil__DOT__send_ar__cycles_355 = 0;
    SData/*15:0*/ __Vtask_tb_axil__DOT__send_ar__address_356;
    __Vtask_tb_axil__DOT__send_ar__address_356 = 0;
    IData/*31:0*/ __Vtask_tb_axil__DOT__send_ar__cycles_357;
    __Vtask_tb_axil__DOT__send_ar__cycles_357 = 0;
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             414);
        tb_axil__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_axil__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[534]);
    }
    vlSelfRef.tb_axil__DOT__i_rst_n_axi = 1U;
    tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_axil___024root____VbeforeTrig_hde8656e6__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_reg)");
        co_await vlSelfRef.__VtrigSched_hde8656e6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             416);
        tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_axil__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[535]);
    }
    vlSelfRef.tb_axil__DOT__i_rst_n_reg = 1U;
    tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             418);
        tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_axil__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[536]);
    }
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_5 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__send_ar__cycles_5);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_5))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_5)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_4));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_3 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_3))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_3 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_3);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_3))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_3)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_0));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_1))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_1);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_1)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_2))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_2);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_1)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_2))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_2)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_1))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
        co_await __Vfork_1__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_17 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__wait_b__cycles_17);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_17))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_17)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_16))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_16);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_23 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_23);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_23))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_23)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_22));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_21 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_21))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_21 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_21);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_21))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_21)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_18));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_19))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_19);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_19)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_20))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_20);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_19)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_20))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_20)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_19))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         339);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_29 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_29);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_29))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_29)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_28));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_27 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_27))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_27 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_27);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_27))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_27)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_24));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_25))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_25);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_25)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_26))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_26);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_25)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_26))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_26)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_25))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_35 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_35);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_35))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_35)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_34));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_33 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_33))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_33 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_33);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_33))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_33)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_30));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_31))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_31);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_31)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_32))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_32);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_31)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_32))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_32)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_31))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
        co_await __Vfork_2__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_47 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__wait_b__cycles_47);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_47))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_47)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_46))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_46);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_53 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_53);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_53))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_53)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_52));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_51 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_51))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_51 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_51);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_51))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_51)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_48));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_49))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_49);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_49)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_50))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_50);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_49)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_50))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_50)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_49))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
        co_await __Vfork_3__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_65 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__wait_b__cycles_65);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_65))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_65)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_64))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_64);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_71 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_71);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_71))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_71)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_70));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_69 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_69))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_69 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_69);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_69))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_69)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_66));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_67))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_67);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_67)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_68))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_68);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_67)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_68))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_68)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_67))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         352);
    vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending = 1U;
    vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         355);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         356);
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
        co_await __Vfork_4__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_83 = ((IData)(1U) 
                                                   + __Vtask_tb_axil__DOT__wait_b__cycles_83);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_83))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_83)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_82))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_82);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_89 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_89);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_89))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_89)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_88));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_87 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_87))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_87 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_87);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_87))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_87)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_84));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_85))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_85);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_85)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_86))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_86);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_85)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_86))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_86)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_85))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_95 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_95);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_95))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_95)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_94));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_93 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_93))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_93 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_93);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_93))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_93)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_90));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_91))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_91);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_91)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_92))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_92);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_91)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_92))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_92)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_91))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
        co_await __Vfork_5__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_107 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_107);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_107))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_107)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_106))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_106);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_113 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_113);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_113))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_113)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_112));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_111 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_111))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_111 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_111);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_111))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_111)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_108));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_109))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_109);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_109)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_110))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_110);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_109)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_110))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_110)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_109))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_119 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_119);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_119))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_119)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_118));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_117 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_117))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_117 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_117);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_117))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_117)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_114));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_115))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_115);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_115)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_116))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_116);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_115)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_116))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_116)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_115))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
        co_await __Vfork_6__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_131 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_131);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_131))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_131)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_130))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_130);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_137 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_137);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_137))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_137)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_136));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_135 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_135))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_135 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_135);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_135))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_135)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_132));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_133))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_133);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_133)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_134))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_134);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_133)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_134))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_134)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_133))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_143 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_143);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_143))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_143)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_142));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_141 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_141))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_141 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_141);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_141))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_141)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_138));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_139))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_139);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_139)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_140))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_140);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_139)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_140))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_140)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_139))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
        co_await __Vfork_7__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_155 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_155);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_155))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_155)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_154))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_154);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    if (VL_UNLIKELY(((0xa1b2c3d4U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:370: Assertion failed in %m: example WO field did not store the key\n",3, 'M',vlSymsp->name(),"tb_axil.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 370, "", false);
    } else {
        ++(vlSelf->__Vcoverage[466]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_161 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_161);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_161))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_161)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_160));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_159 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_159))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_159 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_159);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_159))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_159)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_156));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_157))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_157);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_157)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_158))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_158);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_157)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_158))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_158)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_157))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
        co_await __Vfork_8__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_173 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_173);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_173))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_173)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_172))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_172);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    vlSelfRef.tb_axil__DOT__i_hw_clear_key_data = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:375: Assertion failed in %m: example WO clear did not override write\n",3, 'M',vlSymsp->name(),"tb_axil.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 375, "", false);
    } else {
        ++(vlSelf->__Vcoverage[467]);
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
        co_await __Vfork_9__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                      199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_185 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_185);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_185))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_185)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_184))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_184);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    if (VL_UNLIKELY(((0x55667788U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:377: Assertion failed in %m: example WO write after clear failed\n",3, 'M',vlSymsp->name(),"tb_axil.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 377, "", false);
    } else {
        ++(vlSelf->__Vcoverage[468]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_191 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_191);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_191))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_191)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_190));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_189 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_189))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_189 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_189);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_189))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_189)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_186));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_187))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_187);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_187)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_188))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_188);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_187)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_188))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_188)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_187))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
        co_await __Vfork_10__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                       199);
    }
    ++(vlSelf->__Vcoverage[429]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_203 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_203);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_203))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_203)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_202))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_202);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_209 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_209);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_209))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_209)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_208));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_207 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_207))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_207 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_207);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_207))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_207)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_204));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_205))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_205);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_205)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_206))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_206);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_205)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_206))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_206)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_205))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_213 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_213);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_213))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_213)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_212));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__send_ar__address_214 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_215 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_215 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_215);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_215))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_215)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_214));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         292);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             297);
        if (VL_UNLIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:298: Assertion failed in %m: QUEUED mode exceeded configured read depth\n",3, 'M',vlSymsp->name(),"tb_axil.check_full_queued_limit", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 298, "", false);
        } else {
            ++(vlSelf->__Vcoverage[453]);
        }
        __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210);
        ++(vlSelf->__Vcoverage[454]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         301);
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
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                                 307);
            __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210 
                = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210);
            if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                 & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210))) {
                ++(vlSelf->__Vcoverage[455]);
            }
            if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_210)) {
                ++(vlSelf->__Vcoverage[456]);
            }
            if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[457]);
            }
            ++(vlSelf->__Vcoverage[458]);
        }
        if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
            ++(vlSelf->__Vcoverage[459]);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:310: Assertion failed in %m: queued response timeout\n",3, 'M',vlSymsp->name(),"tb_axil.check_full_queued_limit", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 310, "", false);
        }
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             311);
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[460]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[461]);
        }
        __Vtask_tb_axil__DOT__check_full_queued_limit__index_211 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__index_211);
        ++(vlSelf->__Vcoverage[462]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         313);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: independent read depth limit\n",0);
    ++(vlSelf->__Vcoverage[463]);
    ++(vlSelf->__Vcoverage[465]);
    ++(vlSelf->__Vcoverage[469]);
    VL_WRITEF_NX("PASS AXIL example map: full field access, mapped/unmapped, and WO hardware clear\n",0);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 423, "");
    ++(vlSelf->__Vcoverage[537]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_218 = 0x12345678U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_217 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_216 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_219 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_220 = __Vtask_tb_axil__DOT__axi_read__address_216;
    __Vtask_tb_axil__DOT__send_ar__cycles_221 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_220;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_221 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_221))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_221 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_221);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_221))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_221)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_220));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_219 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_219))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_219 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_219);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_219))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_219)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_216));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_217))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_217);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_217)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_218))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_218);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_217)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_218))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_218)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_217))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: reset value and selected clock-mode read path\n",0);
    __Vtask_tb_axil__DOT__axi_write__expected_225 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_224 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_223 = 0xaabbccddU;
    __Vtask_tb_axil__DOT__axi_write__address_222 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_228 
        = __Vtask_tb_axil__DOT__axi_write__strobe_224;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_227 
        = __Vtask_tb_axil__DOT__axi_write__data_223;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_226 
        = __Vtask_tb_axil__DOT__axi_write__address_222;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_229 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_230 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_231 = 0;
    {
        VlForkSync __Vfork_11__sync;
        __Vfork_11__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__0(vlSelf, __Vfork_11__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__1(vlSelf, __Vfork_11__sync);
        co_await __Vfork_11__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                       199);
    }
    ++(vlSelf->__Vcoverage[429]);
    __Vtask_tb_axil__DOT__wait_b__expected_232 = __Vtask_tb_axil__DOT__axi_write__expected_225;
    __Vtask_tb_axil__DOT__wait_b__cycles_233 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_233 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_233))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_233 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_233);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_233))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_233)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_232))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_232);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_236 = 0xaabbccddU;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_235 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_234 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_237 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_238 = __Vtask_tb_axil__DOT__axi_read__address_234;
    __Vtask_tb_axil__DOT__send_ar__cycles_239 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_238;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_239 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_239))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_239 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_239);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_239))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_239)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_238));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_237 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_237))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_237 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_237);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_237))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_237)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_234));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_235))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_235);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_235)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_236))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_236);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_235)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_236))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_236)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_235))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: full-word write/read and independent AW/W handshakes\n",0);
    __Vtask_tb_axil__DOT__axi_write__expected_243 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_242 = 2U;
    __Vtask_tb_axil__DOT__axi_write__data_241 = 0x0000ee00U;
    __Vtask_tb_axil__DOT__axi_write__address_240 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_246 
        = __Vtask_tb_axil__DOT__axi_write__strobe_242;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_245 
        = __Vtask_tb_axil__DOT__axi_write__data_241;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_244 
        = __Vtask_tb_axil__DOT__axi_write__address_240;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_247 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_248 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_249 = 0;
    {
        VlForkSync __Vfork_12__sync;
        __Vfork_12__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__0(vlSelf, __Vfork_12__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__1(vlSelf, __Vfork_12__sync);
        co_await __Vfork_12__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                       199);
    }
    ++(vlSelf->__Vcoverage[429]);
    __Vtask_tb_axil__DOT__wait_b__expected_250 = __Vtask_tb_axil__DOT__axi_write__expected_243;
    __Vtask_tb_axil__DOT__wait_b__cycles_251 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_251 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_251))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_251 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_251);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_251))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_251)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_250))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_250);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_254 = 0xaabbeeddU;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_253 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_252 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_255 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_256 = __Vtask_tb_axil__DOT__axi_read__address_252;
    __Vtask_tb_axil__DOT__send_ar__cycles_257 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_256;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_257 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_257))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_257 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_257);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_257))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_257)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_256));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_255 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_255))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_255 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_255);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_255))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_255)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_252));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_253))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_253);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_253)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_254))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_254);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_253)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_254))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_254)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_253))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: WSTRB updates only the selected byte lane\n",0);
    __Vtask_tb_axil__DOT__axi_read__expected_data_260 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_259 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_258 = 0x0010U;
    __Vtask_tb_axil__DOT__axi_read__cycles_261 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_262 = __Vtask_tb_axil__DOT__axi_read__address_258;
    __Vtask_tb_axil__DOT__send_ar__cycles_263 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_262;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_263 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_263))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_263 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_263);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_263))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_263)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_262));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_261 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_261))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_261 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_261);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_261))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_261)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_258));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_259))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_259);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_259)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_260))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_260);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_259)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_260))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_260)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_259))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    __Vtask_tb_axil__DOT__axi_write__expected_267 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_266 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_265 = 0xa1b2c3d4U;
    __Vtask_tb_axil__DOT__axi_write__address_264 = 0x0010U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_270 
        = __Vtask_tb_axil__DOT__axi_write__strobe_266;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_269 
        = __Vtask_tb_axil__DOT__axi_write__data_265;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_268 
        = __Vtask_tb_axil__DOT__axi_write__address_264;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_271 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_272 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_273 = 0;
    {
        VlForkSync __Vfork_13__sync;
        __Vfork_13__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__0(vlSelf, __Vfork_13__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__1(vlSelf, __Vfork_13__sync);
        co_await __Vfork_13__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                       199);
    }
    ++(vlSelf->__Vcoverage[429]);
    __Vtask_tb_axil__DOT__wait_b__expected_274 = __Vtask_tb_axil__DOT__axi_write__expected_267;
    __Vtask_tb_axil__DOT__wait_b__cycles_275 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_275 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_275))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_275 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_275);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_275))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_275)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_274))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_274);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    if (VL_UNLIKELY(((0xa1b2c3d4U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:442: Assertion failed in %m: WO storage did not capture software write\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 442, "", false);
    } else {
        ++(vlSelf->__Vcoverage[539]);
    }
    __Vtask_tb_axil__DOT__axi_read__expected_data_278 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_277 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_276 = 0x0010U;
    __Vtask_tb_axil__DOT__axi_read__cycles_279 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_280 = __Vtask_tb_axil__DOT__axi_read__address_276;
    __Vtask_tb_axil__DOT__send_ar__cycles_281 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_280;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_281 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_281))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_281 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_281);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_281))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_281)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_280));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_279 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_279))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_279 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_279);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_279))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_279)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_276));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_277))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_277);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_277)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_278))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_278);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_277)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_278))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_278)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_277))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    __Vtask_tb_axil__DOT__axi_write__expected_285 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_284 = 2U;
    __Vtask_tb_axil__DOT__axi_write__data_283 = 0x0000ee00U;
    __Vtask_tb_axil__DOT__axi_write__address_282 = 0x0010U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_288 
        = __Vtask_tb_axil__DOT__axi_write__strobe_284;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_287 
        = __Vtask_tb_axil__DOT__axi_write__data_283;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_286 
        = __Vtask_tb_axil__DOT__axi_write__address_282;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_289 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_290 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_291 = 0;
    {
        VlForkSync __Vfork_14__sync;
        __Vfork_14__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__0(vlSelf, __Vfork_14__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__1(vlSelf, __Vfork_14__sync);
        co_await __Vfork_14__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                       199);
    }
    ++(vlSelf->__Vcoverage[429]);
    __Vtask_tb_axil__DOT__wait_b__expected_292 = __Vtask_tb_axil__DOT__axi_write__expected_285;
    __Vtask_tb_axil__DOT__wait_b__cycles_293 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_293 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_293))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_293 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_293);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_293))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_293)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_292))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_292);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    if (VL_UNLIKELY(((0xa1b2eed4U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:445: Assertion failed in %m: WO WSTRB did not update selected byte lane\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 445, "", false);
    } else {
        ++(vlSelf->__Vcoverage[540]);
    }
    vlSelfRef.tb_axil__DOT__i_hw_clear_key_data = 1U;
    __Vtask_tb_axil__DOT__axi_write__expected_297 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_296 = 1U;
    __Vtask_tb_axil__DOT__axi_write__data_295 = 0xffffffffU;
    __Vtask_tb_axil__DOT__axi_write__address_294 = 0x0010U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_300 
        = __Vtask_tb_axil__DOT__axi_write__strobe_296;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_299 
        = __Vtask_tb_axil__DOT__axi_write__data_295;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_298 
        = __Vtask_tb_axil__DOT__axi_write__address_294;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_301 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_302 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_303 = 0;
    {
        VlForkSync __Vfork_15__sync;
        __Vfork_15__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__0(vlSelf, __Vfork_15__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__1(vlSelf, __Vfork_15__sync);
        co_await __Vfork_15__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                       199);
    }
    ++(vlSelf->__Vcoverage[429]);
    __Vtask_tb_axil__DOT__wait_b__expected_304 = __Vtask_tb_axil__DOT__axi_write__expected_297;
    __Vtask_tb_axil__DOT__wait_b__cycles_305 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_305 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_305))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_305 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_305);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_305))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_305)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_304))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_304);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    vlSelfRef.tb_axil__DOT__i_hw_clear_key_data = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:449: Assertion failed in %m: WO hardware clear did not override concurrent software write\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 449, "", false);
    } else {
        ++(vlSelf->__Vcoverage[541]);
    }
    tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4 = 2U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             450);
        tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_axil__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[542]);
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:451: Assertion failed in %m: WO field changed after clear was released\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 451, "", false);
    } else {
        ++(vlSelf->__Vcoverage[543]);
    }
    __Vtask_tb_axil__DOT__axi_write__expected_309 = 0U;
    __Vtask_tb_axil__DOT__axi_write__strobe_308 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_307 = 0x55667788U;
    __Vtask_tb_axil__DOT__axi_write__address_306 = 0x0010U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_312 
        = __Vtask_tb_axil__DOT__axi_write__strobe_308;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_311 
        = __Vtask_tb_axil__DOT__axi_write__data_307;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_310 
        = __Vtask_tb_axil__DOT__axi_write__address_306;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_313 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_314 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_315 = 0;
    {
        VlForkSync __Vfork_16__sync;
        __Vfork_16__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__0(vlSelf, __Vfork_16__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__1(vlSelf, __Vfork_16__sync);
        co_await __Vfork_16__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                       199);
    }
    ++(vlSelf->__Vcoverage[429]);
    __Vtask_tb_axil__DOT__wait_b__expected_316 = __Vtask_tb_axil__DOT__axi_write__expected_309;
    __Vtask_tb_axil__DOT__wait_b__cycles_317 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_317 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_317))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_317 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_317);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_317))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_317)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_316))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_316);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    if (VL_UNLIKELY(((0x55667788U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:453: Assertion failed in %m: WO field did not accept a write after clear release\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 453, "", false);
    } else {
        ++(vlSelf->__Vcoverage[544]);
    }
    __Vtask_tb_axil__DOT__axi_read__expected_data_320 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_319 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_318 = 0x0010U;
    __Vtask_tb_axil__DOT__axi_read__cycles_321 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_322 = __Vtask_tb_axil__DOT__axi_read__address_318;
    __Vtask_tb_axil__DOT__send_ar__cycles_323 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_322;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_323 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_323))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_323 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_323);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_323))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_323)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_322));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_321 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_321))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_321 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_321);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_321))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_321)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_318));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_319))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_319);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_319)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_320))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_320);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_319)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_320))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_320)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_319))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: WO read-zero, WSTRB, storage, clear priority, and post-clear write\n",0);
    __Vtask_tb_axil__DOT__axi_write__expected_327 = 2U;
    __Vtask_tb_axil__DOT__axi_write__strobe_326 = 0x0fU;
    __Vtask_tb_axil__DOT__axi_write__data_325 = 0x11111111U;
    __Vtask_tb_axil__DOT__axi_write__address_324 = 2U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_330 
        = __Vtask_tb_axil__DOT__axi_write__strobe_326;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_329 
        = __Vtask_tb_axil__DOT__axi_write__data_325;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_328 
        = __Vtask_tb_axil__DOT__axi_write__address_324;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_331 = 0U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_332 = 0;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_333 = 0;
    {
        VlForkSync __Vfork_17__sync;
        __Vfork_17__sync.init(2U, nullptr);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__0(vlSelf, __Vfork_17__sync);
        Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__1(vlSelf, __Vfork_17__sync);
        co_await __Vfork_17__sync.join(nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                       199);
    }
    ++(vlSelf->__Vcoverage[429]);
    __Vtask_tb_axil__DOT__wait_b__expected_334 = __Vtask_tb_axil__DOT__axi_write__expected_327;
    __Vtask_tb_axil__DOT__wait_b__cycles_335 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_335 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_335))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_335 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_335);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_335))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_335)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_334))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_334);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    ++(vlSelf->__Vcoverage[439]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_338 = 0U;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_337 = 3U;
    __Vtask_tb_axil__DOT__axi_read__address_336 = 4U;
    __Vtask_tb_axil__DOT__axi_read__cycles_339 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_340 = __Vtask_tb_axil__DOT__axi_read__address_336;
    __Vtask_tb_axil__DOT__send_ar__cycles_341 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_340;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_341 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_341))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_341 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_341);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_341))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_341)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_340));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_339 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_339))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_339 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_339);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_339))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_339)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_336));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_337))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_337);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_337)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_338))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_338);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_337)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_338))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_338)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_337))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: misaligned SLVERR and unmapped DECERR\n",0);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    __Vtask_tb_axil__DOT__send_ar__address_342 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_343 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_342;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_343 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_343))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_343 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_343);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_343))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_343)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_342));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    tb_axil__DOT__cycles = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, tb_axil__DOT__cycles))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             467);
        tb_axil__DOT__cycles = ((IData)(1U) + tb_axil__DOT__cycles);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, tb_axil__DOT__cycles))) {
            ++(vlSelf->__Vcoverage[545]);
        }
        if (VL_LTES_III(32, 0x00000064U, tb_axil__DOT__cycles)) {
            ++(vlSelf->__Vcoverage[546]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[547]);
        }
        ++(vlSelf->__Vcoverage[548]);
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                      | (0xaabbeeddU != vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:470: Assertion failed in %m: R response was not valid/stable\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 470, "", false);
    } else {
        ++(vlSelf->__Vcoverage[549]);
    }
    tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5 = 3U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             472);
        if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                          | (0xaabbeeddU != vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:473: Assertion failed in %m: R response changed under backpressure\n",3, 'M',vlSymsp->name(),"tb_axil.unnamedblk1_6", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 473, "", false);
        } else {
            ++(vlSelf->__Vcoverage[553]);
        }
        if ((0xaabbeeddU != vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata)) {
            ++(vlSelf->__Vcoverage[554]);
        }
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[555]);
        }
        if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & (0xaabbeeddU == vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata))) {
            ++(vlSelf->__Vcoverage[556]);
        }
        tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (tb_axil__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[557]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         475);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         477);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         478);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             486);
        tb_axil__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (tb_axil__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[558]);
    }
    vlSelfRef.tb_axil__DOT__i_rst_n_axi = 1U;
    tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7 = 2U;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        Vtb_axil___024root____VbeforeTrig_hde8656e6__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_reg)");
        co_await vlSelfRef.__VtrigSched_hde8656e6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             488);
        tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (tb_axil__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[559]);
    }
    vlSelfRef.tb_axil__DOT__i_rst_n_reg = 1U;
    tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             490);
        tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8 
            = (tb_axil__DOT__unnamedblk1_9__DOT____Vrepeat8 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[560]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         495);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.tb_axil__DOT__i_axi_wdata = 0xcafebabeU;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = 0x0fU;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                         503);
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[561]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:504: Assertion failed in %m: read was not accepted in concurrent arbitration test\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 504, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
                            | (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:506: Assertion failed in %m: READ_WRITE/QUEUED mode did not accept one read and one write concurrently\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 506, "", false);
    } else {
        ++(vlSelf->__Vcoverage[564]);
    }
    ++(vlSelf->__Vcoverage[569]);
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         509);
    vlSelfRef.tb_axil__DOT__old_value = 0x12345678U;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         511);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    ++(vlSelf->__Vcoverage[575]);
    tb_axil__DOT__cycles = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, tb_axil__DOT__cycles))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             522);
        tb_axil__DOT__cycles = ((IData)(1U) + tb_axil__DOT__cycles);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, tb_axil__DOT__cycles))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (VL_LTES_III(32, 0x00000064U, tb_axil__DOT__cycles)) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[579]);
    }
    if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                      | (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != vlSelfRef.tb_axil__DOT__old_value))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:525: Assertion failed in %m: round-robin read did not observe pre-write value\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 525, "", false);
    } else {
        ++(vlSelf->__Vcoverage[580]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         526);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         528);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         529);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    ++(vlSelf->__Vcoverage[585]);
    __Vtask_tb_axil__DOT__wait_b__expected_344 = 0U;
    __Vtask_tb_axil__DOT__wait_b__cycles_345 = 0;
    __Vtask_tb_axil__DOT__wait_b__cycles_345 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_345))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             238);
        __Vtask_tb_axil__DOT__wait_b__cycles_345 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__wait_b__cycles_345);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_345))) {
            ++(vlSelf->__Vcoverage[430]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__wait_b__cycles_345)) {
            ++(vlSelf->__Vcoverage[431]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[432]);
        }
        ++(vlSelf->__Vcoverage[433]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[434]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:241: Assertion failed in %m: AXI BVALID timeout\n",3, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 241, "", false);
    }
    if (VL_UNLIKELY(((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                      != (IData)(__Vtask_tb_axil__DOT__wait_b__expected_344))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:242: Assertion failed in %m: BRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.wait_b", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr]
                     , '#',2,__Vtask_tb_axil__DOT__wait_b__expected_344);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 242, "", false);
    } else {
        ++(vlSelf->__Vcoverage[437]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         243);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         245);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         246);
    vlSelfRef.tb_axil__DOT__i_axi_bready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[435]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[436]);
    }
    ++(vlSelf->__Vcoverage[438]);
    __Vtask_tb_axil__DOT__axi_read__expected_data_348 = 0xcafebabeU;
    __Vtask_tb_axil__DOT__axi_read__expected_resp_347 = 0U;
    __Vtask_tb_axil__DOT__axi_read__address_346 = 0U;
    __Vtask_tb_axil__DOT__axi_read__cycles_349 = 0;
    __Vtask_tb_axil__DOT__send_ar__address_350 = __Vtask_tb_axil__DOT__axi_read__address_346;
    __Vtask_tb_axil__DOT__send_ar__cycles_351 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_350;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_351 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_351))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_351 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_351);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_351))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_351)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_350));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__axi_read__cycles_349 = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
            & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_349))) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             269);
        __Vtask_tb_axil__DOT__axi_read__cycles_349 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__axi_read__cycles_349);
        if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
             & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_349))) {
            ++(vlSelf->__Vcoverage[440]);
        }
        if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__axi_read__cycles_349)) {
            ++(vlSelf->__Vcoverage[441]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[442]);
        }
        ++(vlSelf->__Vcoverage[443]);
    }
    if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
        ++(vlSelf->__Vcoverage[444]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:272: Assertion failed in %m: AXI RVALID timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__axi_read__address_346));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 272, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp) 
                      != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_347))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:273: Assertion failed in %m: RRESP got %0d expected %0d\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp)
                     , '#',2,__Vtask_tb_axil__DOT__axi_read__expected_resp_347);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 273, "", false);
    } else {
        ++(vlSelf->__Vcoverage[447]);
    }
    if (VL_UNLIKELY((((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_347)) 
                      & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
                         != __Vtask_tb_axil__DOT__axi_read__expected_data_348))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:275: Assertion failed in %m: RDATA got %08x expected %08x\n",5, 'M',vlSymsp->name(),"tb_axil.axi_read", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata
                     , '#',32,__Vtask_tb_axil__DOT__axi_read__expected_data_348);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 275, "", false);
    } else {
        ++(vlSelf->__Vcoverage[448]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         276);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         278);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         279);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[445]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[446]);
    }
    if (((0U == (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_347)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            != __Vtask_tb_axil__DOT__axi_read__expected_data_348))) {
        ++(vlSelf->__Vcoverage[449]);
    }
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         == __Vtask_tb_axil__DOT__axi_read__expected_data_348)) {
        ++(vlSelf->__Vcoverage[450]);
    }
    if ((0U != (IData)(__Vtask_tb_axil__DOT__axi_read__expected_resp_347))) {
        ++(vlSelf->__Vcoverage[451]);
    }
    ++(vlSelf->__Vcoverage[452]);
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: reset-read round-robin arbitration and response ordering\n",0);
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352 = 0;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_353 = 0;
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    __Vtask_tb_axil__DOT__send_ar__address_354 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_355 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_354;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_355 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_355))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_355 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_355);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_355))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_355)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_354));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    __Vtask_tb_axil__DOT__send_ar__address_356 = 0U;
    __Vtask_tb_axil__DOT__send_ar__cycles_357 = 0;
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         178);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = __Vtask_tb_axil__DOT__send_ar__address_356;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__send_ar__cycles_357 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
            & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_357))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             183);
        __Vtask_tb_axil__DOT__send_ar__cycles_357 = 
            ((IData)(1U) + __Vtask_tb_axil__DOT__send_ar__cycles_357);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)) 
             & VL_GTS_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_357))) {
            ++(vlSelf->__Vcoverage[406]);
        }
        if (VL_LTES_III(32, 0x00000050U, __Vtask_tb_axil__DOT__send_ar__cycles_357)) {
            ++(vlSelf->__Vcoverage[407]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
            ++(vlSelf->__Vcoverage[408]);
        }
        ++(vlSelf->__Vcoverage[409]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
        ++(vlSelf->__Vcoverage[410]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:186: Assertion failed in %m: AXI ARREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.send_ar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_axil__DOT__send_ar__address_356));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 186, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         187);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         188);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[411]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[412]);
    }
    ++(vlSelf->__Vcoverage[413]);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         292);
    vlSelfRef.tb_axil__DOT__i_axi_araddr = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 1U;
    __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352 = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352)) {
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             297);
        if (VL_UNLIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:298: Assertion failed in %m: QUEUED mode exceeded configured read depth\n",3, 'M',vlSymsp->name(),"tb_axil.check_full_queued_limit", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 298, "", false);
        } else {
            ++(vlSelf->__Vcoverage[453]);
        }
        __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352);
        ++(vlSelf->__Vcoverage[454]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         301);
    vlSelfRef.tb_axil__DOT__i_axi_arvalid = 0U;
    vlSelfRef.tb_axil__DOT__i_axi_rready = 1U;
    __Vtask_tb_axil__DOT__check_full_queued_limit__index_353 = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_axil__DOT__check_full_queued_limit__index_353)) {
        __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352 = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352))) {
            Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                           "@(posedge tb_axil.i_clk_axi)");
            co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_axil.i_clk_axi)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                                 307);
            __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352 
                = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352);
            if (((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
                 & VL_GTS_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352))) {
                ++(vlSelf->__Vcoverage[455]);
            }
            if (VL_LTES_III(32, 0x00000064U, __Vtask_tb_axil__DOT__check_full_queued_limit__cycles_352)) {
                ++(vlSelf->__Vcoverage[456]);
            }
            if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[457]);
            }
            ++(vlSelf->__Vcoverage[458]);
        }
        if (VL_LIKELY(((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))))) {
            ++(vlSelf->__Vcoverage[459]);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:310: Assertion failed in %m: queued response timeout\n",3, 'M',vlSymsp->name(),"tb_axil.check_full_queued_limit", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 310, "", false);
        }
        Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                       "@(posedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             311);
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[460]);
        }
        if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[461]);
        }
        __Vtask_tb_axil__DOT__check_full_queued_limit__index_353 
            = ((IData)(1U) + __Vtask_tb_axil__DOT__check_full_queued_limit__index_353);
        ++(vlSelf->__Vcoverage[462]);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         313);
    vlSelfRef.tb_axil__DOT__i_axi_rready = 0U;
    tb_axil__DOT__test_count = ((IData)(1U) + tb_axil__DOT__test_count);
    VL_WRITEF_NX("PASS AXIL case: independent read depth limit\n",0);
    ++(vlSelf->__Vcoverage[463]);
    ++(vlSelf->__Vcoverage[465]);
    VL_WRITEF_NX("PASS AXIL: mode=2 asynchronous=0, cases=%0d\n",1
                 , '~',32,tb_axil__DOT__test_count);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 540, "");
    if ((0xaabbeeddU != vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata)) {
        ++(vlSelf->__Vcoverage[550]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[551]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (0xaabbeeddU == vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata))) {
        ++(vlSelf->__Vcoverage[552]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[562]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready) {
        ++(vlSelf->__Vcoverage[563]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[565]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[566]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[567]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
               & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))))) {
        ++(vlSelf->__Vcoverage[572]);
    }
    ++(vlSelf->__Vcoverage[573]);
    if ((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
         != vlSelfRef.tb_axil__DOT__old_value)) {
        ++(vlSelf->__Vcoverage[581]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[582]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
            == vlSelfRef.tb_axil__DOT__old_value))) {
        ++(vlSelf->__Vcoverage[583]);
    }
    ++(vlSelf->__Vcoverage[586]);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_17__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_17__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_331 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_331)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_331 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_331 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_329;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_330;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_333 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_333))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_333 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_333);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_333))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_333)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_17__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          214);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_328;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_332 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_332))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_332 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_332);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_332))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_332)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_328));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_17__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_16__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_16__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_313 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_313)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_313 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_313 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_311;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_312;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_315 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_315))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_315 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_315);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_315))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_315)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_16__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          214);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_310;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_314 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_314))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_314 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_314);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_314))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_314)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_310));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_16__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_15__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_15__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_301 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_301)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_301 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_301 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_299;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_300;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_303 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_303))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_303 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_303);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_303))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_303)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_15__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          214);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_298;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_302 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_302))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_302 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_302);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_302))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_302)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_298));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_15__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_14__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_289 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_289)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_289 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_289 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_287;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_288;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_291 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_291))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_291 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_291);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_291))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_291)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_14__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_14__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_14__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_286;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_290 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_290))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_290 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_290);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_290))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_290)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_286));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_14__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_13__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_271 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_271)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_271 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_271 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_269;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_270;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_273 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_273))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_273 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_273);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_273))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_273)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_13__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_13__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_268;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_272 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_272))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_272 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_272);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_272))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_272)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_268));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_13__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_12__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_247 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_247)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_247 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_247 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_245;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_246;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_249 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_249))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_249 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_249);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_249))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_249)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_12__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_12__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_244;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_248 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_248))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_248 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_248);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_248))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_248)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_244));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_12__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_11__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_229 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_229)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_229 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_229 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_227;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_228;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_231 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_231))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_231 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_231);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_231))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_231)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_11__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_11__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_226;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_230 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_230))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_230 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_230);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_230))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_230)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_226));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_11__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_10__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_10__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_10__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_199 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_199)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_199 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_199 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_197;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_198;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_10__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_10__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_10__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_10__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_196;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_196));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_10__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                          200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_9__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_9__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_9__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_181 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_181)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_181 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_181 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_179;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_180;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_9__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_9__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_178;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_178));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_9__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_8__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_8__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_8__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_169 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_169)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_169 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_169 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_167;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_168;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_8__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_8__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_166;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_166));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_8__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_7__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_7__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_7__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_151 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_151)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_151 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_151 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_149;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_150;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_7__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_7__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_148;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_148));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_7__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_6__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_6__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_6__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_127 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_127)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_127 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_127 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_125;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_126;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_6__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_6__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_124;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_124));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_6__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_5__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_5__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_103 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_103)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_103 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_103 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_101;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_102;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_5__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_100;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_100));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_5__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_4__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_4__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_79 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_79)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_79 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_79 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_77;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_78;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81)) {
            ++(vlSelf->__Vcoverage[423]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
            ++(vlSelf->__Vcoverage[424]);
        }
        ++(vlSelf->__Vcoverage[425]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready))) {
        ++(vlSelf->__Vcoverage[426]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:224: Assertion failed in %m: AXI WREADY timeout\n",3, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 224, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         225);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         226);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[427]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[428]);
    }
    __Vfork_4__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_76;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80)) {
            ++(vlSelf->__Vcoverage[415]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
            ++(vlSelf->__Vcoverage[416]);
        }
        ++(vlSelf->__Vcoverage[417]);
    }
    if (VL_LIKELY((vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[418]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:209: Assertion failed in %m: AXI AWREADY timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_axil.write_request", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_76));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 209, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         210);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         211);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[419]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[420]);
    }
    __Vfork_4__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
    co_return;
}
