// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_csr_golden.h for the primary calling header

#include "Vtb_csr_golden__pch.h"

VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__0(Vtb_csr_golden___024root* vlSelf);
VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__1(Vtb_csr_golden___024root* vlSelf);
VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__2(Vtb_csr_golden___024root* vlSelf);
VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__3(Vtb_csr_golden___024root* vlSelf);
VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__4(Vtb_csr_golden___024root* vlSelf);
VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__5(Vtb_csr_golden___024root* vlSelf);
VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__6(Vtb_csr_golden___024root* vlSelf);
VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__7(Vtb_csr_golden___024root* vlSelf);

void Vtb_csr_golden___024root___eval_initial(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_initial\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        ++(vlSelf->__Vcoverage[19]);
        ++(vlSelf->__Vcoverage[2881]);
        ++(vlSelf->__Vcoverage[2879]);
        ++(vlSelf->__Vcoverage[2885]);
        ++(vlSelf->__Vcoverage[2883]);
        ++(vlSelf->__Vcoverage[3052]);
        ++(vlSelf->__Vcoverage[3097]);
        ++(vlSelf->__Vcoverage[3142]);
        ++(vlSelf->__Vcoverage[3187]);
        ++(vlSelf->__Vcoverage[3233]);
        ++(vlSelf->__Vcoverage[3284]);
        ++(vlSelf->__Vcoverage[3301]);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_ack_fall) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2106, 0U, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_ack_fall);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_ack_fall = 0U;
        }
        if ((0U != vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_value)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2814, 0U, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_value);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_value = 0U;
        }
    }
    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__6(vlSelf);
    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__7(vlSelf);
}

