// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ahblite.h for the primary calling header

#include "Vtb_ahblite__pch.h"

VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__0(Vtb_ahblite___024root* vlSelf);
VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__1(Vtb_ahblite___024root* vlSelf);
VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__2(Vtb_ahblite___024root* vlSelf);
VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__3(Vtb_ahblite___024root* vlSelf);

void Vtb_ahblite___024root___eval_initial(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_initial\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        ++(vlSelf->__Vcoverage[2265]);
        ++(vlSelf->__Vcoverage[2263]);
        ++(vlSelf->__Vcoverage[2269]);
        ++(vlSelf->__Vcoverage[2267]);
        ++(vlSelf->__Vcoverage[2277]);
        ++(vlSelf->__Vcoverage[2279]);
        ++(vlSelf->__Vcoverage[2303]);
        ++(vlSelf->__Vcoverage[2305]);
        ++(vlSelf->__Vcoverage[2375]);
        ++(vlSelf->__Vcoverage[2373]);
        ++(vlSelf->__Vcoverage[2476]);
        ++(vlSelf->__Vcoverage[2521]);
        ++(vlSelf->__Vcoverage[2566]);
        ++(vlSelf->__Vcoverage[2611]);
        ++(vlSelf->__Vcoverage[2657]);
        ++(vlSelf->__Vcoverage[2708]);
        ++(vlSelf->__Vcoverage[2725]);
        if ((0U != (0x12U ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_engine_events)))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 636, 0x12U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_engine_events);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_engine_events = 0x12U;
        }
        if ((0U != (0x34U ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count)))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 670, 0x34U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_port_0_event_count = 0x34U;
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 696, 0U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_start = 0U;
        }
        if ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 706, 0U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_port_1_event_count = 0U;
        }
        if ((0U != (0x000000ffU & (0x56U ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count))))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 758, 0x56U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count 
                = (0x00000056U | (0xff00U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count)));
        }
        if ((0U != (0x000000ffU & (0x78U ^ ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count) 
                                            >> 8U))))) {
            VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 774, 0x78U, 
                                   ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count) 
                                    >> 8U));
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count 
                = (0x00007800U | (0x00ffU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_monitor_sample_count)));
        }
        if ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_monitor_capture))) {
            VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 810, 0U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_monitor_capture);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_monitor_capture = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_burst_valid)))) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1178, 1U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_burst_valid);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_burst_valid = 1U;
        }
        if ((0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_value)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2198, 0U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_value);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_value = 0U;
        }
    }
    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

void Vtb_ahblite___024root___eval_sample(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_sample\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_ahblite___024root___eval_ico(Vtb_ahblite___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_ico\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ahblite___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_ahblite___024root___timing_ready(Vtb_ahblite___024root* vlSelf);
void Vtb_ahblite___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ahblite___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_ahblite___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_ahblite___024root___timing_resume(Vtb_ahblite___024root* vlSelf);
void Vtb_ahblite___024root___act_comb__TOP__0(Vtb_ahblite___024root* vlSelf);

bool Vtb_ahblite___024root___eval_act(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_act\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_reg)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_reg__0)) 
                                                          << 4U) 
                                                         | (((((~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0)) 
                                                              << 3U) 
                                                             | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_rst_n_ahb__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0 
            = vlSelfRef.tb_ahblite__DOT__i_clk_ahb;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_rst_n_ahb__0 
            = vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_reg__0 
            = vlSelfRef.tb_ahblite__DOT__i_clk_reg;
    }
    Vtb_ahblite___024root___timing_ready(vlSelf);
    Vtb_ahblite___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ahblite___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_ahblite___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_ahblite___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_ahblite___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
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
                }
            }
            if ((0x0000000000000019ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_ahblite___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_ahblite___024root___eval_inact(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_inact\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_ahblite___024root___nba_sequent__TOP__0(Vtb_ahblite___024root* vlSelf);
void Vtb_ahblite___024root___nba_comb__TOP__0(Vtb_ahblite___024root* vlSelf);
void Vtb_ahblite___024root___nba_comb__TOP__1(Vtb_ahblite___024root* vlSelf);
void Vtb_ahblite___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_ahblite___024root___eval_nba(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_nba\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_ahblite___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_ahblite___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
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
                }
            }
            if ((0x0000000000000019ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_ahblite___024root___nba_comb__TOP__0(vlSelf);
            }
            if ((0x000000000000001bULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_ahblite___024root___nba_comb__TOP__1(vlSelf);
            }
        }
        Vtb_ahblite___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_ahblite___024root___eval_obs(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_obs\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_ahblite___024root___eval_react(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_react\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_ahblite___024root___eval_postponed(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_postponed\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__0(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ahblite__DOT__i_clk_ahb = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                             44);
        vlSelfRef.tb_ahblite__DOT__i_clk_ahb = (1U 
                                                & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb)));
        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb)))) {
            ++(vlSelf->__Vcoverage[568]);
        }
        if (vlSelfRef.tb_ahblite__DOT__i_clk_ahb) {
            ++(vlSelf->__Vcoverage[569]);
        }
        ++(vlSelf->__Vcoverage[570]);
    }
    ++(vlSelf->__Vcoverage[571]);
    co_return;
}

VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__1(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ahblite__DOT__i_clk_reg = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001b58ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                             48);
        vlSelfRef.tb_ahblite__DOT__i_clk_reg = (1U 
                                                & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_reg)));
        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_reg)))) {
            ++(vlSelf->__Vcoverage[572]);
        }
        if (vlSelfRef.tb_ahblite__DOT__i_clk_reg) {
            ++(vlSelf->__Vcoverage[573]);
        }
        ++(vlSelf->__Vcoverage[574]);
    }
    ++(vlSelf->__Vcoverage[575]);
    co_return;
}

void Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(Vtb_ahblite___024root* vlSelf, const char* __VeventDescription);
void Vtb_ahblite___024root____VbeforeTrig_h5fcdb6b6__0(Vtb_ahblite___024root* vlSelf, const char* __VeventDescription);
void Vtb_ahblite___024root____VbeforeTrig_he1407110__0(Vtb_ahblite___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__2(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_ahblite__DOT__test_count;
    tb_ahblite__DOT__test_count = 0;
    IData/*31:0*/ tb_ahblite__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_ahblite__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_0;
    __Vtask_tb_ahblite__DOT__ahb_access__address_0 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_1;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_1 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_2;
    __Vtask_tb_ahblite__DOT__ahb_access__size_2 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_3;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_3 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_4;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_4 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_6;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_6 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_8;
    __Vtask_tb_ahblite__DOT__ahb_access__done_8 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_9;
    __Vtask_tb_ahblite__DOT__ahb_access__address_9 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_10;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_10 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_11;
    __Vtask_tb_ahblite__DOT__ahb_access__size_11 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_12;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_12 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_13;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_13 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_15;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_15 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_17;
    __Vtask_tb_ahblite__DOT__ahb_access__done_17 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_18;
    __Vtask_tb_ahblite__DOT__ahb_access__address_18 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_19;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_19 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_20;
    __Vtask_tb_ahblite__DOT__ahb_access__size_20 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_21;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_21 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_22;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_22 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_24;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_24 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_26;
    __Vtask_tb_ahblite__DOT__ahb_access__done_26 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_27;
    __Vtask_tb_ahblite__DOT__ahb_access__address_27 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_28;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_28 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_29;
    __Vtask_tb_ahblite__DOT__ahb_access__size_29 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_30;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_30 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_31;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_31 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_33;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_33 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_35;
    __Vtask_tb_ahblite__DOT__ahb_access__done_35 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_36;
    __Vtask_tb_ahblite__DOT__ahb_access__address_36 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_37;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_37 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_38;
    __Vtask_tb_ahblite__DOT__ahb_access__size_38 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_39;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_39 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_40;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_40 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_42;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_42 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_44;
    __Vtask_tb_ahblite__DOT__ahb_access__done_44 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_45;
    __Vtask_tb_ahblite__DOT__ahb_access__address_45 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_46;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_46 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_47;
    __Vtask_tb_ahblite__DOT__ahb_access__size_47 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_48;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_48 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_49;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_49 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_51;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_51 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_53;
    __Vtask_tb_ahblite__DOT__ahb_access__done_53 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_54;
    __Vtask_tb_ahblite__DOT__ahb_access__address_54 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_55;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_55 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_56;
    __Vtask_tb_ahblite__DOT__ahb_access__size_56 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_57;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_57 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_58;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_58 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_60;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_60 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_62;
    __Vtask_tb_ahblite__DOT__ahb_access__done_62 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_63;
    __Vtask_tb_ahblite__DOT__ahb_access__address_63 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_64;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_64 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_65;
    __Vtask_tb_ahblite__DOT__ahb_access__size_65 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_66;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_66 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_67;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_67 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_69;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_69 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_71;
    __Vtask_tb_ahblite__DOT__ahb_access__done_71 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_72;
    __Vtask_tb_ahblite__DOT__ahb_access__address_72 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_73;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_73 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_74;
    __Vtask_tb_ahblite__DOT__ahb_access__size_74 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_75;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_75 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_76;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_76 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_78;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_78 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_80;
    __Vtask_tb_ahblite__DOT__ahb_access__done_80 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_81;
    __Vtask_tb_ahblite__DOT__ahb_access__address_81 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_82;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_82 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_83;
    __Vtask_tb_ahblite__DOT__ahb_access__size_83 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_84;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_84 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_85;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_85 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_87;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_87 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_89;
    __Vtask_tb_ahblite__DOT__ahb_access__done_89 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_90;
    __Vtask_tb_ahblite__DOT__ahb_access__address_90 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_91;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_91 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_92;
    __Vtask_tb_ahblite__DOT__ahb_access__size_92 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_93;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_93 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_94;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_94 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_96;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_96 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_98;
    __Vtask_tb_ahblite__DOT__ahb_access__done_98 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_99;
    __Vtask_tb_ahblite__DOT__ahb_access__address_99 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_100;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_100 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_101;
    __Vtask_tb_ahblite__DOT__ahb_access__size_101 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_102;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_102 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_103;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_103 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_105;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_105 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_107;
    __Vtask_tb_ahblite__DOT__ahb_access__done_107 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_108;
    __Vtask_tb_ahblite__DOT__ahb_access__address_108 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_109;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_109 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_110;
    __Vtask_tb_ahblite__DOT__ahb_access__size_110 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_111;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_111 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_112;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_112 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_114;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_114 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_116;
    __Vtask_tb_ahblite__DOT__ahb_access__done_116 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_117;
    __Vtask_tb_ahblite__DOT__ahb_access__address_117 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_118;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_118 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_119;
    __Vtask_tb_ahblite__DOT__ahb_access__size_119 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_120;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_120 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_121;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_121 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_123;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_123 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_125;
    __Vtask_tb_ahblite__DOT__ahb_access__done_125 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_126;
    __Vtask_tb_ahblite__DOT__ahb_access__address_126 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_127;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_127 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_128;
    __Vtask_tb_ahblite__DOT__ahb_access__size_128 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_129;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_129 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_130;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_130 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_132;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_132 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_134;
    __Vtask_tb_ahblite__DOT__ahb_access__done_134 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_135;
    __Vtask_tb_ahblite__DOT__ahb_access__address_135 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_136;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_136 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_137;
    __Vtask_tb_ahblite__DOT__ahb_access__size_137 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_138;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_138 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_139;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_139 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_141;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_141 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_143;
    __Vtask_tb_ahblite__DOT__ahb_access__done_143 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_144;
    __Vtask_tb_ahblite__DOT__ahb_access__address_144 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_145;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_145 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_146;
    __Vtask_tb_ahblite__DOT__ahb_access__size_146 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_147;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_147 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_148;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_148 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_150;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_150 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_152;
    __Vtask_tb_ahblite__DOT__ahb_access__done_152 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_153;
    __Vtask_tb_ahblite__DOT__ahb_access__address_153 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_154;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_154 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_155;
    __Vtask_tb_ahblite__DOT__ahb_access__size_155 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_156;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_156 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_157;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_157 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_159;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_159 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_161;
    __Vtask_tb_ahblite__DOT__ahb_access__done_161 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_162;
    __Vtask_tb_ahblite__DOT__ahb_access__address_162 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_163;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_163 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_164;
    __Vtask_tb_ahblite__DOT__ahb_access__size_164 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_165;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_165 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_166;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_166 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_168;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_168 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_170;
    __Vtask_tb_ahblite__DOT__ahb_access__done_170 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_171;
    __Vtask_tb_ahblite__DOT__ahb_access__address_171 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_172;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_172 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_173;
    __Vtask_tb_ahblite__DOT__ahb_access__size_173 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_174;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_174 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_175;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_175 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_177;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_177 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_179;
    __Vtask_tb_ahblite__DOT__ahb_access__done_179 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_180;
    __Vtask_tb_ahblite__DOT__ahb_access__address_180 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_181;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_181 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_182;
    __Vtask_tb_ahblite__DOT__ahb_access__size_182 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_183;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_183 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_184;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_184 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_186;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_186 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_188;
    __Vtask_tb_ahblite__DOT__ahb_access__done_188 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_189;
    __Vtask_tb_ahblite__DOT__ahb_access__address_189 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_190;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_190 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_191;
    __Vtask_tb_ahblite__DOT__ahb_access__size_191 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_192;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_192 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_193;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_193 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_195;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_195 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_197;
    __Vtask_tb_ahblite__DOT__ahb_access__done_197 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_198;
    __Vtask_tb_ahblite__DOT__ahb_access__address_198 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_199;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_199 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_200;
    __Vtask_tb_ahblite__DOT__ahb_access__size_200 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_201;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_201 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_202;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_202 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_204;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_204 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_206;
    __Vtask_tb_ahblite__DOT__ahb_access__done_206 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_207;
    __Vtask_tb_ahblite__DOT__ahb_access__address_207 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_208;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_208 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_209;
    __Vtask_tb_ahblite__DOT__ahb_access__size_209 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_210;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_210 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_211;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_211 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_213;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_213 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_215;
    __Vtask_tb_ahblite__DOT__ahb_access__done_215 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_216;
    __Vtask_tb_ahblite__DOT__ahb_access__address_216 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_217;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_217 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_218;
    __Vtask_tb_ahblite__DOT__ahb_access__size_218 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_219;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_219 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_220;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_220 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_222;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_222 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_224;
    __Vtask_tb_ahblite__DOT__ahb_access__done_224 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_225;
    __Vtask_tb_ahblite__DOT__ahb_access__address_225 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_226;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_226 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_227;
    __Vtask_tb_ahblite__DOT__ahb_access__size_227 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_228;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_228 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_229;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_229 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_230;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_230 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_231;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_231 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_233;
    __Vtask_tb_ahblite__DOT__ahb_access__done_233 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_234;
    __Vtask_tb_ahblite__DOT__ahb_access__address_234 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_235;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_235 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_236;
    __Vtask_tb_ahblite__DOT__ahb_access__size_236 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_237;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_237 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_238;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_238 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_239;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_239 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_240;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_240 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_242;
    __Vtask_tb_ahblite__DOT__ahb_access__done_242 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_243;
    __Vtask_tb_ahblite__DOT__ahb_access__address_243 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_244;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_244 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_245;
    __Vtask_tb_ahblite__DOT__ahb_access__size_245 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_246;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_246 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_247;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_247 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_248;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_248 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_249;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_249 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_251;
    __Vtask_tb_ahblite__DOT__ahb_access__done_251 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_252;
    __Vtask_tb_ahblite__DOT__ahb_access__address_252 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_253;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_253 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_254;
    __Vtask_tb_ahblite__DOT__ahb_access__size_254 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_255;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_255 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_256;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_256 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_257;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_257 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_258;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_258 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_260;
    __Vtask_tb_ahblite__DOT__ahb_access__done_260 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_261;
    __Vtask_tb_ahblite__DOT__ahb_access__address_261 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_262;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_262 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_263;
    __Vtask_tb_ahblite__DOT__ahb_access__size_263 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_264;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_264 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_265;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_265 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_266;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_266 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_267;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_267 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_269;
    __Vtask_tb_ahblite__DOT__ahb_access__done_269 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_270;
    __Vtask_tb_ahblite__DOT__ahb_access__address_270 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_271;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_271 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_272;
    __Vtask_tb_ahblite__DOT__ahb_access__size_272 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_273;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_273 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_274;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_274 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_275;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_275 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_276;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_276 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_278;
    __Vtask_tb_ahblite__DOT__ahb_access__done_278 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_279;
    __Vtask_tb_ahblite__DOT__ahb_access__address_279 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_280;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_280 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_281;
    __Vtask_tb_ahblite__DOT__ahb_access__size_281 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_282;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_282 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_283;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_283 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_284;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_284 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_285;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_285 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_287;
    __Vtask_tb_ahblite__DOT__ahb_access__done_287 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_288;
    __Vtask_tb_ahblite__DOT__ahb_access__address_288 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_289;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_289 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_290;
    __Vtask_tb_ahblite__DOT__ahb_access__size_290 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_291;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_291 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_292;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_292 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_293;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_293 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_294;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_294 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_296;
    __Vtask_tb_ahblite__DOT__ahb_access__done_296 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_297;
    __Vtask_tb_ahblite__DOT__ahb_access__address_297 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_298;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_298 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_299;
    __Vtask_tb_ahblite__DOT__ahb_access__size_299 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_300;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_300 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_301;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_301 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_302;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_302 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_303;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_303 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_305;
    __Vtask_tb_ahblite__DOT__ahb_access__done_305 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_306;
    __Vtask_tb_ahblite__DOT__ahb_access__address_306 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_307;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_307 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_308;
    __Vtask_tb_ahblite__DOT__ahb_access__size_308 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_309;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_309 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_310;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_310 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_311;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_311 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_312;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_312 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_314;
    __Vtask_tb_ahblite__DOT__ahb_access__done_314 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_315;
    __Vtask_tb_ahblite__DOT__ahb_access__address_315 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_316;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_316 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_317;
    __Vtask_tb_ahblite__DOT__ahb_access__size_317 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_318;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_318 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_319;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_319 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_320;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_320 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_321;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_321 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_323;
    __Vtask_tb_ahblite__DOT__ahb_access__done_323 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_324;
    __Vtask_tb_ahblite__DOT__ahb_access__address_324 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_325;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_325 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_326;
    __Vtask_tb_ahblite__DOT__ahb_access__size_326 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_327;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_327 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_328;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_328 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_329;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_329 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_330;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_330 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_332;
    __Vtask_tb_ahblite__DOT__ahb_access__done_332 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_333;
    __Vtask_tb_ahblite__DOT__ahb_access__address_333 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_334;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_334 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_335;
    __Vtask_tb_ahblite__DOT__ahb_access__size_335 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_336;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_336 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_337;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_337 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_338;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_338 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_339;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_339 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_341;
    __Vtask_tb_ahblite__DOT__ahb_access__done_341 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_342;
    __Vtask_tb_ahblite__DOT__ahb_access__address_342 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_343;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_343 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_344;
    __Vtask_tb_ahblite__DOT__ahb_access__size_344 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_345;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_345 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_346;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_346 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_347;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_347 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_348;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_348 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_350;
    __Vtask_tb_ahblite__DOT__ahb_access__done_350 = 0;
    // Body
    vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb = 0U;
    vlSelfRef.tb_ahblite__DOT__i_rst_n_reg = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hready = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done = 0U;
    tb_ahblite__DOT__test_count = 0U;
    tb_ahblite__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_ahblite__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             295);
        tb_ahblite__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_ahblite__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[602]);
    }
    vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb = 1U;
    tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_ahblite___024root____VbeforeTrig_h5fcdb6b6__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_reg)");
        co_await vlSelfRef.__VtrigSched_h5fcdb6b6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             297);
        tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[603]);
    }
    vlSelfRef.tb_ahblite__DOT__i_rst_n_reg = 1U;
    tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                          "@(posedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             299);
        tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[604]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5 = 0x12000000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_4 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_3 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_2 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_1 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_0 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_6 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_8 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_0;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_1;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_2;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_3;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_6 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_8 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_6) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_8)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_6 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_6);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_0)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_1))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_5
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_0));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_8 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_1))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_1) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_6) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_8)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_8) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_6)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_8))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_0));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_8)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_8) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_13 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_12 = 0x00b80000U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_11 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_10 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_9 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_15 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_17 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_9;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_10;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_11;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_12;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_15 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_17 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_15) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_17)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_15 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_15);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_9)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_10))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_14
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_9));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_17 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_10))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_10) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_15) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_17)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_17) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_15)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_17))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_9));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_17)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_17) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23 = 0x12b80000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_22 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_21 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_20 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_19 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_18 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_24 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_26 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_18;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_19;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_20;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_21;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_24 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_26 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_24) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_26)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_24 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_24);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_18)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_19))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_23
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_18));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_26 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_19))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_19) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_24) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_26)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_26) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_24)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_26))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_18));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_26)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_26) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         215);
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done = 1U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         226);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         227);
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32 = 0x12bf8000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_31 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_30 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_29 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_28 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_27 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_33 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_35 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_27;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_28;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_29;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_30;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_33 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_35 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_33) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_35)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_33 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_33);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_27)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_28))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_32
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_27));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_35 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_28))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_28) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_33) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_35)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_35) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_33)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_35))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_27));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_35)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_35) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41 = 0x12bf0000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_40 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_39 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_38 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_37 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_36 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_42 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_44 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_36;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_37;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_38;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_39;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_42 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_44 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_42) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_44)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_42 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_42);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_36)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_37))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_41
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_36));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_44 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_37))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_37) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_42) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_44)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_44) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_42)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_44))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_36));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_44)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_44) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_49 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_48 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_47 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_46 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_45 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_51 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_53 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_45;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_46;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_47;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_48;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_51 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_53 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_51) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_53)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_51 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_51);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_45)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_46))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_50
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_45));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_53 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_46))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_46) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_51) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_53)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_53) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_51)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_53))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_45));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_53)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_53) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59 = 0x12040000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_58 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_57 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_56 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_55 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_54 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_60 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_62 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_54;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_55;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_56;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_57;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_60 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_62 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_60) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_62)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_60 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_60);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_54)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_55))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_59
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_54));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_62 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_55))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_55) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_60) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_62)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_62) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_60)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_62))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_54));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_62)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_62) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_67 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_66 = 0x00040000U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_65 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_64 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_63 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_69 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_71 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_63;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_64;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_65;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_66;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_69 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_71 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_69) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_71)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_69 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_69);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_63)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_64))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_68
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_63));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_71 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_64))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_64) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_69) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_71)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_71) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_69)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_71))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_63));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_71)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_71) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77 = 0x12000000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_76 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_75 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_74 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_73 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_72 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_78 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_80 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_72;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_73;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_74;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_75;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_78 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_80 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_78) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_80)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_78 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_78);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_72)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_73))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_77
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_72));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_80 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_73))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_73) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_78) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_80)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_80) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_78)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_80))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_72));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_80)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_80) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         240);
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending = 1U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         243);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         244);
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_85 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_84 = 0x00020000U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_83 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_82 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_81 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_87 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_89 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_81;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_82;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_83;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_84;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_87 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_89 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_87) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_89)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_87 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_87);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_81)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_82))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_86
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_81));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_89 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_82))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_82) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_87) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_89)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_89) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_87)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_89))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_81));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_89)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_89) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95 = 0x12020000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_94 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_93 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_92 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_91 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_90 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_96 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_98 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_90;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_91;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_92;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_93;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_96 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_98 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_96) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_98)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_96 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_96);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_90)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_91))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_95
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_90));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_98 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_91))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_91) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_96) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_98)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_98) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_96)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_98))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_90));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_98)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_98) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104 = 0x34000000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_103 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_102 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_101 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_100 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_99 = 0x0100U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_105 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_107 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_99;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_100;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_101;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_102;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_105 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_107 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_105) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_107)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_105 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_105);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_99)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_100))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_104
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_99));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_107 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_100))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_100) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_105) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_107)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_107) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_105)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_107))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_99));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_107)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_107) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_112 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_111 = 0x00a80000U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_110 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_109 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_108 = 0x0100U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_114 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_116 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_108;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_109;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_110;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_111;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_114 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_116 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_114) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_116)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_114 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_114);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_108)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_109))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_113
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_108));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_116 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_109))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_109) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_114) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_116)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_116) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_114)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_116))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_108));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_116)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_116) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122 = 0x34a80000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_121 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_120 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_119 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_118 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_117 = 0x0100U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_123 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_125 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_117;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_118;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_119;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_120;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_123 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_125 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_123) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_125)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_123 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_123);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_117)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_118))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_122
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_117));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_125 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_118))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_118) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_123) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_125)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_125) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_123)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_125))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_117));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_125)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_125) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131 = 0x56000000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_130 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_129 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_128 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_127 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_126 = 0x0200U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_132 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_134 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_126;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_127;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_128;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_129;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_132 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_134 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_132) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_134)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_132 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_132);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_126)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_127))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_131
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_126));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_134 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_127))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_127) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_132) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_134)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_134) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_132)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_134))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_126));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_134)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_134) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_139 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_138 = 0x00580000U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_137 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_136 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_135 = 0x0200U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_141 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_143 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_135;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_136;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_137;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_138;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_141 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_143 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_141) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_143)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_141 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_141);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_135)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_136))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_140
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_135));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_143 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_136))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_136) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_141) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_143)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_143) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_141)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_143))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_135));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_143)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_143) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149 = 0x56580000U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_148 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_147 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_146 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_145 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_144 = 0x0200U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_150 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_152 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_144;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_145;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_146;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_147;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_150 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_152 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_150) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_152)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_150 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_150);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_144)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_145))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_149
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_144));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_152 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_145))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_145) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_150) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_152)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_152) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_150)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_152))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_144));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_152)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_152) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_157 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_156 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_155 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_154 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_153 = 0x0400U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_159 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_161 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_153;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_154;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_155;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_156;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_159 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_161 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_159) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_161)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_159 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_159);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_153)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_154))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_158
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_153));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_161 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_154))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_154) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_159) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_161)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_161) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_159)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_161))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_153));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_161)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_161) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_166 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_165 = 0xa1b2c3d4U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_164 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_163 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_162 = 0x0400U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_168 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_170 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_162;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_163;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_164;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_165;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_168 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_170 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_168) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_170)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_168 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_168);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_162)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_163))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_167
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_162));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_170 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_163))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_163) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_168) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_170)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_170) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_168)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_170))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_162));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_170)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_170) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    if (VL_UNLIKELY(((0xa1b2c3d4U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:258: Assertion failed in %m: example WO field did not store the key\n",3, 'M',vlSymsp->name(),"tb_ahblite.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 258, "", false);
    } else {
        ++(vlSelf->__Vcoverage[598]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_175 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_174 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_173 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_172 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_171 = 0x0400U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_177 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_179 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_171;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_172;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_173;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_174;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_177 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_179 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_177) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_179)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_177 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_177);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_171)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_172))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_176
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_171));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_179 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_172))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_172) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_177) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_179)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_179) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_177)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_179))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_171));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_179)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_179) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_184 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_183 = 0xffffffffU;
    __Vtask_tb_ahblite__DOT__ahb_access__size_182 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_181 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_180 = 0x0400U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_186 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_188 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_180;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_181;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_182;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_183;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_186 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_188 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_186) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_188)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_186 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_186);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_180)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_181))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_185
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_180));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_188 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_181))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_181) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_186) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_188)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_188) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_186)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_188))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_180));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_188)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_188) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:263: Assertion failed in %m: example WO clear did not override write\n",3, 'M',vlSymsp->name(),"tb_ahblite.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 263, "", false);
    } else {
        ++(vlSelf->__Vcoverage[599]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_193 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_192 = 0x55667788U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_191 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_190 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_189 = 0x0400U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_195 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_197 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_189;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_190;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_191;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_192;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_195 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_197 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_195) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_197)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_195 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_195);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_189)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_190))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_194
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_189));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_197 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_190))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_190) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_195) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_197)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_197) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_195)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_197))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_189));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_197)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_197) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    if (VL_UNLIKELY(((0x55667788U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:265: Assertion failed in %m: example WO write after clear failed\n",3, 'M',vlSymsp->name(),"tb_ahblite.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 265, "", false);
    } else {
        ++(vlSelf->__Vcoverage[600]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_202 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_201 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_200 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_199 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_198 = 0x0400U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_204 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_206 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_198;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_199;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_200;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_201;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_204 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_206 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_204) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_206)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_204 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_204);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_198)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_199))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_203
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_198));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_206 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_199))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_199) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_204) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_206)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_206) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_204)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_206))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_198));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_206)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_206) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_211 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_210 = 0x11111111U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_209 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_208 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_207 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_213 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_215 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_207;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_208;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_209;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_210;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_213 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_215 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_213) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_215)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_213 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_213);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_207)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_208))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_212
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_207));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_215 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_208))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_208) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_213) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_215)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_215) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_213)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_215))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_207));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_215)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_215) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_220 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_219 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_218 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_217 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_216 = 0x0300U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_222 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_224 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_216;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_217;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_218;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_219;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_222 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_224 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_222) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_224)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_222 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_222);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_216)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_217))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_221
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_216));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_224 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_217))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_217) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_222) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_224)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_224) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_222)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_224))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_216));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_224)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_224) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    ++(vlSelf->__Vcoverage[601]);
    VL_WRITEF_NX("PASS AHB example map: full field access, mapped/unmapped, and WO hardware clear\n",0);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 304, "");
    ++(vlSelf->__Vcoverage[605]);
    if (VL_UNLIKELY(((0x12345678U != vlSelfRef.tb_ahblite__DOT__o_data_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:307: Assertion failed in %m: CSR reset value mismatch\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 307, "", false);
    } else {
        ++(vlSelf->__Vcoverage[607]);
    }
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: reset and selected FIFO clock-mode initialization\n",0);
    ++(vlSelf->__Vcoverage[611]);
    vlSelfRef.tb_ahblite__DOT__wo_write_word = 0xa1b2c3d4U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_230 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_229 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_228 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_227 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_226 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_225 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_231 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_233 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_225;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_226;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_227;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_228;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_231 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_233 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_231) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_233)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_231 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_231);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_229))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_225)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_229));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_229) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_229)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_226))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_230))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_230
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_225));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_233 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_229) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_232)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_229)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_229)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_226))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_230))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_230)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_226) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_229) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_231) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_233)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_233) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_231)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_233))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_225));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_233)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_233) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_239 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_238 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_237 
        = vlSelfRef.tb_ahblite__DOT__wo_write_word;
    __Vtask_tb_ahblite__DOT__ahb_access__size_236 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_235 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_234 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_240 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_242 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_234;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_235;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_236;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_237;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_240 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_242 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_240) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_242)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_240 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_240);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_238))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_234)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_238));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_238) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_238)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_235))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_239))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_239
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_234));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_242 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_238) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_241)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_238)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_238)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_235))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_239))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_239)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_235) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_238) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_240) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_242)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_242) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_240)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_242))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_234));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_242)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_242) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    if (VL_UNLIKELY(((0xa1b2c3d4U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:314: Assertion failed in %m: WO storage did not capture software write\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 314, "", false);
    } else {
        ++(vlSelf->__Vcoverage[612]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_248 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_247 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_246 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_245 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_244 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_243 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_249 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_251 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_243;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_244;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_245;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_246;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_249 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_251 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_249) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_251)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_249 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_249);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_247))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_243)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_247));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_247) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_247)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_244))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_248))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_248
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_243));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_251 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_247) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_250)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_247)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_247)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_244))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_248))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_248)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_244) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_247) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_249) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_251)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_251) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_249)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_251))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_243));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_251)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_251) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr = 0x0011U;
    vlSelfRef.tb_ahblite__DOT__wo_partial_write_data = 0x0000ee00U;
    vlSelfRef.tb_ahblite__DOT__wo_after_partial = 0xa1b2eed4U;
    ++(vlSelf->__Vcoverage[615]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_257 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_256 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_255 
        = vlSelfRef.tb_ahblite__DOT__wo_partial_write_data;
    __Vtask_tb_ahblite__DOT__ahb_access__size_254 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_253 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_252 
        = vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_258 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_260 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_252;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_253;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_254;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_255;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_258 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_260 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_258) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_260)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_258 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_258);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_256))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_252)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_256));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_256) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_256)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_253))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_257))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_257
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_252));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_260 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_256) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_259)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_256)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_256)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_253))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_257))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_257)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_253) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_256) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_258) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_260)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_260) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_258)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_260))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_252));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_260)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_260) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    if (VL_UNLIKELY(((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
                      != vlSelfRef.tb_ahblite__DOT__wo_after_partial)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:330: Assertion failed in %m: WO WSTRB did not update selected byte lane: %08x\n",4, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 330, "", false);
    } else {
        ++(vlSelf->__Vcoverage[616]);
    }
    vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_266 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_265 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_264 
        = vlSelfRef.tb_ahblite__DOT__wo_write_word;
    __Vtask_tb_ahblite__DOT__ahb_access__size_263 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_262 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_261 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_267 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_269 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_261;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_262;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_263;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_264;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_267 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_269 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_267) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_269)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_267 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_267);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_265))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_261)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_265));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_265) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_265)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_262))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_266))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_266
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_261));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_269 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_265) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_268)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_265)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_265)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_262))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_266))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_266)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_262) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_265) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_267) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_269)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_269) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_267)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_269))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_261));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_269)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_269) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:334: Assertion failed in %m: WO hardware clear did not override concurrent software write\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 334, "", false);
    } else {
        ++(vlSelf->__Vcoverage[617]);
    }
    tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3 = 2U;
    while (VL_LTS_III(32, 0U, tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                          "@(posedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             335);
        tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[618]);
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:336: Assertion failed in %m: WO field changed after clear was released\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 336, "", false);
    } else {
        ++(vlSelf->__Vcoverage[619]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_275 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_274 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_273 = 0x55667788U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_272 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_271 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_270 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_276 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_278 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_270;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_271;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_272;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_273;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_276 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_278 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_276) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_278)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_276 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_276);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_274))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_270)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_274));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_274) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_274)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_271))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_275))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_275
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_270));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_278 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_274) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_277)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_274)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_274)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_271))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_275))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_275)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_271) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_274) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_276) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_278)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_278) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_276)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_278))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_270));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_278)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_278) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    if (VL_UNLIKELY(((0x55667788U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:338: Assertion failed in %m: WO field did not accept a write after clear release\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 338, "", false);
    } else {
        ++(vlSelf->__Vcoverage[622]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_284 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_283 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_282 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_281 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_280 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_279 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_285 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_287 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_279;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_280;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_281;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_282;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_285 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_287 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_285) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_287)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_285 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_285);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_283))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_279)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_283));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_283) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_283)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_280))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_284))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_284
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_279));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_287 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_283) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_286)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_283)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_283)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_280))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_284))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_284)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_280) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_283) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_285) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_287)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_287) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_285)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_287))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_279));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_287)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_287) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: WO read-zero, WSTRB, storage, clear priority, and post-clear write\n",0);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_293 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_292 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_291 = 0x11223344U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_290 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_289 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_288 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_294 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_296 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_288;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_289;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_290;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_291;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_294 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_296 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_294) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_296)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_294 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_294);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_292))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_288)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_292));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_292) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_292)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_289))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_293))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_293
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_288));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_296 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_292) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_295)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_292)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_292)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_289))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_293))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_293)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_289) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_292) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_294) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_296)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_296) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_294)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_296))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_288));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_296)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_296) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    if (VL_UNLIKELY(((0x11223344U != vlSelfRef.tb_ahblite__DOT__o_data_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:345: Assertion failed in %m: AHB word write failed\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 345, "", false);
    } else {
        ++(vlSelf->__Vcoverage[623]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_302 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_301 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_300 = 0x0000aa00U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_299 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_298 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_297 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_303 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_305 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_297;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_298;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_299;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_300;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_303 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_305 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_303) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_305)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_303 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_303);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_301))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_297)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_301));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_301) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_301)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_298))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_302))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_302
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_297));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_305 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_301) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_304)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_301)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_301)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_298))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_302))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_302)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_298) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_301) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_303) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_305)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_305) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_303)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_305))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_297));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_305)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_305) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    if (VL_UNLIKELY(((0x1122aa44U != vlSelfRef.tb_ahblite__DOT__o_data_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:347: Assertion failed in %m: AHB byte lane write failed: %08x\n",4, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_ahblite__DOT__o_data_value);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 347, "", false);
    } else {
        ++(vlSelf->__Vcoverage[624]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_311 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_310 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_309 = 0xbeef0000U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_308 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_307 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_306 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_312 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_314 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_306;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_307;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_308;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_309;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_312 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_314 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_312) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_314)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_312 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_312);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_310))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_306)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_310));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_310) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_310)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_307))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_311))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_311
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_306));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_314 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_310) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_313)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_310)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_310)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_307))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_311))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_311)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_307) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_310) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_312) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_314)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_314) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_312)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_314))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_306));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_314)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_314) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    if (VL_UNLIKELY(((0xbeefaa44U != vlSelfRef.tb_ahblite__DOT__o_data_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:349: Assertion failed in %m: AHB halfword lane write failed: %08x\n",4, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_ahblite__DOT__o_data_value);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 349, "", false);
    } else {
        ++(vlSelf->__Vcoverage[625]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_320 = 0xbeefaa44U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_319 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_318 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_317 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_316 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_315 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_321 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_323 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_315;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_316;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_317;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_318;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_321 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_323 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_321) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_323)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_321 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_321);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_319))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_315)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_319));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_319) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_319)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_316))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_320))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_320
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_315));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_323 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_319) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_322)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_319)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_319)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_316))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_320))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_320)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_316) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_319) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_321) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_323)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_323) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_321)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_323))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_315));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_323)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_323) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: LITTLE word, byte, halfword writes and readback\n",0);
    ++(vlSelf->__Vcoverage[634]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_329 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_328 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_327 = 0xffffffffU;
    __Vtask_tb_ahblite__DOT__ahb_access__size_326 = 3U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_325 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_324 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_330 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_332 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_324;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_325;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_326;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_327;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_330 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_332 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_330) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_332)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_330 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_330);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_328))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_324)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_328));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_328) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_328)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_325))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_329))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_329
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_324));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_332 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_328) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_331)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_328)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_328)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_325))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_329))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_329)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_325) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_328) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_330) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_332)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_332) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_330)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_332))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_324));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_332)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_332) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_338 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_337 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_336 = 0xffffffffU;
    __Vtask_tb_ahblite__DOT__ahb_access__size_335 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_334 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_333 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_339 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_341 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_333;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_334;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_335;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_336;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_339 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_341 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_339) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_341)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_339 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_339);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_337))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_333)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_337));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_337) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_337)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_334))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_338))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_338
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_333));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_341 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_337) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_340)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_337)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_337)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_334))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_338))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_338)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_334) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_337) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_339) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_341)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_341) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_339)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_341))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_333));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_341)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_341) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: unsupported size and misaligned halfword return two-cycle ERROR\n",0);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_347 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_346 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_345 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_344 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_343 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_342 = 4U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_348 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_350 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         172);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_342;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_343;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_344;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = 0U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         179);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         180);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_345;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_348 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_350 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_348) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_350)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                             188);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_348 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_348);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349);
            ++(vlSelf->__Vcoverage[579]);
        } else {
            ++(vlSelf->__Vcoverage[580]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_346))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:194: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_342)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_346));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 194, "", false);
            } else {
                ++(vlSelf->__Vcoverage[581]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_346) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:196: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 196, "", false);
            } else {
                ++(vlSelf->__Vcoverage[582]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_346)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_343))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_347))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:198: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_347
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_342));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 198, "", false);
            } else {
                ++(vlSelf->__Vcoverage[586]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                                 199);
            __Vtask_tb_ahblite__DOT__ahb_access__done_350 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_346) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349))) {
                ++(vlSelf->__Vcoverage[583]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_349)) {
                ++(vlSelf->__Vcoverage[584]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_346)))) {
                ++(vlSelf->__Vcoverage[585]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_346)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_343))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_347))) {
                ++(vlSelf->__Vcoverage[587]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_347)) {
                ++(vlSelf->__Vcoverage[588]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_343) {
                ++(vlSelf->__Vcoverage[589]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_346) {
                ++(vlSelf->__Vcoverage[590]);
            }
            ++(vlSelf->__Vcoverage[591]);
        } else {
            ++(vlSelf->__Vcoverage[592]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_348) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_350)))) {
            ++(vlSelf->__Vcoverage[576]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_350) {
            ++(vlSelf->__Vcoverage[577]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_348)) {
            ++(vlSelf->__Vcoverage[578]);
        }
        ++(vlSelf->__Vcoverage[593]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_350))) {
        ++(vlSelf->__Vcoverage[594]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:203: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_342));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 203, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                                         204);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_350)))) {
        ++(vlSelf->__Vcoverage[595]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_350) {
        ++(vlSelf->__Vcoverage[596]);
    }
    ++(vlSelf->__Vcoverage[597]);
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: unmapped address returns two-cycle ERROR\nPASS AHB: endian=0 asynchronous=0, cases=%0d\n",1
                 , '~',32,tb_ahblite__DOT__test_count);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 384, "");
    ++(vlSelf->__Vcoverage[609]);
    ++(vlSelf->__Vcoverage[621]);
    ++(vlSelf->__Vcoverage[635]);
    co_return;
}

VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__3(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 
                                         388);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:389: Assertion failed in %m: AHB testbench timeout\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AHB_Lite.sv", 389, "", false);
    co_return;
}

bool Vtb_ahblite___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___trigger_anySet__ico\n"); );
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

bool Vtb_ahblite___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___trigger_anySet__act\n"); );
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

void Vtb_ahblite___024root___act_comb__TOP__0(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___act_comb__TOP__0\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clear_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 322, vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clear_key_data);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clear_key_data 
            = vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__wo_write_word 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_write_word))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 324, vlSelfRef.tb_ahblite__DOT__wo_write_word, vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_write_word);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_write_word 
            = vlSelfRef.tb_ahblite__DOT__wo_write_word;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__wo_partial_write_data 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 388, vlSelfRef.tb_ahblite__DOT__wo_partial_write_data, vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_data);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_data 
            = vlSelfRef.tb_ahblite__DOT__wo_partial_write_data;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 452, vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr, vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_addr);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_partial_write_addr 
            = vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__wo_after_partial 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_after_partial))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 484, vlSelfRef.tb_ahblite__DOT__wo_after_partial, vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_after_partial);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__wo_after_partial 
            = vlSelfRef.tb_ahblite__DOT__wo_after_partial;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 548, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_start 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 550, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_start);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_start 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 552, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_fault 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 554, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_fault);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_fault 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 556, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_pending 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 558, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_pending);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_pending 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 560, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_overflow 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 562, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_overflow);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_overflow 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 564, vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_wdata_engine_done 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 566, vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_done);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_we_engine_done 
            = vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite) 
                              << 4U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb)))) 
            << 0x00000030U) | (((QData)((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata)) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))));
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2467]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_6 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_done;
    } else {
        ++(vlSelf->__Vcoverage[2470]);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_rd_engine) {
            ++(vlSelf->__Vcoverage[2468]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_6 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2469]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_6 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_6;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2465]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_done)))) {
        ++(vlSelf->__Vcoverage[2466]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2461]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_5 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2464]);
        if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_153)))) {
            ++(vlSelf->__Vcoverage[2462]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_5 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2463]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_5;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2459]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_overflow)))) {
        ++(vlSelf->__Vcoverage[2460]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2443]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_152 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2446]);
        if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start) {
            ++(vlSelf->__Vcoverage[2444]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2 
                = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start;
        } else {
            ++(vlSelf->__Vcoverage[2445]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2;
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2440]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2441]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2442]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2449]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_fault;
    } else {
        ++(vlSelf->__Vcoverage[2452]);
        if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2450]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_152 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2451]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2447]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_fault)))) {
        ++(vlSelf->__Vcoverage[2448]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2455]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending;
    } else {
        ++(vlSelf->__Vcoverage[2458]);
        if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2456]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_152 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2457]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending;
        }
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2453]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending)))) {
        ++(vlSelf->__Vcoverage[2454]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2716]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_42 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2719]);
        if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask))) {
            ++(vlSelf->__Vcoverage[2717]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_41 
                = ((vlSelfRef.__Vdfg_Regularize_152 
                    & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                   | (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)));
        } else {
            ++(vlSelf->__Vcoverage[2718]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_41 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data;
        }
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_42 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_41;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_42;
    if (vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2714]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data)))) {
        ++(vlSelf->__Vcoverage[2715]);
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 1202, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1576, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1574, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1568, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1570, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1572, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2134, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt;
    }
}

