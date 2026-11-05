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
        ++(vlSelf->__Vcoverage[2409]);
        ++(vlSelf->__Vcoverage[2407]);
        ++(vlSelf->__Vcoverage[2413]);
        ++(vlSelf->__Vcoverage[2411]);
        ++(vlSelf->__Vcoverage[2421]);
        ++(vlSelf->__Vcoverage[2423]);
        ++(vlSelf->__Vcoverage[2447]);
        ++(vlSelf->__Vcoverage[2449]);
        ++(vlSelf->__Vcoverage[2519]);
        ++(vlSelf->__Vcoverage[2517]);
        ++(vlSelf->__Vcoverage[2620]);
        ++(vlSelf->__Vcoverage[2665]);
        ++(vlSelf->__Vcoverage[2710]);
        ++(vlSelf->__Vcoverage[2755]);
        ++(vlSelf->__Vcoverage[2801]);
        ++(vlSelf->__Vcoverage[2852]);
        ++(vlSelf->__Vcoverage[2869]);
        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_burst_valid)))) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1322, 1U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_burst_valid);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_burst_valid = 1U;
        }
        if ((0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_value)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2342, 0U, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_value);
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
        VL_FATAL_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                             90);
        vlSelfRef.tb_ahblite__DOT__i_clk_ahb = (1U 
                                                & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb)));
        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb)))) {
            ++(vlSelf->__Vcoverage[768]);
        }
        if (vlSelfRef.tb_ahblite__DOT__i_clk_ahb) {
            ++(vlSelf->__Vcoverage[769]);
        }
        ++(vlSelf->__Vcoverage[770]);
    }
    ++(vlSelf->__Vcoverage[771]);
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
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                             94);
        vlSelfRef.tb_ahblite__DOT__i_clk_reg = (1U 
                                                & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_reg)));
        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_reg)))) {
            ++(vlSelf->__Vcoverage[772]);
        }
        if (vlSelfRef.tb_ahblite__DOT__i_clk_reg) {
            ++(vlSelf->__Vcoverage[773]);
        }
        ++(vlSelf->__Vcoverage[774]);
    }
    ++(vlSelf->__Vcoverage[775]);
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
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__coverage_burst____VlefExpr_0_225;
    __Vtask_tb_ahblite__DOT__coverage_burst____VlefExpr_0_225 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__coverage_burst__q_226;
    __Vtask_tb_ahblite__DOT__coverage_burst__q_226 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__coverage_burst__pick_227;
    __Vtask_tb_ahblite__DOT__coverage_burst__pick_227 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__coverage_burst__addr_228;
    __Vtask_tb_ahblite__DOT__coverage_burst__addr_228 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__coverage_burst__data_229;
    __Vtask_tb_ahblite__DOT__coverage_burst__data_229 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__coverage_burst__size_230;
    __Vtask_tb_ahblite__DOT__coverage_burst__size_230 = 0;
    VlUnpacked<SData/*15:0*/, 7> __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[__Vi0] = 0;
    }
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_232;
    __Vtask_tb_ahblite__DOT__ahb_access__address_232 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_233;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_233 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_234;
    __Vtask_tb_ahblite__DOT__ahb_access__size_234 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_235;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_235 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_236;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_236 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_237;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_237 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_238;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_238 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_240;
    __Vtask_tb_ahblite__DOT__ahb_access__done_240 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_241;
    __Vtask_tb_ahblite__DOT__ahb_access__address_241 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_242;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_242 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_243;
    __Vtask_tb_ahblite__DOT__ahb_access__size_243 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_244;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_244 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_245;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_245 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_246;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_246 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_247;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_247 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_249;
    __Vtask_tb_ahblite__DOT__ahb_access__done_249 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_250;
    __Vtask_tb_ahblite__DOT__ahb_access__address_250 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_251;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_251 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_252;
    __Vtask_tb_ahblite__DOT__ahb_access__size_252 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_253;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_253 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_254;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_254 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_255;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_255 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_256;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_256 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_258;
    __Vtask_tb_ahblite__DOT__ahb_access__done_258 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_259;
    __Vtask_tb_ahblite__DOT__ahb_access__address_259 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_260;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_260 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_261;
    __Vtask_tb_ahblite__DOT__ahb_access__size_261 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_262;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_262 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_263;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_263 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_264;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_264 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_265;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_265 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_267;
    __Vtask_tb_ahblite__DOT__ahb_access__done_267 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_read_response__address_268;
    __Vtask_tb_ahblite__DOT__ahb_read_response__address_268 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_read_response__expected_error_269;
    __Vtask_tb_ahblite__DOT__ahb_read_response__expected_error_269 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270;
    __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271;
    __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_read_response__done_272;
    __Vtask_tb_ahblite__DOT__ahb_read_response__done_272 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__cov_toggle_inputs__cov_i_273;
    __Vtask_tb_ahblite__DOT__cov_toggle_inputs__cov_i_273 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_274;
    __Vtask_tb_ahblite__DOT__ahb_access__address_274 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_275;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_275 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_276;
    __Vtask_tb_ahblite__DOT__ahb_access__size_276 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_277;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_277 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_278;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_278 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_279;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_279 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_280;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_280 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_282;
    __Vtask_tb_ahblite__DOT__ahb_access__done_282 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_283;
    __Vtask_tb_ahblite__DOT__ahb_access__address_283 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_284;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_284 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_285;
    __Vtask_tb_ahblite__DOT__ahb_access__size_285 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_286;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_286 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_287;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_287 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_288;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_288 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_289;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_289 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_291;
    __Vtask_tb_ahblite__DOT__ahb_access__done_291 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_292;
    __Vtask_tb_ahblite__DOT__ahb_access__address_292 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_293;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_293 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_294;
    __Vtask_tb_ahblite__DOT__ahb_access__size_294 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_295;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_295 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_296;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_296 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_297;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_297 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_298;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_298 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_300;
    __Vtask_tb_ahblite__DOT__ahb_access__done_300 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_301;
    __Vtask_tb_ahblite__DOT__ahb_access__address_301 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_302;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_302 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_303;
    __Vtask_tb_ahblite__DOT__ahb_access__size_303 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_304;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_304 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_305;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_305 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_306;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_306 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_307;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_307 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_309;
    __Vtask_tb_ahblite__DOT__ahb_access__done_309 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_310;
    __Vtask_tb_ahblite__DOT__ahb_access__address_310 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_311;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_311 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_312;
    __Vtask_tb_ahblite__DOT__ahb_access__size_312 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_313;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_313 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_314;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_314 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_315;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_315 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_316;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_316 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_318;
    __Vtask_tb_ahblite__DOT__ahb_access__done_318 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_319;
    __Vtask_tb_ahblite__DOT__ahb_access__address_319 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_320;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_320 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_321;
    __Vtask_tb_ahblite__DOT__ahb_access__size_321 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_322;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_322 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_323;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_323 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_324;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_324 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_325;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_325 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_327;
    __Vtask_tb_ahblite__DOT__ahb_access__done_327 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_328;
    __Vtask_tb_ahblite__DOT__ahb_access__address_328 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_329;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_329 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_330;
    __Vtask_tb_ahblite__DOT__ahb_access__size_330 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_331;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_331 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_332;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_332 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_333;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_333 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_334;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_334 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_336;
    __Vtask_tb_ahblite__DOT__ahb_access__done_336 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_337;
    __Vtask_tb_ahblite__DOT__ahb_access__address_337 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_338;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_338 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_339;
    __Vtask_tb_ahblite__DOT__ahb_access__size_339 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_340;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_340 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_341;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_341 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_342;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_342 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_343;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_343 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_345;
    __Vtask_tb_ahblite__DOT__ahb_access__done_345 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_346;
    __Vtask_tb_ahblite__DOT__ahb_access__address_346 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_347;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_347 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_348;
    __Vtask_tb_ahblite__DOT__ahb_access__size_348 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_349;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_349 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_350;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_350 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_351;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_351 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_352;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_352 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_354;
    __Vtask_tb_ahblite__DOT__ahb_access__done_354 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_355;
    __Vtask_tb_ahblite__DOT__ahb_access__address_355 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_356;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_356 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_357;
    __Vtask_tb_ahblite__DOT__ahb_access__size_357 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_358;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_358 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_359;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_359 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_360;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_360 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_361;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_361 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_363;
    __Vtask_tb_ahblite__DOT__ahb_access__done_363 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_364;
    __Vtask_tb_ahblite__DOT__ahb_access__address_364 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_365;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_365 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_366;
    __Vtask_tb_ahblite__DOT__ahb_access__size_366 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_367;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_367 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_368;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_368 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_369;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_369 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_370;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_370 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_372;
    __Vtask_tb_ahblite__DOT__ahb_access__done_372 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_373;
    __Vtask_tb_ahblite__DOT__ahb_access__address_373 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_374;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_374 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_375;
    __Vtask_tb_ahblite__DOT__ahb_access__size_375 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_376;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_376 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_377;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_377 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_378;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_378 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_379;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_379 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_381;
    __Vtask_tb_ahblite__DOT__ahb_access__done_381 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_382;
    __Vtask_tb_ahblite__DOT__ahb_access__address_382 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_383;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_383 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_384;
    __Vtask_tb_ahblite__DOT__ahb_access__size_384 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_385;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_385 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_386;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_386 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_387;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_387 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_388;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_388 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_390;
    __Vtask_tb_ahblite__DOT__ahb_access__done_390 = 0;
    SData/*15:0*/ __Vtask_tb_ahblite__DOT__ahb_access__address_391;
    __Vtask_tb_ahblite__DOT__ahb_access__address_391 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_access_392;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_392 = 0;
    CData/*2:0*/ __Vtask_tb_ahblite__DOT__ahb_access__size_393;
    __Vtask_tb_ahblite__DOT__ahb_access__size_393 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__write_data_394;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_394 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_error_395;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_395 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__expected_read_396;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_396 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__cycles_397;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_397 = 0;
    IData/*31:0*/ __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398 = 0;
    CData/*0:0*/ __Vtask_tb_ahblite__DOT__ahb_access__done_399;
    __Vtask_tb_ahblite__DOT__ahb_access__done_399 = 0;
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             522);
        tb_ahblite__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_ahblite__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[832]);
    }
    vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb = 1U;
    tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_ahblite___024root____VbeforeTrig_h5fcdb6b6__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_reg)");
        co_await vlSelfRef.__VtrigSched_h5fcdb6b6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             524);
        tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_ahblite__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[833]);
    }
    vlSelfRef.tb_ahblite__DOT__i_rst_n_reg = 1U;
    tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                          "@(posedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             526);
        tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_ahblite__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[834]);
    }
    vlSelfRef.tb_ahblite__DOT__cov_i_engine_events = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_port_0_event_count = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_start = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_start = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_done = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_done = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_port_1_event_count = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_start = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_start = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_done = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_done = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_port_2_event_count = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_start = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_start = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_fault = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_done = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_done = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_error = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_match = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment = 0U;
    vlSelfRef.tb_ahblite__DOT__cov_i_engine_events = 0x12U;
    vlSelfRef.tb_ahblite__DOT__cov_i_port_0_event_count = 0x34U;
    vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count = 0x7856U;
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_0;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_1;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_2;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_0) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_6 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_6);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_0)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_1))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_5
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_0));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_8 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_7)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_1))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_5)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_1) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_4) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_6) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_8)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_8) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_6)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_8))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_0));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_8)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_8) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_9;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_10;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_11;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_9) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_15 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_15);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_9)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_10))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_14
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_9));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_17 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_16)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_10))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_14)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_10) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_13) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_15) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_17)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_17) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_15)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_17))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_9));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_17)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_17) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_18;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_19;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_20;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_18) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_24 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_24);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_18)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_19))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_23
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_18));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_26 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_25)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_19))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_23)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_19) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_22) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_24) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_26)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_26) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_24)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_26))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_18));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_26)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_26) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         441);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         452);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         453);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_27;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_28;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_29;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_27) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_33 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_33);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_27)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_28))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_32
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_27));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_35 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_34)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_28))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_32)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_28) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_31) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_33) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_35)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_35) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_33)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_35))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_27));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_35)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_35) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_36;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_37;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_38;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_36) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_42 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_42);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_36)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_37))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_41
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_36));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_44 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_43)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_37))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_41)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_37) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_40) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_42) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_44)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_44) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_42)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_44))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_36));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_44)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_44) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_45;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_46;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_47;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_45) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_51 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_51);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_45)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_46))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_50
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_45));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_53 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_52)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_46))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_50)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_46) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_49) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_51) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_53)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_53) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_51)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_53))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_45));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_53)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_53) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_54;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_55;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_56;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_54) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_60 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_60);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_54)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_55))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_59
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_54));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_62 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_61)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_55))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_59)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_55) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_58) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_60) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_62)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_62) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_60)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_62))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_54));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_62)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_62) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_63;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_64;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_65;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_63) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_69 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_69);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_63)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_64))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_68
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_63));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_71 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_70)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_64))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_68)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_64) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_67) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_69) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_71)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_71) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_69)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_71))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_63));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_71)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_71) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_72;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_73;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_74;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_72) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_78 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_78);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_72)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_73))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_77
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_72));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_80 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_79)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_73))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_77)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_73) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_76) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_78) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_80)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_80) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_78)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_80))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_72));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_80)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_80) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         466);
    vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_pending = 1U;
    vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_pending = 1U;
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         469);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         470);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_81;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_82;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_83;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_81) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_87 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_87);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_81)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_82))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_86
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_81));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_89 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_88)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_82))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_86)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_82) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_85) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_87) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_89)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_89) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_87)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_89))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_81));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_89)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_89) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_90;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_91;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_92;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_90) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_96 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_96);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_90)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_91))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_95
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_90));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_98 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_97)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_91))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_95)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_91) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_94) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_96) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_98)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_98) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_96)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_98))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_90));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_98)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_98) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_99;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_100;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_101;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_99) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_105 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_105);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_99)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_100))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_104
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_99));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_107 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_106)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_100))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_104)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_100) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_103) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_105) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_107)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_107) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_105)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_107))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_99));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_107)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_107) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_108;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_109;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_110;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_108) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_114 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_114);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_108)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_109))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_113
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_108));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_116 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_115)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_109))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_113)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_109) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_112) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_114) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_116)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_116) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_114)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_116))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_108));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_116)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_116) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_117;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_118;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_119;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_117) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_123 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_123);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_117)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_118))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_122
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_117));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_125 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_124)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_118))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_122)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_118) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_121) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_123) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_125)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_125) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_123)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_125))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_117));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_125)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_125) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_126;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_127;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_128;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_126) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_132 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_132);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_126)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_127))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_131
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_126));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_134 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_133)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_127))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_131)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_127) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_130) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_132) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_134)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_134) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_132)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_134))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_126));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_134)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_134) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_135;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_136;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_137;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_135) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_141 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_141);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_135)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_136))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_140
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_135));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_143 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_142)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_136))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_140)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_136) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_139) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_141) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_143)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_143) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_141)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_143))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_135));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_143)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_143) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_144;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_145;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_146;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_144) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_150 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_150);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_144)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_145))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_149
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_144));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_152 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_151)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_145))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_149)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_145) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_148) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_150) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_152)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_152) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_150)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_152))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_144));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_152)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_152) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_153;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_154;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_155;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_153) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_159 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_159);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_153)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_154))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_158
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_153));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_161 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_160)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_154))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_158)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_154) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_157) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_159) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_161)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_161) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_159)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_161))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_153));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_161)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_161) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_162;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_163;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_164;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_162) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_168 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_168);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_162)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_163))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_167
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_162));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_170 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_169)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_163))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_167)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_163) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_166) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_168) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_170)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_170) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_168)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_170))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_162));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_170)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_170) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    if (VL_UNLIKELY(((0xa1b2c3d4U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:484: Assertion failed in %m: example WO field did not store the key\n",3, 'M',vlSymsp->name(),"tb_ahblite.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 484, "", false);
    } else {
        ++(vlSelf->__Vcoverage[828]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_171;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_172;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_173;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_171) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_177 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_177);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_171)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_172))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_176
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_171));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_179 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_178)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_172))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_176)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_172) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_175) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_177) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_179)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_179) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_177)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_179))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_171));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_179)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_179) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_180;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_181;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_182;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_180) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_186 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_186);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_180)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_181))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_185
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_180));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_188 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_187)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_181))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_185)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_181) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_184) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_186) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_188)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_188) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_186)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_188))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_180));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_188)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_188) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:489: Assertion failed in %m: example WO clear did not override write\n",3, 'M',vlSymsp->name(),"tb_ahblite.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 489, "", false);
    } else {
        ++(vlSelf->__Vcoverage[829]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_189;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_190;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_191;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_189) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_195 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_195);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_189)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_190))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_194
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_189));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_197 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_196)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_190))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_194)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_190) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_193) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_195) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_197)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_197) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_195)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_197))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_189));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_197)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_197) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    if (VL_UNLIKELY(((0x55667788U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:491: Assertion failed in %m: example WO write after clear failed\n",3, 'M',vlSymsp->name(),"tb_ahblite.run_example_map", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 491, "", false);
    } else {
        ++(vlSelf->__Vcoverage[830]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_198;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_199;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_200;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_198) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_204 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_204);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_198)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_199))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_203
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_198));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_206 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_205)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_199))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_203)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_199) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_202) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_204) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_206)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_206) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_204)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_206))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_198));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_206)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_206) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_207;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_208;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_209;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_207) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_213 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_213);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_207)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_208))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_212
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_207));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_215 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_214)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_208))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_212)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_208) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_211) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_213) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_215)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_215) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_213)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_215))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_207));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_215)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_215) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_216;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_217;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_218;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_216) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_222 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_222);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_216)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_217))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_221
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_216));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_224 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_223)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_217))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_221)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_217) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_220) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_222) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_224)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_224) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_222)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_224))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_216));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_224)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_224) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    __Vtask_tb_ahblite__DOT__coverage_burst__q_226 = 0;
    __Vtask_tb_ahblite__DOT__coverage_burst__pick_227 = 0;
    __Vtask_tb_ahblite__DOT__coverage_burst__addr_228 = 0;
    __Vtask_tb_ahblite__DOT__coverage_burst__data_229 = 0;
    __Vtask_tb_ahblite__DOT__coverage_burst__size_230 = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[__Vi0] = 0;
    }
    __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[0U] = 0U;
    __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[1U] = 0x0100U;
    __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[2U] = 0x0104U;
    __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[3U] = 0x0108U;
    __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[4U] = 0x0200U;
    __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[5U] = 0x0204U;
    __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231[6U] = 0x0400U;
    __Vtask_tb_ahblite__DOT__coverage_burst__q_226 = 0U;
    while (VL_GTS_III(32, 0x00000060U, __Vtask_tb_ahblite__DOT__coverage_burst__q_226)) {
        __Vtask_tb_ahblite__DOT__coverage_burst__data_229 
            = VL_RANDOM_I();
        if ((0U == VL_MODDIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(4U)))) {
            __Vtask_tb_ahblite__DOT__coverage_burst__pick_227 
                = VL_URANDOM_RANGE_I(0U, 6U);
            __Vtask_tb_ahblite__DOT__coverage_burst__size_230 
                = (7U & VL_MODDIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(3U)));
            __Vtask_tb_ahblite__DOT__coverage_burst__addr_228 
                = ((6U >= (7U & __Vtask_tb_ahblite__DOT__coverage_burst__pick_227))
                    ? __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231
                   [(7U & __Vtask_tb_ahblite__DOT__coverage_burst__pick_227)]
                    : 0U);
            if ((0U == (IData)(__Vtask_tb_ahblite__DOT__coverage_burst__size_230))) {
                __Vtask_tb_ahblite__DOT__coverage_burst__addr_228 
                    = (0x0000ffffU & (((6U >= (7U & __Vtask_tb_ahblite__DOT__coverage_burst__pick_227))
                                        ? __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231
                                       [(7U & __Vtask_tb_ahblite__DOT__coverage_burst__pick_227)]
                                        : 0U) + VL_MODDIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(4U))));
                ++(vlSelf->__Vcoverage[795]);
            } else if ((1U == (IData)(__Vtask_tb_ahblite__DOT__coverage_burst__size_230))) {
                __Vtask_tb_ahblite__DOT__coverage_burst__addr_228 
                    = (0x0000ffffU & (((6U >= (7U & __Vtask_tb_ahblite__DOT__coverage_burst__pick_227))
                                        ? __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231
                                       [(7U & __Vtask_tb_ahblite__DOT__coverage_burst__pick_227)]
                                        : 0U) + VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(2U)))));
                ++(vlSelf->__Vcoverage[793]);
            } else {
                ++(vlSelf->__Vcoverage[794]);
            }
            __Vtask_tb_ahblite__DOT__ahb_access__expected_read_237 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__expected_error_236 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__write_data_235 
                = __Vtask_tb_ahblite__DOT__coverage_burst__data_229;
            __Vtask_tb_ahblite__DOT__ahb_access__size_234 
                = __Vtask_tb_ahblite__DOT__coverage_burst__size_230;
            __Vtask_tb_ahblite__DOT__ahb_access__write_access_233 = 1U;
            __Vtask_tb_ahblite__DOT__ahb_access__address_232 
                = __Vtask_tb_ahblite__DOT__coverage_burst__addr_228;
            __Vtask_tb_ahblite__DOT__ahb_access__cycles_238 = 0;
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239 = 0;
            __Vtask_tb_ahblite__DOT__ahb_access__done_240 = 0;
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 294);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_haddr 
                = __Vtask_tb_ahblite__DOT__ahb_access__address_232;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite 
                = __Vtask_tb_ahblite__DOT__ahb_access__write_access_233;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsize 
                = __Vtask_tb_ahblite__DOT__ahb_access__size_234;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hburst 
                = (7U & ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_232) 
                         >> 2U));
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 301);
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 302);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata 
                = __Vtask_tb_ahblite__DOT__ahb_access__write_data_235;
            __Vtask_tb_ahblite__DOT__ahb_access__cycles_238 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__done_240 = 0U;
            while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_238) 
                    & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_240)))) {
                Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                                  "@(negedge tb_ahblite.i_clk_ahb)");
                co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                     310);
                __Vtask_tb_ahblite__DOT__ahb_access__cycles_238 
                    = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_238);
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
                    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239 
                        = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239);
                    ++(vlSelf->__Vcoverage[807]);
                } else {
                    ++(vlSelf->__Vcoverage[808]);
                }
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
                    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                                      != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_236))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_232)
                                     , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                                     , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_236));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[809]);
                    }
                    if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_236) 
                                      & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239);
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[810]);
                    }
                    if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_236)) 
                                       & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_233))) 
                                      & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                         != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_237))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                                     , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_237
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_232));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[814]);
                    }
                    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                                      "@(posedge tb_ahblite.i_clk_ahb)");
                    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                         321);
                    __Vtask_tb_ahblite__DOT__ahb_access__done_240 = 1U;
                    if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_236) 
                         & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239))) {
                        ++(vlSelf->__Vcoverage[811]);
                    }
                    if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_239)) {
                        ++(vlSelf->__Vcoverage[812]);
                    }
                    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_236)))) {
                        ++(vlSelf->__Vcoverage[813]);
                    }
                    if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_236)) 
                          & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_233))) 
                         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                            != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_237))) {
                        ++(vlSelf->__Vcoverage[815]);
                    }
                    if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                         == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_237)) {
                        ++(vlSelf->__Vcoverage[816]);
                    }
                    if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_233) {
                        ++(vlSelf->__Vcoverage[817]);
                    }
                    if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_236) {
                        ++(vlSelf->__Vcoverage[818]);
                    }
                    ++(vlSelf->__Vcoverage[819]);
                } else {
                    ++(vlSelf->__Vcoverage[820]);
                }
                if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_238) 
                     & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_240)))) {
                    ++(vlSelf->__Vcoverage[804]);
                }
                if (__Vtask_tb_ahblite__DOT__ahb_access__done_240) {
                    ++(vlSelf->__Vcoverage[805]);
                }
                if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_238)) {
                    ++(vlSelf->__Vcoverage[806]);
                }
                ++(vlSelf->__Vcoverage[821]);
            }
            if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_240))) {
                ++(vlSelf->__Vcoverage[822]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_232));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 326);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_240)))) {
                ++(vlSelf->__Vcoverage[823]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__done_240) {
                ++(vlSelf->__Vcoverage[824]);
            }
            ++(vlSelf->__Vcoverage[825]);
            ++(vlSelf->__Vcoverage[796]);
        } else if ((1U == VL_MODDIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(4U)))) {
            __Vtask_tb_ahblite__DOT__coverage_burst__addr_228 
                = (0x8000U | (0x7ffcU & VL_RANDOM_I()));
            __Vtask_tb_ahblite__DOT__ahb_access__expected_read_246 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__expected_error_245 = 1U;
            __Vtask_tb_ahblite__DOT__ahb_access__write_data_244 
                = __Vtask_tb_ahblite__DOT__coverage_burst__data_229;
            __Vtask_tb_ahblite__DOT__ahb_access__size_243 = 2U;
            __Vtask_tb_ahblite__DOT__ahb_access__write_access_242 = 1U;
            __Vtask_tb_ahblite__DOT__ahb_access__address_241 
                = __Vtask_tb_ahblite__DOT__coverage_burst__addr_228;
            __Vtask_tb_ahblite__DOT__ahb_access__cycles_247 = 0;
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248 = 0;
            __Vtask_tb_ahblite__DOT__ahb_access__done_249 = 0;
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 294);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_haddr 
                = __Vtask_tb_ahblite__DOT__ahb_access__address_241;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite 
                = __Vtask_tb_ahblite__DOT__ahb_access__write_access_242;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsize 
                = __Vtask_tb_ahblite__DOT__ahb_access__size_243;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hburst 
                = (7U & ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_241) 
                         >> 2U));
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 301);
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 302);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata 
                = __Vtask_tb_ahblite__DOT__ahb_access__write_data_244;
            __Vtask_tb_ahblite__DOT__ahb_access__cycles_247 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__done_249 = 0U;
            while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_247) 
                    & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_249)))) {
                Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                                  "@(negedge tb_ahblite.i_clk_ahb)");
                co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                     310);
                __Vtask_tb_ahblite__DOT__ahb_access__cycles_247 
                    = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_247);
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
                    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248 
                        = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248);
                    ++(vlSelf->__Vcoverage[807]);
                } else {
                    ++(vlSelf->__Vcoverage[808]);
                }
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
                    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                                      != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_245))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_241)
                                     , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                                     , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_245));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[809]);
                    }
                    if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_245) 
                                      & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248);
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[810]);
                    }
                    if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_245)) 
                                       & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_242))) 
                                      & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                         != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_246))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                                     , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_246
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_241));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[814]);
                    }
                    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                                      "@(posedge tb_ahblite.i_clk_ahb)");
                    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                         321);
                    __Vtask_tb_ahblite__DOT__ahb_access__done_249 = 1U;
                    if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_245) 
                         & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248))) {
                        ++(vlSelf->__Vcoverage[811]);
                    }
                    if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_248)) {
                        ++(vlSelf->__Vcoverage[812]);
                    }
                    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_245)))) {
                        ++(vlSelf->__Vcoverage[813]);
                    }
                    if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_245)) 
                          & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_242))) 
                         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                            != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_246))) {
                        ++(vlSelf->__Vcoverage[815]);
                    }
                    if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                         == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_246)) {
                        ++(vlSelf->__Vcoverage[816]);
                    }
                    if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_242) {
                        ++(vlSelf->__Vcoverage[817]);
                    }
                    if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_245) {
                        ++(vlSelf->__Vcoverage[818]);
                    }
                    ++(vlSelf->__Vcoverage[819]);
                } else {
                    ++(vlSelf->__Vcoverage[820]);
                }
                if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_247) 
                     & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_249)))) {
                    ++(vlSelf->__Vcoverage[804]);
                }
                if (__Vtask_tb_ahblite__DOT__ahb_access__done_249) {
                    ++(vlSelf->__Vcoverage[805]);
                }
                if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_247)) {
                    ++(vlSelf->__Vcoverage[806]);
                }
                ++(vlSelf->__Vcoverage[821]);
            }
            if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_249))) {
                ++(vlSelf->__Vcoverage[822]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_241));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 326);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_249)))) {
                ++(vlSelf->__Vcoverage[823]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__done_249) {
                ++(vlSelf->__Vcoverage[824]);
            }
            ++(vlSelf->__Vcoverage[825]);
            ++(vlSelf->__Vcoverage[797]);
        } else if ((2U == VL_MODDIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(4U)))) {
            __Vtask_tb_ahblite__DOT__coverage_burst__addr_228 
                = (1U | (0xfffcU & VL_RANDOM_I()));
            __Vtask_tb_ahblite__DOT__ahb_access__expected_read_255 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__expected_error_254 = 1U;
            __Vtask_tb_ahblite__DOT__ahb_access__write_data_253 
                = __Vtask_tb_ahblite__DOT__coverage_burst__data_229;
            __Vtask_tb_ahblite__DOT__ahb_access__size_252 = 1U;
            __Vtask_tb_ahblite__DOT__ahb_access__write_access_251 = 1U;
            __Vtask_tb_ahblite__DOT__ahb_access__address_250 
                = __Vtask_tb_ahblite__DOT__coverage_burst__addr_228;
            __Vtask_tb_ahblite__DOT__ahb_access__cycles_256 = 0;
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257 = 0;
            __Vtask_tb_ahblite__DOT__ahb_access__done_258 = 0;
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 294);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_haddr 
                = __Vtask_tb_ahblite__DOT__ahb_access__address_250;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite 
                = __Vtask_tb_ahblite__DOT__ahb_access__write_access_251;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsize 
                = __Vtask_tb_ahblite__DOT__ahb_access__size_252;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hburst 
                = (7U & ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_250) 
                         >> 2U));
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 301);
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 302);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata 
                = __Vtask_tb_ahblite__DOT__ahb_access__write_data_253;
            __Vtask_tb_ahblite__DOT__ahb_access__cycles_256 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__done_258 = 0U;
            while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_256) 
                    & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_258)))) {
                Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                                  "@(negedge tb_ahblite.i_clk_ahb)");
                co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                     310);
                __Vtask_tb_ahblite__DOT__ahb_access__cycles_256 
                    = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_256);
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
                    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257 
                        = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257);
                    ++(vlSelf->__Vcoverage[807]);
                } else {
                    ++(vlSelf->__Vcoverage[808]);
                }
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
                    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                                      != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_254))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_250)
                                     , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                                     , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_254));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[809]);
                    }
                    if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_254) 
                                      & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257);
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[810]);
                    }
                    if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_254)) 
                                       & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_251))) 
                                      & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                         != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_255))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                                     , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_255
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_250));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[814]);
                    }
                    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                                      "@(posedge tb_ahblite.i_clk_ahb)");
                    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                         321);
                    __Vtask_tb_ahblite__DOT__ahb_access__done_258 = 1U;
                    if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_254) 
                         & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257))) {
                        ++(vlSelf->__Vcoverage[811]);
                    }
                    if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_257)) {
                        ++(vlSelf->__Vcoverage[812]);
                    }
                    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_254)))) {
                        ++(vlSelf->__Vcoverage[813]);
                    }
                    if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_254)) 
                          & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_251))) 
                         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                            != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_255))) {
                        ++(vlSelf->__Vcoverage[815]);
                    }
                    if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                         == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_255)) {
                        ++(vlSelf->__Vcoverage[816]);
                    }
                    if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_251) {
                        ++(vlSelf->__Vcoverage[817]);
                    }
                    if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_254) {
                        ++(vlSelf->__Vcoverage[818]);
                    }
                    ++(vlSelf->__Vcoverage[819]);
                } else {
                    ++(vlSelf->__Vcoverage[820]);
                }
                if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_256) 
                     & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_258)))) {
                    ++(vlSelf->__Vcoverage[804]);
                }
                if (__Vtask_tb_ahblite__DOT__ahb_access__done_258) {
                    ++(vlSelf->__Vcoverage[805]);
                }
                if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_256)) {
                    ++(vlSelf->__Vcoverage[806]);
                }
                ++(vlSelf->__Vcoverage[821]);
            }
            if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_258))) {
                ++(vlSelf->__Vcoverage[822]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_250));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 326);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_258)))) {
                ++(vlSelf->__Vcoverage[823]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__done_258) {
                ++(vlSelf->__Vcoverage[824]);
            }
            ++(vlSelf->__Vcoverage[825]);
            ++(vlSelf->__Vcoverage[798]);
        } else {
            __Vtask_tb_ahblite__DOT__coverage_burst____VlefExpr_0_225 
                = VL_URANDOM_RANGE_I(0U, 6U);
            __Vtask_tb_ahblite__DOT__coverage_burst__addr_228 
                = ((6U >= (7U & __Vtask_tb_ahblite__DOT__coverage_burst____VlefExpr_0_225))
                    ? __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231
                   [(7U & __Vtask_tb_ahblite__DOT__coverage_burst____VlefExpr_0_225)]
                    : 0U);
            __Vtask_tb_ahblite__DOT__ahb_access__expected_read_264 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__expected_error_263 = 1U;
            __Vtask_tb_ahblite__DOT__ahb_access__write_data_262 
                = __Vtask_tb_ahblite__DOT__coverage_burst__data_229;
            __Vtask_tb_ahblite__DOT__ahb_access__size_261 = 3U;
            __Vtask_tb_ahblite__DOT__ahb_access__write_access_260 = 1U;
            __Vtask_tb_ahblite__DOT__ahb_access__address_259 
                = __Vtask_tb_ahblite__DOT__coverage_burst__addr_228;
            __Vtask_tb_ahblite__DOT__ahb_access__cycles_265 = 0;
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266 = 0;
            __Vtask_tb_ahblite__DOT__ahb_access__done_267 = 0;
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 294);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_haddr 
                = __Vtask_tb_ahblite__DOT__ahb_access__address_259;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite 
                = __Vtask_tb_ahblite__DOT__ahb_access__write_access_260;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsize 
                = __Vtask_tb_ahblite__DOT__ahb_access__size_261;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hburst 
                = (7U & ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_259) 
                         >> 2U));
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 301);
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 302);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata 
                = __Vtask_tb_ahblite__DOT__ahb_access__write_data_262;
            __Vtask_tb_ahblite__DOT__ahb_access__cycles_265 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_access__done_267 = 0U;
            while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_265) 
                    & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_267)))) {
                Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                                  "@(negedge tb_ahblite.i_clk_ahb)");
                co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                     310);
                __Vtask_tb_ahblite__DOT__ahb_access__cycles_265 
                    = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_265);
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
                    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266 
                        = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266);
                    ++(vlSelf->__Vcoverage[807]);
                } else {
                    ++(vlSelf->__Vcoverage[808]);
                }
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
                    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                                      != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_263))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_259)
                                     , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                                     , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_263));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[809]);
                    }
                    if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_263) 
                                      & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266);
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[810]);
                    }
                    if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_263)) 
                                       & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_260))) 
                                      & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                         != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_264))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                                     , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_264
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_259));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[814]);
                    }
                    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                                      "@(posedge tb_ahblite.i_clk_ahb)");
                    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                         321);
                    __Vtask_tb_ahblite__DOT__ahb_access__done_267 = 1U;
                    if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_263) 
                         & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266))) {
                        ++(vlSelf->__Vcoverage[811]);
                    }
                    if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_266)) {
                        ++(vlSelf->__Vcoverage[812]);
                    }
                    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_263)))) {
                        ++(vlSelf->__Vcoverage[813]);
                    }
                    if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_263)) 
                          & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_260))) 
                         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                            != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_264))) {
                        ++(vlSelf->__Vcoverage[815]);
                    }
                    if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                         == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_264)) {
                        ++(vlSelf->__Vcoverage[816]);
                    }
                    if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_260) {
                        ++(vlSelf->__Vcoverage[817]);
                    }
                    if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_263) {
                        ++(vlSelf->__Vcoverage[818]);
                    }
                    ++(vlSelf->__Vcoverage[819]);
                } else {
                    ++(vlSelf->__Vcoverage[820]);
                }
                if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_265) 
                     & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_267)))) {
                    ++(vlSelf->__Vcoverage[804]);
                }
                if (__Vtask_tb_ahblite__DOT__ahb_access__done_267) {
                    ++(vlSelf->__Vcoverage[805]);
                }
                if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_265)) {
                    ++(vlSelf->__Vcoverage[806]);
                }
                ++(vlSelf->__Vcoverage[821]);
            }
            if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_267))) {
                ++(vlSelf->__Vcoverage[822]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_259));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 326);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_267)))) {
                ++(vlSelf->__Vcoverage[823]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__done_267) {
                ++(vlSelf->__Vcoverage[824]);
            }
            ++(vlSelf->__Vcoverage[825]);
            ++(vlSelf->__Vcoverage[799]);
        }
        if ((0U == VL_MODDIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(8U)))) {
            __Vtask_tb_ahblite__DOT__ahb_read_response__expected_error_269 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_read_response__address_268 
                = ((6U >= (7U & VL_MODDIVS_III(32, 
                                               VL_DIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(8U)), (IData)(7U))))
                    ? __Vtask_tb_ahblite__DOT__coverage_burst__legal_addr_231
                   [(7U & VL_MODDIVS_III(32, VL_DIVS_III(32, __Vtask_tb_ahblite__DOT__coverage_burst__q_226, (IData)(8U)), (IData)(7U)))]
                    : 0U);
            __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270 = 0;
            __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271 = 0;
            __Vtask_tb_ahblite__DOT__ahb_read_response__done_272 = 0;
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 213);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_haddr 
                = __Vtask_tb_ahblite__DOT__ahb_read_response__address_268;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = 2U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_hburst 
                = (7U & ((IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__address_268) 
                         >> 2U));
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 220);
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 221);
            vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
            vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
            __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271 = 0U;
            __Vtask_tb_ahblite__DOT__ahb_read_response__done_272 = 0U;
            while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270) 
                    & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__done_272)))) {
                Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                                  "@(negedge tb_ahblite.i_clk_ahb)");
                co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                     "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                     228);
                __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270 
                    = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270);
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
                    __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271 
                        = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271);
                    ++(vlSelf->__Vcoverage[779]);
                } else {
                    ++(vlSelf->__Vcoverage[780]);
                }
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
                    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                                      != (IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__expected_error_269))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:232: Assertion failed in %m: coverage AHB response mismatch at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_read_response", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__address_268));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 232, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[781]);
                    }
                    if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__expected_error_269) 
                                      & (2U != __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:233: Assertion failed in %m: coverage AHB ERROR was not two cycles\n",3, 'M',vlSymsp->name(),"tb_ahblite.ahb_read_response", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 233, "", false);
                    } else {
                        ++(vlSelf->__Vcoverage[782]);
                    }
                    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                                      "@(posedge tb_ahblite.i_clk_ahb)");
                    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                         234);
                    __Vtask_tb_ahblite__DOT__ahb_read_response__done_272 = 1U;
                    if (((IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__expected_error_269) 
                         & (2U != __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271))) {
                        ++(vlSelf->__Vcoverage[783]);
                    }
                    if ((2U == __Vtask_tb_ahblite__DOT__ahb_read_response__error_cycles_271)) {
                        ++(vlSelf->__Vcoverage[784]);
                    }
                    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__expected_error_269)))) {
                        ++(vlSelf->__Vcoverage[785]);
                    }
                    ++(vlSelf->__Vcoverage[786]);
                } else {
                    ++(vlSelf->__Vcoverage[787]);
                }
                if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270) 
                     & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__done_272)))) {
                    ++(vlSelf->__Vcoverage[776]);
                }
                if (__Vtask_tb_ahblite__DOT__ahb_read_response__done_272) {
                    ++(vlSelf->__Vcoverage[777]);
                }
                if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_read_response__wait_cycles_270)) {
                    ++(vlSelf->__Vcoverage[778]);
                }
                ++(vlSelf->__Vcoverage[788]);
            }
            if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_read_response__done_272))) {
                ++(vlSelf->__Vcoverage[789]);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:238: Assertion failed in %m: coverage AHB read timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_read_response", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__address_268));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 238, "", false);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                              "@(negedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 239);
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_read_response__done_272)))) {
                ++(vlSelf->__Vcoverage[790]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_read_response__done_272) {
                ++(vlSelf->__Vcoverage[791]);
            }
            ++(vlSelf->__Vcoverage[792]);
            ++(vlSelf->__Vcoverage[800]);
        } else {
            ++(vlSelf->__Vcoverage[801]);
        }
        __Vtask_tb_ahblite__DOT__coverage_burst__q_226 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__coverage_burst__q_226);
        ++(vlSelf->__Vcoverage[802]);
    }
    __Vtask_tb_ahblite__DOT__cov_toggle_inputs__cov_i_273 = 0;
    __Vtask_tb_ahblite__DOT__cov_toggle_inputs__cov_i_273 = 0U;
    while (VL_GTS_III(32, 0x00000100U, __Vtask_tb_ahblite__DOT__cov_toggle_inputs__cov_i_273)) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             335);
        vlSelfRef.tb_ahblite__DOT__cov_i_engine_events 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_port_0_event_count 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_port_1_event_count 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_port_2_event_count 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_start 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_fault 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_pending 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_overflow 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_done 
            = (1U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_monitor_sample_count 
            = (0x0000ffffU & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_error 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_error 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_pending 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_pending 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_overflow 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_overflow 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_match 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_match 
            = (3U & VL_RANDOM_I());
        vlSelfRef.tb_ahblite__DOT__cov_i_hw_clear_monitor_key_fragment 
            = (3U & VL_RANDOM_I());
        __Vtask_tb_ahblite__DOT__cov_toggle_inputs__cov_i_273 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__cov_toggle_inputs__cov_i_273);
        ++(vlSelf->__Vcoverage[826]);
    }
    ++(vlSelf->__Vcoverage[827]);
    ++(vlSelf->__Vcoverage[803]);
    ++(vlSelf->__Vcoverage[831]);
    VL_WRITEF_NX("PASS AHB example map: full field access, mapped/unmapped, and WO hardware clear\n",0);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 531, "");
    ++(vlSelf->__Vcoverage[835]);
    if (VL_UNLIKELY(((0x12345678U != vlSelfRef.tb_ahblite__DOT__o_data_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:534: Assertion failed in %m: CSR reset value mismatch\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 534, "", false);
    } else {
        ++(vlSelf->__Vcoverage[837]);
    }
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: reset and selected FIFO clock-mode initialization\n",0);
    ++(vlSelf->__Vcoverage[841]);
    vlSelfRef.tb_ahblite__DOT__wo_write_word = 0xa1b2c3d4U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_279 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_278 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_277 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_276 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_275 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_274 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_280 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_282 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_274;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_275;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_276;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_274) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_277;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_280 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_282 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_280) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_282)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_280 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_280);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_278))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_274)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_278));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_278) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_278)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_275))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_279))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_279
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_274));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_282 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_278) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_281)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_278)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_278)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_275))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_279))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_279)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_275) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_278) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_280) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_282)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_282) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_280)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_282))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_274));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_282)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_282) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_288 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_287 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_286 
        = vlSelfRef.tb_ahblite__DOT__wo_write_word;
    __Vtask_tb_ahblite__DOT__ahb_access__size_285 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_284 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_283 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_289 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_291 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_283;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_284;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_285;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_283) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_286;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_289 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_291 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_289) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_291)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_289 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_289);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_287))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_283)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_287));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_287) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_287)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_284))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_288))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_288
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_283));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_291 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_287) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_290)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_287)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_287)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_284))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_288))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_288)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_284) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_287) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_289) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_291)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_291) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_289)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_291))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_283));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_291)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_291) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    if (VL_UNLIKELY(((0xa1b2c3d4U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:541: Assertion failed in %m: WO storage did not capture software write\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 541, "", false);
    } else {
        ++(vlSelf->__Vcoverage[842]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_297 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_296 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_295 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_294 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_293 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_292 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_298 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_300 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_292;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_293;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_294;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_292) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_295;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_298 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_300 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_298) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_300)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_298 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_298);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_296))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_292)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_296));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_296) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_296)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_293))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_297))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_297
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_292));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_300 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_296) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_299)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_296)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_296)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_293))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_297))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_297)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_293) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_296) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_298) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_300)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_300) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_298)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_300))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_292));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_300)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_300) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr = 0x0011U;
    vlSelfRef.tb_ahblite__DOT__wo_partial_write_data = 0x0000ee00U;
    vlSelfRef.tb_ahblite__DOT__wo_after_partial = 0xa1b2eed4U;
    ++(vlSelf->__Vcoverage[845]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_306 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_305 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_304 
        = vlSelfRef.tb_ahblite__DOT__wo_partial_write_data;
    __Vtask_tb_ahblite__DOT__ahb_access__size_303 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_302 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_301 
        = vlSelfRef.tb_ahblite__DOT__wo_partial_write_addr;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_307 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_309 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_301;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_302;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_303;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_301) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_304;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_307 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_309 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_307) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_309)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_307 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_307);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_305))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_301)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_305));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_305) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_305)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_302))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_306))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_306
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_301));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_309 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_305) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_308)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_305)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_305)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_302))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_306))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_306)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_302) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_305) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_307) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_309)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_309) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_307)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_309))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_301));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_309)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_309) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    if (VL_UNLIKELY(((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
                      != vlSelfRef.tb_ahblite__DOT__wo_after_partial)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:557: Assertion failed in %m: WO WSTRB did not update selected byte lane: %08x\n",4, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 557, "", false);
    } else {
        ++(vlSelf->__Vcoverage[846]);
    }
    vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_315 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_314 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_313 
        = vlSelfRef.tb_ahblite__DOT__wo_write_word;
    __Vtask_tb_ahblite__DOT__ahb_access__size_312 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_311 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_310 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_316 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_318 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_310;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_311;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_312;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_310) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_313;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_316 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_318 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_316) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_318)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_316 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_316);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_314))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_310)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_314));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_314) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_314)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_311))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_315))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_315
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_310));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_318 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_314) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_317)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_314)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_314)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_311))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_315))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_315)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_311) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_314) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_316) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_318)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_318) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_316)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_318))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_310));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_318)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_318) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    vlSelfRef.tb_ahblite__DOT__i_hw_clear_key_data = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:561: Assertion failed in %m: WO hardware clear did not override concurrent software write\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 561, "", false);
    } else {
        ++(vlSelf->__Vcoverage[847]);
    }
    tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3 = 2U;
    while (VL_LTS_III(32, 0U, tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                          "@(posedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             562);
        tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_ahblite__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[848]);
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:563: Assertion failed in %m: WO field changed after clear was released\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 563, "", false);
    } else {
        ++(vlSelf->__Vcoverage[849]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_324 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_323 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_322 = 0x55667788U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_321 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_320 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_319 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_325 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_327 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_319;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_320;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_321;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_319) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_322;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_325 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_327 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_325) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_327)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_325 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_325);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_323))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_319)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_323));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_323) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_323)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_320))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_324))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_324
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_319));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_327 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_323) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_326)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_323)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_323)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_320))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_324))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_324)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_320) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_323) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_325) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_327)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_327) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_325)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_327))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_319));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_327)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_327) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    if (VL_UNLIKELY(((0x55667788U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:565: Assertion failed in %m: WO field did not accept a write after clear release\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 565, "", false);
    } else {
        ++(vlSelf->__Vcoverage[852]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_333 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_332 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_331 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_330 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_329 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_328 = 0x0010U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_334 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_336 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_328;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_329;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_330;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_328) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_331;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_334 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_336 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_334) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_336)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_334 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_334);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_332))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_328)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_332));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_332) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_332)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_329))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_333))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_333
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_328));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_336 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_332) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_335)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_332)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_332)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_329))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_333))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_333)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_329) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_332) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_334) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_336)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_336) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_334)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_336))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_328));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_336)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_336) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: WO read-zero, WSTRB, storage, clear priority, and post-clear write\n",0);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_342 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_341 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_340 = 0x11223344U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_339 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_338 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_337 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_343 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_345 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_337;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_338;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_339;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_337) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_340;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_343 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_345 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_343) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_345)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_343 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_343);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_341))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_337)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_341));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_341) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_341)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_338))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_342))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_342
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_337));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_345 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_341) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_344)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_341)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_341)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_338))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_342))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_342)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_338) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_341) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_343) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_345)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_345) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_343)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_345))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_337));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_345)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_345) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    if (VL_UNLIKELY(((0x11223344U != vlSelfRef.tb_ahblite__DOT__o_data_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:572: Assertion failed in %m: AHB word write failed\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 572, "", false);
    } else {
        ++(vlSelf->__Vcoverage[853]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_351 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_350 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_349 = 0x0000aa00U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_348 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_347 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_346 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_352 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_354 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_346;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_347;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_348;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_346) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_349;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_352 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_354 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_352) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_354)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_352 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_352);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_350))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_346)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_350));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_350) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_350)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_347))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_351))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_351
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_346));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_354 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_350) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_353)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_350)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_350)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_347))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_351))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_351)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_347) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_350) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_352) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_354)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_354) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_352)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_354))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_346));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_354)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_354) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    if (VL_UNLIKELY(((0x1122aa44U != vlSelfRef.tb_ahblite__DOT__o_data_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:574: Assertion failed in %m: AHB byte lane write failed: %08x\n",4, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_ahblite__DOT__o_data_value);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 574, "", false);
    } else {
        ++(vlSelf->__Vcoverage[854]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_360 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_359 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_358 = 0xbeef0000U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_357 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_356 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_355 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_361 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_363 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_355;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_356;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_357;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_355) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_358;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_361 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_363 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_361) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_363)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_361 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_361);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_359))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_355)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_359));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_359) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_359)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_356))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_360))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_360
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_355));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_363 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_359) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_362)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_359)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_359)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_356))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_360))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_360)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_356) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_359) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_361) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_363)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_363) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_361)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_363))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_355));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_363)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_363) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    if (VL_UNLIKELY(((0xbeefaa44U != vlSelfRef.tb_ahblite__DOT__o_data_value)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:576: Assertion failed in %m: AHB halfword lane write failed: %08x\n",4, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_ahblite__DOT__o_data_value);
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 576, "", false);
    } else {
        ++(vlSelf->__Vcoverage[855]);
    }
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_369 = 0xbeefaa44U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_368 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_367 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_366 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_365 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_364 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_370 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_372 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_364;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_365;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_366;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_364) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_367;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_370 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_372 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_370) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_372)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_370 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_370);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_368))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_364)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_368));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_368) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_368)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_365))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_369))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_369
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_364));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_372 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_368) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_371)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_368)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_368)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_365))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_369))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_369)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_365) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_368) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_370) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_372)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_372) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_370)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_372))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_364));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_372)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_372) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: LITTLE word, byte, halfword writes and readback\n",0);
    ++(vlSelf->__Vcoverage[864]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_378 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_377 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_376 = 0xffffffffU;
    __Vtask_tb_ahblite__DOT__ahb_access__size_375 = 3U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_374 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_373 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_379 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_381 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_373;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_374;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_375;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_373) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_376;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_379 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_381 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_379) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_381)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_379 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_379);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_377))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_373)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_377));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_377) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_377)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_374))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_378))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_378
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_373));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_381 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_377) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_380)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_377)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_377)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_374))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_378))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_378)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_374) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_377) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_379) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_381)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_381) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_379)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_381))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_373));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_381)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_381) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_387 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_386 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_385 = 0xffffffffU;
    __Vtask_tb_ahblite__DOT__ahb_access__size_384 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_383 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_382 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_388 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_390 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_382;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_383;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_384;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_382) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_385;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_388 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_390 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_388) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_390)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_388 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_388);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_386))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_382)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_386));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_386) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_386)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_383))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_387))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_387
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_382));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_390 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_386) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_389)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_386)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_386)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_383))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_387))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_387)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_383) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_386) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_388) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_390)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_390) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_388)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_390))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_382));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_390)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_390) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: unsupported size and misaligned halfword return two-cycle ERROR\n",0);
    __Vtask_tb_ahblite__DOT__ahb_access__expected_read_396 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__expected_error_395 = 1U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_data_394 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__size_393 = 2U;
    __Vtask_tb_ahblite__DOT__ahb_access__write_access_392 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__address_391 = 4U;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_397 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398 = 0;
    __Vtask_tb_ahblite__DOT__ahb_access__done_399 = 0;
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         294);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 1U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 2U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_haddr = __Vtask_tb_ahblite__DOT__ahb_access__address_391;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite = __Vtask_tb_ahblite__DOT__ahb_access__write_access_392;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsize = __Vtask_tb_ahblite__DOT__ahb_access__size_393;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hburst = (7U & 
                                               ((IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_391) 
                                                >> 2U));
    Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                      "@(posedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         301);
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         302);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hsel = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_htrans = 0U;
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = __Vtask_tb_ahblite__DOT__ahb_access__write_data_394;
    __Vtask_tb_ahblite__DOT__ahb_access__cycles_397 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398 = 0U;
    __Vtask_tb_ahblite__DOT__ahb_access__done_399 = 0U;
    while ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_397) 
            & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_399)))) {
        Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
        co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_ahblite.i_clk_ahb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                             310);
        __Vtask_tb_ahblite__DOT__ahb_access__cycles_397 
            = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__cycles_397);
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) {
            __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398 
                = ((IData)(1U) + __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398);
            ++(vlSelf->__Vcoverage[807]);
        } else {
            ++(vlSelf->__Vcoverage[808]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hreadyout) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp) 
                              != (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_395))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:316: Assertion failed in %m: AHB response mismatch at %04x: HRESP=%0b expected=%0b\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_391)
                             , '#',1,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hresp
                             , '#',1,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_395));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 316, "", false);
            } else {
                ++(vlSelf->__Vcoverage[809]);
            }
            if (VL_UNLIKELY((((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_395) 
                              & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:318: Assertion failed in %m: AHB ERROR response lasted %0d cycles, expected 2\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,__Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398);
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 318, "", false);
            } else {
                ++(vlSelf->__Vcoverage[810]);
            }
            if (VL_UNLIKELY(((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_395)) 
                               & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_392))) 
                              & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                                 != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_396))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:320: Assertion failed in %m: AHB HRDATA got %08x expected %08x at %04x\n",6, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata
                             , '#',32,__Vtask_tb_ahblite__DOT__ahb_access__expected_read_396
                             , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_391));
                VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 320, "", false);
            } else {
                ++(vlSelf->__Vcoverage[814]);
            }
            Vtb_ahblite___024root____VbeforeTrig_he1407110__0(vlSelf, 
                                                              "@(posedge tb_ahblite.i_clk_ahb)");
            co_await vlSelfRef.__VtrigSched_he1407110__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ahblite.i_clk_ahb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                                 321);
            __Vtask_tb_ahblite__DOT__ahb_access__done_399 = 1U;
            if (((IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_395) 
                 & (2U != __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398))) {
                ++(vlSelf->__Vcoverage[811]);
            }
            if ((2U == __Vtask_tb_ahblite__DOT__ahb_access__error_cycles_398)) {
                ++(vlSelf->__Vcoverage[812]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_395)))) {
                ++(vlSelf->__Vcoverage[813]);
            }
            if ((((~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__expected_error_395)) 
                  & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__write_access_392))) 
                 & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                    != __Vtask_tb_ahblite__DOT__ahb_access__expected_read_396))) {
                ++(vlSelf->__Vcoverage[815]);
            }
            if ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                 == __Vtask_tb_ahblite__DOT__ahb_access__expected_read_396)) {
                ++(vlSelf->__Vcoverage[816]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__write_access_392) {
                ++(vlSelf->__Vcoverage[817]);
            }
            if (__Vtask_tb_ahblite__DOT__ahb_access__expected_error_395) {
                ++(vlSelf->__Vcoverage[818]);
            }
            ++(vlSelf->__Vcoverage[819]);
        } else {
            ++(vlSelf->__Vcoverage[820]);
        }
        if ((VL_GTS_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_397) 
             & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_399)))) {
            ++(vlSelf->__Vcoverage[804]);
        }
        if (__Vtask_tb_ahblite__DOT__ahb_access__done_399) {
            ++(vlSelf->__Vcoverage[805]);
        }
        if (VL_LTES_III(32, 0x00000078U, __Vtask_tb_ahblite__DOT__ahb_access__cycles_397)) {
            ++(vlSelf->__Vcoverage[806]);
        }
        ++(vlSelf->__Vcoverage[821]);
    }
    if (VL_LIKELY((__Vtask_tb_ahblite__DOT__ahb_access__done_399))) {
        ++(vlSelf->__Vcoverage[822]);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:325: Assertion failed in %m: AHB response timeout at %04x\n",4, 'M',vlSymsp->name(),"tb_ahblite.ahb_access", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(__Vtask_tb_ahblite__DOT__ahb_access__address_391));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 325, "", false);
    }
    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(vlSelf, 
                                                      "@(negedge tb_ahblite.i_clk_ahb)");
    co_await vlSelfRef.__VtrigSched_he1403ac9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_ahblite.i_clk_ahb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                                         326);
    vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata = 0U;
    if ((1U & (~ (IData)(__Vtask_tb_ahblite__DOT__ahb_access__done_399)))) {
        ++(vlSelf->__Vcoverage[823]);
    }
    if (__Vtask_tb_ahblite__DOT__ahb_access__done_399) {
        ++(vlSelf->__Vcoverage[824]);
    }
    ++(vlSelf->__Vcoverage[825]);
    tb_ahblite__DOT__test_count = ((IData)(1U) + tb_ahblite__DOT__test_count);
    VL_WRITEF_NX("PASS AHB case: unmapped address returns two-cycle ERROR\nPASS AHB: endian=0 asynchronous=0, cases=%0d\n",1
                 , '~',32,tb_ahblite__DOT__test_count);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 611, "");
    ++(vlSelf->__Vcoverage[839]);
    ++(vlSelf->__Vcoverage[851]);
    ++(vlSelf->__Vcoverage[865]);
    co_return;
}

VlCoroutine Vtb_ahblite___024root___eval_initial__TOP__Vtiming__3(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 
                                         615);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_AHB_Lite.sv:616: Assertion failed in %m: AHB testbench timeout\n",3, 'M',vlSymsp->name(),"tb_ahblite", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_215223\\tb_AHB_Lite.sv", 616, "", false);
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
    // Locals
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_rd_en;
    tb_ahblite__DOT__u_dut__DOT__w_rd_en = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_wr_en;
    tb_ahblite__DOT__u_dut__DOT__w_wr_en = 0;
    IData/*31:0*/ tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt;
    tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_addr_mapped;
    tb_ahblite__DOT__u_dut__DOT__w_addr_mapped = 0;
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
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite) 
                              << 4U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb)))) 
            << 0x00000030U) | (((QData)((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata)) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))));
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
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 1346, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data;
    }
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
    if ((0U != (tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1206, tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = tb_ahblite__DOT__u_dut__DOT__w_rdata_nxt;
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