void Vtb_csr_golden___024root___eval_sample(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_sample\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_csr_golden___024root___eval_ico(Vtb_csr_golden___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_ico\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_csr_golden___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_csr_golden___024root___timing_ready(Vtb_csr_golden___024root* vlSelf);
void Vtb_csr_golden___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_csr_golden___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_csr_golden___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_csr_golden___024root___timing_resume(Vtb_csr_golden___024root* vlSelf);
void Vtb_csr_golden___024root___act_comb__TOP__0(Vtb_csr_golden___024root* vlSelf);

bool Vtb_csr_golden___024root___eval_act(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_act\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e188a__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e188a__0 = 0;
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e47ff__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e47ff__0 = 0;
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e3870__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e3870__0 = 0;
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e691d__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e691d__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e188a__0 
            = (1U == vlSelfRef.tb_csr_golden__DOT__test_phase);
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e47ff__0 
            = (2U == vlSelfRef.tb_csr_golden__DOT__test_phase);
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e3870__0 
            = (3U == vlSelfRef.tb_csr_golden__DOT__test_phase);
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e691d__0 
            = (4U == vlSelfRef.tb_csr_golden__DOT__test_phase);
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e691d__0 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr_h099e691d__1)) 
                                                          << 8U) 
                                                         | ((((((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e3870__0 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr_h099e3870__1)) 
                                                                << 3U) 
                                                               | ((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e47ff__0 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h099e47ff__1)) 
                                                                  << 2U)) 
                                                              | (((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e188a__0 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h099e188a__1)) 
                                                                  << 1U) 
                                                                 | vlSelfRef.__VdlySched.awaitingCurrentTime())) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelfRef.tb_csr_golden__DOT__clk_reg) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_reg__0))) 
                                                                 << 3U) 
                                                                | (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__rst_n_apb__0)) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0)))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0 
            = vlSelfRef.tb_csr_golden__DOT__clk_apb;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__rst_n_apb__0 
            = vlSelfRef.tb_csr_golden__DOT__rst_n_apb;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_reg__0 
            = vlSelfRef.tb_csr_golden__DOT__clk_reg;
        vlSelfRef.__Vtrigprevexpr_h099e188a__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e188a__0;
        vlSelfRef.__Vtrigprevexpr_h099e47ff__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e47ff__0;
        vlSelfRef.__Vtrigprevexpr_h099e3870__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e3870__0;
        vlSelfRef.__Vtrigprevexpr_h099e691d__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h099e691d__0;
    }
    Vtb_csr_golden___024root___timing_ready(vlSelf);
    Vtb_csr_golden___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_csr_golden___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_csr_golden___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_csr_golden___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_csr_golden___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((0x00000000000001fbULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_csr_golden___024root___act_comb__TOP__0(vlSelf);
            }
            if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
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
                }
            }
            if ((0x00000000000001dbULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__1
                    if ((0U != (vlSelfRef.tb_csr_golden__DOT__good_rdata 
                                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__good_rdata))) {
                        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1141, vlSelfRef.tb_csr_golden__DOT__good_rdata, vlSelfRef.tb_csr_golden__DOT____Vtogcov__good_rdata);
                        vlSelfRef.tb_csr_golden__DOT____Vtogcov__good_rdata 
                            = vlSelfRef.tb_csr_golden__DOT__good_rdata;
                    }
                }
            }
            if ((0x000000000000003bULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__2
                    if (((IData)(vlSelfRef.tb_csr_golden__DOT__c_val) 
                         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__c_val))) {
                        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1450, vlSelfRef.tb_csr_golden__DOT__c_val, vlSelfRef.tb_csr_golden__DOT____Vtogcov__c_val);
                        vlSelfRef.tb_csr_golden__DOT____Vtogcov__c_val 
                            = vlSelfRef.tb_csr_golden__DOT__c_val;
                    }
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_csr_golden___024root___eval_inact(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_inact\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 14, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_csr_golden___024root___eval_body__nba(Vtb_csr_golden___024root* vlSelf);
void Vtb_csr_golden___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_csr_golden___024root___eval_nba(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_nba\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_csr_golden___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_csr_golden___024root___eval_body__nba(vlSelf);
        Vtb_csr_golden___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_csr_golden___024root___eval_obs(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_obs\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_csr_golden___024root___eval_react(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_react\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_csr_golden___024root___eval_postponed(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_postponed\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription);
void Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription);
void Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__0(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_csr_golden__DOT__i;
    tb_csr_golden__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_7;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_7 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_8;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_8 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_9;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_9 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11;
    __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12;
    __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_13;
    __Vtask_tb_csr_golden__DOT__apb__wr_13 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_14;
    __Vtask_tb_csr_golden__DOT__apb__a_14 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_15;
    __Vtask_tb_csr_golden__DOT__apb__d_15 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_16;
    __Vtask_tb_csr_golden__DOT__apb__s_16 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_17;
    __Vtask_tb_csr_golden__DOT__apb__p_17 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_18;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_18 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_19;
    __Vtask_tb_csr_golden__DOT__apb__k_19 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_20;
    __Vtask_tb_csr_golden__DOT__apb__done_20 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_21;
    __Vtask_tb_csr_golden__DOT__chk__ok_21 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_23;
    __Vtask_tb_csr_golden__DOT__apb__wr_23 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_24;
    __Vtask_tb_csr_golden__DOT__apb__a_24 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_25;
    __Vtask_tb_csr_golden__DOT__apb__d_25 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_26;
    __Vtask_tb_csr_golden__DOT__apb__s_26 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_27;
    __Vtask_tb_csr_golden__DOT__apb__p_27 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_28;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_28 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_29;
    __Vtask_tb_csr_golden__DOT__apb__k_29 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_30;
    __Vtask_tb_csr_golden__DOT__apb__done_30 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_31;
    __Vtask_tb_csr_golden__DOT__chk__ok_31 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_33;
    __Vtask_tb_csr_golden__DOT__apb__wr_33 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_34;
    __Vtask_tb_csr_golden__DOT__apb__a_34 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_35;
    __Vtask_tb_csr_golden__DOT__apb__d_35 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_36;
    __Vtask_tb_csr_golden__DOT__apb__s_36 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_37;
    __Vtask_tb_csr_golden__DOT__apb__p_37 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_38;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_38 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_39;
    __Vtask_tb_csr_golden__DOT__apb__k_39 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_40;
    __Vtask_tb_csr_golden__DOT__apb__done_40 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_41;
    __Vtask_tb_csr_golden__DOT__chk__ok_41 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_43;
    __Vtask_tb_csr_golden__DOT__apb__wr_43 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_44;
    __Vtask_tb_csr_golden__DOT__apb__a_44 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_45;
    __Vtask_tb_csr_golden__DOT__apb__d_45 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_46;
    __Vtask_tb_csr_golden__DOT__apb__s_46 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_47;
    __Vtask_tb_csr_golden__DOT__apb__p_47 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_48;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_48 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_49;
    __Vtask_tb_csr_golden__DOT__apb__k_49 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_50;
    __Vtask_tb_csr_golden__DOT__apb__done_50 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_51;
    __Vtask_tb_csr_golden__DOT__chk__ok_51 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_53;
    __Vtask_tb_csr_golden__DOT__apb__wr_53 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_54;
    __Vtask_tb_csr_golden__DOT__apb__a_54 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_55;
    __Vtask_tb_csr_golden__DOT__apb__d_55 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_56;
    __Vtask_tb_csr_golden__DOT__apb__s_56 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_57;
    __Vtask_tb_csr_golden__DOT__apb__p_57 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_58;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_58 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_59;
    __Vtask_tb_csr_golden__DOT__apb__k_59 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_60;
    __Vtask_tb_csr_golden__DOT__apb__done_60 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_61;
    __Vtask_tb_csr_golden__DOT__chk__ok_61 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_63;
    __Vtask_tb_csr_golden__DOT__apb__wr_63 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_64;
    __Vtask_tb_csr_golden__DOT__apb__a_64 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_65;
    __Vtask_tb_csr_golden__DOT__apb__d_65 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_66;
    __Vtask_tb_csr_golden__DOT__apb__s_66 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_67;
    __Vtask_tb_csr_golden__DOT__apb__p_67 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_68;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_68 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_69;
    __Vtask_tb_csr_golden__DOT__apb__k_69 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_70;
    __Vtask_tb_csr_golden__DOT__apb__done_70 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_71;
    __Vtask_tb_csr_golden__DOT__chk__ok_71 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_73;
    __Vtask_tb_csr_golden__DOT__chk__ok_73 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__do_reset__prot_75;
    __Vtask_tb_csr_golden__DOT__do_reset__prot_75 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__do_reset__slv_76;
    __Vtask_tb_csr_golden__DOT__do_reset__slv_76 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_77;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_77 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_78;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_78 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_79;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_79 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_81;
    __Vtask_tb_csr_golden__DOT__chk__ok_81 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_83;
    __Vtask_tb_csr_golden__DOT__chk__ok_83 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_87;
    __Vtask_tb_csr_golden__DOT__chk__ok_87 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_89;
    __Vtask_tb_csr_golden__DOT__chk__ok_89 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__i_91;
    __Vtask_tb_csr_golden__DOT__do_rd__i_91 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_92;
    __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_92 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__exp_93;
    __Vtask_tb_csr_golden__DOT__do_rd__exp_93 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_3;
    __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_3 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__i_4;
    __Vfunc_tb_csr_golden__DOT__predict__i_4 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_5;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_5 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_6;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_6 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_94;
    __Vtask_tb_csr_golden__DOT__apb__wr_94 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_95;
    __Vtask_tb_csr_golden__DOT__apb__a_95 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_96;
    __Vtask_tb_csr_golden__DOT__apb__d_96 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_97;
    __Vtask_tb_csr_golden__DOT__apb__s_97 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_98;
    __Vtask_tb_csr_golden__DOT__apb__p_98 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_99;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_99 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_100;
    __Vtask_tb_csr_golden__DOT__apb__k_100 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_101;
    __Vtask_tb_csr_golden__DOT__apb__done_101 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_102;
    __Vtask_tb_csr_golden__DOT__chk__ok_102 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_104;
    __Vtask_tb_csr_golden__DOT__chk__ok_104 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_106;
    __Vtask_tb_csr_golden__DOT__do_wr__i_106 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_107;
    __Vtask_tb_csr_golden__DOT__do_wr__d_107 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_108;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_108 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_7;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_7 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_8;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_8 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_109;
    __Vtask_tb_csr_golden__DOT__apb__wr_109 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_110;
    __Vtask_tb_csr_golden__DOT__apb__a_110 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_111;
    __Vtask_tb_csr_golden__DOT__apb__d_111 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_112;
    __Vtask_tb_csr_golden__DOT__apb__s_112 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_113;
    __Vtask_tb_csr_golden__DOT__apb__p_113 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_114;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_114 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_115;
    __Vtask_tb_csr_golden__DOT__apb__k_115 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_116;
    __Vtask_tb_csr_golden__DOT__apb__done_116 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_117;
    __Vtask_tb_csr_golden__DOT__chk__ok_117 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_119;
    __Vtask_tb_csr_golden__DOT__m_write__i_119 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_120;
    __Vtask_tb_csr_golden__DOT__m_write__d_120 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_121;
    __Vtask_tb_csr_golden__DOT__m_write__s_121 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_124;
    __Vtask_tb_csr_golden__DOT__chk__ok_124 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_126;
    __Vtask_tb_csr_golden__DOT__chk__ok_126 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__i_128;
    __Vtask_tb_csr_golden__DOT__do_rd__i_128 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_129;
    __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_129 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__exp_130;
    __Vtask_tb_csr_golden__DOT__do_rd__exp_130 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_9;
    __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_9 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__i_10;
    __Vfunc_tb_csr_golden__DOT__predict__i_10 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_11;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_11 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_12;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_12 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_131;
    __Vtask_tb_csr_golden__DOT__apb__wr_131 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_132;
    __Vtask_tb_csr_golden__DOT__apb__a_132 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_133;
    __Vtask_tb_csr_golden__DOT__apb__d_133 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_134;
    __Vtask_tb_csr_golden__DOT__apb__s_134 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_135;
    __Vtask_tb_csr_golden__DOT__apb__p_135 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_136;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_136 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_137;
    __Vtask_tb_csr_golden__DOT__apb__k_137 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_138;
    __Vtask_tb_csr_golden__DOT__apb__done_138 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_139;
    __Vtask_tb_csr_golden__DOT__chk__ok_139 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_141;
    __Vtask_tb_csr_golden__DOT__chk__ok_141 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_143;
    __Vtask_tb_csr_golden__DOT__do_wr__i_143 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_144;
    __Vtask_tb_csr_golden__DOT__do_wr__d_144 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_145;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_145 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_13;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_13 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_14;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_14 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_146;
    __Vtask_tb_csr_golden__DOT__apb__wr_146 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_147;
    __Vtask_tb_csr_golden__DOT__apb__a_147 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_148;
    __Vtask_tb_csr_golden__DOT__apb__d_148 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_149;
    __Vtask_tb_csr_golden__DOT__apb__s_149 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_150;
    __Vtask_tb_csr_golden__DOT__apb__p_150 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_151;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_151 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_152;
    __Vtask_tb_csr_golden__DOT__apb__k_152 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_153;
    __Vtask_tb_csr_golden__DOT__apb__done_153 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_154;
    __Vtask_tb_csr_golden__DOT__chk__ok_154 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_156;
    __Vtask_tb_csr_golden__DOT__m_write__i_156 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_157;
    __Vtask_tb_csr_golden__DOT__m_write__d_157 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_158;
    __Vtask_tb_csr_golden__DOT__m_write__s_158 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_161;
    __Vtask_tb_csr_golden__DOT__chk__ok_161 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_163;
    __Vtask_tb_csr_golden__DOT__chk__ok_163 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__i_165;
    __Vtask_tb_csr_golden__DOT__do_rd__i_165 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_166;
    __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_166 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__exp_167;
    __Vtask_tb_csr_golden__DOT__do_rd__exp_167 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_15;
    __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_15 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__i_16;
    __Vfunc_tb_csr_golden__DOT__predict__i_16 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_17;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_17 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_18;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_18 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_168;
    __Vtask_tb_csr_golden__DOT__apb__wr_168 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_169;
    __Vtask_tb_csr_golden__DOT__apb__a_169 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_170;
    __Vtask_tb_csr_golden__DOT__apb__d_170 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_171;
    __Vtask_tb_csr_golden__DOT__apb__s_171 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_172;
    __Vtask_tb_csr_golden__DOT__apb__p_172 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_173;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_173 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_174;
    __Vtask_tb_csr_golden__DOT__apb__k_174 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_175;
    __Vtask_tb_csr_golden__DOT__apb__done_175 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_176;
    __Vtask_tb_csr_golden__DOT__chk__ok_176 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_178;
    __Vtask_tb_csr_golden__DOT__chk__ok_178 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__i_180;
    __Vtask_tb_csr_golden__DOT__do_rd__i_180 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_181;
    __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_181 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__exp_182;
    __Vtask_tb_csr_golden__DOT__do_rd__exp_182 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_19;
    __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_19 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__i_20;
    __Vfunc_tb_csr_golden__DOT__predict__i_20 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_21;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_21 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_22;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_22 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_183;
    __Vtask_tb_csr_golden__DOT__apb__wr_183 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_184;
    __Vtask_tb_csr_golden__DOT__apb__a_184 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_185;
    __Vtask_tb_csr_golden__DOT__apb__d_185 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_186;
    __Vtask_tb_csr_golden__DOT__apb__s_186 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_187;
    __Vtask_tb_csr_golden__DOT__apb__p_187 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_188;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_188 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_189;
    __Vtask_tb_csr_golden__DOT__apb__k_189 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_190;
    __Vtask_tb_csr_golden__DOT__apb__done_190 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_191;
    __Vtask_tb_csr_golden__DOT__chk__ok_191 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_193;
    __Vtask_tb_csr_golden__DOT__chk__ok_193 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_195;
    __Vtask_tb_csr_golden__DOT__chk__ok_195 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__t_wo_hardware_clear__unnamedblk1_4__DOT____Vrepeat3_197;
    __Vtask_tb_csr_golden__DOT__t_wo_hardware_clear__unnamedblk1_4__DOT____Vrepeat3_197 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_198;
    __Vtask_tb_csr_golden__DOT__chk__ok_198 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_200;
    __Vtask_tb_csr_golden__DOT__apb__wr_200 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_201;
    __Vtask_tb_csr_golden__DOT__apb__a_201 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_202;
    __Vtask_tb_csr_golden__DOT__apb__d_202 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_203;
    __Vtask_tb_csr_golden__DOT__apb__s_203 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_204;
    __Vtask_tb_csr_golden__DOT__apb__p_204 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_205;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_205 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_206;
    __Vtask_tb_csr_golden__DOT__apb__k_206 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_207;
    __Vtask_tb_csr_golden__DOT__apb__done_207 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_208;
    __Vtask_tb_csr_golden__DOT__chk__ok_208 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_210;
    __Vtask_tb_csr_golden__DOT__apb__wr_210 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_211;
    __Vtask_tb_csr_golden__DOT__apb__a_211 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_212;
    __Vtask_tb_csr_golden__DOT__apb__d_212 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_213;
    __Vtask_tb_csr_golden__DOT__apb__s_213 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_214;
    __Vtask_tb_csr_golden__DOT__apb__p_214 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_215;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_215 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_216;
    __Vtask_tb_csr_golden__DOT__apb__k_216 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_217;
    __Vtask_tb_csr_golden__DOT__apb__done_217 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_218;
    __Vtask_tb_csr_golden__DOT__chk__ok_218 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_220;
    __Vtask_tb_csr_golden__DOT__apb__wr_220 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_221;
    __Vtask_tb_csr_golden__DOT__apb__a_221 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_222;
    __Vtask_tb_csr_golden__DOT__apb__d_222 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_223;
    __Vtask_tb_csr_golden__DOT__apb__s_223 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_224;
    __Vtask_tb_csr_golden__DOT__apb__p_224 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_225;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_225 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_226;
    __Vtask_tb_csr_golden__DOT__apb__k_226 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_227;
    __Vtask_tb_csr_golden__DOT__apb__done_227 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_228;
    __Vtask_tb_csr_golden__DOT__chk__ok_228 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_230;
    __Vtask_tb_csr_golden__DOT__apb__wr_230 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_231;
    __Vtask_tb_csr_golden__DOT__apb__a_231 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_232;
    __Vtask_tb_csr_golden__DOT__apb__d_232 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_233;
    __Vtask_tb_csr_golden__DOT__apb__s_233 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_234;
    __Vtask_tb_csr_golden__DOT__apb__p_234 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_235;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_235 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_236;
    __Vtask_tb_csr_golden__DOT__apb__k_236 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_237;
    __Vtask_tb_csr_golden__DOT__apb__done_237 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_238;
    __Vtask_tb_csr_golden__DOT__chk__ok_238 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_240;
    __Vtask_tb_csr_golden__DOT__chk__ok_240 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_242;
    __Vtask_tb_csr_golden__DOT__apb__wr_242 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_243;
    __Vtask_tb_csr_golden__DOT__apb__a_243 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_244;
    __Vtask_tb_csr_golden__DOT__apb__d_244 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_245;
    __Vtask_tb_csr_golden__DOT__apb__s_245 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_246;
    __Vtask_tb_csr_golden__DOT__apb__p_246 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_247;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_247 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_248;
    __Vtask_tb_csr_golden__DOT__apb__k_248 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_249;
    __Vtask_tb_csr_golden__DOT__apb__done_249 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_250;
    __Vtask_tb_csr_golden__DOT__chk__ok_250 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_2__iaddr_252;
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_2__iaddr_252 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_1__iaddr_253;
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_1__iaddr_253 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_0__iaddr_254;
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_0__iaddr_254 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255;
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_23;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_23 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_24;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_24 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_257;
    __Vtask_tb_csr_golden__DOT__apb__wr_257 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_258;
    __Vtask_tb_csr_golden__DOT__apb__a_258 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_259;
    __Vtask_tb_csr_golden__DOT__apb__d_259 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_260;
    __Vtask_tb_csr_golden__DOT__apb__s_260 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_261;
    __Vtask_tb_csr_golden__DOT__apb__p_261 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_262;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_262 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_263;
    __Vtask_tb_csr_golden__DOT__apb__k_263 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_264;
    __Vtask_tb_csr_golden__DOT__apb__done_264 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_265;
    __Vtask_tb_csr_golden__DOT__chk__ok_265 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_267;
    __Vtask_tb_csr_golden__DOT__chk__ok_267 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_25;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_25 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_26;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_26 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_269;
    __Vtask_tb_csr_golden__DOT__apb__wr_269 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_270;
    __Vtask_tb_csr_golden__DOT__apb__a_270 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_271;
    __Vtask_tb_csr_golden__DOT__apb__d_271 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_272;
    __Vtask_tb_csr_golden__DOT__apb__s_272 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_273;
    __Vtask_tb_csr_golden__DOT__apb__p_273 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_274;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_274 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_275;
    __Vtask_tb_csr_golden__DOT__apb__k_275 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_276;
    __Vtask_tb_csr_golden__DOT__apb__done_276 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_277;
    __Vtask_tb_csr_golden__DOT__chk__ok_277 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_27;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_27 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_28;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_28 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_279;
    __Vtask_tb_csr_golden__DOT__apb__wr_279 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_280;
    __Vtask_tb_csr_golden__DOT__apb__a_280 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_281;
    __Vtask_tb_csr_golden__DOT__apb__d_281 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_282;
    __Vtask_tb_csr_golden__DOT__apb__s_282 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_283;
    __Vtask_tb_csr_golden__DOT__apb__p_283 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_284;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_284 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_285;
    __Vtask_tb_csr_golden__DOT__apb__k_285 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_286;
    __Vtask_tb_csr_golden__DOT__apb__done_286 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_287;
    __Vtask_tb_csr_golden__DOT__chk__ok_287 = 0;
    // Body
    vlSelfRef.tb_csr_golden__DOT__m_mode[0U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[0U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[1U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[1U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[2U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[2U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[3U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[3U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[4U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[4U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[5U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[5U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[6U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[6U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[7U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[7U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    ++(vlSelf->__Vcoverage[1437]);
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_8 = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_9 = 0U;
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 0U;
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 0U;
    vlSelfRef.tb_csr_golden__DOT__protect_en = 1U;
    vlSelfRef.tb_csr_golden__DOT__slverr_en = 1U;
    vlSelfRef.tb_csr_golden__DOT__psel = 0U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__chain = 0U;
    vlSelfRef.tb_csr_golden__DOT__hw_we_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__hw_wd_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__ro_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__arm_wr = 0U;
    vlSelfRef.tb_csr_golden__DOT__arm_rd = 0U;
    vlSelfRef.tb_csr_golden__DOT__hw_clr = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_7 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_7)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             410);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_7 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_7 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1467]);
    }
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_8 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_8)) {
        Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_reg)");
        co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             411);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_8 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_8 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1468]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         412);
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 1U;
    Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_reg)");
    co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_reg)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         414);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         414);
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_9 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_9)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             416);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_9 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_9 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1469]);
    }
    vlSelfRef.tb_csr_golden__DOT__m_mode[0U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[0U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[1U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[1U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[2U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[2U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[3U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[3U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[4U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[4U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[5U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[5U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[6U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[6U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[7U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[7U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    ++(vlSelf->__Vcoverage[1437]);
    ++(vlSelf->__Vcoverage[1470]);
    __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11 = 0;
    __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12 = 0;
    __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11 
        = vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_18 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_17 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_16 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_15 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__a_14 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__wr_13 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__k_19 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_20 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_13;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_14;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_15;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_16;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_17;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_19 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_20 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_20)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_19 = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_19);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_20 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_19)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_20 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_20)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_20) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_19);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_18) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_22 = "event sideband: mapped read reports event and address"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_21 = ((vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
                                               == ((IData)(1U) 
                                                   + __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr)));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_21))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_22));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_21)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_21) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11 
        = vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_28 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_27 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_26 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_25 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__a_24 = 4U;
    __Vtask_tb_csr_golden__DOT__apb__wr_23 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__k_29 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_30 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_23;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_24;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_25;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_26;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_27;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_29 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_30 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_30)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_29 = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_29);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_30 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_29)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_30 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_30)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_30) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_28) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_32 = "event sideband: aligned unmapped read reports event and address"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_31 = ((vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
                                               == ((IData)(1U) 
                                                   + __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11)) 
                                              & (4U 
                                                 == (IData)(vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr)));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_31))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_32));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_31)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_31) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11 
        = vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_38 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_37 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_36 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_35 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__a_34 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__wr_33 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__k_39 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_40 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_33;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_34;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_35;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_36;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_37;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_39 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_40 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_40)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_39 = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_39);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_40 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_39)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_40 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_40)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_40) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_39);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_38) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_42 = "event sideband: misaligned errored read is suppressed"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_41 = ((IData)(vlSelfRef.tb_csr_golden__DOT__last_err) 
                                              & (vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
                                                 == __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_41))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_42));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_41)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_41) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12 
        = vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_48 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_47 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_46 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_45 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__a_44 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__wr_43 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_49 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_50 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_43;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_44;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_45;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_46;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_47;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_49 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_50 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_50)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_49 = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_49);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_50 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_49)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_50 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_50)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_50) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_49);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_48) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_52 = "event sideband: mapped write reports event and address"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_51 = ((vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count 
                                               == ((IData)(1U) 
                                                   + __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.tb_csr_golden__DOT__reg_wr_event_addr)));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_51))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_52));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_51)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_51) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12 
        = vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_58 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_57 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_56 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_55 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__a_54 = 4U;
    __Vtask_tb_csr_golden__DOT__apb__wr_53 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_59 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_60 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_53;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_54;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_55;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_56;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_57;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_59 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_60 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_60)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_59 = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_59);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_60 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_59)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_60 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_60)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_60) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_59);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_58) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_62 = "event sideband: unmapped write is suppressed"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_61 = (vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count 
                                              == __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_61))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_62));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_61)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_61) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12 
        = vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_68 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_67 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_66 = 3U;
    __Vtask_tb_csr_golden__DOT__apb__d_65 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__a_64 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__wr_63 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_69 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_70 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_63;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_64;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_65;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_66;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_67;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_69 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_70 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_70)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_69 = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_69);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_70 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_69)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_70 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_70)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_70) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_69);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_68) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_72 = "event sideband: errored partial write is suppressed"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_71 = ((IData)(vlSelfRef.tb_csr_golden__DOT__last_err) 
                                              & (vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count 
                                                 == __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_71))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_72));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_71)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_71) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_74 = "event sideband: pulse timing and address outputs are valid"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_73 = (0U == vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_73))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_74));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_73)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_73) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    if (((vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
          == ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11)) 
         & (0U == (IData)(vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr)))) {
        ++(vlSelf->__Vcoverage[1223]);
    }
    if ((0U != (IData)(vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr))) {
        ++(vlSelf->__Vcoverage[1224]);
    }
    if ((vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
         != ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11))) {
        ++(vlSelf->__Vcoverage[1225]);
    }
    if (((vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
          == ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11)) 
         & (4U == (IData)(vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr)))) {
        ++(vlSelf->__Vcoverage[1226]);
    }
    if ((4U != (IData)(vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr))) {
        ++(vlSelf->__Vcoverage[1227]);
    }
    if ((vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
         != ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11))) {
        ++(vlSelf->__Vcoverage[1228]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__last_err) 
         & (vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
            == __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11))) {
        ++(vlSelf->__Vcoverage[1229]);
    }
    if ((vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
         != __Vtask_tb_csr_golden__DOT__t_event_sideband__rd_before_11)) {
        ++(vlSelf->__Vcoverage[1230]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)))) {
        ++(vlSelf->__Vcoverage[1231]);
    }
    if (((vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count 
          == ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12)) 
         & (0U == (IData)(vlSelfRef.tb_csr_golden__DOT__reg_wr_event_addr)))) {
        ++(vlSelf->__Vcoverage[1232]);
    }
    if ((0U != (IData)(vlSelfRef.tb_csr_golden__DOT__reg_wr_event_addr))) {
        ++(vlSelf->__Vcoverage[1233]);
    }
    if ((vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count 
         != ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12))) {
        ++(vlSelf->__Vcoverage[1234]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__last_err) 
         & (vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count 
            == __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12))) {
        ++(vlSelf->__Vcoverage[1235]);
    }
    if ((vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count 
         != __Vtask_tb_csr_golden__DOT__t_event_sideband__wr_before_12)) {
        ++(vlSelf->__Vcoverage[1236]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)))) {
        ++(vlSelf->__Vcoverage[1237]);
    }
    ++(vlSelf->__Vcoverage[1238]);
    __Vtask_tb_csr_golden__DOT__do_reset__slv_76 = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__prot_75 = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_77 = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_78 = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_79 = 0U;
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 0U;
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 0U;
    vlSelfRef.tb_csr_golden__DOT__protect_en = __Vtask_tb_csr_golden__DOT__do_reset__prot_75;
    vlSelfRef.tb_csr_golden__DOT__slverr_en = __Vtask_tb_csr_golden__DOT__do_reset__slv_76;
    vlSelfRef.tb_csr_golden__DOT__psel = 0U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__chain = 0U;
    vlSelfRef.tb_csr_golden__DOT__hw_we_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__hw_wd_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__ro_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__arm_wr = 0U;
    vlSelfRef.tb_csr_golden__DOT__arm_rd = 0U;
    vlSelfRef.tb_csr_golden__DOT__hw_clr = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_77 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_77)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             410);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_77 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_77 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1467]);
    }
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_78 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_78)) {
        Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_reg)");
        co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             411);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_78 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_78 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1468]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         412);
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 1U;
    Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_reg)");
    co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_reg)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         414);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         414);
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_79 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_79)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             416);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_79 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_79 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1469]);
    }
    vlSelfRef.tb_csr_golden__DOT__m_mode[0U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[0U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[1U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[1U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[2U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[2U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[3U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[3U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[4U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[4U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[5U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[5U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[6U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[6U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[7U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[7U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    ++(vlSelf->__Vcoverage[1437]);
    ++(vlSelf->__Vcoverage[1470]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_82 = "PREADY and PSLVERR are 0 after reset"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_81 = (1U & 
                                              ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready)) 
                                               & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr))));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_81))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_82));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_81)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_81) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_84 = "PRDATA is 0 after reset"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_83 = (0U == vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_83))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_84));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_83)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_83) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85 = "reset values"s;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88
                  ,"%s: mode[0] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[0U]
                  , '#',4,(0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat)
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_87 = ((0x0000000fU 
                                               & vlSelfRef.tb_csr_golden__DOT__o_mode_flat) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_mode[0U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_87))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_87)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_87) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90
                  ,"%s: flags[0] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[0U]
                  , '#',5,(0x0000001fU & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)));
    __Vtask_tb_csr_golden__DOT__chk__ok_89 = ((0x0000001fU 
                                               & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_f[0U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_89))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_89)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_89) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88
                  ,"%s: mode[1] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[1U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 4U)), '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_87 = ((0x0000000fU 
                                               & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                  >> 4U)) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_mode[1U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_87))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_87)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_87) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90
                  ,"%s: flags[1] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[1U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 5U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_89 = ((0x0000001fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                          >> 5U))) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_f[1U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_89))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_89)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_89) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88
                  ,"%s: mode[2] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[2U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 8U)), '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_87 = ((0x0000000fU 
                                               & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                  >> 8U)) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_mode[2U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_87))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_87)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_87) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90
                  ,"%s: flags[2] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[2U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x0aU))));
    __Vtask_tb_csr_golden__DOT__chk__ok_89 = ((0x0000001fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                          >> 0x0aU))) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_f[2U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_89))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_89)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_89) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88
                  ,"%s: mode[3] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[3U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x0cU))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_87 = ((0x0000000fU 
                                               & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                  >> 0x0cU)) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_mode[3U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_87))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_87)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_87) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90
                  ,"%s: flags[3] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[3U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x0fU))));
    __Vtask_tb_csr_golden__DOT__chk__ok_89 = ((0x0000001fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                          >> 0x0fU))) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_f[3U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_89))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_89)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_89) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88
                  ,"%s: mode[4] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[4U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x10U))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_87 = ((0x0000000fU 
                                               & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                  >> 0x10U)) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_mode[4U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_87))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_87)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_87) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90
                  ,"%s: flags[4] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[4U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x14U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_89 = ((0x0000001fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                          >> 0x14U))) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_f[4U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_89))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_89)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_89) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88
                  ,"%s: mode[5] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[5U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x14U))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_87 = ((0x0000000fU 
                                               & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                  >> 0x14U)) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_mode[5U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_87))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_88));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_87)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_87) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90
                  ,"%s: flags[5] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_85)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[5U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x19U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_89 = ((0x0000001fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                          >> 0x19U))) 
                                              == vlSelfRef.tb_csr_golden__DOT__m_f[5U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_89))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_90));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_89)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_89) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    ++(vlSelf->__Vcoverage[1435]);
    tb_csr_golden__DOT__i = 0U;
    while (VL_GTS_III(32, 6U, tb_csr_golden__DOT__i)) {
        __Vtask_tb_csr_golden__DOT__do_rd__i_91 = tb_csr_golden__DOT__i;
        __Vtask_tb_csr_golden__DOT__do_rd__exp_93 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__i_4 = __Vtask_tb_csr_golden__DOT__do_rd__i_91;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_3 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_3 
            = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> (0x0000003fU 
                                              & VL_MULS_III(32, (IData)(8U), __Vfunc_tb_csr_golden__DOT__predict__i_4)))) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__m_mode
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_4)]) 
                                             << 4U) 
                                            | ((((2U 
                                                  & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_4)] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_4)] 
                                                       >> 1U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_4)] 
                                                       >> 2U) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                        [
                                                        (7U 
                                                         & __Vfunc_tb_csr_golden__DOT__predict__i_4)] 
                                                        >> 3U)))))) 
                << 0x00000010U) | (0x00008000U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                   [
                                                   (7U 
                                                    & __Vfunc_tb_csr_golden__DOT__predict__i_4)] 
                                                   >> 4U) 
                                                  << 0x0000000fU)));
        ++(vlSelf->__Vcoverage[1424]);
        __Vtask_tb_csr_golden__DOT__do_rd__exp_93 = __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_3;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_6 = __Vtask_tb_csr_golden__DOT__do_rd__i_91;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_5 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_6)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_5 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_6)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_5 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_6 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_5 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_6 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_92 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_5;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_99 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_98 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_97 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_96 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_95 = __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_92;
        __Vtask_tb_csr_golden__DOT__apb__wr_94 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_100 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_101 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_94;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_95;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_96;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_97;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_98;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_100 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_101 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_101)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_100 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_100);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_101 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_100)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_101 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_101)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_101) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_100);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_99) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_103 = "read without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_102 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_102))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_103));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_102)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_102) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_105 = "read data"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_104 = (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                   == __Vtask_tb_csr_golden__DOT__do_rd__exp_93);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_104))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_105));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_104)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_104) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_91)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_91)]);
        ++(vlSelf->__Vcoverage[1466]);
        tb_csr_golden__DOT__i = ((IData)(1U) + tb_csr_golden__DOT__i);
        ++(vlSelf->__Vcoverage[1538]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready)) 
               & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr))))) {
        ++(vlSelf->__Vcoverage[1535]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr) {
        ++(vlSelf->__Vcoverage[1536]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
        ++(vlSelf->__Vcoverage[1537]);
    }
    ++(vlSelf->__Vcoverage[1539]);
    tb_csr_golden__DOT__i = 0U;
    while (VL_GTS_III(32, 6U, tb_csr_golden__DOT__i)) {
        vlSelfRef.tb_csr_golden__DOT__ro_flat = (((~ 
                                                   (0x00000000000000ffULL 
                                                    << 
                                                    (0x0000003fU 
                                                     & VL_MULS_III(32, (IData)(8U), tb_csr_golden__DOT__i)))) 
                                                  & vlSelfRef.tb_csr_golden__DOT__ro_flat) 
                                                 | ((QData)((IData)(
                                                                    (0x000000ffU 
                                                                     & ((IData)(0xa0U) 
                                                                        + tb_csr_golden__DOT__i)))) 
                                                    << 
                                                    (0x0000003fU 
                                                     & VL_MULS_III(32, (IData)(8U), tb_csr_golden__DOT__i))));
        __Vtask_tb_csr_golden__DOT__do_wr__d_107 = 0x00fb0000U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_106 = tb_csr_golden__DOT__i;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_8 = __Vtask_tb_csr_golden__DOT__do_wr__i_106;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_7 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_8)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_7 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_8)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_7 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_8 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_7 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_8 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_108 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_7;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_114 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_113 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_112 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_111 = __Vtask_tb_csr_golden__DOT__do_wr__d_107;
        __Vtask_tb_csr_golden__DOT__apb__a_110 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_108;
        __Vtask_tb_csr_golden__DOT__apb__wr_109 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_115 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_116 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_109;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_110;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_111;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_112;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_113;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_115 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_116 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_116)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_115 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_115);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_116 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_115)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_116 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_116)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_116) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_115);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_114) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_118 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_117 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_117))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_118));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_117)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_117) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_121 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_120 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_107;
        __Vtask_tb_csr_golden__DOT__m_write__i_119 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_106;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_121))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_120 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_120 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_120 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_120 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_120 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_120)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_120 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_120 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_119)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122 = "rw and rwi write"s;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125
                      ,"%s: mode[0] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[0U]
                      , '#',4,(0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat)
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_124 = (
                                                   (0x0000000fU 
                                                    & vlSelfRef.tb_csr_golden__DOT__o_mode_flat) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[0U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_124))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_124)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_124) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127
                      ,"%s: flags[0] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[0U]
                      , '#',5,(0x0000001fU & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)));
        __Vtask_tb_csr_golden__DOT__chk__ok_126 = (
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[0U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_126))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_126)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_126) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125
                      ,"%s: mode[1] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[1U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 4U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_124 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 4U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[1U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_124))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_124)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_124) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127
                      ,"%s: flags[1] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[1U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 5U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_126 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 5U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[1U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_126))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_126)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_126) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125
                      ,"%s: mode[2] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[2U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 8U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_124 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 8U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[2U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_124))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_124)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_124) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127
                      ,"%s: flags[2] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[2U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x0aU))));
        __Vtask_tb_csr_golden__DOT__chk__ok_126 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x0aU))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[2U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_126))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_126)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_126) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125
                      ,"%s: mode[3] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[3U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x0cU))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_124 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x0cU)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[3U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_124))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_124)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_124) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127
                      ,"%s: flags[3] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[3U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x0fU))));
        __Vtask_tb_csr_golden__DOT__chk__ok_126 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x0fU))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[3U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_126))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_126)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_126) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125
                      ,"%s: mode[4] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[4U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x10U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_124 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x10U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[4U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_124))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_124)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_124) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127
                      ,"%s: flags[4] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[4U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x14U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_126 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x14U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[4U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_126))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_126)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_126) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125
                      ,"%s: mode[5] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[5U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x14U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_124 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x14U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[5U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_124))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_125));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_124)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_124) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127
                      ,"%s: flags[5] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_122)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[5U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x19U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_126 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x19U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[5U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_126))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_127));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_126)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_126) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        ++(vlSelf->__Vcoverage[1435]);
        __Vtask_tb_csr_golden__DOT__do_rd__i_128 = tb_csr_golden__DOT__i;
        __Vtask_tb_csr_golden__DOT__do_rd__exp_130 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__i_10 = __Vtask_tb_csr_golden__DOT__do_rd__i_128;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_9 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_9 
            = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> (0x0000003fU 
                                              & VL_MULS_III(32, (IData)(8U), __Vfunc_tb_csr_golden__DOT__predict__i_10)))) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__m_mode
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_10)]) 
                                             << 4U) 
                                            | ((((2U 
                                                  & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_10)] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_10)] 
                                                       >> 1U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_10)] 
                                                       >> 2U) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                        [
                                                        (7U 
                                                         & __Vfunc_tb_csr_golden__DOT__predict__i_10)] 
                                                        >> 3U)))))) 
                << 0x00000010U) | (0x00008000U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                   [
                                                   (7U 
                                                    & __Vfunc_tb_csr_golden__DOT__predict__i_10)] 
                                                   >> 4U) 
                                                  << 0x0000000fU)));
        ++(vlSelf->__Vcoverage[1424]);
        __Vtask_tb_csr_golden__DOT__do_rd__exp_130 
            = __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_9;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_12 = __Vtask_tb_csr_golden__DOT__do_rd__i_128;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_11 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_12)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_11 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_12)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_11 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_12 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_11 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_12 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_129 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_11;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_136 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_135 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_134 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_133 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_132 = __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_129;
        __Vtask_tb_csr_golden__DOT__apb__wr_131 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_137 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_138 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_131;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_132;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_133;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_134;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_135;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_137 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_138 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_138)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_137 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_137);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_138 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_137)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_138 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_138)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_138) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_137);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_136) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_140 = "read without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_139 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_139))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_140));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_139)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_139) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_142 = "read data"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_141 = (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                   == __Vtask_tb_csr_golden__DOT__do_rd__exp_130);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_141))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_142));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_141)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_141) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_128)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_128)]);
        ++(vlSelf->__Vcoverage[1466]);
        __Vtask_tb_csr_golden__DOT__do_wr__d_144 = 
            (0x00f00000U & (tb_csr_golden__DOT__i << 0x00000014U));
        __Vtask_tb_csr_golden__DOT__do_wr__i_143 = tb_csr_golden__DOT__i;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_14 = __Vtask_tb_csr_golden__DOT__do_wr__i_143;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_13 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_14)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_13 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_14)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_13 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_14 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_13 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_14 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_145 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_13;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_151 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_150 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_149 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_148 = __Vtask_tb_csr_golden__DOT__do_wr__d_144;
        __Vtask_tb_csr_golden__DOT__apb__a_147 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_145;
        __Vtask_tb_csr_golden__DOT__apb__wr_146 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_152 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_153 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_146;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_147;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_148;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_149;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_150;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_152 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_153 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_153)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_152 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_152);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_153 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_152)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_153 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_153)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_153) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_152);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_151) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_155 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_154 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_154))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_155));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_154)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_154) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_158 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_157 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_144;
        __Vtask_tb_csr_golden__DOT__m_write__i_156 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_143;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_158))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_157 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_157 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_157 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_157 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_157 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_157)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_157 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_157 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_156)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159 = "rw write"s;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162
                      ,"%s: mode[0] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[0U]
                      , '#',4,(0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat)
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_161 = (
                                                   (0x0000000fU 
                                                    & vlSelfRef.tb_csr_golden__DOT__o_mode_flat) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[0U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_161))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_161)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_161) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164
                      ,"%s: flags[0] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[0U]
                      , '#',5,(0x0000001fU & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)));
        __Vtask_tb_csr_golden__DOT__chk__ok_163 = (
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[0U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_163))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_163)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_163) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162
                      ,"%s: mode[1] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[1U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 4U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_161 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 4U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[1U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_161))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_161)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_161) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164
                      ,"%s: flags[1] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[1U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 5U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_163 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 5U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[1U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_163))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_163)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_163) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162
                      ,"%s: mode[2] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[2U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 8U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_161 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 8U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[2U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_161))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_161)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_161) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164
                      ,"%s: flags[2] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[2U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x0aU))));
        __Vtask_tb_csr_golden__DOT__chk__ok_163 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x0aU))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[2U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_163))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_163)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_163) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162
                      ,"%s: mode[3] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[3U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x0cU))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_161 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x0cU)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[3U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_161))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_161)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_161) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164
                      ,"%s: flags[3] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[3U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x0fU))));
        __Vtask_tb_csr_golden__DOT__chk__ok_163 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x0fU))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[3U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_163))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_163)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_163) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162
                      ,"%s: mode[4] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[4U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x10U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_161 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x10U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[4U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_161))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_161)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_161) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164
                      ,"%s: flags[4] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[4U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x14U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_163 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x14U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[4U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_163))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_163)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_163) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162
                      ,"%s: mode[5] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[5U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x14U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_161 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x14U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[5U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_161))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_162));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_161)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_161) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164
                      ,"%s: flags[5] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_159)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[5U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x19U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_163 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x19U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[5U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_163))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_164));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_163)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_163) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        ++(vlSelf->__Vcoverage[1435]);
        __Vtask_tb_csr_golden__DOT__do_rd__i_165 = tb_csr_golden__DOT__i;
        __Vtask_tb_csr_golden__DOT__do_rd__exp_167 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__i_16 = __Vtask_tb_csr_golden__DOT__do_rd__i_165;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_15 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_15 
            = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> (0x0000003fU 
                                              & VL_MULS_III(32, (IData)(8U), __Vfunc_tb_csr_golden__DOT__predict__i_16)))) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__m_mode
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_16)]) 
                                             << 4U) 
                                            | ((((2U 
                                                  & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_16)] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_16)] 
                                                       >> 1U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_16)] 
                                                       >> 2U) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                        [
                                                        (7U 
                                                         & __Vfunc_tb_csr_golden__DOT__predict__i_16)] 
                                                        >> 3U)))))) 
                << 0x00000010U) | (0x00008000U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                   [
                                                   (7U 
                                                    & __Vfunc_tb_csr_golden__DOT__predict__i_16)] 
                                                   >> 4U) 
                                                  << 0x0000000fU)));
        ++(vlSelf->__Vcoverage[1424]);
        __Vtask_tb_csr_golden__DOT__do_rd__exp_167 
            = __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_15;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_18 = __Vtask_tb_csr_golden__DOT__do_rd__i_165;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_17 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_18)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_17 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_18)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_17 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_18 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_17 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_18 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_166 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_17;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_173 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_172 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_171 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_170 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_169 = __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_166;
        __Vtask_tb_csr_golden__DOT__apb__wr_168 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_174 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_175 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_168;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_169;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_170;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_171;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_172;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_174 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_175 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_175)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_174 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_174);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_175 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_174)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_175 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_175)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_175) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_174);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_173) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_177 = "read without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_176 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_176))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_177));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_176)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_176) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_179 = "read data"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_178 = (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                   == __Vtask_tb_csr_golden__DOT__do_rd__exp_167);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_178))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_179));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_178)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_178) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_165)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_165)]);
        ++(vlSelf->__Vcoverage[1466]);
        tb_csr_golden__DOT__i = ((IData)(1U) + tb_csr_golden__DOT__i);
        ++(vlSelf->__Vcoverage[1540]);
    }
    tb_csr_golden__DOT__i = 0U;
    while (VL_GTS_III(32, 6U, tb_csr_golden__DOT__i)) {
        vlSelfRef.tb_csr_golden__DOT__ro_flat = (((~ 
                                                   (0x00000000000000ffULL 
                                                    << 
                                                    (0x0000003fU 
                                                     & VL_MULS_III(32, (IData)(8U), tb_csr_golden__DOT__i)))) 
                                                  & vlSelfRef.tb_csr_golden__DOT__ro_flat) 
                                                 | ((QData)((IData)(
                                                                    (0x000000ffU 
                                                                     & (~ (IData)(
                                                                                (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & VL_MULS_III(32, (IData)(8U), tb_csr_golden__DOT__i)))))))) 
                                                    << 
                                                    (0x0000003fU 
                                                     & VL_MULS_III(32, (IData)(8U), tb_csr_golden__DOT__i))));
        __Vtask_tb_csr_golden__DOT__do_rd__i_180 = tb_csr_golden__DOT__i;
        __Vtask_tb_csr_golden__DOT__do_rd__exp_182 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__i_20 = __Vtask_tb_csr_golden__DOT__do_rd__i_180;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_19 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_19 
            = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> (0x0000003fU 
                                              & VL_MULS_III(32, (IData)(8U), __Vfunc_tb_csr_golden__DOT__predict__i_20)))) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__m_mode
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_20)]) 
                                             << 4U) 
                                            | ((((2U 
                                                  & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_20)] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_20)] 
                                                       >> 1U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_20)] 
                                                       >> 2U) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                        [
                                                        (7U 
                                                         & __Vfunc_tb_csr_golden__DOT__predict__i_20)] 
                                                        >> 3U)))))) 
                << 0x00000010U) | (0x00008000U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                   [
                                                   (7U 
                                                    & __Vfunc_tb_csr_golden__DOT__predict__i_20)] 
                                                   >> 4U) 
                                                  << 0x0000000fU)));
        ++(vlSelf->__Vcoverage[1424]);
        __Vtask_tb_csr_golden__DOT__do_rd__exp_182 
            = __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_19;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_22 = __Vtask_tb_csr_golden__DOT__do_rd__i_180;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_21 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_22)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_21 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_22)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_21 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_22 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_21 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_22 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_181 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_21;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_188 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_187 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_186 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_185 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_184 = __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_181;
        __Vtask_tb_csr_golden__DOT__apb__wr_183 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_189 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_190 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_183;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_184;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_185;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_186;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_187;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_189 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_190 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_190)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_189 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_189);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_190 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_189)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_190 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_190)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_190) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_189);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_188) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_192 = "read without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_191 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_191))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_192));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_191)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_191) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_194 = "read data"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_193 = (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                   == __Vtask_tb_csr_golden__DOT__do_rd__exp_182);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_193))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_194));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_193)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_193) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_180)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_180)]);
        ++(vlSelf->__Vcoverage[1466]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_196 = "ro pass-through and reserved bits"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_195 = (
                                                   ((vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                     >> 0x18U) 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                                >> 
                                                                (0x0000003fU 
                                                                 & VL_MULS_III(32, (IData)(8U), tb_csr_golden__DOT__i)))))) 
                                                   & (0U 
                                                      == 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_csr_golden__DOT__last_rdata)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_195))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_196));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_195)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_195) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        if ((((vlSelfRef.tb_csr_golden__DOT__last_rdata 
               >> 0x18U) == (0x000000ffU & (IData)(
                                                   (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                    >> 
                                                    (0x0000003fU 
                                                     & VL_MULS_III(32, (IData)(8U), tb_csr_golden__DOT__i)))))) 
             & (0U == (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__last_rdata)))) {
            ++(vlSelf->__Vcoverage[1541]);
        }
        if ((0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__last_rdata))) {
            ++(vlSelf->__Vcoverage[1542]);
        }
        if (((vlSelfRef.tb_csr_golden__DOT__last_rdata 
              >> 0x18U) != (0x000000ffU & (IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                                   >> 
                                                   (0x0000003fU 
                                                    & VL_MULS_III(32, (IData)(8U), tb_csr_golden__DOT__i))))))) {
            ++(vlSelf->__Vcoverage[1543]);
        }
        tb_csr_golden__DOT__i = ((IData)(1U) + tb_csr_golden__DOT__i);
        ++(vlSelf->__Vcoverage[1544]);
    }
    ++(vlSelf->__Vcoverage[1545]);
    __Vtask_tb_csr_golden__DOT__t_wo_hardware_clear__unnamedblk1_4__DOT____Vrepeat3_197 = 0U;
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_199 = "wo: reset value is zero"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_198 = (0U == vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_198))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_199));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_198)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_198) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__apb__chain_next_205 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_204 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_203 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_202 = 0xa1b2c3d4U;
    __Vtask_tb_csr_golden__DOT__apb__a_201 = 0x0400U;
    __Vtask_tb_csr_golden__DOT__apb__wr_200 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_206 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_207 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_200;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_201;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_202;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_203;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_204;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_206 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_207 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_207)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_206 = ((IData)(1U) 
                                                  + __Vtask_tb_csr_golden__DOT__apb__k_206);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_207 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_206)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_207 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_207)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_207) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_206);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_205) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_209 = "wo: software write is stored for hardware"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_208 = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
                                               & (0xa1b2c3d4U 
                                                  == vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_208))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_209));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_208)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_208) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__apb__chain_next_215 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_214 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_213 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_212 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__a_211 = 0x0400U;
    __Vtask_tb_csr_golden__DOT__apb__wr_210 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__k_216 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_217 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_210;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_211;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_212;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_213;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_214;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_216 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_217 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_217)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_216 = ((IData)(1U) 
                                                  + __Vtask_tb_csr_golden__DOT__apb__k_216);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_217 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_216)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_217 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_217)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_217) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_216);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_215) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_219 = "wo: software read returns zero"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_218 = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
                                               & (0U 
                                                  == vlSelfRef.tb_csr_golden__DOT__last_rdata));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_218))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_219));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_218)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_218) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data = 1U;
    vlSelfRef.tb_csr_golden__DOT__slverr_en = 0U;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_225 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_224 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_223 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__d_222 = 0xffffffffU;
    __Vtask_tb_csr_golden__DOT__apb__a_221 = 0x0400U;
    __Vtask_tb_csr_golden__DOT__apb__wr_220 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_226 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_227 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_220;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_221;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_222;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_223;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_224;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_226 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_227 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_227)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_226 = ((IData)(1U) 
                                                  + __Vtask_tb_csr_golden__DOT__apb__k_226);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_227 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_226)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_227 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_227)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_227) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_226);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_225) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_229 = "wo: hardware clear wins over simultaneous partial software write"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_228 = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
                                               & (0U 
                                                  == vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_228))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_229));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_228)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_228) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data = 0U;
    vlSelfRef.tb_csr_golden__DOT__slverr_en = 1U;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_235 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_234 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_233 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_232 = 0x55667788U;
    __Vtask_tb_csr_golden__DOT__apb__a_231 = 0x0400U;
    __Vtask_tb_csr_golden__DOT__apb__wr_230 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_236 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_237 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_230;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_231;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_232;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_233;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_234;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_236 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_237 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_237)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_236 = ((IData)(1U) 
                                                  + __Vtask_tb_csr_golden__DOT__apb__k_236);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_237 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_236)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_237 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_237)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_237) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_236);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_235) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_239 = "wo: software write works after clear release"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_238 = (0x55667788U 
                                               == vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_238))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_239));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_238)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_238) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__t_wo_hardware_clear__unnamedblk1_4__DOT____Vrepeat3_197 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__t_wo_hardware_clear__unnamedblk1_4__DOT____Vrepeat3_197)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             474);
        __Vtask_tb_csr_golden__DOT__t_wo_hardware_clear__unnamedblk1_4__DOT____Vrepeat3_197 
            = (__Vtask_tb_csr_golden__DOT__t_wo_hardware_clear__unnamedblk1_4__DOT____Vrepeat3_197 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1555]);
    }
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_241 = "wo: field holds when clear and write are inactive"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_240 = (0x55667788U 
                                               == vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_240))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_241));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_240)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_240) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    __Vtask_tb_csr_golden__DOT__apb__chain_next_247 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_246 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_245 = 0x0fU;
    __Vtask_tb_csr_golden__DOT__apb__d_244 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__a_243 = 0x0400U;
    __Vtask_tb_csr_golden__DOT__apb__wr_242 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__k_248 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_249 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_242;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_243;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_244;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_245;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_246;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_248 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_249 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_249)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_248 = ((IData)(1U) 
                                                  + __Vtask_tb_csr_golden__DOT__apb__k_248);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_249 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_248)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_249 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_249)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_249) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_248);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_247) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_251 = "wo: later read still returns zero"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_250 = (0U == vlSelfRef.tb_csr_golden__DOT__last_rdata);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_250))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_251));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_250)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_250) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    if (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
         & (0xa1b2c3d4U == vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data))) {
        ++(vlSelf->__Vcoverage[1546]);
    }
    if ((0xa1b2c3d4U != vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data)) {
        ++(vlSelf->__Vcoverage[1547]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__last_err) {
        ++(vlSelf->__Vcoverage[1548]);
    }
    if (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
         & (0U == vlSelfRef.tb_csr_golden__DOT__last_rdata))) {
        ++(vlSelf->__Vcoverage[1549]);
    }
    if ((0U != vlSelfRef.tb_csr_golden__DOT__last_rdata)) {
        ++(vlSelf->__Vcoverage[1550]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__last_err) {
        ++(vlSelf->__Vcoverage[1551]);
    }
    if (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
         & (0U == vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data))) {
        ++(vlSelf->__Vcoverage[1552]);
    }
    if ((0U != vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data)) {
        ++(vlSelf->__Vcoverage[1553]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__last_err) {
        ++(vlSelf->__Vcoverage[1554]);
    }
    ++(vlSelf->__Vcoverage[1556]);
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255 = 0;
    vlSelfRef.tb_csr_golden__DOT__slverr_en = 1U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255 = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
        __Vfunc_tb_csr_golden__DOT__iaddr__i_24 = ((IData)(4U) 
                                                   + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255);
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_23 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_24)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_23 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_24)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_23 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_24 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_23 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_24 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_0__iaddr_254 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_23;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_262 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_261 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_260 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_259 = ((IData)(0x00005555U) 
                                                  + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255);
        __Vtask_tb_csr_golden__DOT__apb__a_258 = __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_0__iaddr_254;
        __Vtask_tb_csr_golden__DOT__apb__wr_257 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_263 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_264 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_257;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_258;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_259;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_260;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_261;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_263 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_264 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_264)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_263 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_263);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_264 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_263)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_264 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_264)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_264) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_263);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_262) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_266 = "parameterized wo: each entry stores its software write"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_265 = (
                                                   (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
                                                   & (((0x1dU 
                                                        >= 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000fU) 
                                                            * __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)))
                                                        ? 
                                                       (0x00007fffU 
                                                        & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                                           >> 
                                                           (0x0000001fU 
                                                            & ((IData)(0x0000000fU) 
                                                               * __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255))))
                                                        : 0U) 
                                                      == 
                                                      ((IData)(0x00005555U) 
                                                       + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_265))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_266));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_265)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_265) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        if (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
             & (((0x1dU >= (0x0000001fU & ((IData)(0x0000000fU) 
                                           * __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)))
                  ? (0x00007fffU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                    >> (0x0000001fU 
                                        & ((IData)(0x0000000fU) 
                                           * __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255))))
                  : 0U) == ((IData)(0x00005555U) + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)))) {
            ++(vlSelf->__Vcoverage[1557]);
        }
        if ((((0x1dU >= (0x0000001fU & ((IData)(0x0000000fU) 
                                        * __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)))
               ? (0x00007fffU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                 >> (0x0000001fU & 
                                     ((IData)(0x0000000fU) 
                                      * __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255))))
               : 0U) != ((IData)(0x00005555U) + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255))) {
            ++(vlSelf->__Vcoverage[1558]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__last_err) {
            ++(vlSelf->__Vcoverage[1559]);
        }
        __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255 
            = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255);
        ++(vlSelf->__Vcoverage[1560]);
    }
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255 = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             492);
        vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
        vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment 
            = ((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment) 
               | (3U & ((IData)(1U) << (1U & __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255))));
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             495);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             495);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_268
                      ,"parameterized wo: clear index=%0d entry=0 expected=%04h actual=%04h",3
                      , '~',32,__Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255
                      , '#',32,(VL_LTES_III(32, 0U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)
                                 ? 0U : 0x00005555U)
                      , '#',15,(0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment));
        __Vtask_tb_csr_golden__DOT__chk__ok_267 = (
                                                   (0x00007fffU 
                                                    & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment) 
                                                   == 
                                                   (VL_LTES_III(32, 0U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)
                                                     ? 0U
                                                     : 0x00005555U));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_267))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_268));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_267)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_267) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        if (VL_LTES_III(32, 0U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
            ++(vlSelf->__Vcoverage[1561]);
        }
        if (VL_GTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
            ++(vlSelf->__Vcoverage[1562]);
        }
        if (VL_LTES_III(32, 0U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
            ++(vlSelf->__Vcoverage[1563]);
        }
        if (VL_GTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
            ++(vlSelf->__Vcoverage[1564]);
        }
        ++(vlSelf->__Vcoverage[1565]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_268
                      ,"parameterized wo: clear index=%0d entry=1 expected=%04h actual=%04h",3
                      , '~',32,__Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255
                      , '#',32,(VL_LTES_III(32, 1U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)
                                 ? 0U : 0x00005556U)
                      , '#',15,(0x00007fffU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                               >> 0x0fU)));
        __Vtask_tb_csr_golden__DOT__chk__ok_267 = (
                                                   (0x00007fffU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                                       >> 0x0fU)) 
                                                   == 
                                                   (VL_LTES_III(32, 1U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)
                                                     ? 0U
                                                     : 0x00005556U));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_267))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_268));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_267)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_267) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        if (VL_LTES_III(32, 1U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
            ++(vlSelf->__Vcoverage[1561]);
        }
        if (VL_GTS_III(32, 1U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
            ++(vlSelf->__Vcoverage[1562]);
        }
        if (VL_LTES_III(32, 1U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
            ++(vlSelf->__Vcoverage[1563]);
        }
        if (VL_GTS_III(32, 1U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
            ++(vlSelf->__Vcoverage[1564]);
        }
        ++(vlSelf->__Vcoverage[1565]);
        __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255 
            = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255);
        ++(vlSelf->__Vcoverage[1566]);
    }
    Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                         "@(negedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         502);
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment 
        = (1U | (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment));
    vlSelfRef.tb_csr_golden__DOT__slverr_en = 0U;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_26 = 4U;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_25 = 0;
    if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_26)) {
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_25 = 0U;
        ++(vlSelf->__Vcoverage[1422]);
    } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_26)) {
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_25 
            = (0x0000ffffU & ((IData)(0x0100U) + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_26 
                                                   - (IData)(1U)) 
                                                  << 2U)));
        ++(vlSelf->__Vcoverage[1420]);
    } else {
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_25 
            = (0x0000ffffU & ((IData)(0x0200U) + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_26 
                                                   - (IData)(4U)) 
                                                  << 2U)));
        ++(vlSelf->__Vcoverage[1421]);
    }
    ++(vlSelf->__Vcoverage[1423]);
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_1__iaddr_253 
        = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_25;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_274 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__p_273 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__s_272 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__d_271 = 0x00007fffU;
    __Vtask_tb_csr_golden__DOT__apb__a_270 = __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_1__iaddr_253;
    __Vtask_tb_csr_golden__DOT__apb__wr_269 = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_275 = 0;
    __Vtask_tb_csr_golden__DOT__apb__done_276 = 0U;
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1210]);
    } else {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             183);
        ++(vlSelf->__Vcoverage[1209]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         184);
    vlSelfRef.tb_csr_golden__DOT__psel = 1U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_269;
    vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_270;
    vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_271;
    vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_272;
    vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_273;
    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_apb)");
    co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_apb)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         186);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         186);
    vlSelfRef.tb_csr_golden__DOT__penable = 1U;
    __Vtask_tb_csr_golden__DOT__apb__k_275 = 0U;
    __Vtask_tb_csr_golden__DOT__apb__done_276 = 0U;
    while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_276)))) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             190);
        __Vtask_tb_csr_golden__DOT__apb__k_275 = ((IData)(1U) 
                                                  + __Vtask_tb_csr_golden__DOT__apb__k_275);
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            __Vtask_tb_csr_golden__DOT__apb__done_276 = 1U;
            vlSelfRef.tb_csr_golden__DOT__last_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
            vlSelfRef.tb_csr_golden__DOT__last_err 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
            vlSelfRef.tb_csr_golden__DOT__last_mode0 
                = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
            ++(vlSelf->__Vcoverage[1215]);
        } else {
            ++(vlSelf->__Vcoverage[1216]);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_275)))) {
            __Vtask_tb_csr_golden__DOT__apb__done_276 = 1U;
            VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
            ++(vlSelf->__Vcoverage[1217]);
        } else {
            ++(vlSelf->__Vcoverage[1218]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_276)))) {
            ++(vlSelf->__Vcoverage[1213]);
        }
        if (__Vtask_tb_csr_golden__DOT__apb__done_276) {
            ++(vlSelf->__Vcoverage[1214]);
        }
        ++(vlSelf->__Vcoverage[1219]);
    }
    vlSelfRef.tb_csr_golden__DOT__last_cycles = ((IData)(1U) 
                                                 + __Vtask_tb_csr_golden__DOT__apb__k_275);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         207);
    if (__Vtask_tb_csr_golden__DOT__apb__chain_next_274) {
        vlSelfRef.tb_csr_golden__DOT__chain = 1U;
        ++(vlSelf->__Vcoverage[1220]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        ++(vlSelf->__Vcoverage[1221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
        ++(vlSelf->__Vcoverage[1211]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__chain) {
        ++(vlSelf->__Vcoverage[1212]);
    }
    ++(vlSelf->__Vcoverage[1222]);
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_278 = "parameterized wo: clear overrides partial software write"s;
    __Vtask_tb_csr_golden__DOT__chk__ok_277 = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
                                               & (0U 
                                                  == 
                                                  (0x00007fffU 
                                                   & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment)));
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_277))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_278));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_277)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_277) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
    vlSelfRef.tb_csr_golden__DOT__slverr_en = 1U;
    __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255 = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255)) {
        __Vfunc_tb_csr_golden__DOT__iaddr__i_28 = ((IData)(4U) 
                                                   + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255);
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_27 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_28)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_27 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_28)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_27 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_28 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_27 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_28 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_2__iaddr_252 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_27;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_284 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_283 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_282 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_281 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_280 = __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear____VlefCall_2__iaddr_252;
        __Vtask_tb_csr_golden__DOT__apb__wr_279 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_285 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_286 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_279;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_280;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_281;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_282;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_283;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_285 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_286 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_286)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_285 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_285);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_286 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_285)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_286 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_286)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_286) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_285);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_284) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_288 = "parameterized wo: bus reads return zero for every entry"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_287 = (
                                                   (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
                                                   & (0U 
                                                      == 
                                                      (0x00007fffU 
                                                       & vlSelfRef.tb_csr_golden__DOT__last_rdata)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_287))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_288));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_287)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_287) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        if (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
             & (0U == (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__last_rdata)))) {
            ++(vlSelf->__Vcoverage[1570]);
        }
        if ((0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__last_rdata))) {
            ++(vlSelf->__Vcoverage[1571]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__last_err) {
            ++(vlSelf->__Vcoverage[1572]);
        }
        __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255 
            = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_wo_parameterized_clear__a_255);
        ++(vlSelf->__Vcoverage[1573]);
    }
    if (((~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)) 
         & (0U == (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[1567]);
    }
    if ((0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[1568]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__last_err) {
        ++(vlSelf->__Vcoverage[1569]);
    }
    ++(vlSelf->__Vcoverage[1574]);
    vlSelfRef.tb_csr_golden__DOT__test_phase = 1U;
    ++(vlSelf->__Vcoverage[1677]);
    co_return;
}

void Vtb_csr_golden___024root____VbeforeTrig_hcd89c853__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__1(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__do_reset__prot_289;
    __Vtask_tb_csr_golden__DOT__do_reset__prot_289 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__do_reset__slv_290;
    __Vtask_tb_csr_golden__DOT__do_reset__slv_290 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_291;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_291 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_292;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_292 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_293;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_293 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
    __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_296;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_296 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_297;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_297 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_298;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_298 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_299;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_299 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_300;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_300 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_301;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_301 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_302;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_302 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_303;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_303 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_304;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_304 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_305;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_305 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_306;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_306 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_307;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_307 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_308;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_308 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_309;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_309 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_310;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_310 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_313;
    __Vtask_tb_csr_golden__DOT__chk__ok_313 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_315;
    __Vtask_tb_csr_golden__DOT__chk__ok_315 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__i_317;
    __Vtask_tb_csr_golden__DOT__do_rd__i_317 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_318;
    __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_318 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__exp_319;
    __Vtask_tb_csr_golden__DOT__do_rd__exp_319 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_29;
    __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_29 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__i_30;
    __Vfunc_tb_csr_golden__DOT__predict__i_30 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_31;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_31 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_32;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_32 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_320;
    __Vtask_tb_csr_golden__DOT__apb__wr_320 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_321;
    __Vtask_tb_csr_golden__DOT__apb__a_321 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_322;
    __Vtask_tb_csr_golden__DOT__apb__d_322 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_323;
    __Vtask_tb_csr_golden__DOT__apb__s_323 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_324;
    __Vtask_tb_csr_golden__DOT__apb__p_324 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_325;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_325 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_326;
    __Vtask_tb_csr_golden__DOT__apb__k_326 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_327;
    __Vtask_tb_csr_golden__DOT__apb__done_327 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_328;
    __Vtask_tb_csr_golden__DOT__chk__ok_328 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_330;
    __Vtask_tb_csr_golden__DOT__chk__ok_330 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__i_332;
    __Vtask_tb_csr_golden__DOT__do_rd__i_332 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_333;
    __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_333 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__exp_334;
    __Vtask_tb_csr_golden__DOT__do_rd__exp_334 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_33;
    __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_33 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__i_34;
    __Vfunc_tb_csr_golden__DOT__predict__i_34 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_35;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_35 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_36;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_36 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_335;
    __Vtask_tb_csr_golden__DOT__apb__wr_335 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_336;
    __Vtask_tb_csr_golden__DOT__apb__a_336 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_337;
    __Vtask_tb_csr_golden__DOT__apb__d_337 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_338;
    __Vtask_tb_csr_golden__DOT__apb__s_338 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_339;
    __Vtask_tb_csr_golden__DOT__apb__p_339 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_340;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_340 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_341;
    __Vtask_tb_csr_golden__DOT__apb__k_341 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_342;
    __Vtask_tb_csr_golden__DOT__apb__done_342 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_343;
    __Vtask_tb_csr_golden__DOT__chk__ok_343 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_345;
    __Vtask_tb_csr_golden__DOT__chk__ok_345 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_347;
    __Vtask_tb_csr_golden__DOT__chk__ok_347 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_349;
    __Vtask_tb_csr_golden__DOT__do_wr__i_349 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_350;
    __Vtask_tb_csr_golden__DOT__do_wr__d_350 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_351;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_351 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_37;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_37 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_38;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_38 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_352;
    __Vtask_tb_csr_golden__DOT__apb__wr_352 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_353;
    __Vtask_tb_csr_golden__DOT__apb__a_353 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_354;
    __Vtask_tb_csr_golden__DOT__apb__d_354 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_355;
    __Vtask_tb_csr_golden__DOT__apb__s_355 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_356;
    __Vtask_tb_csr_golden__DOT__apb__p_356 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_357;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_357 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_358;
    __Vtask_tb_csr_golden__DOT__apb__k_358 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_359;
    __Vtask_tb_csr_golden__DOT__apb__done_359 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_360;
    __Vtask_tb_csr_golden__DOT__chk__ok_360 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_362;
    __Vtask_tb_csr_golden__DOT__m_write__i_362 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_363;
    __Vtask_tb_csr_golden__DOT__m_write__d_363 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_364;
    __Vtask_tb_csr_golden__DOT__m_write__s_364 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_365;
    __Vtask_tb_csr_golden__DOT__chk__ok_365 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_367;
    __Vtask_tb_csr_golden__DOT__chk__ok_367 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_369;
    __Vtask_tb_csr_golden__DOT__chk__ok_369 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_371;
    __Vtask_tb_csr_golden__DOT__do_wr__i_371 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_372;
    __Vtask_tb_csr_golden__DOT__do_wr__d_372 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_373;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_373 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_39;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_39 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_40;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_40 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_374;
    __Vtask_tb_csr_golden__DOT__apb__wr_374 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_375;
    __Vtask_tb_csr_golden__DOT__apb__a_375 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_376;
    __Vtask_tb_csr_golden__DOT__apb__d_376 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_377;
    __Vtask_tb_csr_golden__DOT__apb__s_377 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_378;
    __Vtask_tb_csr_golden__DOT__apb__p_378 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_379;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_379 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_380;
    __Vtask_tb_csr_golden__DOT__apb__k_380 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_381;
    __Vtask_tb_csr_golden__DOT__apb__done_381 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_382;
    __Vtask_tb_csr_golden__DOT__chk__ok_382 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_384;
    __Vtask_tb_csr_golden__DOT__m_write__i_384 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_385;
    __Vtask_tb_csr_golden__DOT__m_write__d_385 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_386;
    __Vtask_tb_csr_golden__DOT__m_write__s_386 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_387;
    __Vtask_tb_csr_golden__DOT__chk__ok_387 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_389;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_389 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_390;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_390 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_391;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_391 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_392;
    __Vtask_tb_csr_golden__DOT__do_wr__i_392 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_393;
    __Vtask_tb_csr_golden__DOT__do_wr__d_393 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_394;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_394 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_41;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_41 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_42;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_42 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_395;
    __Vtask_tb_csr_golden__DOT__apb__wr_395 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_396;
    __Vtask_tb_csr_golden__DOT__apb__a_396 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_397;
    __Vtask_tb_csr_golden__DOT__apb__d_397 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_398;
    __Vtask_tb_csr_golden__DOT__apb__s_398 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_399;
    __Vtask_tb_csr_golden__DOT__apb__p_399 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_400;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_400 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_401;
    __Vtask_tb_csr_golden__DOT__apb__k_401 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_402;
    __Vtask_tb_csr_golden__DOT__apb__done_402 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_403;
    __Vtask_tb_csr_golden__DOT__chk__ok_403 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_405;
    __Vtask_tb_csr_golden__DOT__m_write__i_405 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_406;
    __Vtask_tb_csr_golden__DOT__m_write__d_406 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_407;
    __Vtask_tb_csr_golden__DOT__m_write__s_407 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_408;
    __Vtask_tb_csr_golden__DOT__chk__ok_408 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_410;
    __Vtask_tb_csr_golden__DOT__do_wr__i_410 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_411;
    __Vtask_tb_csr_golden__DOT__do_wr__d_411 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_412;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_412 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_43;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_43 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_44;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_44 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_413;
    __Vtask_tb_csr_golden__DOT__apb__wr_413 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_414;
    __Vtask_tb_csr_golden__DOT__apb__a_414 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_415;
    __Vtask_tb_csr_golden__DOT__apb__d_415 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_416;
    __Vtask_tb_csr_golden__DOT__apb__s_416 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_417;
    __Vtask_tb_csr_golden__DOT__apb__p_417 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_418;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_418 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_419;
    __Vtask_tb_csr_golden__DOT__apb__k_419 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_420;
    __Vtask_tb_csr_golden__DOT__apb__done_420 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_421;
    __Vtask_tb_csr_golden__DOT__chk__ok_421 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_423;
    __Vtask_tb_csr_golden__DOT__m_write__i_423 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_424;
    __Vtask_tb_csr_golden__DOT__m_write__d_424 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_425;
    __Vtask_tb_csr_golden__DOT__m_write__s_425 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_426;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_426 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_427;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_427 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_428;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_428 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_429;
    __Vtask_tb_csr_golden__DOT__do_wr__i_429 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_430;
    __Vtask_tb_csr_golden__DOT__do_wr__d_430 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_431;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_431 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_45;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_45 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_46;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_46 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_432;
    __Vtask_tb_csr_golden__DOT__apb__wr_432 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_433;
    __Vtask_tb_csr_golden__DOT__apb__a_433 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_434;
    __Vtask_tb_csr_golden__DOT__apb__d_434 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_435;
    __Vtask_tb_csr_golden__DOT__apb__s_435 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_436;
    __Vtask_tb_csr_golden__DOT__apb__p_436 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_437;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_437 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_438;
    __Vtask_tb_csr_golden__DOT__apb__k_438 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_439;
    __Vtask_tb_csr_golden__DOT__apb__done_439 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_440;
    __Vtask_tb_csr_golden__DOT__chk__ok_440 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_442;
    __Vtask_tb_csr_golden__DOT__m_write__i_442 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_443;
    __Vtask_tb_csr_golden__DOT__m_write__d_443 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_444;
    __Vtask_tb_csr_golden__DOT__m_write__s_444 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_445;
    __Vtask_tb_csr_golden__DOT__chk__ok_445 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_447;
    __Vtask_tb_csr_golden__DOT__do_wr__i_447 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_448;
    __Vtask_tb_csr_golden__DOT__do_wr__d_448 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_449;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_449 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_47;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_47 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_48;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_48 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_450;
    __Vtask_tb_csr_golden__DOT__apb__wr_450 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_451;
    __Vtask_tb_csr_golden__DOT__apb__a_451 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_452;
    __Vtask_tb_csr_golden__DOT__apb__d_452 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_453;
    __Vtask_tb_csr_golden__DOT__apb__s_453 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_454;
    __Vtask_tb_csr_golden__DOT__apb__p_454 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_455;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_455 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_456;
    __Vtask_tb_csr_golden__DOT__apb__k_456 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_457;
    __Vtask_tb_csr_golden__DOT__apb__done_457 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_458;
    __Vtask_tb_csr_golden__DOT__chk__ok_458 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_460;
    __Vtask_tb_csr_golden__DOT__m_write__i_460 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_461;
    __Vtask_tb_csr_golden__DOT__m_write__d_461 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_462;
    __Vtask_tb_csr_golden__DOT__m_write__s_462 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_463;
    __Vtask_tb_csr_golden__DOT__chk__ok_463 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_467;
    __Vtask_tb_csr_golden__DOT__chk__ok_467 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_469;
    __Vtask_tb_csr_golden__DOT__chk__ok_469 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__do_reset__prot_471;
    __Vtask_tb_csr_golden__DOT__do_reset__prot_471 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__do_reset__slv_472;
    __Vtask_tb_csr_golden__DOT__do_reset__slv_472 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_473;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_473 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_474;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_474 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_475;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_475 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__t_collisions____VlefCall_1__iaddr_477;
    __Vtask_tb_csr_golden__DOT__t_collisions____VlefCall_1__iaddr_477 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__t_collisions____VlefCall_0__iaddr_478;
    __Vtask_tb_csr_golden__DOT__t_collisions____VlefCall_0__iaddr_478 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
    __Vtask_tb_csr_golden__DOT__t_collisions__a_479 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__do_reset__prot_480;
    __Vtask_tb_csr_golden__DOT__do_reset__prot_480 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__do_reset__slv_481;
    __Vtask_tb_csr_golden__DOT__do_reset__slv_481 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_482;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_482 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_483;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_483 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_484;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_484 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_486;
    __Vtask_tb_csr_golden__DOT__do_wr__i_486 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_487;
    __Vtask_tb_csr_golden__DOT__do_wr__d_487 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_488;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_488 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_49;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_49 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_50;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_50 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_489;
    __Vtask_tb_csr_golden__DOT__apb__wr_489 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_490;
    __Vtask_tb_csr_golden__DOT__apb__a_490 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_491;
    __Vtask_tb_csr_golden__DOT__apb__d_491 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_492;
    __Vtask_tb_csr_golden__DOT__apb__s_492 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_493;
    __Vtask_tb_csr_golden__DOT__apb__p_493 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_494;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_494 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_495;
    __Vtask_tb_csr_golden__DOT__apb__k_495 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_496;
    __Vtask_tb_csr_golden__DOT__apb__done_496 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_497;
    __Vtask_tb_csr_golden__DOT__chk__ok_497 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_499;
    __Vtask_tb_csr_golden__DOT__m_write__i_499 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_500;
    __Vtask_tb_csr_golden__DOT__m_write__d_500 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_501;
    __Vtask_tb_csr_golden__DOT__m_write__s_501 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__a_502;
    __Vtask_tb_csr_golden__DOT__coll_wr__a_502 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__d_503;
    __Vtask_tb_csr_golden__DOT__coll_wr__d_503 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__f_504;
    __Vtask_tb_csr_golden__DOT__coll_wr__f_504 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__hv_505;
    __Vtask_tb_csr_golden__DOT__coll_wr__hv_505 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_506;
    __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_506 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_51;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_51 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_52;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_52 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_507;
    __Vtask_tb_csr_golden__DOT__apb__wr_507 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_508;
    __Vtask_tb_csr_golden__DOT__apb__a_508 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_509;
    __Vtask_tb_csr_golden__DOT__apb__d_509 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_510;
    __Vtask_tb_csr_golden__DOT__apb__s_510 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_511;
    __Vtask_tb_csr_golden__DOT__apb__p_511 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_512;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_512 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_513;
    __Vtask_tb_csr_golden__DOT__apb__k_513 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_514;
    __Vtask_tb_csr_golden__DOT__apb__done_514 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_515;
    __Vtask_tb_csr_golden__DOT__chk__ok_515 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_517;
    __Vtask_tb_csr_golden__DOT__chk__ok_517 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_519;
    __Vtask_tb_csr_golden__DOT__m_write__i_519 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_520;
    __Vtask_tb_csr_golden__DOT__m_write__d_520 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_521;
    __Vtask_tb_csr_golden__DOT__m_write__s_521 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_522;
    __Vtask_tb_csr_golden__DOT__chk__ok_522 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__a_524;
    __Vtask_tb_csr_golden__DOT__coll_wr__a_524 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__d_525;
    __Vtask_tb_csr_golden__DOT__coll_wr__d_525 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__f_526;
    __Vtask_tb_csr_golden__DOT__coll_wr__f_526 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__hv_527;
    __Vtask_tb_csr_golden__DOT__coll_wr__hv_527 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_528;
    __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_528 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_53;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_53 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_54;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_54 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_529;
    __Vtask_tb_csr_golden__DOT__apb__wr_529 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_530;
    __Vtask_tb_csr_golden__DOT__apb__a_530 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_531;
    __Vtask_tb_csr_golden__DOT__apb__d_531 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_532;
    __Vtask_tb_csr_golden__DOT__apb__s_532 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_533;
    __Vtask_tb_csr_golden__DOT__apb__p_533 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_534;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_534 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_535;
    __Vtask_tb_csr_golden__DOT__apb__k_535 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_536;
    __Vtask_tb_csr_golden__DOT__apb__done_536 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_537;
    __Vtask_tb_csr_golden__DOT__chk__ok_537 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_539;
    __Vtask_tb_csr_golden__DOT__chk__ok_539 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_541;
    __Vtask_tb_csr_golden__DOT__m_write__i_541 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_542;
    __Vtask_tb_csr_golden__DOT__m_write__d_542 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_543;
    __Vtask_tb_csr_golden__DOT__m_write__s_543 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_544;
    __Vtask_tb_csr_golden__DOT__chk__ok_544 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_546;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_546 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_547;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_547 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_548;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_548 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__a_549;
    __Vtask_tb_csr_golden__DOT__coll_wr__a_549 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__d_550;
    __Vtask_tb_csr_golden__DOT__coll_wr__d_550 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__f_551;
    __Vtask_tb_csr_golden__DOT__coll_wr__f_551 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__hv_552;
    __Vtask_tb_csr_golden__DOT__coll_wr__hv_552 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_553;
    __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_553 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_55;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_55 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_56;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_56 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_554;
    __Vtask_tb_csr_golden__DOT__apb__wr_554 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_555;
    __Vtask_tb_csr_golden__DOT__apb__a_555 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_556;
    __Vtask_tb_csr_golden__DOT__apb__d_556 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_557;
    __Vtask_tb_csr_golden__DOT__apb__s_557 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_558;
    __Vtask_tb_csr_golden__DOT__apb__p_558 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_559;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_559 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_560;
    __Vtask_tb_csr_golden__DOT__apb__k_560 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_561;
    __Vtask_tb_csr_golden__DOT__apb__done_561 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_562;
    __Vtask_tb_csr_golden__DOT__chk__ok_562 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_564;
    __Vtask_tb_csr_golden__DOT__chk__ok_564 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_566;
    __Vtask_tb_csr_golden__DOT__m_write__i_566 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_567;
    __Vtask_tb_csr_golden__DOT__m_write__d_567 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_568;
    __Vtask_tb_csr_golden__DOT__m_write__s_568 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_569;
    __Vtask_tb_csr_golden__DOT__chk__ok_569 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__a_571;
    __Vtask_tb_csr_golden__DOT__coll_wr__a_571 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__d_572;
    __Vtask_tb_csr_golden__DOT__coll_wr__d_572 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__f_573;
    __Vtask_tb_csr_golden__DOT__coll_wr__f_573 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__hv_574;
    __Vtask_tb_csr_golden__DOT__coll_wr__hv_574 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_575;
    __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_575 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_57;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_57 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_58;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_58 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_576;
    __Vtask_tb_csr_golden__DOT__apb__wr_576 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_577;
    __Vtask_tb_csr_golden__DOT__apb__a_577 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_578;
    __Vtask_tb_csr_golden__DOT__apb__d_578 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_579;
    __Vtask_tb_csr_golden__DOT__apb__s_579 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_580;
    __Vtask_tb_csr_golden__DOT__apb__p_580 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_581;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_581 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_582;
    __Vtask_tb_csr_golden__DOT__apb__k_582 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_583;
    __Vtask_tb_csr_golden__DOT__apb__done_583 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_584;
    __Vtask_tb_csr_golden__DOT__chk__ok_584 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_586;
    __Vtask_tb_csr_golden__DOT__chk__ok_586 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_588;
    __Vtask_tb_csr_golden__DOT__m_write__i_588 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_589;
    __Vtask_tb_csr_golden__DOT__m_write__d_589 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_590;
    __Vtask_tb_csr_golden__DOT__m_write__s_590 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_591;
    __Vtask_tb_csr_golden__DOT__chk__ok_591 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_593;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_593 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_594;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_594 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_595;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_595 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__a_596;
    __Vtask_tb_csr_golden__DOT__coll_wr__a_596 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__d_597;
    __Vtask_tb_csr_golden__DOT__coll_wr__d_597 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__f_598;
    __Vtask_tb_csr_golden__DOT__coll_wr__f_598 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__hv_599;
    __Vtask_tb_csr_golden__DOT__coll_wr__hv_599 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_600;
    __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_600 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_59;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_59 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_60;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_60 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_601;
    __Vtask_tb_csr_golden__DOT__apb__wr_601 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_602;
    __Vtask_tb_csr_golden__DOT__apb__a_602 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_603;
    __Vtask_tb_csr_golden__DOT__apb__d_603 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_604;
    __Vtask_tb_csr_golden__DOT__apb__s_604 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_605;
    __Vtask_tb_csr_golden__DOT__apb__p_605 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_606;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_606 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_607;
    __Vtask_tb_csr_golden__DOT__apb__k_607 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_608;
    __Vtask_tb_csr_golden__DOT__apb__done_608 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_609;
    __Vtask_tb_csr_golden__DOT__chk__ok_609 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_611;
    __Vtask_tb_csr_golden__DOT__chk__ok_611 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_613;
    __Vtask_tb_csr_golden__DOT__m_write__i_613 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_614;
    __Vtask_tb_csr_golden__DOT__m_write__d_614 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_615;
    __Vtask_tb_csr_golden__DOT__m_write__s_615 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_616;
    __Vtask_tb_csr_golden__DOT__chk__ok_616 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__a_618;
    __Vtask_tb_csr_golden__DOT__coll_wr__a_618 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__d_619;
    __Vtask_tb_csr_golden__DOT__coll_wr__d_619 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__f_620;
    __Vtask_tb_csr_golden__DOT__coll_wr__f_620 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__hv_621;
    __Vtask_tb_csr_golden__DOT__coll_wr__hv_621 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_622;
    __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_622 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_61;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_61 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_62;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_62 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_623;
    __Vtask_tb_csr_golden__DOT__apb__wr_623 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_624;
    __Vtask_tb_csr_golden__DOT__apb__a_624 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_625;
    __Vtask_tb_csr_golden__DOT__apb__d_625 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_626;
    __Vtask_tb_csr_golden__DOT__apb__s_626 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_627;
    __Vtask_tb_csr_golden__DOT__apb__p_627 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_628;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_628 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_629;
    __Vtask_tb_csr_golden__DOT__apb__k_629 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_630;
    __Vtask_tb_csr_golden__DOT__apb__done_630 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_631;
    __Vtask_tb_csr_golden__DOT__chk__ok_631 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_633;
    __Vtask_tb_csr_golden__DOT__chk__ok_633 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_635;
    __Vtask_tb_csr_golden__DOT__m_write__i_635 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_636;
    __Vtask_tb_csr_golden__DOT__m_write__d_636 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_637;
    __Vtask_tb_csr_golden__DOT__m_write__s_637 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_638;
    __Vtask_tb_csr_golden__DOT__chk__ok_638 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_640;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_640 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_641;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_641 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_642;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_642 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__a_643;
    __Vtask_tb_csr_golden__DOT__coll_wr__a_643 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__d_644;
    __Vtask_tb_csr_golden__DOT__coll_wr__d_644 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__f_645;
    __Vtask_tb_csr_golden__DOT__coll_wr__f_645 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__coll_wr__hv_646;
    __Vtask_tb_csr_golden__DOT__coll_wr__hv_646 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_647;
    __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_647 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_63;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_63 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_64;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_64 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_648;
    __Vtask_tb_csr_golden__DOT__apb__wr_648 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_649;
    __Vtask_tb_csr_golden__DOT__apb__a_649 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_650;
    __Vtask_tb_csr_golden__DOT__apb__d_650 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_651;
    __Vtask_tb_csr_golden__DOT__apb__s_651 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_652;
    __Vtask_tb_csr_golden__DOT__apb__p_652 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_653;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_653 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_654;
    __Vtask_tb_csr_golden__DOT__apb__k_654 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_655;
    __Vtask_tb_csr_golden__DOT__apb__done_655 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_656;
    __Vtask_tb_csr_golden__DOT__chk__ok_656 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_658;
    __Vtask_tb_csr_golden__DOT__chk__ok_658 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_660;
    __Vtask_tb_csr_golden__DOT__m_write__i_660 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_661;
    __Vtask_tb_csr_golden__DOT__m_write__d_661 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_662;
    __Vtask_tb_csr_golden__DOT__m_write__s_662 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_663;
    __Vtask_tb_csr_golden__DOT__chk__ok_663 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__i_665;
    __Vtask_tb_csr_golden__DOT__do_wr__i_665 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_wr__d_666;
    __Vtask_tb_csr_golden__DOT__do_wr__d_666 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_667;
    __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_667 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_65;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_65 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_66;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_66 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_668;
    __Vtask_tb_csr_golden__DOT__apb__wr_668 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_669;
    __Vtask_tb_csr_golden__DOT__apb__a_669 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_670;
    __Vtask_tb_csr_golden__DOT__apb__d_670 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_671;
    __Vtask_tb_csr_golden__DOT__apb__s_671 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_672;
    __Vtask_tb_csr_golden__DOT__apb__p_672 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_673;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_673 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_674;
    __Vtask_tb_csr_golden__DOT__apb__k_674 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_675;
    __Vtask_tb_csr_golden__DOT__apb__done_675 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_676;
    __Vtask_tb_csr_golden__DOT__chk__ok_676 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__i_678;
    __Vtask_tb_csr_golden__DOT__m_write__i_678 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__m_write__d_679;
    __Vtask_tb_csr_golden__DOT__m_write__d_679 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__m_write__s_680;
    __Vtask_tb_csr_golden__DOT__m_write__s_680 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_67;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_67 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_68;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_68 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_681;
    __Vtask_tb_csr_golden__DOT__apb__wr_681 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_682;
    __Vtask_tb_csr_golden__DOT__apb__a_682 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_683;
    __Vtask_tb_csr_golden__DOT__apb__d_683 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_684;
    __Vtask_tb_csr_golden__DOT__apb__s_684 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_685;
    __Vtask_tb_csr_golden__DOT__apb__p_685 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_686;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_686 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_687;
    __Vtask_tb_csr_golden__DOT__apb__k_687 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_688;
    __Vtask_tb_csr_golden__DOT__apb__done_688 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_689;
    __Vtask_tb_csr_golden__DOT__chk__ok_689 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_691;
    __Vtask_tb_csr_golden__DOT__chk__ok_691 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_693;
    __Vtask_tb_csr_golden__DOT__chk__ok_693 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__i_695;
    __Vtask_tb_csr_golden__DOT__do_rd__i_695 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_696;
    __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_696 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__exp_697;
    __Vtask_tb_csr_golden__DOT__do_rd__exp_697 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_69;
    __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_69 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__i_70;
    __Vfunc_tb_csr_golden__DOT__predict__i_70 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_71;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_71 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_72;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_72 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_698;
    __Vtask_tb_csr_golden__DOT__apb__wr_698 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_699;
    __Vtask_tb_csr_golden__DOT__apb__a_699 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_700;
    __Vtask_tb_csr_golden__DOT__apb__d_700 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_701;
    __Vtask_tb_csr_golden__DOT__apb__s_701 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_702;
    __Vtask_tb_csr_golden__DOT__apb__p_702 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_703;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_703 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_704;
    __Vtask_tb_csr_golden__DOT__apb__k_704 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_705;
    __Vtask_tb_csr_golden__DOT__apb__done_705 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_706;
    __Vtask_tb_csr_golden__DOT__chk__ok_706 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_708;
    __Vtask_tb_csr_golden__DOT__chk__ok_708 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_710;
    __Vtask_tb_csr_golden__DOT__chk__ok_710 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__i_712;
    __Vtask_tb_csr_golden__DOT__do_rd__i_712 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_713;
    __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_713 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__do_rd__exp_714;
    __Vtask_tb_csr_golden__DOT__do_rd__exp_714 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_73;
    __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_73 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__predict__i_74;
    __Vfunc_tb_csr_golden__DOT__predict__i_74 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_75;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_75 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_76;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_76 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_715;
    __Vtask_tb_csr_golden__DOT__apb__wr_715 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_716;
    __Vtask_tb_csr_golden__DOT__apb__a_716 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_717;
    __Vtask_tb_csr_golden__DOT__apb__d_717 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_718;
    __Vtask_tb_csr_golden__DOT__apb__s_718 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_719;
    __Vtask_tb_csr_golden__DOT__apb__p_719 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_720;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_720 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_721;
    __Vtask_tb_csr_golden__DOT__apb__k_721 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_722;
    __Vtask_tb_csr_golden__DOT__apb__done_722 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_723;
    __Vtask_tb_csr_golden__DOT__chk__ok_723 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_725;
    __Vtask_tb_csr_golden__DOT__chk__ok_725 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_727;
    __Vtask_tb_csr_golden__DOT__chk__ok_727 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__i_729;
    __Vtask_tb_csr_golden__DOT__hw_pulse__i_729 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__f_730;
    __Vtask_tb_csr_golden__DOT__hw_pulse__f_730 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__hw_pulse__v_731;
    __Vtask_tb_csr_golden__DOT__hw_pulse__v_731 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_77;
    __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_77 = 0;
    IData/*31:0*/ __Vfunc_tb_csr_golden__DOT__iaddr__i_78;
    __Vfunc_tb_csr_golden__DOT__iaddr__i_78 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__wr_732;
    __Vtask_tb_csr_golden__DOT__apb__wr_732 = 0;
    SData/*15:0*/ __Vtask_tb_csr_golden__DOT__apb__a_733;
    __Vtask_tb_csr_golden__DOT__apb__a_733 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__d_734;
    __Vtask_tb_csr_golden__DOT__apb__d_734 = 0;
    CData/*3:0*/ __Vtask_tb_csr_golden__DOT__apb__s_735;
    __Vtask_tb_csr_golden__DOT__apb__s_735 = 0;
    CData/*2:0*/ __Vtask_tb_csr_golden__DOT__apb__p_736;
    __Vtask_tb_csr_golden__DOT__apb__p_736 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__chain_next_737;
    __Vtask_tb_csr_golden__DOT__apb__chain_next_737 = 0;
    IData/*31:0*/ __Vtask_tb_csr_golden__DOT__apb__k_738;
    __Vtask_tb_csr_golden__DOT__apb__k_738 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__apb__done_739;
    __Vtask_tb_csr_golden__DOT__apb__done_739 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_740;
    __Vtask_tb_csr_golden__DOT__chk__ok_740 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_742;
    __Vtask_tb_csr_golden__DOT__chk__ok_742 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_746;
    __Vtask_tb_csr_golden__DOT__chk__ok_746 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_748;
    __Vtask_tb_csr_golden__DOT__chk__ok_748 = 0;
    // Body
    while ((1U != vlSelfRef.tb_csr_golden__DOT__test_phase)) {
        Vtb_csr_golden___024root____VbeforeTrig_hcd89c853__0(vlSelf, 
                                                             "@( (32'sh1 == tb_csr_golden.test_phase))");
        co_await vlSelfRef.__VtrigSched_hcd89c853__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'sh1 == tb_csr_golden.test_phase))", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             868);
    }
    __Vtask_tb_csr_golden__DOT__do_reset__slv_290 = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__prot_289 = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_291 = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_292 = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_293 = 0U;
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 0U;
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 0U;
    vlSelfRef.tb_csr_golden__DOT__protect_en = __Vtask_tb_csr_golden__DOT__do_reset__prot_289;
    vlSelfRef.tb_csr_golden__DOT__slverr_en = __Vtask_tb_csr_golden__DOT__do_reset__slv_290;
    vlSelfRef.tb_csr_golden__DOT__psel = 0U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__chain = 0U;
    vlSelfRef.tb_csr_golden__DOT__hw_we_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__hw_wd_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__ro_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__arm_wr = 0U;
    vlSelfRef.tb_csr_golden__DOT__arm_rd = 0U;
    vlSelfRef.tb_csr_golden__DOT__hw_clr = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_291 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_291)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             410);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_291 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_291 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1467]);
    }
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_292 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_292)) {
        Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_reg)");
        co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             411);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_292 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_292 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1468]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         412);
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 1U;
    Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_reg)");
    co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_reg)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         414);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         414);
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_293 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_293)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             416);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_293 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_293 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1469]);
    }
    vlSelfRef.tb_csr_golden__DOT__m_mode[0U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[0U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[1U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[1U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[2U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[2U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[3U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[3U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[4U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[4U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[5U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[5U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[6U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[6U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[7U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[7U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    ++(vlSelf->__Vcoverage[1437]);
    ++(vlSelf->__Vcoverage[1470]);
    __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295 = 0;
    __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295 = 0U;
    while (VL_GTS_III(32, 6U, __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)) {
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_298 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_297 = 0U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_296 
            = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_296) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_297)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_296) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_297)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_298)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_296) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_297)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_296) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_297)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_296) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_297)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_296) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_297)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_297))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_296)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_297))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_296)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_298)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_297))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_301 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_300 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_299 
            = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_299) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_300)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_299) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_300)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_301)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_299) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_300)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_299) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_300)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_299) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_300)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_299) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_300)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_300))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_299)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_300))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_299)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_301)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_300))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_304 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_303 = 2U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_302 
            = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_302) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_303)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_302) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_303)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_304)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_302) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_303)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_302) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_303)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_302) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_303)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_302) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_303)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_303))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_302)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_303))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_302)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_304)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_303))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_307 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_306 = 3U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_305 
            = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_305) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_306)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_305) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_306)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_307)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_305) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_306)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_305) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_306)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_305) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_306)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_305) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_306)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_306))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_305)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_306))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_305)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_307)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_306))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_310 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_309 = 4U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_308 
            = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_308) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_309)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_308) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_309)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_310)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_308) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_309)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_308) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_309)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_308) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_309)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_308) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_309)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_309))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_308)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_309))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_308)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_310)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_309))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311 = "hardware loads"s;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314
                      ,"%s: mode[0] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[0U]
                      , '#',4,(0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat)
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_313 = (
                                                   (0x0000000fU 
                                                    & vlSelfRef.tb_csr_golden__DOT__o_mode_flat) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[0U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_313))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_313)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_313) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316
                      ,"%s: flags[0] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[0U]
                      , '#',5,(0x0000001fU & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)));
        __Vtask_tb_csr_golden__DOT__chk__ok_315 = (
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[0U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_315))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_315)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_315) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314
                      ,"%s: mode[1] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[1U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 4U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_313 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 4U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[1U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_313))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_313)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_313) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316
                      ,"%s: flags[1] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[1U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 5U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_315 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 5U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[1U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_315))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_315)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_315) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314
                      ,"%s: mode[2] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[2U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 8U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_313 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 8U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[2U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_313))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_313)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_313) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316
                      ,"%s: flags[2] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[2U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x0aU))));
        __Vtask_tb_csr_golden__DOT__chk__ok_315 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x0aU))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[2U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_315))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_315)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_315) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314
                      ,"%s: mode[3] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[3U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x0cU))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_313 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x0cU)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[3U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_313))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_313)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_313) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316
                      ,"%s: flags[3] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[3U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x0fU))));
        __Vtask_tb_csr_golden__DOT__chk__ok_315 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x0fU))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[3U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_315))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_315)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_315) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314
                      ,"%s: mode[4] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[4U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x10U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_313 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x10U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[4U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_313))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_313)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_313) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316
                      ,"%s: flags[4] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[4U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x14U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_315 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x14U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[4U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_315))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_315)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_315) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314
                      ,"%s: mode[5] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[5U]
                      , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                              >> 0x14U))
                      , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                      , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                      , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                      , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                      , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                      , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                      , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
        __Vtask_tb_csr_golden__DOT__chk__ok_313 = (
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                       >> 0x14U)) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_mode[5U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_313))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_314));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_313)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_313) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316
                      ,"%s: flags[5] expected=%b actual=%b",3
                      , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_311)
                      , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[5U]
                      , '#',5,(0x0000001fU & (IData)(
                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                      >> 0x19U))));
        __Vtask_tb_csr_golden__DOT__chk__ok_315 = (
                                                   (0x0000001fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                               >> 0x19U))) 
                                                   == vlSelfRef.tb_csr_golden__DOT__m_f[5U]);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_315))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_316));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_315)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_315) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        ++(vlSelf->__Vcoverage[1434]);
        ++(vlSelf->__Vcoverage[1435]);
        __Vtask_tb_csr_golden__DOT__do_rd__i_317 = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        __Vtask_tb_csr_golden__DOT__do_rd__exp_319 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__i_30 = __Vtask_tb_csr_golden__DOT__do_rd__i_317;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_29 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_29 
            = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> (0x0000003fU 
                                              & VL_MULS_III(32, (IData)(8U), __Vfunc_tb_csr_golden__DOT__predict__i_30)))) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__m_mode
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_30)]) 
                                             << 4U) 
                                            | ((((2U 
                                                  & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_30)] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_30)] 
                                                       >> 1U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_30)] 
                                                       >> 2U) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                        [
                                                        (7U 
                                                         & __Vfunc_tb_csr_golden__DOT__predict__i_30)] 
                                                        >> 3U)))))) 
                << 0x00000010U) | (0x00008000U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                   [
                                                   (7U 
                                                    & __Vfunc_tb_csr_golden__DOT__predict__i_30)] 
                                                   >> 4U) 
                                                  << 0x0000000fU)));
        ++(vlSelf->__Vcoverage[1424]);
        __Vtask_tb_csr_golden__DOT__do_rd__exp_319 
            = __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_29;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_32 = __Vtask_tb_csr_golden__DOT__do_rd__i_317;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_31 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_32)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_31 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_32)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_31 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_32 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_31 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_32 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_318 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_31;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_325 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_324 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_323 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_322 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_321 = __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_318;
        __Vtask_tb_csr_golden__DOT__apb__wr_320 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_326 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_327 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_320;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_321;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_322;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_323;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_324;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_326 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_327 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_327)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_326 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_326);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_327 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_326)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_327 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_327)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_327) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_326);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_325) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_329 = "read without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_328 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_328))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_329));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_328)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_328) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_331 = "read data"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_330 = (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                   == __Vtask_tb_csr_golden__DOT__do_rd__exp_319);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_330))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_331));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_330)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_330) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_317)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_317)]);
        ++(vlSelf->__Vcoverage[1466]);
        vlSelfRef.tb_csr_golden__DOT__cov_r2c_clear 
            = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_r2c_clear);
        __Vtask_tb_csr_golden__DOT__do_rd__i_332 = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        __Vtask_tb_csr_golden__DOT__do_rd__exp_334 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__i_34 = __Vtask_tb_csr_golden__DOT__do_rd__i_332;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_33 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_33 
            = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> (0x0000003fU 
                                              & VL_MULS_III(32, (IData)(8U), __Vfunc_tb_csr_golden__DOT__predict__i_34)))) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__m_mode
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_34)]) 
                                             << 4U) 
                                            | ((((2U 
                                                  & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_34)] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_34)] 
                                                       >> 1U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_34)] 
                                                       >> 2U) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                        [
                                                        (7U 
                                                         & __Vfunc_tb_csr_golden__DOT__predict__i_34)] 
                                                        >> 3U)))))) 
                << 0x00000010U) | (0x00008000U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                   [
                                                   (7U 
                                                    & __Vfunc_tb_csr_golden__DOT__predict__i_34)] 
                                                   >> 4U) 
                                                  << 0x0000000fU)));
        ++(vlSelf->__Vcoverage[1424]);
        __Vtask_tb_csr_golden__DOT__do_rd__exp_334 
            = __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_33;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_36 = __Vtask_tb_csr_golden__DOT__do_rd__i_332;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_35 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_36)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_35 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_36)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_35 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_36 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_35 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_36 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_333 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_35;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_340 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_339 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_338 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_337 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_336 = __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_333;
        __Vtask_tb_csr_golden__DOT__apb__wr_335 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_341 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_342 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_335;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_336;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_337;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_338;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_339;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_341 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_342 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_342)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_341 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_341);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_342 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_341)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_342 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_342)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_342) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_341);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_340) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_344 = "read without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_343 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_343))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_344));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_343)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_343) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_346 = "read data"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_345 = (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                   == __Vtask_tb_csr_golden__DOT__do_rd__exp_334);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_345))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_346));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_345)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_345) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_332)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_332)]);
        ++(vlSelf->__Vcoverage[1466]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_348 = "r2c reads 0 after the clearing read"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_347 = (1U 
                                                   & (~ 
                                                      (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                       >> 0x0fU)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_347))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_348));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_347)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_347) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__do_wr__d_350 = 0U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_349 = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_38 = __Vtask_tb_csr_golden__DOT__do_wr__i_349;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_37 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_38)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_37 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_38)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_37 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_38 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_37 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_38 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_351 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_37;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_357 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_356 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_355 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_354 = __Vtask_tb_csr_golden__DOT__do_wr__d_350;
        __Vtask_tb_csr_golden__DOT__apb__a_353 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_351;
        __Vtask_tb_csr_golden__DOT__apb__wr_352 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_358 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_359 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_352;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_353;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_354;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_355;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_356;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_358 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_359 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_359)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_358 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_358);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_359 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_358)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_359 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_359)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_359) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_358);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_357) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_361 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_360 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_360))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_361));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_360)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_360) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_364 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_363 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_350;
        __Vtask_tb_csr_golden__DOT__m_write__i_362 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_349;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_364))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_363 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_363 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_363 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_363 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_363 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_363)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_363 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_363 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_362)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_366 = "w1c: a 0 written keeps the flag"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_365 = (
                                                   (0x27U 
                                                    >= 
                                                    (0x0000003fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_365))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_366));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_365)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_365) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_368 = "w0c: a 0 written clears the flag"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_367 = (1U 
                                                   & (~ 
                                                      ((0x27U 
                                                        >= 
                                                        (0x0000003fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & ((IData)(2U) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_367))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_368));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_367)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_367) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_370 = "w2c: any write clears the field"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_369 = (1U 
                                                   & (~ 
                                                      ((0x27U 
                                                        >= 
                                                        (0x0000003fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & ((IData)(3U) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_369))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_370));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_369)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_369) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_w0c_clear 
            = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_w0c_clear);
        vlSelfRef.tb_csr_golden__DOT__cov_w2c_clear 
            = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_w2c_clear);
        __Vtask_tb_csr_golden__DOT__do_wr__d_372 = 0x00060000U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_371 = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_40 = __Vtask_tb_csr_golden__DOT__do_wr__i_371;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_39 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_40)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_39 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_40)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_39 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_40 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_39 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_40 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_373 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_39;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_379 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_378 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_377 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_376 = __Vtask_tb_csr_golden__DOT__do_wr__d_372;
        __Vtask_tb_csr_golden__DOT__apb__a_375 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_373;
        __Vtask_tb_csr_golden__DOT__apb__wr_374 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_380 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_381 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_374;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_375;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_376;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_377;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_378;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_380 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_381 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_381)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_380 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_380);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_381 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_380)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_381 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_381)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_381) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_380);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_379) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_383 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_382 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_382))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_383));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_382)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_382) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_386 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_385 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_372;
        __Vtask_tb_csr_golden__DOT__m_write__i_384 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_371;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_386))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_385 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_385 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_385 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_385 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_385 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_385)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_385 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_385 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_384)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_388 = "w1c: a 1 written clears the flag"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_387 = (1U 
                                                   & (~ 
                                                      ((0x27U 
                                                        >= 
                                                        (0x0000003fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & ((IData)(1U) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_387))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_388));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_387)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_387) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_w1c_clear 
            = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_w1c_clear);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_391 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_390 = 2U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_389 
            = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_389) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_390)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_389) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_390)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_391)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_389) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_390)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_389) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_390)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_389) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_390)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_389) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_390)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_390))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_389)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_390))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_389)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_391)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_390))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__do_wr__d_393 = 0x00020000U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_392 = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_42 = __Vtask_tb_csr_golden__DOT__do_wr__i_392;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_41 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_42)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_41 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_42)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_41 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_42 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_41 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_42 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_394 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_41;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_400 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_399 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_398 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_397 = __Vtask_tb_csr_golden__DOT__do_wr__d_393;
        __Vtask_tb_csr_golden__DOT__apb__a_396 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_394;
        __Vtask_tb_csr_golden__DOT__apb__wr_395 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_401 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_402 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_395;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_396;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_397;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_398;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_399;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_401 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_402 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_402)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_401 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_401);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_402 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_401)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_402 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_402)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_402) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_401);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_400) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_404 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_403 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_403))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_404));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_403)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_403) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_407 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_406 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_393;
        __Vtask_tb_csr_golden__DOT__m_write__i_405 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_392;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_407))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_406 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_406 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_406 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_406 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_406 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_406)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_406 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_406 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_405)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_409 = "w0c: a 1 written keeps the flag"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_408 = (
                                                   (0x27U 
                                                    >= 
                                                    (0x0000003fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_408))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_409));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_408)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_408) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__do_wr__d_411 = 0U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_410 = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_44 = __Vtask_tb_csr_golden__DOT__do_wr__i_410;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_43 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_44)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_43 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_44)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_43 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_44 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_43 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_44 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_412 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_43;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_418 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_417 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_416 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_415 = __Vtask_tb_csr_golden__DOT__do_wr__d_411;
        __Vtask_tb_csr_golden__DOT__apb__a_414 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_412;
        __Vtask_tb_csr_golden__DOT__apb__wr_413 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_419 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_420 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_413;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_414;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_415;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_416;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_417;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_419 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_420 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_420)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_419 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_419);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_420 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_419)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_420 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_420)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_420) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_419);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_418) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_422 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_421 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_421))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_422));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_421)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_421) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_425 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_424 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_411;
        __Vtask_tb_csr_golden__DOT__m_write__i_423 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_410;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_425))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_424 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_424 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_424 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_424 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_424 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_424)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_424 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_424 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_423)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_428 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_427 = 3U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_426 
            = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_426) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_427)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_426) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_427)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_428)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_426) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_427)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_426) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_427)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_426) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_427)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_426) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_427)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_427))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_426)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_427))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_426)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_428)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_427))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__do_wr__d_430 = 0U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_429 = 
            VL_MODDIVS_III(32, ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295), (IData)(6U));
        __Vfunc_tb_csr_golden__DOT__iaddr__i_46 = __Vtask_tb_csr_golden__DOT__do_wr__i_429;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_45 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_46)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_45 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_46)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_45 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_46 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_45 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_46 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_431 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_45;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_437 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_436 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_435 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_434 = __Vtask_tb_csr_golden__DOT__do_wr__d_430;
        __Vtask_tb_csr_golden__DOT__apb__a_433 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_431;
        __Vtask_tb_csr_golden__DOT__apb__wr_432 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_438 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_439 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_432;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_433;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_434;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_435;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_436;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_438 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_439 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_439)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_438 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_438);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_439 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_438)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_439 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_439)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_439) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_438);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_437) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_441 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_440 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_440))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_441));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_440)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_440) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_444 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_443 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_430;
        __Vtask_tb_csr_golden__DOT__m_write__i_442 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_429;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_444))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_443 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_443 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_443 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_443 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_443 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_443)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_443 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_443 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_442)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_446 = "w2c: a write to another register keeps the field"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_445 = (
                                                   (0x27U 
                                                    >= 
                                                    (0x0000003fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_445))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_446));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_445)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_445) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__do_wr__d_448 = 0x00010000U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_447 = __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_48 = __Vtask_tb_csr_golden__DOT__do_wr__i_447;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_47 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_48)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_47 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_48)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_47 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_48 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_47 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_48 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_449 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_47;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_455 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_454 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_453 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_452 = __Vtask_tb_csr_golden__DOT__do_wr__d_448;
        __Vtask_tb_csr_golden__DOT__apb__a_451 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_449;
        __Vtask_tb_csr_golden__DOT__apb__wr_450 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_456 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_457 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_450;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_451;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_452;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_453;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_454;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_456 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_457 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_457)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_456 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_456);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_457 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_456)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_457 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_457)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_457) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_456);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_455) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_459 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_458 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_458))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_459));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_458)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_458) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_462 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_461 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_448;
        __Vtask_tb_csr_golden__DOT__m_write__i_460 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_447;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_462))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_461 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_461 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_461 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_461 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_461 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_461)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_461 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_461 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_460)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_464 = "w2c: a write with 1 in the bit clears it"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_463 = (1U 
                                                   & (~ 
                                                      ((0x27U 
                                                        >= 
                                                        (0x0000003fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & ((IData)(3U) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295)))))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_463))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_464));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_463)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_463) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295 
            = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_hw_and_sw_clear__a_295);
        ++(vlSelf->__Vcoverage[1575]);
    }
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465 = "after clears"s;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468
                  ,"%s: mode[0] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[0U]
                  , '#',4,(0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat)
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_467 = ((0x0000000fU 
                                                & vlSelfRef.tb_csr_golden__DOT__o_mode_flat) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[0U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_467))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_467)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_467) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470
                  ,"%s: flags[0] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[0U]
                  , '#',5,(0x0000001fU & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)));
    __Vtask_tb_csr_golden__DOT__chk__ok_469 = ((0x0000001fU 
                                                & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[0U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_469))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_469)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_469) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468
                  ,"%s: mode[1] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[1U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 4U)), '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_467 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 4U)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[1U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_467))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_467)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_467) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470
                  ,"%s: flags[1] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[1U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 5U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_469 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 5U))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[1U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_469))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_469)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_469) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468
                  ,"%s: mode[2] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[2U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 8U)), '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_467 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 8U)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[2U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_467))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_467)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_467) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470
                  ,"%s: flags[2] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[2U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x0aU))));
    __Vtask_tb_csr_golden__DOT__chk__ok_469 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 0x0aU))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[2U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_469))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_469)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_469) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468
                  ,"%s: mode[3] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[3U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x0cU))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_467 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 0x0cU)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[3U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_467))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_467)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_467) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470
                  ,"%s: flags[3] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[3U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x0fU))));
    __Vtask_tb_csr_golden__DOT__chk__ok_469 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 0x0fU))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[3U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_469))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_469)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_469) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468
                  ,"%s: mode[4] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[4U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x10U))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_467 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 0x10U)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[4U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_467))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_467)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_467) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470
                  ,"%s: flags[4] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[4U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x14U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_469 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 0x14U))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[4U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_469))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_469)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_469) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468
                  ,"%s: mode[5] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[5U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x14U))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_467 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 0x14U)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[5U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_467))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_468));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_467)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_467) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470
                  ,"%s: flags[5] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_465)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[5U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x19U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_469 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 0x19U))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[5U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_469))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_470));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_469)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_469) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    ++(vlSelf->__Vcoverage[1435]);
    ++(vlSelf->__Vcoverage[1576]);
    __Vtask_tb_csr_golden__DOT__do_reset__slv_472 = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__prot_471 = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_473 = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_474 = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_475 = 0U;
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 0U;
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 0U;
    vlSelfRef.tb_csr_golden__DOT__protect_en = __Vtask_tb_csr_golden__DOT__do_reset__prot_471;
    vlSelfRef.tb_csr_golden__DOT__slverr_en = __Vtask_tb_csr_golden__DOT__do_reset__slv_472;
    vlSelfRef.tb_csr_golden__DOT__psel = 0U;
    vlSelfRef.tb_csr_golden__DOT__penable = 0U;
    vlSelfRef.tb_csr_golden__DOT__chain = 0U;
    vlSelfRef.tb_csr_golden__DOT__hw_we_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__hw_wd_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__ro_flat = 0ULL;
    vlSelfRef.tb_csr_golden__DOT__arm_wr = 0U;
    vlSelfRef.tb_csr_golden__DOT__arm_rd = 0U;
    vlSelfRef.tb_csr_golden__DOT__hw_clr = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data = 0U;
    vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_473 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_473)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             410);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_473 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_473 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1467]);
    }
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_474 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_474)) {
        Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_reg)");
        co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             411);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_474 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_474 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1468]);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         412);
    vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 1U;
    Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                         "@(posedge tb_csr_golden.clk_reg)");
    co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_csr_golden.clk_reg)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                         414);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                         414);
    vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 1U;
    __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_475 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_475)) {
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             416);
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_475 
            = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_475 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1469]);
    }
    vlSelfRef.tb_csr_golden__DOT__m_mode[0U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[0U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[1U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[1U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[2U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[2U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[3U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[3U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[4U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[4U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[5U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[5U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[6U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[6U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    vlSelfRef.tb_csr_golden__DOT__m_mode[7U] = 0U;
    vlSelfRef.tb_csr_golden__DOT__m_f[7U] = 0U;
    ++(vlSelf->__Vcoverage[1436]);
    ++(vlSelf->__Vcoverage[1437]);
    ++(vlSelf->__Vcoverage[1470]);
    __Vtask_tb_csr_golden__DOT__t_collisions__a_479 = 0;
    __Vtask_tb_csr_golden__DOT__t_collisions__a_479 = 0U;
    while (VL_GTS_III(32, 6U, __Vtask_tb_csr_golden__DOT__t_collisions__a_479)) {
        __Vtask_tb_csr_golden__DOT__do_reset__slv_481 = 1U;
        __Vtask_tb_csr_golden__DOT__do_reset__prot_480 = 1U;
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_482 = 0U;
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_483 = 0U;
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_484 = 0U;
        vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 0U;
        vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 0U;
        vlSelfRef.tb_csr_golden__DOT__protect_en = __Vtask_tb_csr_golden__DOT__do_reset__prot_480;
        vlSelfRef.tb_csr_golden__DOT__slverr_en = __Vtask_tb_csr_golden__DOT__do_reset__slv_481;
        vlSelfRef.tb_csr_golden__DOT__psel = 0U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__chain = 0U;
        vlSelfRef.tb_csr_golden__DOT__hw_we_flat = 0ULL;
        vlSelfRef.tb_csr_golden__DOT__hw_wd_flat = 0ULL;
        vlSelfRef.tb_csr_golden__DOT__ro_flat = 0ULL;
        vlSelfRef.tb_csr_golden__DOT__arm_wr = 0U;
        vlSelfRef.tb_csr_golden__DOT__arm_rd = 0U;
        vlSelfRef.tb_csr_golden__DOT__hw_clr = 0U;
        vlSelfRef.tb_csr_golden__DOT__i_hw_clr_key_data = 0U;
        vlSelfRef.tb_csr_golden__DOT__i_hw_clr_monitor_key_fragment = 0U;
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_482 = 4U;
        while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_482)) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 410);
            __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_482 
                = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_1__DOT____Vrepeat0_482 
                   - (IData)(1U));
            ++(vlSelf->__Vcoverage[1467]);
        }
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_483 = 4U;
        while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_483)) {
            Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_reg)");
            co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_reg)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 411);
            __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_483 
                = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_2__DOT____Vrepeat1_483 
                   - (IData)(1U));
            ++(vlSelf->__Vcoverage[1468]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             412);
        vlSelfRef.tb_csr_golden__DOT__rst_n_apb = 1U;
        Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_reg)");
        co_await vlSelfRef.__VtrigSched_hb2c7a3b7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_reg)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             414);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             414);
        vlSelfRef.tb_csr_golden__DOT__rst_n_reg = 1U;
        __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_484 = 3U;
        while (VL_LTS_III(32, 0U, __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_484)) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 416);
            __Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_484 
                = (__Vtask_tb_csr_golden__DOT__do_reset__unnamedblk1_3__DOT____Vrepeat2_484 
                   - (IData)(1U));
            ++(vlSelf->__Vcoverage[1469]);
        }
        vlSelfRef.tb_csr_golden__DOT__m_mode[0U] = 0U;
        vlSelfRef.tb_csr_golden__DOT__m_f[0U] = 0U;
        ++(vlSelf->__Vcoverage[1436]);
        vlSelfRef.tb_csr_golden__DOT__m_mode[1U] = 0U;
        vlSelfRef.tb_csr_golden__DOT__m_f[1U] = 0U;
        ++(vlSelf->__Vcoverage[1436]);
        vlSelfRef.tb_csr_golden__DOT__m_mode[2U] = 0U;
        vlSelfRef.tb_csr_golden__DOT__m_f[2U] = 0U;
        ++(vlSelf->__Vcoverage[1436]);
        vlSelfRef.tb_csr_golden__DOT__m_mode[3U] = 0U;
        vlSelfRef.tb_csr_golden__DOT__m_f[3U] = 0U;
        ++(vlSelf->__Vcoverage[1436]);
        vlSelfRef.tb_csr_golden__DOT__m_mode[4U] = 0U;
        vlSelfRef.tb_csr_golden__DOT__m_f[4U] = 0U;
        ++(vlSelf->__Vcoverage[1436]);
        vlSelfRef.tb_csr_golden__DOT__m_mode[5U] = 0U;
        vlSelfRef.tb_csr_golden__DOT__m_f[5U] = 0U;
        ++(vlSelf->__Vcoverage[1436]);
        vlSelfRef.tb_csr_golden__DOT__m_mode[6U] = 0U;
        vlSelfRef.tb_csr_golden__DOT__m_f[6U] = 0U;
        ++(vlSelf->__Vcoverage[1436]);
        vlSelfRef.tb_csr_golden__DOT__m_mode[7U] = 0U;
        vlSelfRef.tb_csr_golden__DOT__m_f[7U] = 0U;
        ++(vlSelf->__Vcoverage[1436]);
        ++(vlSelf->__Vcoverage[1437]);
        ++(vlSelf->__Vcoverage[1470]);
        __Vtask_tb_csr_golden__DOT__do_wr__d_487 = 0U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_486 = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_50 = __Vtask_tb_csr_golden__DOT__do_wr__i_486;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_49 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_50)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_49 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_50)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_49 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_50 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_49 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_50 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_488 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_49;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_494 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_493 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_492 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_491 = __Vtask_tb_csr_golden__DOT__do_wr__d_487;
        __Vtask_tb_csr_golden__DOT__apb__a_490 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_488;
        __Vtask_tb_csr_golden__DOT__apb__wr_489 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_495 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_496 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_489;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_490;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_491;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_492;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_493;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_495 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_496 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_496)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_495 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_495);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_496 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_495)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_496 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_496)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_496) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_495);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_494) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_498 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_497 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_497))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_498));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_497)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_497) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_501 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_500 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_487;
        __Vtask_tb_csr_golden__DOT__m_write__i_499 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_486;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_501))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_500 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_500 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_500 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_500 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_500 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_500)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_500 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_500 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_499)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        __Vtask_tb_csr_golden__DOT__coll_wr__hv_505 = 0U;
        __Vtask_tb_csr_golden__DOT__coll_wr__f_504 = 0U;
        __Vtask_tb_csr_golden__DOT__coll_wr__d_503 = 0x00080000U;
        __Vtask_tb_csr_golden__DOT__coll_wr__a_502 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__coll_wr__a_502;
        vlSelfRef.tb_csr_golden__DOT__c_f = __Vtask_tb_csr_golden__DOT__coll_wr__f_504;
        vlSelfRef.tb_csr_golden__DOT__c_val = __Vtask_tb_csr_golden__DOT__coll_wr__hv_505;
        vlSelfRef.tb_csr_golden__DOT__arm_wr = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_52 = __Vtask_tb_csr_golden__DOT__coll_wr__a_502;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_51 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_52)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_51 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_52)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_51 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_52 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_51 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_52 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_506 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_51;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_512 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_511 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_510 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_509 = __Vtask_tb_csr_golden__DOT__coll_wr__d_503;
        __Vtask_tb_csr_golden__DOT__apb__a_508 = __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_506;
        __Vtask_tb_csr_golden__DOT__apb__wr_507 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_513 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_514 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_507;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_508;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_509;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_510;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_511;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_513 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_514 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_514)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_513 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_513);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_514 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_513)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_514 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_514)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_514) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_513);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_512) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_516 = "collision armed and fired"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_515 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_515))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_516));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_515)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_515) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_518 = "collision write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_517 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_517))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_518));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_517)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_517) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_521 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_520 
            = __Vtask_tb_csr_golden__DOT__coll_wr__d_503;
        __Vtask_tb_csr_golden__DOT__m_write__i_519 
            = __Vtask_tb_csr_golden__DOT__coll_wr__a_502;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_521))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_520 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_520 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_520 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_520 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_520 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_520)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_520 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_520 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_519)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1577]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_523 = "rwi: software 1 wins over hardware 0"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_522 = (
                                                   (0x27U 
                                                    >= 
                                                    (0x0000003fU 
                                                     & VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_522))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_523));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_522)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_522) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__coll_wr__hv_527 = 1U;
        __Vtask_tb_csr_golden__DOT__coll_wr__f_526 = 0U;
        __Vtask_tb_csr_golden__DOT__coll_wr__d_525 = 0U;
        __Vtask_tb_csr_golden__DOT__coll_wr__a_524 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__coll_wr__a_524;
        vlSelfRef.tb_csr_golden__DOT__c_f = __Vtask_tb_csr_golden__DOT__coll_wr__f_526;
        vlSelfRef.tb_csr_golden__DOT__c_val = __Vtask_tb_csr_golden__DOT__coll_wr__hv_527;
        vlSelfRef.tb_csr_golden__DOT__arm_wr = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_54 = __Vtask_tb_csr_golden__DOT__coll_wr__a_524;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_53 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_54)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_53 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_54)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_53 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_54 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_53 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_54 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_528 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_53;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_534 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_533 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_532 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_531 = __Vtask_tb_csr_golden__DOT__coll_wr__d_525;
        __Vtask_tb_csr_golden__DOT__apb__a_530 = __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_528;
        __Vtask_tb_csr_golden__DOT__apb__wr_529 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_535 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_536 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_529;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_530;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_531;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_532;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_533;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_535 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_536 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_536)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_535 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_535);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_536 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_535)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_536 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_536)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_536) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_535);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_534) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_538 = "collision armed and fired"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_537 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_537))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_538));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_537)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_537) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_540 = "collision write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_539 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_539))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_540));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_539)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_539) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_543 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_542 
            = __Vtask_tb_csr_golden__DOT__coll_wr__d_525;
        __Vtask_tb_csr_golden__DOT__m_write__i_541 
            = __Vtask_tb_csr_golden__DOT__coll_wr__a_524;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_543))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_542 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_542 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_542 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_542 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_542 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_542)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_542 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_542 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_541)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1577]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_545 = "rwi: software 0 wins over hardware 1"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_544 = (1U 
                                                   & (~ 
                                                      ((0x27U 
                                                        >= 
                                                        (0x0000003fU 
                                                         & VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479))))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_544))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_545));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_544)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_544) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_rwi_sw = 
            ((IData)(2U) + vlSelfRef.tb_csr_golden__DOT__cov_rwi_sw);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_548 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_547 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_546 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_546) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_547)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_546) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_547)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_548)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_546) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_547)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_546) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_547)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_546) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_547)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_546) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_547)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_547))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_546)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_547))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_546)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_548)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_547))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__coll_wr__hv_552 = 1U;
        __Vtask_tb_csr_golden__DOT__coll_wr__f_551 = 1U;
        __Vtask_tb_csr_golden__DOT__coll_wr__d_550 = 0x00040000U;
        __Vtask_tb_csr_golden__DOT__coll_wr__a_549 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__coll_wr__a_549;
        vlSelfRef.tb_csr_golden__DOT__c_f = __Vtask_tb_csr_golden__DOT__coll_wr__f_551;
        vlSelfRef.tb_csr_golden__DOT__c_val = __Vtask_tb_csr_golden__DOT__coll_wr__hv_552;
        vlSelfRef.tb_csr_golden__DOT__arm_wr = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_56 = __Vtask_tb_csr_golden__DOT__coll_wr__a_549;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_55 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_56)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_55 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_56)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_55 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_56 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_55 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_56 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_553 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_55;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_559 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_558 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_557 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_556 = __Vtask_tb_csr_golden__DOT__coll_wr__d_550;
        __Vtask_tb_csr_golden__DOT__apb__a_555 = __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_553;
        __Vtask_tb_csr_golden__DOT__apb__wr_554 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_560 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_561 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_554;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_555;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_556;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_557;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_558;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_560 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_561 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_561)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_560 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_560);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_561 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_560)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_561 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_561)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_561) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_560);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_559) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_563 = "collision armed and fired"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_562 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_562))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_563));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_562)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_562) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_565 = "collision write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_564 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_564))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_565));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_564)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_564) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_568 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_567 
            = __Vtask_tb_csr_golden__DOT__coll_wr__d_550;
        __Vtask_tb_csr_golden__DOT__m_write__i_566 
            = __Vtask_tb_csr_golden__DOT__coll_wr__a_549;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_568))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_567 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_567 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_567 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_567 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_567 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_567)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_567 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_567 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_566)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1577]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)] 
            = (2U | vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_570 = "w1c: hardware load 1 wins over a software clear"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_569 = (
                                                   (0x27U 
                                                    >= 
                                                    (0x0000003fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_569))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_570));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_569)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_569) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_w1c_hw = 
            ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_w1c_hw);
        __Vtask_tb_csr_golden__DOT__coll_wr__hv_574 = 0U;
        __Vtask_tb_csr_golden__DOT__coll_wr__f_573 = 1U;
        __Vtask_tb_csr_golden__DOT__coll_wr__d_572 = 0U;
        __Vtask_tb_csr_golden__DOT__coll_wr__a_571 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__coll_wr__a_571;
        vlSelfRef.tb_csr_golden__DOT__c_f = __Vtask_tb_csr_golden__DOT__coll_wr__f_573;
        vlSelfRef.tb_csr_golden__DOT__c_val = __Vtask_tb_csr_golden__DOT__coll_wr__hv_574;
        vlSelfRef.tb_csr_golden__DOT__arm_wr = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_58 = __Vtask_tb_csr_golden__DOT__coll_wr__a_571;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_57 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_58)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_57 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_58)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_57 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_58 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_57 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_58 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_575 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_57;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_581 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_580 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_579 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_578 = __Vtask_tb_csr_golden__DOT__coll_wr__d_572;
        __Vtask_tb_csr_golden__DOT__apb__a_577 = __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_575;
        __Vtask_tb_csr_golden__DOT__apb__wr_576 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_582 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_583 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_576;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_577;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_578;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_579;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_580;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_582 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_583 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_583)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_582 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_582);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_583 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_582)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_583 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_583)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_583) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_582);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_581) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_585 = "collision armed and fired"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_584 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_584))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_585));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_584)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_584) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_587 = "collision write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_586 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_586))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_587));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_586)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_586) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_590 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_589 
            = __Vtask_tb_csr_golden__DOT__coll_wr__d_572;
        __Vtask_tb_csr_golden__DOT__m_write__i_588 
            = __Vtask_tb_csr_golden__DOT__coll_wr__a_571;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_590))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_589 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_589 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_589 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_589 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_589 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_589)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_589 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_589 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_588)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1577]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)] 
            = (0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_592 = "w1c: hardware load 0 replaces the field"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_591 = (1U 
                                                   & (~ 
                                                      ((0x27U 
                                                        >= 
                                                        (0x0000003fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & ((IData)(1U) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_591))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_592));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_591)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_591) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_hw_zero = 
            ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_hw_zero);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_595 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_594 = 2U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_593 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_593) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_594)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_593) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_594)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_595)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_593) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_594)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_593) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_594)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_593) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_594)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_593) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_594)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_594))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_593)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_594))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_593)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_595)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_594))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__coll_wr__hv_599 = 1U;
        __Vtask_tb_csr_golden__DOT__coll_wr__f_598 = 2U;
        __Vtask_tb_csr_golden__DOT__coll_wr__d_597 = 0U;
        __Vtask_tb_csr_golden__DOT__coll_wr__a_596 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__coll_wr__a_596;
        vlSelfRef.tb_csr_golden__DOT__c_f = __Vtask_tb_csr_golden__DOT__coll_wr__f_598;
        vlSelfRef.tb_csr_golden__DOT__c_val = __Vtask_tb_csr_golden__DOT__coll_wr__hv_599;
        vlSelfRef.tb_csr_golden__DOT__arm_wr = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_60 = __Vtask_tb_csr_golden__DOT__coll_wr__a_596;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_59 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_60)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_59 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_60)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_59 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_60 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_59 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_60 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_600 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_59;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_606 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_605 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_604 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_603 = __Vtask_tb_csr_golden__DOT__coll_wr__d_597;
        __Vtask_tb_csr_golden__DOT__apb__a_602 = __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_600;
        __Vtask_tb_csr_golden__DOT__apb__wr_601 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_607 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_608 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_601;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_602;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_603;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_604;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_605;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_607 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_608 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_608)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_607 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_607);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_608 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_607)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_608 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_608)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_608) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_607);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_606) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_610 = "collision armed and fired"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_609 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_609))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_610));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_609)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_609) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_612 = "collision write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_611 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_611))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_612));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_611)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_611) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_615 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_614 
            = __Vtask_tb_csr_golden__DOT__coll_wr__d_597;
        __Vtask_tb_csr_golden__DOT__m_write__i_613 
            = __Vtask_tb_csr_golden__DOT__coll_wr__a_596;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_615))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_614 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_614 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_614 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_614 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_614 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_614)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_614 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_614 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_613)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1577]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)] 
            = (4U | vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_617 = "w0c: hardware load 1 wins over a software clear"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_616 = (
                                                   (0x27U 
                                                    >= 
                                                    (0x0000003fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_616))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_617));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_616)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_616) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_w0c_hw = 
            ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_w0c_hw);
        __Vtask_tb_csr_golden__DOT__coll_wr__hv_621 = 0U;
        __Vtask_tb_csr_golden__DOT__coll_wr__f_620 = 2U;
        __Vtask_tb_csr_golden__DOT__coll_wr__d_619 = 0x00020000U;
        __Vtask_tb_csr_golden__DOT__coll_wr__a_618 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__coll_wr__a_618;
        vlSelfRef.tb_csr_golden__DOT__c_f = __Vtask_tb_csr_golden__DOT__coll_wr__f_620;
        vlSelfRef.tb_csr_golden__DOT__c_val = __Vtask_tb_csr_golden__DOT__coll_wr__hv_621;
        vlSelfRef.tb_csr_golden__DOT__arm_wr = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_62 = __Vtask_tb_csr_golden__DOT__coll_wr__a_618;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_61 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_62)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_61 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_62)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_61 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_62 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_61 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_62 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_622 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_61;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_628 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_627 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_626 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_625 = __Vtask_tb_csr_golden__DOT__coll_wr__d_619;
        __Vtask_tb_csr_golden__DOT__apb__a_624 = __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_622;
        __Vtask_tb_csr_golden__DOT__apb__wr_623 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_629 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_630 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_623;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_624;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_625;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_626;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_627;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_629 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_630 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_630)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_629 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_629);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_630 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_629)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_630 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_630)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_630) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_629);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_628) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_632 = "collision armed and fired"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_631 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_631))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_632));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_631)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_631) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_634 = "collision write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_633 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_633))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_634));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_633)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_633) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_637 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_636 
            = __Vtask_tb_csr_golden__DOT__coll_wr__d_619;
        __Vtask_tb_csr_golden__DOT__m_write__i_635 
            = __Vtask_tb_csr_golden__DOT__coll_wr__a_618;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_637))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_636 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_636 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_636 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_636 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_636 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_636)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_636 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_636 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_635)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1577]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)] 
            = (0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_639 = "w0c: hardware load 0 replaces the field"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_638 = (1U 
                                                   & (~ 
                                                      ((0x27U 
                                                        >= 
                                                        (0x0000003fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & ((IData)(2U) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_638))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_639));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_638)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_638) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_hw_zero = 
            ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_hw_zero);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_642 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_641 = 3U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_640 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_640) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_641)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_640) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_641)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_642)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_640) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_641)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_640) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_641)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_640) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_641)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_640) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_641)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_641))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_640)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_641))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_640)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_642)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_641))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        __Vtask_tb_csr_golden__DOT__coll_wr__hv_646 = 1U;
        __Vtask_tb_csr_golden__DOT__coll_wr__f_645 = 3U;
        __Vtask_tb_csr_golden__DOT__coll_wr__d_644 = 0x00010000U;
        __Vtask_tb_csr_golden__DOT__coll_wr__a_643 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__coll_wr__a_643;
        vlSelfRef.tb_csr_golden__DOT__c_f = __Vtask_tb_csr_golden__DOT__coll_wr__f_645;
        vlSelfRef.tb_csr_golden__DOT__c_val = __Vtask_tb_csr_golden__DOT__coll_wr__hv_646;
        vlSelfRef.tb_csr_golden__DOT__arm_wr = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_64 = __Vtask_tb_csr_golden__DOT__coll_wr__a_643;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_63 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_64)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_63 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_64)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_63 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_64 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_63 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_64 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_647 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_63;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_653 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_652 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_651 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_650 = __Vtask_tb_csr_golden__DOT__coll_wr__d_644;
        __Vtask_tb_csr_golden__DOT__apb__a_649 = __Vtask_tb_csr_golden__DOT__coll_wr____VlefCall_0__iaddr_647;
        __Vtask_tb_csr_golden__DOT__apb__wr_648 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_654 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_655 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_648;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_649;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_650;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_651;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_652;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_654 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_655 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_655)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_654 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_654);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_655 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_654)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_655 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_655)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_655) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_654);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_653) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_657 = "collision armed and fired"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_656 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_656))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_657));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_656)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_656) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_659 = "collision write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_658 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_658))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_659));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_658)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_658) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_662 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_661 
            = __Vtask_tb_csr_golden__DOT__coll_wr__d_644;
        __Vtask_tb_csr_golden__DOT__m_write__i_660 
            = __Vtask_tb_csr_golden__DOT__coll_wr__a_643;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_662))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_661 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_661 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_661 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_661 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_661 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_661)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_661 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_661 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_660)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1577]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)] 
            = (8U | vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_664 = "w2c: hardware load 1 wins over a software clear"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_663 = (
                                                   (0x27U 
                                                    >= 
                                                    (0x0000003fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_663))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_664));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_663)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_663) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_w2c_hw = 
            ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_w2c_hw);
        __Vtask_tb_csr_golden__DOT__do_wr__d_666 = 0U;
        __Vtask_tb_csr_golden__DOT__do_wr__i_665 = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_66 = __Vtask_tb_csr_golden__DOT__do_wr__i_665;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_65 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_66)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_65 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_66)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_65 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_66 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_65 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_66 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_667 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_65;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_673 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_672 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_671 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_670 = __Vtask_tb_csr_golden__DOT__do_wr__d_666;
        __Vtask_tb_csr_golden__DOT__apb__a_669 = __Vtask_tb_csr_golden__DOT__do_wr____VlefCall_0__iaddr_667;
        __Vtask_tb_csr_golden__DOT__apb__wr_668 = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_674 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_675 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_668;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_669;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_670;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_671;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_672;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_674 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_675 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_675)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_674 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_674);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_675 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_674)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_675 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_675)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_675) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_674);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_673) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_677 = "write without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_676 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_676))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_677));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_676)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_676) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__m_write__s_680 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__m_write__d_679 
            = __Vtask_tb_csr_golden__DOT__do_wr__d_666;
        __Vtask_tb_csr_golden__DOT__m_write__i_678 
            = __Vtask_tb_csr_golden__DOT__do_wr__i_665;
        if ((4U & (IData)(__Vtask_tb_csr_golden__DOT__m_write__s_680))) {
            vlSelfRef.tb_csr_golden__DOT__m_mode[(7U 
                                                  & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                = (0x0000000fU & (__Vtask_tb_csr_golden__DOT__m_write__d_679 
                                  >> 0x14U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                = ((0x1eU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)]) 
                   | (1U & (__Vtask_tb_csr_golden__DOT__m_write__d_679 
                            >> 0x13U)));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                = ((0x1dU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                                      >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_679 
                                                   >> 0x12U))))) 
                      << 1U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                = ((0x1bU & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)]) 
                   | ((CData)((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                      [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                                      >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_679 
                                                >> 0x11U)))) 
                      << 2U));
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                = (0x17U & vlSelfRef.tb_csr_golden__DOT__m_f
                   [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)]);
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                        >> 1U) & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_679 
                                     >> 0x12U))))) {
                ++(vlSelf->__Vcoverage[1425]);
            }
            if ((0x00040000U & __Vtask_tb_csr_golden__DOT__m_write__d_679)) {
                ++(vlSelf->__Vcoverage[1426]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                          >> 1U)))) {
                ++(vlSelf->__Vcoverage[1427]);
            }
            if ((1U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                        [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                        >> 2U) & (__Vtask_tb_csr_golden__DOT__m_write__d_679 
                                  >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1428]);
            }
            if ((1U & (~ (__Vtask_tb_csr_golden__DOT__m_write__d_679 
                          >> 0x11U)))) {
                ++(vlSelf->__Vcoverage[1429]);
            }
            if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__m_f
                          [(7U & __Vtask_tb_csr_golden__DOT__m_write__i_678)] 
                          >> 2U)))) {
                ++(vlSelf->__Vcoverage[1430]);
            }
            ++(vlSelf->__Vcoverage[1431]);
        } else {
            ++(vlSelf->__Vcoverage[1432]);
        }
        ++(vlSelf->__Vcoverage[1433]);
        ++(vlSelf->__Vcoverage[1465]);
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_f = 4U;
        vlSelfRef.tb_csr_golden__DOT__c_val = 1U;
        vlSelfRef.tb_csr_golden__DOT__arm_rd = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_68 = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_67 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_68)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_67 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_68)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_67 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_68 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_67 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_68 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__t_collisions____VlefCall_0__iaddr_478 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_67;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_686 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_685 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_684 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_683 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_682 = __Vtask_tb_csr_golden__DOT__t_collisions____VlefCall_0__iaddr_478;
        __Vtask_tb_csr_golden__DOT__apb__wr_681 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_687 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_688 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_681;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_682;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_683;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_684;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_685;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_687 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_688 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_688)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_687 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_687);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_688 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_687)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_688 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_688)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_688) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_687);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_686) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_690 = "r2c collision armed and fired"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_689 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_rd)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_689))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_690));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_689)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_689) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_692 = "r2c: the colliding read returns the value before the hardware load"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_691 = (1U 
                                                   & (~ 
                                                      (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                       >> 0x0fU)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_691))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_692));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_691)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_691) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)] 
            = (0x10U | vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_694 = "r2c: hardware load 1 wins over the read clear"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_693 = (
                                                   (0x27U 
                                                    >= 
                                                    (0x0000003fU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))) 
                                                   && (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                  >> 
                                                                  (0x0000003fU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_693))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_694));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_693)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_693) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_r2c_hw = 
            ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_r2c_hw);
        __Vtask_tb_csr_golden__DOT__do_rd__i_695 = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        __Vtask_tb_csr_golden__DOT__do_rd__exp_697 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__i_70 = __Vtask_tb_csr_golden__DOT__do_rd__i_695;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_69 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_69 
            = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> (0x0000003fU 
                                              & VL_MULS_III(32, (IData)(8U), __Vfunc_tb_csr_golden__DOT__predict__i_70)))) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__m_mode
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_70)]) 
                                             << 4U) 
                                            | ((((2U 
                                                  & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_70)] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_70)] 
                                                       >> 1U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_70)] 
                                                       >> 2U) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                        [
                                                        (7U 
                                                         & __Vfunc_tb_csr_golden__DOT__predict__i_70)] 
                                                        >> 3U)))))) 
                << 0x00000010U) | (0x00008000U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                   [
                                                   (7U 
                                                    & __Vfunc_tb_csr_golden__DOT__predict__i_70)] 
                                                   >> 4U) 
                                                  << 0x0000000fU)));
        ++(vlSelf->__Vcoverage[1424]);
        __Vtask_tb_csr_golden__DOT__do_rd__exp_697 
            = __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_69;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_72 = __Vtask_tb_csr_golden__DOT__do_rd__i_695;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_71 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_72)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_71 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_72)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_71 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_72 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_71 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_72 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_696 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_71;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_703 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_702 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_701 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_700 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_699 = __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_696;
        __Vtask_tb_csr_golden__DOT__apb__wr_698 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_704 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_705 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_698;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_699;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_700;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_701;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_702;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_704 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_705 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_705)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_704 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_704);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_705 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_704)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_705 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_705)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_705) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_704);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_703) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_707 = "read without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_706 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_706))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_707));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_706)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_706) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_709 = "read data"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_708 = (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                   == __Vtask_tb_csr_golden__DOT__do_rd__exp_697);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_708))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_709));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_708)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_708) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_695)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_695)]);
        ++(vlSelf->__Vcoverage[1466]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_711 = "r2c: the next read returns the loaded 1"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_710 = (1U 
                                                   & (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                      >> 0x0fU));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_710))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_711));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_710)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_710) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__do_rd__i_712 = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        __Vtask_tb_csr_golden__DOT__do_rd__exp_714 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__i_74 = __Vtask_tb_csr_golden__DOT__do_rd__i_712;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_73 = 0;
        __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_73 
            = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_csr_golden__DOT__ro_flat 
                                          >> (0x0000003fU 
                                              & VL_MULS_III(32, (IData)(8U), __Vfunc_tb_csr_golden__DOT__predict__i_74)))) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_csr_golden__DOT__m_mode
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_74)]) 
                                             << 4U) 
                                            | ((((2U 
                                                  & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                     [
                                                     (7U 
                                                      & __Vfunc_tb_csr_golden__DOT__predict__i_74)] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_74)] 
                                                       >> 1U))) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                       [
                                                       (7U 
                                                        & __Vfunc_tb_csr_golden__DOT__predict__i_74)] 
                                                       >> 2U) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_csr_golden__DOT__m_f
                                                        [
                                                        (7U 
                                                         & __Vfunc_tb_csr_golden__DOT__predict__i_74)] 
                                                        >> 3U)))))) 
                << 0x00000010U) | (0x00008000U & ((vlSelfRef.tb_csr_golden__DOT__m_f
                                                   [
                                                   (7U 
                                                    & __Vfunc_tb_csr_golden__DOT__predict__i_74)] 
                                                   >> 4U) 
                                                  << 0x0000000fU)));
        ++(vlSelf->__Vcoverage[1424]);
        __Vtask_tb_csr_golden__DOT__do_rd__exp_714 
            = __Vfunc_tb_csr_golden__DOT__predict__Vfuncout_73;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_76 = __Vtask_tb_csr_golden__DOT__do_rd__i_712;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_75 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_76)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_75 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_76)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_75 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_76 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_75 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_76 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_713 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_75;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_720 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_719 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_718 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_717 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_716 = __Vtask_tb_csr_golden__DOT__do_rd____VlefCall_0__iaddr_713;
        __Vtask_tb_csr_golden__DOT__apb__wr_715 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_721 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_722 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_715;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_716;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_717;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_718;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_719;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_721 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_722 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_722)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_721 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_721);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_722 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_721)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_722 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_722)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_722) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_721);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_720) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_724 = "read without error"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_723 = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__last_err)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_723))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_724));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_723)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_723) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_726 = "read data"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_725 = (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                   == __Vtask_tb_csr_golden__DOT__do_rd__exp_714);
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_725))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_726));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_725)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_725) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_712)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__do_rd__i_712)]);
        ++(vlSelf->__Vcoverage[1466]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_728 = "r2c: cleared by the previous read"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_727 = (1U 
                                                   & (~ 
                                                      (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                       >> 0x0fU)));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_727))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_728));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_727)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_727) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        __Vtask_tb_csr_golden__DOT__hw_pulse__v_731 = 1U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__f_730 = 4U;
        __Vtask_tb_csr_golden__DOT__hw_pulse__i_729 
            = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             350);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_729) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_730)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                = (((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_729) 
                                                + __Vtask_tb_csr_golden__DOT__hw_pulse__f_730)))) 
                    & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_731)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_729) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_730)))));
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                   | (0x000000ffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_729) 
                                                      + __Vtask_tb_csr_golden__DOT__hw_pulse__f_730)))));
        }
        Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(vlSelf, 
                                                             "@(negedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e963__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             353);
        if (VL_LIKELY(((0x27U >= (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_729) 
                                                 + __Vtask_tb_csr_golden__DOT__hw_pulse__f_730)))))) {
            vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                = ((~ (1ULL << (0x0000003fU & (VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__hw_pulse__i_729) 
                                               + __Vtask_tb_csr_golden__DOT__hw_pulse__f_730)))) 
                   & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
        }
        if (VL_LIKELY(((4U >= (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_730))))) {
            vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_729)] 
                = (((~ ((CData)(1U) << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_730))) 
                    & vlSelfRef.tb_csr_golden__DOT__m_f
                    [(7U & __Vtask_tb_csr_golden__DOT__hw_pulse__i_729)]) 
                   | (0x1fU & ((CData)((IData)(__Vtask_tb_csr_golden__DOT__hw_pulse__v_731)) 
                               << (7U & __Vtask_tb_csr_golden__DOT__hw_pulse__f_730))));
        }
        ++(vlSelf->__Vcoverage[1438]);
        vlSelfRef.tb_csr_golden__DOT__c_inst = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        vlSelfRef.tb_csr_golden__DOT__c_f = 4U;
        vlSelfRef.tb_csr_golden__DOT__c_val = 0U;
        vlSelfRef.tb_csr_golden__DOT__arm_rd = 1U;
        __Vfunc_tb_csr_golden__DOT__iaddr__i_78 = __Vtask_tb_csr_golden__DOT__t_collisions__a_479;
        __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_77 = 0;
        if ((0U == __Vfunc_tb_csr_golden__DOT__iaddr__i_78)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_77 = 0U;
            ++(vlSelf->__Vcoverage[1422]);
        } else if (VL_GTS_III(32, 4U, __Vfunc_tb_csr_golden__DOT__iaddr__i_78)) {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_77 
                = (0x0000ffffU & ((IData)(0x0100U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_78 
                                      - (IData)(1U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1420]);
        } else {
            __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_77 
                = (0x0000ffffU & ((IData)(0x0200U) 
                                  + ((__Vfunc_tb_csr_golden__DOT__iaddr__i_78 
                                      - (IData)(4U)) 
                                     << 2U)));
            ++(vlSelf->__Vcoverage[1421]);
        }
        ++(vlSelf->__Vcoverage[1423]);
        __Vtask_tb_csr_golden__DOT__t_collisions____VlefCall_1__iaddr_477 
            = __Vfunc_tb_csr_golden__DOT__iaddr__Vfuncout_77;
        __Vtask_tb_csr_golden__DOT__apb__chain_next_737 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__p_736 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__s_735 = 0x0fU;
        __Vtask_tb_csr_golden__DOT__apb__d_734 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__a_733 = __Vtask_tb_csr_golden__DOT__t_collisions____VlefCall_1__iaddr_477;
        __Vtask_tb_csr_golden__DOT__apb__wr_732 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__k_738 = 0;
        __Vtask_tb_csr_golden__DOT__apb__done_739 = 0U;
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1210]);
        } else {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 183);
            ++(vlSelf->__Vcoverage[1209]);
        }
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             184);
        vlSelfRef.tb_csr_golden__DOT__psel = 1U;
        vlSelfRef.tb_csr_golden__DOT__penable = 0U;
        vlSelfRef.tb_csr_golden__DOT__pwrite = __Vtask_tb_csr_golden__DOT__apb__wr_732;
        vlSelfRef.tb_csr_golden__DOT__paddr = __Vtask_tb_csr_golden__DOT__apb__a_733;
        vlSelfRef.tb_csr_golden__DOT__pwdata = __Vtask_tb_csr_golden__DOT__apb__d_734;
        vlSelfRef.tb_csr_golden__DOT__pstrb = __Vtask_tb_csr_golden__DOT__apb__s_735;
        vlSelfRef.tb_csr_golden__DOT__pprot = __Vtask_tb_csr_golden__DOT__apb__p_736;
        Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                             "@(posedge tb_csr_golden.clk_apb)");
        co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_csr_golden.clk_apb)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             186);
        vlSelfRef.tb_csr_golden__DOT__penable = 1U;
        __Vtask_tb_csr_golden__DOT__apb__k_738 = 0U;
        __Vtask_tb_csr_golden__DOT__apb__done_739 = 0U;
        while ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_739)))) {
            Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(vlSelf, 
                                                                 "@(posedge tb_csr_golden.clk_apb)");
            co_await vlSelfRef.__VtrigSched_hf924e64e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_csr_golden.clk_apb)", 
                                                                 "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                                                 190);
            __Vtask_tb_csr_golden__DOT__apb__k_738 
                = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_738);
            if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
                __Vtask_tb_csr_golden__DOT__apb__done_739 = 1U;
                vlSelfRef.tb_csr_golden__DOT__last_rdata 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
                vlSelfRef.tb_csr_golden__DOT__last_err 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
                vlSelfRef.tb_csr_golden__DOT__last_mode0 
                    = (0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat);
                ++(vlSelf->__Vcoverage[1215]);
            } else {
                ++(vlSelf->__Vcoverage[1216]);
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000258U, __Vtask_tb_csr_golden__DOT__apb__k_738)))) {
                __Vtask_tb_csr_golden__DOT__apb__done_739 = 1U;
                VL_WRITEF_NX("FAIL %0t ps: no PREADY within 600 cycles\n",2, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                vlSelfRef.tb_csr_golden__DOT__n_chk 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_chk);
                vlSelfRef.tb_csr_golden__DOT__last_err = 0U;
                ++(vlSelf->__Vcoverage[1217]);
            } else {
                ++(vlSelf->__Vcoverage[1218]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__apb__done_739)))) {
                ++(vlSelf->__Vcoverage[1213]);
            }
            if (__Vtask_tb_csr_golden__DOT__apb__done_739) {
                ++(vlSelf->__Vcoverage[1214]);
            }
            ++(vlSelf->__Vcoverage[1219]);
        }
        vlSelfRef.tb_csr_golden__DOT__last_cycles = 
            ((IData)(1U) + __Vtask_tb_csr_golden__DOT__apb__k_738);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             207);
        if (__Vtask_tb_csr_golden__DOT__apb__chain_next_737) {
            vlSelfRef.tb_csr_golden__DOT__chain = 1U;
            ++(vlSelf->__Vcoverage[1220]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__chain = 0U;
            vlSelfRef.tb_csr_golden__DOT__psel = 0U;
            vlSelfRef.tb_csr_golden__DOT__penable = 0U;
            ++(vlSelf->__Vcoverage[1221]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__chain)))) {
            ++(vlSelf->__Vcoverage[1211]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__chain) {
            ++(vlSelf->__Vcoverage[1212]);
        }
        ++(vlSelf->__Vcoverage[1222]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_741 = "r2c: the colliding read returns the stored 1"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_740 = (1U 
                                                   & (vlSelfRef.tb_csr_golden__DOT__last_rdata 
                                                      >> 0x0fU));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_740))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_741));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_740)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_740) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__m_f[(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)] 
            = (0x0fU & vlSelfRef.tb_csr_golden__DOT__m_f
               [(7U & __Vtask_tb_csr_golden__DOT__t_collisions__a_479)]);
        vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_743 = "r2c: field 0 after hardware 0 and read"s;
        __Vtask_tb_csr_golden__DOT__chk__ok_742 = (1U 
                                                   & (~ 
                                                      ((0x27U 
                                                        >= 
                                                        (0x0000003fU 
                                                         & ((IData)(4U) 
                                                            + 
                                                            VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))) 
                                                       && (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                                      >> 
                                                                      (0x0000003fU 
                                                                       & ((IData)(4U) 
                                                                          + 
                                                                          VL_MULS_III(32, (IData)(5U), __Vtask_tb_csr_golden__DOT__t_collisions__a_479)))))))));
        vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                               + vlSelfRef.tb_csr_golden__DOT__n_chk);
        if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_742))) {
            ++(vlSelf->__Vcoverage[1051]);
        } else {
            vlSelfRef.tb_csr_golden__DOT__n_fail = 
                ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
            VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_743));
            ++(vlSelf->__Vcoverage[1050]);
        }
        if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_742)))) {
            ++(vlSelf->__Vcoverage[1052]);
        }
        if (__Vtask_tb_csr_golden__DOT__chk__ok_742) {
            ++(vlSelf->__Vcoverage[1053]);
        }
        ++(vlSelf->__Vcoverage[1054]);
        vlSelfRef.tb_csr_golden__DOT__cov_hw_zero = 
            ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_hw_zero);
        __Vtask_tb_csr_golden__DOT__t_collisions__a_479 
            = ((IData)(1U) + __Vtask_tb_csr_golden__DOT__t_collisions__a_479);
        ++(vlSelf->__Vcoverage[1578]);
    }
    vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744 = "collisions"s;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747
                  ,"%s: mode[0] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[0U]
                  , '#',4,(0x0000000fU & vlSelfRef.tb_csr_golden__DOT__o_mode_flat)
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_746 = ((0x0000000fU 
                                                & vlSelfRef.tb_csr_golden__DOT__o_mode_flat) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[0U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_746))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_746)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_746) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749
                  ,"%s: flags[0] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[0U]
                  , '#',5,(0x0000001fU & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)));
    __Vtask_tb_csr_golden__DOT__chk__ok_748 = ((0x0000001fU 
                                                & (IData)(vlSelfRef.tb_csr_golden__DOT__o_f_flat)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[0U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_748))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_748)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_748) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747
                  ,"%s: mode[1] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[1U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 4U)), '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_746 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 4U)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[1U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_746))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_746)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_746) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749
                  ,"%s: flags[1] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[1U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 5U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_748 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 5U))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[1U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_748))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_748)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_748) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747
                  ,"%s: mode[2] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[2U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 8U)), '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_746 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 8U)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[2U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_746))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_746)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_746) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749
                  ,"%s: flags[2] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[2U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x0aU))));
    __Vtask_tb_csr_golden__DOT__chk__ok_748 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 0x0aU))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[2U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_748))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_748)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_748) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747
                  ,"%s: mode[3] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[3U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x0cU))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_746 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 0x0cU)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[3U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_746))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_746)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_746) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749
                  ,"%s: flags[3] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[3U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x0fU))));
    __Vtask_tb_csr_golden__DOT__chk__ok_748 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 0x0fU))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[3U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_748))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_748)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_748) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747
                  ,"%s: mode[4] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[4U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x10U))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_746 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 0x10U)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[4U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_746))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_746)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_746) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749
                  ,"%s: flags[4] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[4U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x14U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_748 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 0x14U))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[4U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_748))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_748)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_748) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747
                  ,"%s: mode[5] expected=%h actual=%h addr=%h write=%b data=%h strb=%h prot=%h err=%b cycles=%0d",10
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',4,vlSelfRef.tb_csr_golden__DOT__m_mode[5U]
                  , '#',4,(0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                          >> 0x14U))
                  , '#',16,(IData)(vlSelfRef.tb_csr_golden__DOT__paddr)
                  , '#',1,vlSelfRef.tb_csr_golden__DOT__pwrite
                  , '#',32,vlSelfRef.tb_csr_golden__DOT__pwdata
                  , '#',4,(IData)(vlSelfRef.tb_csr_golden__DOT__pstrb)
                  , '#',3,vlSelfRef.tb_csr_golden__DOT__pprot
                  , '#',1,(IData)(vlSelfRef.tb_csr_golden__DOT__last_err)
                  , '~',32,vlSelfRef.tb_csr_golden__DOT__last_cycles);
    __Vtask_tb_csr_golden__DOT__chk__ok_746 = ((0x0000000fU 
                                                & (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                                                   >> 0x14U)) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_mode[5U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_746))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_747));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_746)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_746) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749
                  ,"%s: flags[5] expected=%b actual=%b",3
                  , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk_out__tag_744)
                  , '#',5,vlSelfRef.tb_csr_golden__DOT__m_f[5U]
                  , '#',5,(0x0000001fU & (IData)((vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                  >> 0x19U))));
    __Vtask_tb_csr_golden__DOT__chk__ok_748 = ((0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                                                           >> 0x19U))) 
                                               == vlSelfRef.tb_csr_golden__DOT__m_f[5U]);
    vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                           + vlSelfRef.tb_csr_golden__DOT__n_chk);
    if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_748))) {
        ++(vlSelf->__Vcoverage[1051]);
    } else {
        vlSelfRef.tb_csr_golden__DOT__n_fail = ((IData)(1U) 
                                                + vlSelfRef.tb_csr_golden__DOT__n_fail);
        VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_749));
        ++(vlSelf->__Vcoverage[1050]);
    }
    if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_748)))) {
        ++(vlSelf->__Vcoverage[1052]);
    }
    if (__Vtask_tb_csr_golden__DOT__chk__ok_748) {
        ++(vlSelf->__Vcoverage[1053]);
    }
    ++(vlSelf->__Vcoverage[1054]);
    ++(vlSelf->__Vcoverage[1434]);
    ++(vlSelf->__Vcoverage[1435]);
    ++(vlSelf->__Vcoverage[1579]);
    vlSelfRef.tb_csr_golden__DOT__test_phase = 2U;
    ++(vlSelf->__Vcoverage[1678]);
    co_return;
}