void Vtb_ahblite___024root___nba_sequent__TOP__0(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___nba_sequent__TOP__0\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*14:0*/ tb_ahblite__DOT__u_dut__DOT____VlemCond_40;
    SData/*14:0*/ tb_ahblite__DOT__u_dut__DOT____VlemCond_32;
    SData/*15:0*/ tb_ahblite__DOT__u_dut__DOT__reg_addr;
    tb_ahblite__DOT__u_dut__DOT__reg_addr = 0;
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
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready;
    tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready = 0;
    CData/*0:0*/ __Vdfg_Regularize_154;
    __Vdfg_Regularize_154 = 0;
    CData/*1:0*/ __Vdfg_Regularize_155;
    __Vdfg_Regularize_155 = 0;
    CData/*2:0*/ __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0;
    CData/*1:0*/ __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 = 0;
    CData/*0:0*/ __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5 = 0;
    CData/*0:0*/ __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6 = 0;
    CData/*1:0*/ __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 = 0;
    CData/*0:0*/ __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8 = 0;
    CData/*0:0*/ __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9 = 0;
    QData/*33:0*/ __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_42;
    __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_42 = 0;
    CData/*0:0*/ __Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_43;
    __Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_43 = 0;
    CData/*0:0*/ __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_44;
    __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_44 = 0;
    QData/*52:0*/ __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_45;
    __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_45 = 0;
    CData/*0:0*/ __Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_46;
    __Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_46 = 0;
    CData/*0:0*/ __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_47;
    __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_47 = 0;
    // Body
    __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr;
    __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_44 = 0U;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count;
    __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr;
    __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_47 = 0U;
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        if ((2U == (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[2899]);
        } else if ((1U == (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 
                = (3U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[2900]);
        } else {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[2901]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_42 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data;
            __Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_43 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_44 = 1U;
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr) {
                ++(vlSelf->__Vcoverage[2902]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5 = 0U;
            } else {
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[2903]);
            }
            ++(vlSelf->__Vcoverage[2904]);
        } else {
            ++(vlSelf->__Vcoverage[2905]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs) {
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr) {
                ++(vlSelf->__Vcoverage[2906]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6 = 0U;
            } else {
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[2907]);
            }
            ++(vlSelf->__Vcoverage[2908]);
        } else {
            ++(vlSelf->__Vcoverage[2909]);
        }
        ++(vlSelf->__Vcoverage[2911]);
    } else {
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5 = 0U;
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6 = 0U;
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 = 0U;
        ++(vlSelf->__Vcoverage[2910]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2912]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2913]);
    }
    ++(vlSelf->__Vcoverage[2914]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        if ((2U == (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[3147]);
        } else if ((1U == (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 
                = (3U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3148]);
        } else {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3149]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_45 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data;
            __Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_46 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_47 = 1U;
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr) {
                ++(vlSelf->__Vcoverage[3150]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8 = 0U;
            } else {
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3151]);
            }
            ++(vlSelf->__Vcoverage[3152]);
        } else {
            ++(vlSelf->__Vcoverage[3153]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) {
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr) {
                ++(vlSelf->__Vcoverage[3154]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9 = 0U;
            } else {
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3155]);
            }
            ++(vlSelf->__Vcoverage[3156]);
        } else {
            ++(vlSelf->__Vcoverage[3157]);
        }
        ++(vlSelf->__Vcoverage[3159]);
    } else {
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8 = 0U;
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9 = 0U;
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 = 0U;
        ++(vlSelf->__Vcoverage[3158]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[3160]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[3161]);
    }
    ++(vlSelf->__Vcoverage[3162]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2721]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2720]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2722]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2723]);
    }
    ++(vlSelf->__Vcoverage[2724]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        if ((4U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
                ++(vlSelf->__Vcoverage[2352]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
                ++(vlSelf->__Vcoverage[2352]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
            } else {
                if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                      & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                     & ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                        | (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans))))) {
                    ++(vlSelf->__Vcoverage[2343]);
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr 
                        = vlSelfRef.tb_ahblite__DOT__i_ahb_haddr;
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite 
                        = vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite;
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize 
                        = vlSelfRef.tb_ahblite__DOT__i_ahb_hsize;
                    __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 1U;
                } else {
                    ++(vlSelf->__Vcoverage[2344]);
                    __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
                }
                if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                      & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                     & (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                    ++(vlSelf->__Vcoverage[2345]);
                }
                if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                      & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                     & (2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                    ++(vlSelf->__Vcoverage[2346]);
                }
                if (((2U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                     & (3U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                    ++(vlSelf->__Vcoverage[2347]);
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)))) {
                    ++(vlSelf->__Vcoverage[2349]);
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready)))) {
                    ++(vlSelf->__Vcoverage[2350]);
                }
                ++(vlSelf->__Vcoverage[2351]);
            }
        } else if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
                ++(vlSelf->__Vcoverage[2342]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 4U;
            } else {
                if ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
                    if ((0U != (3U & (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                                              [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr] 
                                              >> 0x20U))))) {
                        ++(vlSelf->__Vcoverage[2338]);
                        __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 4U;
                    } else {
                        if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                              & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                             & ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                                | (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans))))) {
                            ++(vlSelf->__Vcoverage[2330]);
                            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr 
                                = vlSelfRef.tb_ahblite__DOT__i_ahb_haddr;
                            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite 
                                = vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite;
                            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize 
                                = vlSelfRef.tb_ahblite__DOT__i_ahb_hsize;
                            __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 1U;
                        } else {
                            ++(vlSelf->__Vcoverage[2331]);
                            __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
                        }
                        if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                              & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                             & (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                            ++(vlSelf->__Vcoverage[2332]);
                        }
                        if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                              & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                             & (2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                            ++(vlSelf->__Vcoverage[2333]);
                        }
                        if (((2U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                             & (3U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                            ++(vlSelf->__Vcoverage[2334]);
                        }
                        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)))) {
                            ++(vlSelf->__Vcoverage[2336]);
                        }
                        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready)))) {
                            ++(vlSelf->__Vcoverage[2337]);
                        }
                    }
                    ++(vlSelf->__Vcoverage[2339]);
                } else {
                    ++(vlSelf->__Vcoverage[2340]);
                }
                ++(vlSelf->__Vcoverage[2341]);
            }
        } else if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) {
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready) {
                    ++(vlSelf->__Vcoverage[2326]);
                    __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 2U;
                } else {
                    ++(vlSelf->__Vcoverage[2327]);
                }
            } else {
                ++(vlSelf->__Vcoverage[2328]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 3U;
            }
            ++(vlSelf->__Vcoverage[2329]);
        } else {
            if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                  & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                 & ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                    | (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans))))) {
                ++(vlSelf->__Vcoverage[2317]);
                vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr 
                    = vlSelfRef.tb_ahblite__DOT__i_ahb_haddr;
                vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite 
                    = vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite;
                vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize 
                    = vlSelfRef.tb_ahblite__DOT__i_ahb_hsize;
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 1U;
            } else {
                ++(vlSelf->__Vcoverage[2318]);
            }
            if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                  & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                 & (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                ++(vlSelf->__Vcoverage[2319]);
            }
            if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                  & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                 & (2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                ++(vlSelf->__Vcoverage[2320]);
            }
            if (((2U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                 & (3U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                ++(vlSelf->__Vcoverage[2321]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)))) {
                ++(vlSelf->__Vcoverage[2323]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready)))) {
                ++(vlSelf->__Vcoverage[2324]);
            }
            ++(vlSelf->__Vcoverage[2325]);
        }
        ++(vlSelf->__Vcoverage[2354]);
    } else {
        __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
        ++(vlSelf->__Vcoverage[2353]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2355]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2356]);
    }
    ++(vlSelf->__Vcoverage[2357]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2517]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2516]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2518]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2519]);
    }
    ++(vlSelf->__Vcoverage[2520]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2562]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2561]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2563]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2564]);
    }
    ++(vlSelf->__Vcoverage[2565]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2607]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2606]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2608]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2609]);
    }
    ++(vlSelf->__Vcoverage[2610]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2472]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_start_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_fault_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_pending_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_overflow_nxt;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2471]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2473]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2474]);
    }
    ++(vlSelf->__Vcoverage[2475]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2659]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold 
            = ((0xf0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold)) 
               | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture 
            = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture)) 
               | (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error 
            = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error)) 
               | (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending 
            = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending)) 
               | (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow 
            = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow)) 
               | (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match 
            = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match)) 
               | (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = ((0x3fff8000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment) 
               | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    } else {
        ++(vlSelf->__Vcoverage[2658]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold 
            = (0xf0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture 
            = (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error 
            = (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending 
            = (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow 
            = (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match 
            = (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = (0x3fff8000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2660]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2661]);
    }
    ++(vlSelf->__Vcoverage[2662]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2710]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold 
            = ((0x0fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold)) 
               | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture 
            = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture)) 
               | (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error 
            = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error)) 
               | (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending 
            = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending)) 
               | (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow 
            = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow)) 
               | (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match 
            = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match)) 
               | (2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt)));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = ((0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment) 
               | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                  << 0x0000000fU));
    } else {
        ++(vlSelf->__Vcoverage[2709]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold 
            = (0x0fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2711]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2712]);
    }
    ++(vlSelf->__Vcoverage[2713]);
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr 
        = __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5;
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr 
        = __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8;
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count 
        = __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7;
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr 
        = __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9;
    if (__Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_47) {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[__Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_46] 
            = __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_45;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr 
        = __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6;
    if (__Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_44) {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[__Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_43] 
            = __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_42;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state 
        = __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0;
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count 
        = __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4;
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2881, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3127, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr;
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1192, 
                               (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3131, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3129, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr;
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 1308, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                               [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[0U] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 2915, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[0U], vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[0U];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[1U] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 3021, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[1U], vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem[1U];
    }
    vlSelfRef.__Vdfg_Regularize_153 = (0x0000000fU 
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
    vlSelfRef.__Vdfg_Regularize_152 = (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                               [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                               >> 0x00000010U));
    __Vdfg_Regularize_154 = (1U & (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                           [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                           >> 0x00000034U)));
    tb_ahblite__DOT__u_dut__DOT__reg_addr = (0xfffcU 
                                             & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                                       [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr]));
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 258, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1160, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2883, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr;
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1482, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                               [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
            [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[0U] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 2745, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[0U], vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[0U];
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[1U] 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 2813, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[1U], vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem[1U];
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
        = (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr]);
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1162, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize;
    }
    if (((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
         & (0U == (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))))) {
        ++(vlSelf->__Vcoverage[2270]);
    }
    if (((1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
         & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)))) {
        ++(vlSelf->__Vcoverage[2271]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) {
        ++(vlSelf->__Vcoverage[2272]);
    }
    if ((((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
          & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)) 
         & (0U != (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))))) {
        ++(vlSelf->__Vcoverage[2273]);
    }
    if ((((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
          & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)) 
         & (2U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)))) {
        ++(vlSelf->__Vcoverage[2274]);
    }
    if ((((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
          & (1U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) 
         & (0U != (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))))) {
        ++(vlSelf->__Vcoverage[2275]);
    }
    if ((((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
          & (1U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) 
         & (2U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)))) {
        ++(vlSelf->__Vcoverage[2276]);
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1128, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 0U;
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))));
        ++(vlSelf->__Vcoverage[2281]);
        ++(vlSelf->__Vcoverage[2284]);
        ++(vlSelf->__Vcoverage[2285]);
    } else if ((1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) {
        if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))) {
            ++(vlSelf->__Vcoverage[2295]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 0x0cU;
            ++(vlSelf->__Vcoverage[2293]);
            ++(vlSelf->__Vcoverage[2297]);
        } else {
            ++(vlSelf->__Vcoverage[2290]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 3U;
            ++(vlSelf->__Vcoverage[2288]);
            ++(vlSelf->__Vcoverage[2296]);
        }
        ++(vlSelf->__Vcoverage[2298]);
    } else if ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize))) {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 0x0fU;
        ++(vlSelf->__Vcoverage[2299]);
    } else {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb = 0U;
        ++(vlSelf->__Vcoverage[2300]);
    }
    ++(vlSelf->__Vcoverage[2301]);
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok 
        = ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
           | (((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)) 
               & (0U == (3U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)))) 
              | ((~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr)) 
                 & (1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize)))));
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1168, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state;
    }
    if (((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
         & (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[2369]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2370]);
    }
    if ((2U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        ++(vlSelf->__Vcoverage[2371]);
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1198, 
                               (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)), vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid 
            = (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2885, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 0U;
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 0U;
    if ((4U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 0U;
            ++(vlSelf->__Vcoverage[2367]);
        } else if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 0U;
            ++(vlSelf->__Vcoverage[2367]);
        } else {
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 1U;
            ++(vlSelf->__Vcoverage[2366]);
        }
    } else if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 1U;
            ++(vlSelf->__Vcoverage[2365]);
        } else {
            if ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
                if ((0U == (3U & (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                                          [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr] 
                                          >> 0x20U))))) {
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
                    ++(vlSelf->__Vcoverage[2360]);
                } else {
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp = 1U;
                    ++(vlSelf->__Vcoverage[2361]);
                }
                ++(vlSelf->__Vcoverage[2362]);
            } else {
                ++(vlSelf->__Vcoverage[2363]);
            }
            ++(vlSelf->__Vcoverage[2364]);
        }
    } else if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 0U;
        ++(vlSelf->__Vcoverage[2359]);
    } else {
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout = 1U;
        ++(vlSelf->__Vcoverage[2358]);
    }
    ++(vlSelf->__Vcoverage[2368]);
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs 
        = ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
           & (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)));
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 704, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 702, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 686, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 694, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_start);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 698, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_fault);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 700, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending;
    }
    tb_ahblite__DOT__u_dut__DOT__w_port_0_value = (0x34000000U 
                                                   | ((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode) 
                                                        << 0x00000014U) 
                                                       | (((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow))) 
                                                          << 0x00000010U)) 
                                                      | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done) 
                                                         << 0x0000000fU)));
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 738, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 736, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 722, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 730, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_start);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 732, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_fault);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 734, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending;
    }
    tb_ahblite__DOT__u_dut__DOT__w_port_1_value = (
                                                   (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode) 
                                                     << 0x00000014U) 
                                                    | (((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow))) 
                                                       << 0x00000010U)) 
                                                   | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done) 
                                                      << 0x0000000fU));
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 756, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 754, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 740, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 748, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_start);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 750, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_fault);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 752, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending;
    }
    tb_ahblite__DOT__u_dut__DOT__w_port_2_value = (
                                                   (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode) 
                                                     << 0x00000014U) 
                                                    | (((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow))) 
                                                       << 0x00000010U)) 
                                                   | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done) 
                                                      << 0x0000000fU));
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 652, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 668, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 666, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 660, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_start);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_start 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 662, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_fault);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_fault 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 664, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending;
    }
    tb_ahblite__DOT__u_dut__DOT__w_engine_value = (0x12000000U 
                                                   | ((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode) 
                                                        << 0x00000014U) 
                                                       | (((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow))) 
                                                          << 0x00000010U)) 
                                                      | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done) 
                                                         << 0x0000000fU)));
    if ((0U != (0x00007fffU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                               ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 830, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x3fff8000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != (0x00007fffU & ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
                               >> 0x0000000fU)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 860, 
                               (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                >> 0x0000000fU), (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
                                                  >> 0x0000000fU));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x3fff8000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 826, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 822, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_capture)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 806, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_capture);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_capture 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_error)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 814, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_error);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_error 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 818, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_pending);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_pending 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                               ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 790, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold 
            = ((0xf0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
               | (0x0000000fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 798, 
                               ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                >> 4U), ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold) 
                                         >> 4U));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold 
            = ((0x0fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
               | (0x000000f0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    tb_ahblite__DOT__u_dut__DOT__w_monitor_value = 
        (0x0000000056000000ULL | (((QData)((IData)(
                                                   (0x0000f000U 
                                                    | ((((0x0000001eU 
                                                          & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                                             >> 3U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                                                               >> 1U))) 
                                                        << 4U) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error)) 
                                                            | (1U 
                                                               & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                                                                  >> 1U))) 
                                                           << 2U) 
                                                          | ((2U 
                                                              & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                                                                   >> 1U)))))))) 
                                   << 0x0000002fU) 
                                  | (QData)((IData)(
                                                    ((((0x0000001eU 
                                                        & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture))) 
                                                      << 0x00000013U) 
                                                     | ((((2U 
                                                           & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending))) 
                                                         << 0x00000011U) 
                                                        | ((0x00010000U 
                                                            & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow) 
                                                               << 0x00000010U)) 
                                                           | (0x00008000U 
                                                              & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                                                                 << 0x0000000fU)))))))));
    if ((0U != ((IData)(vlSelfRef.__Vdfg_Regularize_153) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 986, vlSelfRef.__Vdfg_Regularize_153, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb 
            = vlSelfRef.__Vdfg_Regularize_153;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wmask))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 994, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wmask);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wmask 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask;
    }
    if ((0U != (vlSelfRef.__Vdfg_Regularize_152 ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 922, vlSelfRef.__Vdfg_Regularize_152, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wdata);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wdata 
            = vlSelfRef.__Vdfg_Regularize_152;
    }
    if (((IData)(__Vdfg_Regularize_154) ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1550, __Vdfg_Regularize_154, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_write);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_write 
            = __Vdfg_Regularize_154;
    }
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 890, tb_ahblite__DOT__u_dut__DOT__reg_addr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr 
            = tb_ahblite__DOT__u_dut__DOT__reg_addr;
    }
    __Vdfg_Regularize_155 = (((0x0204U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                              << 1U) | (0x0200U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)));
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 130, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1180, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb;
    }
    if (((1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok))) {
        ++(vlSelf->__Vcoverage[2314]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok)))) {
        ++(vlSelf->__Vcoverage[2315]);
    }
    if ((1U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
        ++(vlSelf->__Vcoverage[2316]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok)))) {
        ++(vlSelf->__Vcoverage[2310]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) 
         & (0x0fU == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb)))) {
        ++(vlSelf->__Vcoverage[2311]);
    }
    if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) {
        ++(vlSelf->__Vcoverage[2312]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) 
         & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite)))) {
        ++(vlSelf->__Vcoverage[2313]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_size_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1174, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_size_ok);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_size_ok 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok;
    }
    if ((1U ^ ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) 
               ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_bad_access)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1176, 
                               (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok)), vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_bad_access);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_bad_access 
            = (1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok)));
    }
    tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid 
        = ((1U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
           & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok));
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
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs))) {
        ++(vlSelf->__Vcoverage[2889]);
    }
    if ((2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2890]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs)))) {
        ++(vlSelf->__Vcoverage[2891]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[2892]);
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs))) {
        ++(vlSelf->__Vcoverage[2896]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs)))) {
        ++(vlSelf->__Vcoverage[2897]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2898]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1200, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_ready 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs;
    }
    tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready 
        = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs) 
           | (2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)));
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_port_0_value 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1664, tb_ahblite__DOT__u_dut__DOT__w_port_0_value, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_value);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_value 
            = tb_ahblite__DOT__u_dut__DOT__w_port_0_value;
    }
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_port_1_value 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1750, tb_ahblite__DOT__u_dut__DOT__w_port_1_value, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_value);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_value 
            = tb_ahblite__DOT__u_dut__DOT__w_port_1_value;
    }
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_port_2_value 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1836, tb_ahblite__DOT__u_dut__DOT__w_port_2_value, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_value);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_value 
            = tb_ahblite__DOT__u_dut__DOT__w_port_2_value;
    }
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_engine_value 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1578, tb_ahblite__DOT__u_dut__DOT__w_engine_value, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_value);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_value 
            = tb_ahblite__DOT__u_dut__DOT__w_engine_value;
    }
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__w_monitor_value) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value)))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2004, (IData)(tb_ahblite__DOT__u_dut__DOT__w_monitor_value), (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0xffffffff00000000ULL & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | (IData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_monitor_value)));
    }
    if ((0U != ((IData)((tb_ahblite__DOT__u_dut__DOT__w_monitor_value 
                         >> 0x00000020U)) ^ (IData)(
                                                    (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                     >> 0x00000020U))))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2068, (IData)(
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
    tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt = 0U;
    tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 0U;
    if (((((((((0U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
               | (0x0100U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
              | (0x0104U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
             | (0x0108U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
            | (0x0200U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
           | (0x0204U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
          | (0x0208U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) 
         | (0x020cU == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        if ((0U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = tb_ahblite__DOT__u_dut__DOT__w_engine_value;
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2726]);
        } else if ((0x0100U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = tb_ahblite__DOT__u_dut__DOT__w_port_0_value;
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2727]);
        } else if ((0x0104U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = tb_ahblite__DOT__u_dut__DOT__w_port_1_value;
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2728]);
        } else if ((0x0108U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = tb_ahblite__DOT__u_dut__DOT__w_port_2_value;
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2729]);
        } else if ((0x0200U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = (IData)(tb_ahblite__DOT__u_dut__DOT__w_monitor_value);
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2730]);
            ++(vlSelf->__Vcoverage[2732]);
        } else if ((0x0204U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                = (IData)((tb_ahblite__DOT__u_dut__DOT__w_monitor_value 
                           >> 0x20U));
            tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2733]);
            ++(vlSelf->__Vcoverage[2735]);
        } else if ((0x0208U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
            ++(vlSelf->__Vcoverage[2737]);
            ++(vlSelf->__Vcoverage[2738]);
        } else {
            ++(vlSelf->__Vcoverage[2740]);
            ++(vlSelf->__Vcoverage[2741]);
        }
    } else if ((0x0400U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 1U;
        ++(vlSelf->__Vcoverage[2742]);
    } else {
        tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 0U;
        ++(vlSelf->__Vcoverage[2743]);
    }
    ++(vlSelf->__Vcoverage[2744]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1188, tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_valid);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_valid 
            = tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid;
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2376]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2377]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2378]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1196, tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_ready 
            = tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs 
        = ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
           & (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready));
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1062, tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_addr_mapped))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1126, tb_ahblite__DOT__u_dut__DOT__w_addr_mapped, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_addr_mapped);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_addr_mapped 
            = tb_ahblite__DOT__u_dut__DOT__w_addr_mapped;
    }
    if (tb_ahblite__DOT__u_dut__DOT__w_addr_mapped) {
        ++(vlSelf->__Vcoverage[2389]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_0 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2390]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_0 = 1U;
    }
    tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_0;
    if (tb_ahblite__DOT__u_dut__DOT__w_addr_mapped) {
        ++(vlSelf->__Vcoverage[2387]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped)))) {
        ++(vlSelf->__Vcoverage[2388]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
         & (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2893]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2894]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[2895]);
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs))) {
        ++(vlSelf->__Vcoverage[3137]);
    }
    if ((2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3138]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[3139]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3140]);
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs))) {
        ++(vlSelf->__Vcoverage[3144]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[3145]);
    }
    if ((0U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3146]);
    }
    if ((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
          & (~ (IData)(__Vdfg_Regularize_154))) & (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped))) {
        ++(vlSelf->__Vcoverage[2379]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped)))) {
        ++(vlSelf->__Vcoverage[2380]);
    }
    if (__Vdfg_Regularize_154) {
        ++(vlSelf->__Vcoverage[2381]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[2382]);
    }
    if ((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
          & (IData)(__Vdfg_Regularize_154)) & (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped))) {
        ++(vlSelf->__Vcoverage[2383]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped)))) {
        ++(vlSelf->__Vcoverage[2384]);
    }
    if ((1U & (~ (IData)(__Vdfg_Regularize_154)))) {
        ++(vlSelf->__Vcoverage[2385]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
        ++(vlSelf->__Vcoverage[2386]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1194, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready 
        = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
           | (2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)));
    tb_ahblite__DOT__u_dut__DOT__w_rd_en = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
                                            & ((~ (IData)(__Vdfg_Regularize_154)) 
                                               & (IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped)));
    tb_ahblite__DOT__u_dut__DOT__w_wr_en = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
                                            & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_addr_mapped) 
                                               & (IData)(__Vdfg_Regularize_154)));
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_resp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1552, tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_resp);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_issue_resp 
            = tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid) 
         & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3141]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3142]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid)))) {
        ++(vlSelf->__Vcoverage[3143]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1190, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_ready 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs 
        = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready) 
           & (IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid));
    if (tb_ahblite__DOT__u_dut__DOT__w_rd_en) {
        ++(vlSelf->__Vcoverage[2391]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2392]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2414]);
    }
    if ((0U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2415]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2416]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0100U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2417]);
    }
    if ((0x0100U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2418]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2419]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0104U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2420]);
    }
    if ((0x0104U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2421]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2422]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0108U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2423]);
    }
    if ((0x0108U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2424]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2425]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0200U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2426]);
    }
    if ((0x0200U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2427]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2428]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         & (0x0204U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2429]);
    }
    if ((0x0204U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2430]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2431]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1058, tb_ahblite__DOT__u_dut__DOT__w_rd_en, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_en);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_en 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_en;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data 
        = (((QData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_ahb_issue_resp)) 
            << 0x00000020U) | (QData)((IData)((tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                                               & (- (IData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en)))))));
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_0 = ((0x0100U 
                                                 == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en));
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_1 = ((0x0104U 
                                                 == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en));
    tb_ahblite__DOT__u_dut__DOT__w_rd_port_2 = ((0x0108U 
                                                 == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en));
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_rd_engine 
        = ((0U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
           & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en));
    tb_ahblite__DOT__u_dut__DOT__w_rd_monitor = ((IData)(__Vdfg_Regularize_155) 
                                                 & (- (IData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_en))));
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2393]);
    }
    if ((0U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2394]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2395]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0100U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2396]);
    }
    if ((0x0100U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2397]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2398]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0104U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2399]);
    }
    if ((0x0104U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2400]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2401]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0108U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2402]);
    }
    if ((0x0108U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2403]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2404]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0200U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2405]);
    }
    if ((0x0200U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2406]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2407]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0204U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2408]);
    }
    if ((0x0204U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2409]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2410]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         & (0x0400U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)))) {
        ++(vlSelf->__Vcoverage[2411]);
    }
    if ((0x0400U != (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr))) {
        ++(vlSelf->__Vcoverage[2412]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2413]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1060, tb_ahblite__DOT__u_dut__DOT__w_wr_en, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wr_en);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wr_en 
            = tb_ahblite__DOT__u_dut__DOT__w_wr_en;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_key 
        = ((0x0400U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
           & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_port_0 = ((0x0100U 
                                                 == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_port_1 = ((0x0104U 
                                                 == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_port_2 = ((0x0108U 
                                                 == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                                & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine 
        = ((0U == (IData)(tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
           & (IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en));
    tb_ahblite__DOT__u_dut__DOT__w_we_monitor = ((IData)(__Vdfg_Regularize_155) 
                                                 & (- (IData)((IData)(tb_ahblite__DOT__u_dut__DOT__w_wr_en))));
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3135, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs;
    }
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1414, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_w_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_port_0) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1644, tb_ahblite__DOT__u_dut__DOT__w_rd_port_0, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_0);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_port_0;
    }
    ++(vlSelf->__Vcoverage[2515]);
    if (tb_ahblite__DOT__u_dut__DOT__w_rd_port_0) {
        ++(vlSelf->__Vcoverage[2513]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_12 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2514]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_12 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_12;
    ++(vlSelf->__Vcoverage[2511]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_port_1) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1730, tb_ahblite__DOT__u_dut__DOT__w_rd_port_1, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_1);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_port_1;
    }
    ++(vlSelf->__Vcoverage[2560]);
    if (tb_ahblite__DOT__u_dut__DOT__w_rd_port_1) {
        ++(vlSelf->__Vcoverage[2558]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_18 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2559]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_18 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_18;
    ++(vlSelf->__Vcoverage[2556]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_port_2) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1816, tb_ahblite__DOT__u_dut__DOT__w_rd_port_2, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_2);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_port_2;
    }
    ++(vlSelf->__Vcoverage[2605]);
    if (tb_ahblite__DOT__u_dut__DOT__w_rd_port_2) {
        ++(vlSelf->__Vcoverage[2603]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_24 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2604]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_24 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_24;
    ++(vlSelf->__Vcoverage[2601]);
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_rd_engine) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1558, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_rd_engine, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_engine);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_engine 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_rd_engine;
    }
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_monitor) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2000, tb_ahblite__DOT__u_dut__DOT__w_rd_monitor, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_monitor);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rd_monitor 
            = tb_ahblite__DOT__u_dut__DOT__w_rd_monitor;
    }
    ++(vlSelf->__Vcoverage[2650]);
    if ((1U & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_monitor))) {
        ++(vlSelf->__Vcoverage[2648]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_30 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2649]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_30 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_30));
    ++(vlSelf->__Vcoverage[2646]);
    ++(vlSelf->__Vcoverage[2701]);
    if ((2U & (IData)(tb_ahblite__DOT__u_dut__DOT__w_rd_monitor))) {
        ++(vlSelf->__Vcoverage[2699]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_38 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2700]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_38 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                     >> 1U));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_38) 
              << 1U));
    ++(vlSelf->__Vcoverage[2697]);
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_key) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_key))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2132, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_key, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_key);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_key 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_key;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1642, tb_ahblite__DOT__u_dut__DOT__w_we_port_0, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_0);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_0 
            = tb_ahblite__DOT__u_dut__DOT__w_we_port_0;
    }
    ++(vlSelf->__Vcoverage[2509]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_153)))) {
        ++(vlSelf->__Vcoverage[2507]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_11 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2508]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_11 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_11;
    ++(vlSelf->__Vcoverage[2505]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2483]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_152 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2484]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2477]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2478]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2479]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2480]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2481]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2482]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2488]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_8 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_152 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2491]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_8 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start;
        ++(vlSelf->__Vcoverage[2490]);
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_8;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2485]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2486]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2487]);
    }
    ++(vlSelf->__Vcoverage[2497]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2495]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_9 
            = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_152 
                      & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2496]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_9 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_9;
    ++(vlSelf->__Vcoverage[2493]);
    ++(vlSelf->__Vcoverage[2503]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2501]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_10 
            = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_152 
                   >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2502]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_10;
    ++(vlSelf->__Vcoverage[2499]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1728, tb_ahblite__DOT__u_dut__DOT__w_we_port_1, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_1);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_1 
            = tb_ahblite__DOT__u_dut__DOT__w_we_port_1;
    }
    ++(vlSelf->__Vcoverage[2554]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_153)))) {
        ++(vlSelf->__Vcoverage[2552]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_17 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2553]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_17 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_17;
    ++(vlSelf->__Vcoverage[2550]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2528]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_152 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2529]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2522]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2523]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2524]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2525]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2526]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2527]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2533]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_14 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_152 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2536]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_14 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start;
        ++(vlSelf->__Vcoverage[2535]);
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_14;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2530]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2531]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2532]);
    }
    ++(vlSelf->__Vcoverage[2542]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2540]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_15 
            = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_152 
                      & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2541]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_15 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_15;
    ++(vlSelf->__Vcoverage[2538]);
    ++(vlSelf->__Vcoverage[2548]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2546]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_16 
            = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_152 
                   >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2547]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_16;
    ++(vlSelf->__Vcoverage[2544]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1814, tb_ahblite__DOT__u_dut__DOT__w_we_port_2, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_2);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_port_2 
            = tb_ahblite__DOT__u_dut__DOT__w_we_port_2;
    }
    ++(vlSelf->__Vcoverage[2599]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_153)))) {
        ++(vlSelf->__Vcoverage[2597]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_23 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2598]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_23 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_23;
    ++(vlSelf->__Vcoverage[2595]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2573]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_152 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2574]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2567]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2568]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2569]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2570]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2571]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2572]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2578]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_20 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_152 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2581]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_20 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start;
        ++(vlSelf->__Vcoverage[2580]);
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_20;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2575]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2576]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2577]);
    }
    ++(vlSelf->__Vcoverage[2587]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2585]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_21 
            = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_152 
                      & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2586]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_21 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_21;
    ++(vlSelf->__Vcoverage[2583]);
    ++(vlSelf->__Vcoverage[2593]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2591]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_22 
            = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_152 
                   >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2592]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_22;
    ++(vlSelf->__Vcoverage[2589]);
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1556, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2438]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_152 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2439]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1;
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2432]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2433]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2434]);
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2435]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2436]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2437]);
    }
    if ((0U != ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1996, tb_ahblite__DOT__u_dut__DOT__w_we_monitor, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_monitor);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_monitor 
            = tb_ahblite__DOT__u_dut__DOT__w_we_monitor;
    }
    ++(vlSelf->__Vcoverage[2644]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_153)))) {
        ++(vlSelf->__Vcoverage[2642]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_29 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2643]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_29));
    ++(vlSelf->__Vcoverage[2640]);
    ++(vlSelf->__Vcoverage[2695]);
    if ((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_153)))) {
        ++(vlSelf->__Vcoverage[2693]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_37 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2694]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_37 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow) 
                     >> 1U));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_37) 
              << 1U));
    ++(vlSelf->__Vcoverage[2691]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2618]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_152 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2619]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25 
            = (0x0000000fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25;
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2612]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2613]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2614]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2615]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2616]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2617]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2623]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_26 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_152 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2626]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_26 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture));
        ++(vlSelf->__Vcoverage[2625]);
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_26));
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2620]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2621]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2622]);
    }
    ++(vlSelf->__Vcoverage[2632]);
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x12U)))) {
        ++(vlSelf->__Vcoverage[2630]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_27 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                     & (~ ((vlSelfRef.__Vdfg_Regularize_152 
                            & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                           >> 0x12U))));
    } else {
        ++(vlSelf->__Vcoverage[2631]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_27 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_27));
    ++(vlSelf->__Vcoverage[2628]);
    ++(vlSelf->__Vcoverage[2638]);
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x11U)))) {
        ++(vlSelf->__Vcoverage[2636]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_28 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                     & ((vlSelfRef.__Vdfg_Regularize_152 
                         >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x11U)))));
    } else {
        ++(vlSelf->__Vcoverage[2637]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_28 
            = (1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_28));
    ++(vlSelf->__Vcoverage[2634]);
    if ((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2669]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_33 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_152 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2670]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_33 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                              >> 4U));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_33;
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2663]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2664]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2665]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2666]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2667]);
    }
    if ((1U & (~ ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2668]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2674]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_34 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_152 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                                    >> 1U) & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                 >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2677]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_34 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                     >> 1U));
        ++(vlSelf->__Vcoverage[2676]);
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_34) 
              << 1U));
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2671]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2672]);
    }
    if ((1U & (~ ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2673]);
    }
    ++(vlSelf->__Vcoverage[2683]);
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000012U)))) {
        ++(vlSelf->__Vcoverage[2681]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_35 
            = (IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                        >> 1U) & (~ ((vlSelfRef.__Vdfg_Regularize_152 
                                      & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                                     >> 0x12U))));
    } else {
        ++(vlSelf->__Vcoverage[2682]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_35 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                     >> 1U));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_35) 
              << 1U));
    ++(vlSelf->__Vcoverage[2679]);
    ++(vlSelf->__Vcoverage[2689]);
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000011U)))) {
        ++(vlSelf->__Vcoverage[2687]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_36 
            = (IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                        >> 1U) & ((vlSelfRef.__Vdfg_Regularize_152 
                                   >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask 
                                                   >> 0x11U)))));
    } else {
        ++(vlSelf->__Vcoverage[2688]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_36 
            = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                     >> 1U));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_36) 
              << 1U));
    ++(vlSelf->__Vcoverage[2685]);
    ++(vlSelf->__Vcoverage[2656]);
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2654]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_31 
            = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_152 
                               & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                              | (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                 & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask))));
    } else {
        ++(vlSelf->__Vcoverage[2655]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_31 
            = (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    tb_ahblite__DOT__u_dut__DOT____VlemCond_32 = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_31;
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ 
        = tb_ahblite__DOT__u_dut__DOT____VlemCond_32;
    ++(vlSelf->__Vcoverage[2652]);
    ++(vlSelf->__Vcoverage[2707]);
    if ((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2705]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_39 
            = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_152 
                               & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask) 
                              | ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                  >> 0x0fU) & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_wmask))));
    } else {
        ++(vlSelf->__Vcoverage[2706]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_39 
            = (0x00007fffU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                              >> 0x0fU));
    }
    tb_ahblite__DOT__u_dut__DOT____VlemCond_40 = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_39;
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ 
        = tb_ahblite__DOT__u_dut__DOT____VlemCond_40;
    ++(vlSelf->__Vcoverage[2703]);
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1662, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1748, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1834, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_done_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1932, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_match_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1660, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1646, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1654, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1656, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1658, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1746, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1732, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1740, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1742, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1744, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1832, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1818, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1826, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1828, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1830, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1560, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1928, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_overflow_nxt;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__) 
                               ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1900, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0xf0U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                               ^ ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                  >> 4U))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1908, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__, 
                               ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                >> 4U));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0x0fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1916, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_capture_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1920, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_error_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1924, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_pending_nxt;
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__) 
                               ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 1936, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x3fff8000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                               ^ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                  >> 0x0000000fU))))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 1966, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__, 
                               (vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                >> 0x0000000fU));
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                  << 0x0000000fU));
    }
}
