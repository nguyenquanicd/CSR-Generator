// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_csr_golden.h for the primary calling header

#include "Vtb_csr_golden__pch.h"

VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__5(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_csr_golden__DOT__unnamedblk1_8__DOT____Vrepeat7;
    tb_csr_golden__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    // Body
    tb_csr_golden__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0x00009c40U;
    while (VL_LTS_III(32, 0U, tb_csr_golden__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             928);
        tb_csr_golden__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (tb_csr_golden__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[1704]);
    }
    VL_WRITEF_NX("TB FAIL: global timeout\n",0);
    VL_FINISH_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 930, "");
    ++(vlSelf->__Vcoverage[1705]);
    co_return;
}

VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__6(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             27);
        vlSelfRef.tb_csr_golden__DOT__clk_reg = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__clk_reg)));
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__clk_reg)))) {
            ++(vlSelf->__Vcoverage[15]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__clk_reg) {
            ++(vlSelf->__Vcoverage[16]);
        }
        ++(vlSelf->__Vcoverage[17]);
    }
    co_return;
}

VlCoroutine Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__7(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_initial__TOP__Vtiming__7\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\tests\\golden_test\\tb_csr_golden.sv", 
                                             26);
        vlSelfRef.tb_csr_golden__DOT__clk_apb = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb)));
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb)))) {
            ++(vlSelf->__Vcoverage[12]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__clk_apb) {
            ++(vlSelf->__Vcoverage[13]);
        }
        ++(vlSelf->__Vcoverage[14]);
    }
    co_return;
}

bool Vtb_csr_golden___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___trigger_anySet__ico\n"); );
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

bool Vtb_csr_golden___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___trigger_anySet__act\n"); );
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

void Vtb_csr_golden___024root___act_comb__TOP__0(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___act_comb__TOP__0\n"); );
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 853, vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data, vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_key_data);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_key_data 
            = vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 916, vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment, vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_monitor_key_fragment);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_monitor_key_fragment 
            = vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment;
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
    if ((0U != (0x000000ffU & ((IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat) 
                               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 1706, (IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events 
            = (0x000000ffU & (IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat));
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3019]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_5 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat))
                                     ? (IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat)
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3016]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3026]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_6 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3032]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_7 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3064]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_11 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 5U)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 5U))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3061]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3071]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_12 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3077]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_13 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3109]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_17 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 0x0000000aU)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 0x0000000aU))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3106]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3116]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_18 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3122]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_19 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3154]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_23 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 0x0000000fU)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 0x0000000fU))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3151]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3161]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_24 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3167]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_25 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
    if (vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[3292]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_45 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3295]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask))) {
            ++(vlSelf->__Vcoverage[3293]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_44 
                = ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                    & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                   | (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)));
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
    if (vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[3290]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data)))) {
        ++(vlSelf->__Vcoverage[3291]);
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3229]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_35 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3232]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
            ++(vlSelf->__Vcoverage[3230]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_34 
                = (0x00007fffU & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                   & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                                  | (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                     & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask))));
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
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3227]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[3228]);
    }
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3280]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_43 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3283]);
        if ((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
            ++(vlSelf->__Vcoverage[3281]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_42 
                = (0x00007fffU & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                   & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                                  | ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                      >> 0x0fU) & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask))));
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
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3278]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3279]);
    }
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
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3199]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0))
                                     ? (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0)
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3196]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3197]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[3198]);
    }
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[3250]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_37 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0))
                                     ? ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0) 
                                        >> 1U) : ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture) 
                                                  >> 1U)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[3247]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3248]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3249]);
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd1) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd1)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 993, vlSelfRef.tb_csr_golden__DOT__mon_wd1, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd1);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd1 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd1;
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1))) {
        ++(vlSelf->__Vcoverage[3205]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_30 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd1));
    } else {
        ++(vlSelf->__Vcoverage[3208]);
        if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                   & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                      >> 0x12U)))) {
            ++(vlSelf->__Vcoverage[3206]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_30 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                         & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we1))) {
        ++(vlSelf->__Vcoverage[3256]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_38 
            = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd1) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[3259]);
        if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                      >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                >> 0x00000012U)))) {
            ++(vlSelf->__Vcoverage[3257]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_38 
                = (IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                            >> 1U) & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd2) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd2)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 997, vlSelfRef.tb_csr_golden__DOT__mon_wd2, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd2);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd2 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd2;
    }
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2))) {
        ++(vlSelf->__Vcoverage[3211]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_31 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd2));
    } else {
        ++(vlSelf->__Vcoverage[3214]);
        if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                   & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                      >> 0x11U)))) {
            ++(vlSelf->__Vcoverage[3212]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_31 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                         & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                             >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we2))) {
        ++(vlSelf->__Vcoverage[3262]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_39 
            = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd2) 
                     >> 1U));
    } else {
        ++(vlSelf->__Vcoverage[3265]);
        if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                      >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                >> 0x00000011U)))) {
            ++(vlSelf->__Vcoverage[3263]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_39 
                = (IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                            >> 1U) & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                       >> 0x11U) | 
                                      (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1922, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup;
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
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2108, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2548, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt;
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
}

void Vtb_csr_golden___024root___nba_sequent__TOP__0(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___nba_sequent__TOP__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_0;
    __Vtask_tb_csr_golden__DOT__chk__ok_0 = 0;
    CData/*0:0*/ __Vtask_tb_csr_golden__DOT__chk__ok_2;
    __Vtask_tb_csr_golden__DOT__chk__ok_2 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__lookup__a_0;
    __Vfunc_tb_csr_golden__DOT__lookup__a_0 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__lookup__a_1;
    __Vfunc_tb_csr_golden__DOT__lookup__a_1 = 0;
    SData/*15:0*/ __Vfunc_tb_csr_golden__DOT__lookup__a_2;
    __Vfunc_tb_csr_golden__DOT__lookup__a_2 = 0;
    // Body
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_en) {
            vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count 
                = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__reg_rd_event_count);
            vlSelfRef.tb_csr_golden__DOT__reg_rd_event_addr 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr;
            if ((1U & (((((~ (IData)(vlSelfRef.tb_csr_golden__DOT__psel)) 
                          | (~ (IData)(vlSelfRef.tb_csr_golden__DOT__penable))) 
                         | (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite)) 
                        | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr) 
                           != (IData)(vlSelfRef.tb_csr_golden__DOT__paddr))) 
                       | (0U != (3U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr)))))) {
                vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count);
                ++(vlSelf->__Vcoverage[1394]);
            } else {
                ++(vlSelf->__Vcoverage[1395]);
            }
            if ((0U != (3U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr)))) {
                ++(vlSelf->__Vcoverage[1396]);
            }
            if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr) 
                 != (IData)(vlSelfRef.tb_csr_golden__DOT__paddr))) {
                ++(vlSelf->__Vcoverage[1397]);
            }
            if (vlSelfRef.tb_csr_golden__DOT__pwrite) {
                ++(vlSelf->__Vcoverage[1398]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__penable)))) {
                ++(vlSelf->__Vcoverage[1399]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__psel)))) {
                ++(vlSelf->__Vcoverage[1400]);
            }
            if ((((((IData)(vlSelfRef.tb_csr_golden__DOT__psel) 
                    & (IData)(vlSelfRef.tb_csr_golden__DOT__penable)) 
                   & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite))) 
                  & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr) 
                     == (IData)(vlSelfRef.tb_csr_golden__DOT__paddr))) 
                 & (0U == (3U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr))))) {
                ++(vlSelf->__Vcoverage[1401]);
            }
            ++(vlSelf->__Vcoverage[1404]);
        } else if ((0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr))) {
            vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count 
                = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count);
            ++(vlSelf->__Vcoverage[1402]);
        } else {
            ++(vlSelf->__Vcoverage[1403]);
        }
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en) {
            vlSelfRef.tb_csr_golden__DOT____VlemLogOr_1 
                = (1U & ((((~ (IData)(vlSelfRef.tb_csr_golden__DOT__psel)) 
                           | (~ (IData)(vlSelfRef.tb_csr_golden__DOT__penable))) 
                          | (~ (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite))) 
                         | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr) 
                            != (IData)(vlSelfRef.tb_csr_golden__DOT__paddr))));
            vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count 
                = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__reg_wr_event_count);
            vlSelfRef.tb_csr_golden__DOT__reg_wr_event_addr 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr;
            if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT____VlemLogOr_1)))) {
                __Vfunc_tb_csr_golden__DOT__lookup__a_0 
                    = vlSelfRef.tb_csr_golden__DOT__paddr;
                vlSelfRef.tb_csr_golden__DOT____VlemCall_0__lookup = 0xffffffffU;
                if ((0U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_0__lookup = 0U;
                    ++(vlSelf->__Vcoverage[1392]);
                } else if ((0x0100U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_0__lookup = 1U;
                    ++(vlSelf->__Vcoverage[1391]);
                } else if ((0x0104U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_0__lookup = 2U;
                    ++(vlSelf->__Vcoverage[1390]);
                } else if ((0x0108U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_0__lookup = 3U;
                    ++(vlSelf->__Vcoverage[1389]);
                } else {
                    if ((((0x0200U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0)) 
                          & (0x0208U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))) 
                         & (0U == (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))))) {
                        vlSelfRef.tb_csr_golden__DOT____VlemCall_0__lookup 
                            = ((IData)(4U) + (((IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0) 
                                               - (IData)(0x00000200U)) 
                                              >> 2U));
                        ++(vlSelf->__Vcoverage[1383]);
                    } else {
                        ++(vlSelf->__Vcoverage[1384]);
                    }
                    if ((((0x0200U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0)) 
                          & (0x0208U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))) 
                         & (0U == (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))))) {
                        ++(vlSelf->__Vcoverage[1385]);
                    }
                    if ((0U != (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0)))) {
                        ++(vlSelf->__Vcoverage[1386]);
                    }
                    if ((0x0208U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))) {
                        ++(vlSelf->__Vcoverage[1387]);
                    }
                    if ((0x0200U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_0))) {
                        ++(vlSelf->__Vcoverage[1388]);
                    }
                }
                ++(vlSelf->__Vcoverage[1393]);
                vlSelfRef.tb_csr_golden__DOT____VlemLogOr_1 
                    = (VL_GTS_III(32, 0U, vlSelfRef.tb_csr_golden__DOT____VlemCall_0__lookup) 
                       && (0x0400U != (IData)(vlSelfRef.tb_csr_golden__DOT__paddr)));
            }
            if (vlSelfRef.tb_csr_golden__DOT____VlemLogOr_1) {
                vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count);
                ++(vlSelf->__Vcoverage[1405]);
            } else {
                ++(vlSelf->__Vcoverage[1406]);
            }
            __Vfunc_tb_csr_golden__DOT__lookup__a_1 
                = vlSelfRef.tb_csr_golden__DOT__paddr;
            vlSelfRef.tb_csr_golden__DOT____VlemCall_2__lookup = 0xffffffffU;
            if ((0U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))) {
                vlSelfRef.tb_csr_golden__DOT____VlemCall_2__lookup = 0U;
                ++(vlSelf->__Vcoverage[1392]);
            } else if ((0x0100U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))) {
                vlSelfRef.tb_csr_golden__DOT____VlemCall_2__lookup = 1U;
                ++(vlSelf->__Vcoverage[1391]);
            } else if ((0x0104U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))) {
                vlSelfRef.tb_csr_golden__DOT____VlemCall_2__lookup = 2U;
                ++(vlSelf->__Vcoverage[1390]);
            } else if ((0x0108U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))) {
                vlSelfRef.tb_csr_golden__DOT____VlemCall_2__lookup = 3U;
                ++(vlSelf->__Vcoverage[1389]);
            } else {
                if ((((0x0200U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1)) 
                      & (0x0208U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))) 
                     & (0U == (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_2__lookup 
                        = ((IData)(4U) + (((IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1) 
                                           - (IData)(0x00000200U)) 
                                          >> 2U));
                    ++(vlSelf->__Vcoverage[1383]);
                } else {
                    ++(vlSelf->__Vcoverage[1384]);
                }
                if ((((0x0200U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1)) 
                      & (0x0208U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))) 
                     & (0U == (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))))) {
                    ++(vlSelf->__Vcoverage[1385]);
                }
                if ((0U != (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1)))) {
                    ++(vlSelf->__Vcoverage[1386]);
                }
                if ((0x0208U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))) {
                    ++(vlSelf->__Vcoverage[1387]);
                }
                if ((0x0200U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_1))) {
                    ++(vlSelf->__Vcoverage[1388]);
                }
            }
            ++(vlSelf->__Vcoverage[1393]);
            if ((VL_GTS_III(32, 0U, vlSelfRef.tb_csr_golden__DOT____VlemCall_2__lookup) 
                 && (0x0400U != (IData)(vlSelfRef.tb_csr_golden__DOT__paddr)))) {
                ++(vlSelf->__Vcoverage[1407]);
            }
            if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr) 
                 != (IData)(vlSelfRef.tb_csr_golden__DOT__paddr))) {
                ++(vlSelf->__Vcoverage[1408]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite)))) {
                ++(vlSelf->__Vcoverage[1409]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__penable)))) {
                ++(vlSelf->__Vcoverage[1410]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__psel)))) {
                ++(vlSelf->__Vcoverage[1411]);
            }
            if ((((((IData)(vlSelfRef.tb_csr_golden__DOT__psel) 
                    & (IData)(vlSelfRef.tb_csr_golden__DOT__penable)) 
                   & (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite)) 
                  & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr) 
                     == (IData)(vlSelfRef.tb_csr_golden__DOT__paddr))) 
                 & (0x0400U == (IData)(vlSelfRef.tb_csr_golden__DOT__paddr)))) {
                ++(vlSelf->__Vcoverage[1412]);
            }
            vlSelfRef.tb_csr_golden__DOT____VlemLogAnd_4 
                = ((((IData)(vlSelfRef.tb_csr_golden__DOT__psel) 
                     & (IData)(vlSelfRef.tb_csr_golden__DOT__penable)) 
                    & (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite)) 
                   & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr) 
                      == (IData)(vlSelfRef.tb_csr_golden__DOT__paddr)));
            if (vlSelfRef.tb_csr_golden__DOT____VlemLogAnd_4) {
                __Vfunc_tb_csr_golden__DOT__lookup__a_2 
                    = vlSelfRef.tb_csr_golden__DOT__paddr;
                vlSelfRef.tb_csr_golden__DOT____VlemCall_3__lookup = 0xffffffffU;
                if ((0U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_3__lookup = 0U;
                    ++(vlSelf->__Vcoverage[1392]);
                } else if ((0x0100U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_3__lookup = 1U;
                    ++(vlSelf->__Vcoverage[1391]);
                } else if ((0x0104U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_3__lookup = 2U;
                    ++(vlSelf->__Vcoverage[1390]);
                } else if ((0x0108U == (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))) {
                    vlSelfRef.tb_csr_golden__DOT____VlemCall_3__lookup = 3U;
                    ++(vlSelf->__Vcoverage[1389]);
                } else {
                    if ((((0x0200U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2)) 
                          & (0x0208U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))) 
                         & (0U == (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))))) {
                        vlSelfRef.tb_csr_golden__DOT____VlemCall_3__lookup 
                            = ((IData)(4U) + (((IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2) 
                                               - (IData)(0x00000200U)) 
                                              >> 2U));
                        ++(vlSelf->__Vcoverage[1383]);
                    } else {
                        ++(vlSelf->__Vcoverage[1384]);
                    }
                    if ((((0x0200U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2)) 
                          & (0x0208U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))) 
                         & (0U == (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))))) {
                        ++(vlSelf->__Vcoverage[1385]);
                    }
                    if ((0U != (3U & (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2)))) {
                        ++(vlSelf->__Vcoverage[1386]);
                    }
                    if ((0x0208U <= (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))) {
                        ++(vlSelf->__Vcoverage[1387]);
                    }
                    if ((0x0200U > (IData)(__Vfunc_tb_csr_golden__DOT__lookup__a_2))) {
                        ++(vlSelf->__Vcoverage[1388]);
                    }
                }
                ++(vlSelf->__Vcoverage[1393]);
                vlSelfRef.tb_csr_golden__DOT____VlemLogAnd_4 
                    = VL_LTES_III(32, 0U, vlSelfRef.tb_csr_golden__DOT____VlemCall_3__lookup);
            }
            if (vlSelfRef.tb_csr_golden__DOT____VlemLogAnd_4) {
                ++(vlSelf->__Vcoverage[1413]);
            }
            ++(vlSelf->__Vcoverage[1416]);
        } else if ((0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr))) {
            vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count 
                = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__reg_event_bad_count);
            ++(vlSelf->__Vcoverage[1414]);
        } else {
            ++(vlSelf->__Vcoverage[1415]);
        }
        ++(vlSelf->__Vcoverage[1417]);
    } else {
        ++(vlSelf->__Vcoverage[1418]);
    }
    ++(vlSelf->__Vcoverage[1419]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) {
            vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_1 = "SVA-001: PREADY only while PSEL and PENABLE are high"s;
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            vlSelfRef.tb_csr_golden__DOT__cov_sva1 
                = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__cov_sva1);
            __Vtask_tb_csr_golden__DOT__chk__ok_0 = 
                ((IData)(vlSelfRef.tb_csr_golden__DOT__psel) 
                 & (IData)(vlSelfRef.tb_csr_golden__DOT__penable));
            if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_0))) {
                ++(vlSelf->__Vcoverage[1051]);
            } else {
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_1));
                ++(vlSelf->__Vcoverage[1050]);
            }
            vlSelfRef.tb_csr_golden__DOT__n_chk = ((IData)(1U) 
                                                   + vlSelfRef.tb_csr_golden__DOT__n_chk);
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_0)))) {
                ++(vlSelf->__Vcoverage[1052]);
            }
            if (__Vtask_tb_csr_golden__DOT__chk__ok_0) {
                ++(vlSelf->__Vcoverage[1053]);
            }
            ++(vlSelf->__Vcoverage[1054]);
            vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_3 = "SVA-001: PREADY lasts one cycle"s;
            __Vtask_tb_csr_golden__DOT__chk__ok_2 = 
                (1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__pready_q)));
            if (VL_LIKELY((__Vtask_tb_csr_golden__DOT__chk__ok_2))) {
                ++(vlSelf->__Vcoverage[1051]);
            } else {
                vlSelfRef.tb_csr_golden__DOT__n_fail 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__n_fail);
                VL_WRITEF_NX("FAIL %0t ps: %s\n",3, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , 'S',&(vlSelfRef.__Vtask_tb_csr_golden__DOT__chk__what_3));
                ++(vlSelf->__Vcoverage[1050]);
            }
            if ((1U & (~ (IData)(__Vtask_tb_csr_golden__DOT__chk__ok_2)))) {
                ++(vlSelf->__Vcoverage[1052]);
            }
            if (__Vtask_tb_csr_golden__DOT__chk__ok_2) {
                ++(vlSelf->__Vcoverage[1053]);
            }
            ++(vlSelf->__Vcoverage[1054]);
            if (((IData)(vlSelfRef.tb_csr_golden__DOT__psel) 
                 & (IData)(vlSelfRef.tb_csr_golden__DOT__penable))) {
                ++(vlSelf->__Vcoverage[1059]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__penable)))) {
                ++(vlSelf->__Vcoverage[1060]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__psel)))) {
                ++(vlSelf->__Vcoverage[1061]);
            }
            ++(vlSelf->__Vcoverage[1062]);
        } else {
            ++(vlSelf->__Vcoverage[1063]);
        }
        ++(vlSelf->__Vcoverage[1064]);
        vlSelfRef.tb_csr_golden__DOT__pready_q = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready;
    } else {
        ++(vlSelf->__Vcoverage[1065]);
        vlSelfRef.tb_csr_golden__DOT__pready_q = 0U;
    }
    ++(vlSelf->__Vcoverage[1066]);
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__pready_q) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready_q))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1056, vlSelfRef.tb_csr_golden__DOT__pready_q, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready_q);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready_q 
            = vlSelfRef.tb_csr_golden__DOT__pready_q;
    }
}

void Vtb_csr_golden___024root___nba_comb__TOP__0(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___nba_comb__TOP__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    if ((0ULL != (vlSelfRef.tb_csr_golden__DOT__ro_flat 
                  ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__ro_flat))) {
        VL_COV_TOGGLE_CHG_ST_Q(64, vlSelf->__Vcoverage + 354, vlSelfRef.tb_csr_golden__DOT__ro_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__ro_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__ro_flat 
            = vlSelfRef.tb_csr_golden__DOT__ro_flat;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 853, vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data, vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_key_data);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_key_data 
            = vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 916, vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment, vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_monitor_key_fragment);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__i_hw_clear_monitor_key_fragment 
            = vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment;
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__chain) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__chain))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1206, vlSelfRef.tb_csr_golden__DOT__chain, vlSelfRef.tb_csr_golden__DOT____Vtogcov__chain);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__chain 
            = vlSelfRef.tb_csr_golden__DOT__chain;
    }
    if ((0U != (0x000000ffU & ((IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat) 
                               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events))))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSelf->__Vcoverage + 1706, (IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_engine_events 
            = (0x000000ffU & (IData)(vlSelfRef.tb_csr_golden__DOT__ro_flat));
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_prot_ok))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1924, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_prot_ok);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_prot_ok 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_prot_ok;
    }
}

void Vtb_csr_golden___024root___nba_sequent__TOP__2(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___nba_sequent__TOP__2\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3297]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt;
    } else {
        ++(vlSelf->__Vcoverage[3296]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3298]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3299]);
    }
    ++(vlSelf->__Vcoverage[3300]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup) 
             & (IData)(vlSelfRef.tb_csr_golden__DOT__slverr_en))) {
            ++(vlSelf->__Vcoverage[2924]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr;
        } else {
            ++(vlSelf->__Vcoverage[2925]);
        }
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup) 
             & (IData)(vlSelfRef.tb_csr_golden__DOT__slverr_en))) {
            ++(vlSelf->__Vcoverage[2926]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__slverr_en)))) {
            ++(vlSelf->__Vcoverage[2927]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup)))) {
            ++(vlSelf->__Vcoverage[2928]);
        }
    } else {
        ++(vlSelf->__Vcoverage[2929]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[2930]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[2931]);
    }
    ++(vlSelf->__Vcoverage[2932]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3048]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_mode_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_start_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_fault_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_pending_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[3047]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3049]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3050]);
    }
    ++(vlSelf->__Vcoverage[3051]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3093]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_mode_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_start_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_fault_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_pending_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[3092]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3094]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3095]);
    }
    ++(vlSelf->__Vcoverage[3096]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3138]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_mode_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_start_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_fault_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_pending_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[3137]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3139]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3140]);
    }
    ++(vlSelf->__Vcoverage[3141]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3183]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_mode_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_start_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_fault_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_pending_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[3182]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3184]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3185]);
    }
    ++(vlSelf->__Vcoverage[3186]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr) {
            ++(vlSelf->__Vcoverage[2912]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                = vlSelfRef.tb_csr_golden__DOT__pwdata;
        } else {
            ++(vlSelf->__Vcoverage[2913]);
        }
    } else {
        ++(vlSelf->__Vcoverage[2914]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[2915]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[2916]);
    }
    ++(vlSelf->__Vcoverage[2917]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr) {
            ++(vlSelf->__Vcoverage[2918]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb 
                = vlSelfRef.tb_csr_golden__DOT__pstrb;
        } else {
            ++(vlSelf->__Vcoverage[2919]);
        }
    } else {
        ++(vlSelf->__Vcoverage[2920]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wstrb = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[2921]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[2922]);
    }
    ++(vlSelf->__Vcoverage[2923]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) {
            ++(vlSelf->__Vcoverage[3327]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata 
                = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt;
        } else {
            ++(vlSelf->__Vcoverage[3328]);
        }
    } else {
        ++(vlSelf->__Vcoverage[3329]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3330]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3331]);
    }
    ++(vlSelf->__Vcoverage[3332]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        if (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete) {
            ++(vlSelf->__Vcoverage[2906]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr 
                = vlSelfRef.tb_csr_golden__DOT__paddr;
        } else {
            ++(vlSelf->__Vcoverage[2907]);
        }
    } else {
        ++(vlSelf->__Vcoverage[2908]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[2909]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[2910]);
    }
    ++(vlSelf->__Vcoverage[2911]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3235]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold 
            = ((0xf0U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold)) 
               | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture 
            = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture)) 
               | (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error 
            = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error)) 
               | (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending 
            = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending)) 
               | (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow 
            = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow)) 
               | (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match 
            = ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match)) 
               | (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = ((0x3fff8000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment) 
               | (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    } else {
        ++(vlSelf->__Vcoverage[3234]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold 
            = (0xf0U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture 
            = (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error 
            = (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending 
            = (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow 
            = (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match 
            = (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = (0x3fff8000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3236]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3237]);
    }
    ++(vlSelf->__Vcoverage[3238]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3286]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold 
            = ((0x0fU & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold)) 
               | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture 
            = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture)) 
               | (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_capture_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error 
            = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error)) 
               | (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_error_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending 
            = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending)) 
               | (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_pending_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow 
            = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow)) 
               | (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_overflow_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match 
            = ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match)) 
               | (2U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt)));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = ((0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment) 
               | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                  << 0x0000000fU));
    } else {
        ++(vlSelf->__Vcoverage[3285]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold 
            = (0x0fU & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match));
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3287]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3288]);
    }
    ++(vlSelf->__Vcoverage[3289]);
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3004]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt;
    } else {
        ++(vlSelf->__Vcoverage[3003]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[3005]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[3006]);
    }
    ++(vlSelf->__Vcoverage[3007]);
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 789, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data, vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_key_data);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_key_data 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pslverr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 145, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pslverr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pslverr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_slverr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1722, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_mode);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1754, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_done;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1748, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1730, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1736, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1742, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_engine_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1776, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_mode);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1808, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_done;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1802, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1784, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1790, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1796, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_0_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1830, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_mode);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1862, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_done;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1856, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1838, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1844, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1850, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_1_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1884, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_mode);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_mode 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1916, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_done 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_done;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1910, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1892, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_start 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1898, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_fault 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1904, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__o_port_2_pending 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending;
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
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__prdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 147, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata, vlSelfRef.tb_csr_golden__DOT____Vtogcov__prdata);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__prdata 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_rdata;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1934, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_addr);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_addr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr;
    }
    vlSelfRef.__Vdfg_Regularize_196 = (((0x0204U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)) 
                                        << 1U) | (0x0200U 
                                                  == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
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
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o4)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 985, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o4);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o4 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o3)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 981, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o3);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_o3 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_overflow;
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 143, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready, vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__pready 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_pready;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wmask))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2038, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wmask);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__reg_wmask 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__o_mode_flat 
                ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_mode_flat))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 645, vlSelfRef.tb_csr_golden__DOT__o_mode_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_mode_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_mode_flat 
            = vlSelfRef.tb_csr_golden__DOT__o_mode_flat;
    }
    if ((0ULL != (vlSelfRef.tb_csr_golden__DOT__o_f_flat 
                  ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_f_flat))) {
        VL_COV_TOGGLE_CHG_ST_Q(40, vlSelf->__Vcoverage + 709, vlSelfRef.tb_csr_golden__DOT__o_f_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_f_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__o_f_flat 
            = vlSelfRef.tb_csr_golden__DOT__o_f_flat;
    }
}

void Vtb_csr_golden___024root___nba_comb__TOP__3(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___nba_comb__TOP__3\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup 
        = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__penable)) 
           & (IData)(vlSelfRef.tb_csr_golden__DOT__psel));
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__hw_clr) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_clr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1445, vlSelfRef.tb_csr_golden__DOT__hw_clr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_clr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_clr 
            = vlSelfRef.tb_csr_golden__DOT__hw_clr;
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
    if ((0ULL != (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                  ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_we_flat))) {
        VL_COV_TOGGLE_CHG_ST_Q(40, vlSelf->__Vcoverage + 483, vlSelfRef.tb_csr_golden__DOT__hw_we_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_we_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_we_flat 
            = vlSelfRef.tb_csr_golden__DOT__hw_we_flat;
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat) 
               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1734, (IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_start 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 2U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1746, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 2U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 2U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 4U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1758, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 4U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_engine_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 4U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 6U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1794, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 6U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 6U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 8U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1806, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 8U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_0_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 8U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000aU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1842, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000aU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_start 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000aU)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000cU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1854, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000cU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000cU)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x0000000eU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1866, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x0000000eU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_1_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x0000000eU)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x00000010U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1902, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x00000010U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x00000010U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        >> 0x00000012U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1914, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                                       >> 0x00000012U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_we_port_2_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                             >> 0x00000012U)));
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
    vlSelfRef.tb_csr_golden__DOT__mon_we4 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                        >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
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
    if ((0ULL != (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                  ^ vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_wd_flat))) {
        VL_COV_TOGGLE_CHG_ST_Q(40, vlSelf->__Vcoverage + 564, vlSelfRef.tb_csr_golden__DOT__hw_wd_flat, vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_wd_flat);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__hw_wd_flat 
            = vlSelfRef.tb_csr_golden__DOT__hw_wd_flat;
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
               ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1732, (IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_start 
            = (1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 2U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1744, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 2U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 2U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 4U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1756, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 4U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_engine_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 4U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 6U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1792, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 6U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 6U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 8U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1804, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 8U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_0_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 8U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000aU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_start)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1840, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000aU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_start);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_start 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000aU)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000cU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1852, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000cU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_pending);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_pending 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000cU)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x0000000eU)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_done)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1864, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x0000000eU)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_done);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_1_done 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x0000000eU)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x00000010U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_fault)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1900, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x00000010U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_fault);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_fault 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000010U)));
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
    if ((1U & ((IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        >> 0x00000012U)) ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1912, (IData)(
                                                                      (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                                       >> 0x00000012U)), vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_overflow);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__i_hw_wdata_port_2_overflow 
            = (1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                             >> 0x00000012U)));
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
    vlSelfRef.tb_csr_golden__DOT__mon_wd4 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                        >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                           >> 0x00000018U))));
    vlSelfRef.tb_csr_golden__DOT__mon_wd3 = ((2U & 
                                              ((IData)(
                                                       (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                        >> 0x0000001cU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                           >> 0x00000017U))));
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1922, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_setup 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup;
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
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete 
        = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_slverr)) 
           & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_setup));
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we4) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we4)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1025, vlSelfRef.tb_csr_golden__DOT__mon_we4, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we4);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we4 
            = vlSelfRef.tb_csr_golden__DOT__mon_we4;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_we3) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we3)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1021, vlSelfRef.tb_csr_golden__DOT__mon_we3, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we3);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_we3 
            = vlSelfRef.tb_csr_golden__DOT__mon_we3;
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
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd4) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd4)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1005, vlSelfRef.tb_csr_golden__DOT__mon_wd4, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd4);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd4 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd4;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd3) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd3)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1001, vlSelfRef.tb_csr_golden__DOT__mon_wd3, vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd3);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__mon_wd3 
            = vlSelfRef.tb_csr_golden__DOT__mon_wd3;
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
}

void Vtb_csr_golden___024root___nba_comb__TOP__4(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___nba_comb__TOP__4\n"); );
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
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2108, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rdata_nxt;
    }
}

void Vtb_csr_golden___024root___nba_sequent__TOP__4(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___nba_sequent__TOP__4\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[2994]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr;
    } else {
        ++(vlSelf->__Vcoverage[2993]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture = 0U;
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__rst_n_apb)))) {
        ++(vlSelf->__Vcoverage[2995]);
    }
    if (vlSelfRef.tb_csr_golden__DOT__rst_n_apb) {
        ++(vlSelf->__Vcoverage[2996]);
    }
    ++(vlSelf->__Vcoverage[2997]);
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2102, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_en);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_en 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture;
    }
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
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor 
        = ((IData)(vlSelfRef.__Vdfg_Regularize_196) 
           & (- (IData)((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture))));
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2104, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wr_en);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_wr_en 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture) 
           & (0x0400U == (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_addr)));
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
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor 
        = ((IData)(vlSelfRef.__Vdfg_Regularize_196) 
           & (- (IData)((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture))));
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2260, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_0);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_0;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2346, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_1);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_1;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2432, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_2);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_port_2;
    }
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2616, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_monitor);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_rd_monitor 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_rd_monitor;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_key))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2748, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_key);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_key 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2172, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3014]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_4 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3015]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_4;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[3008]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[3009]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[3010]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[3011]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[3012]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[3013]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2258, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_0);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_0 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3059]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_10 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3060]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_10;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[3053]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[3054]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[3055]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[3056]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[3057]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[3058]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2344, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_1);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_1 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3104]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_16 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3105]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_16;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[3098]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[3099]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[3100]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[3101]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[3102]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[3103]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2430, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_2);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_we_port_2 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3149]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_22 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3150]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_22;
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[3143]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[3144]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[3145]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[3146]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[3147]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[3148]);
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3194]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[3195]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_28;
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[3188]);
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[3189]);
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[3190]);
    }
    if ((1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[3191]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[3192]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[3193]);
    }
    if ((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[3245]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[3239]);
    }
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[3240]);
    }
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[3241]);
    }
    if ((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[3242]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[3243]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3244]);
    }
    vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_en 
        = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
           | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
              | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
                 | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
                    | ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key) 
                       | (0U != (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor)))))));
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 221, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_addr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_rd_addr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_rd_addr;
    }
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
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 253, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr, vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_addr);
        vlSelfRef.tb_csr_golden__DOT____Vtogcov__reg_wr_addr 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__o_reg_wr_addr;
    }
}

void Vtb_csr_golden___024root___nba_comb__TOP__6(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___nba_comb__TOP__6\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[3292]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_45 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3295]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask))) {
            ++(vlSelf->__Vcoverage[3293]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_44 
                = ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                    & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                   | (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)));
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
    if (vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[3290]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_key_data)))) {
        ++(vlSelf->__Vcoverage[3291]);
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3019]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_5 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__hw_we_flat))
                                     ? (IData)(vlSelfRef.tb_csr_golden__DOT__hw_wd_flat)
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3016]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3026]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_6 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3032]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_7 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3064]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_11 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 5U)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 5U))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3061]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3071]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_12 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3077]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_13 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_0_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3109]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_17 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 0x0000000aU)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 0x0000000aU))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3106]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3116]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_18 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3122]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_19 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_1_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3154]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_23 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)((vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                                                   >> 0x0000000fU)))
                                     ? (IData)((vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                                                >> 0x0000000fU))
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_start)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
         & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[3151]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[3161]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_24 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_fault) 
                   & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
             & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[3167]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_25 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_port_2_pending) 
                   & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3199]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0))
                                     ? (IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0)
                                     : (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
               & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[3196]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
                   & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                      >> 0x12U)))) {
            ++(vlSelf->__Vcoverage[3206]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_30 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                         & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
                   & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                      >> 0x11U)))) {
            ++(vlSelf->__Vcoverage[3212]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_31 
                = (1U & ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                         & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                             >> 0x11U) | (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[3250]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_37 
            = (1U & (((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                       & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__mon_we0))
                                     ? ((IData)(vlSelfRef.tb_csr_golden__DOT__mon_wd0) 
                                        >> 1U) : ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_capture) 
                                                  >> 1U)) 
                                   & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
                  >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[3247]);
    }
    if ((1U & (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
                      >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                >> 0x00000012U)))) {
            ++(vlSelf->__Vcoverage[3257]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_38 
                = (IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_error) 
                            >> 1U) & (~ ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                          & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
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
                      >> 1U) & (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
                                >> 0x00000011U)))) {
            ++(vlSelf->__Vcoverage[3263]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_39 
                = (IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_pending) 
                            >> 1U) & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                       >> 0x11U) | 
                                      (~ (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask 
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
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3229]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_35 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3232]);
        if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
            ++(vlSelf->__Vcoverage[3230]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_34 
                = (0x00007fffU & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                   & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                                  | (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                     & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask))));
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
    if ((1U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3227]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[3228]);
    }
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3280]);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_43 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[3283]);
        if ((((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask)))) {
            ++(vlSelf->__Vcoverage[3281]);
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____VlemCond_42 
                = (0x00007fffU & ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wdata 
                                   & vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask) 
                                  | ((vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                      >> 0x0fU) & (~ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__reg_wmask))));
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
    if ((2U & (IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[3278]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_csr_golden__DOT__i_hw_clear_monitor_key_fragment) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[3279]);
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__g_sync_csrw_pready_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2991, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__g_sync_csrw_pready_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__g_sync_csrw_pready_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__w_pready_nxt;
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
    if ((0U != ((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt) 
                ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2548, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_monitor_match_nxt;
    }
    if ((0U != (vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt 
                ^ vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2750, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_key_data_nxt;
    }
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2190, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_engine_overflow_nxt;
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2276, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_0_overflow_nxt;
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2362, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_1_overflow_nxt;
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
    if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2448, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt);
        vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt 
            = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_port_2_overflow_nxt;
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
}

void Vtb_csr_golden___024root___eval_body__nba(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_body__nba\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_csr_golden___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x00000000000001fbULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_csr_golden___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
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
    if ((0x00000000000001dbULL & vlSelfRef.__VnbaTriggered[0U])) {
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
    if ((0x000000000000003bULL & vlSelfRef.__VnbaTriggered[0U])) {
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
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_csr_golden___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.tb_csr_golden__DOT__hw_clr) {
                if (VL_LIKELY(((0x27U >= (0x0000003fU 
                                          & (VL_MULS_III(32, (IData)(5U), vlSelfRef.tb_csr_golden__DOT__c_inst) 
                                             + vlSelfRef.tb_csr_golden__DOT__c_f)))))) {
                    vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        = ((~ (1ULL << (0x0000003fU 
                                        & (VL_MULS_III(32, (IData)(5U), vlSelfRef.tb_csr_golden__DOT__c_inst) 
                                           + vlSelfRef.tb_csr_golden__DOT__c_f)))) 
                           & vlSelfRef.tb_csr_golden__DOT__hw_we_flat);
                }
                vlSelfRef.tb_csr_golden__DOT__hw_clr = 0U;
                ++(vlSelf->__Vcoverage[1454]);
            } else {
                ++(vlSelf->__Vcoverage[1455]);
            }
            if ((((IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr) 
                  & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)) 
                 | ((IData)(vlSelfRef.tb_csr_golden__DOT__arm_rd) 
                    & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture)))) {
                if (VL_LIKELY(((0x27U >= (0x0000003fU 
                                          & (VL_MULS_III(32, (IData)(5U), vlSelfRef.tb_csr_golden__DOT__c_inst) 
                                             + vlSelfRef.tb_csr_golden__DOT__c_f)))))) {
                    vlSelfRef.tb_csr_golden__DOT__hw_wd_flat 
                        = (((~ (1ULL << (0x0000003fU 
                                         & (VL_MULS_III(32, (IData)(5U), vlSelfRef.tb_csr_golden__DOT__c_inst) 
                                            + vlSelfRef.tb_csr_golden__DOT__c_f)))) 
                            & vlSelfRef.tb_csr_golden__DOT__hw_wd_flat) 
                           | (0x000000ffffffffffULL 
                              & ((QData)((IData)(vlSelfRef.tb_csr_golden__DOT__c_val)) 
                                 << (0x0000003fU & 
                                     (VL_MULS_III(32, (IData)(5U), vlSelfRef.tb_csr_golden__DOT__c_inst) 
                                      + vlSelfRef.tb_csr_golden__DOT__c_f)))));
                    vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                        = (vlSelfRef.tb_csr_golden__DOT__hw_we_flat 
                           | (0x000000ffffffffffULL 
                              & ((QData)((IData)(1U)) 
                                 << (0x0000003fU & 
                                     (VL_MULS_III(32, (IData)(5U), vlSelfRef.tb_csr_golden__DOT__c_inst) 
                                      + vlSelfRef.tb_csr_golden__DOT__c_f)))));
                }
                vlSelfRef.tb_csr_golden__DOT__arm_wr = 0U;
                vlSelfRef.tb_csr_golden__DOT__arm_rd = 0U;
                vlSelfRef.tb_csr_golden__DOT__hw_clr = 1U;
                vlSelfRef.tb_csr_golden__DOT__arm_hits 
                    = ((IData)(1U) + vlSelfRef.tb_csr_golden__DOT__arm_hits);
                ++(vlSelf->__Vcoverage[1456]);
            } else {
                ++(vlSelf->__Vcoverage[1457]);
            }
            if (((IData)(vlSelfRef.tb_csr_golden__DOT__arm_rd) 
                 & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture))) {
                ++(vlSelf->__Vcoverage[1458]);
            }
            if (((IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr) 
                 & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture))) {
                ++(vlSelf->__Vcoverage[1459]);
            }
            if ((1U & ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)) 
                       & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture))))) {
                ++(vlSelf->__Vcoverage[1460]);
            }
            if ((1U & ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_wr_capture)) 
                       & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_rd))))) {
                ++(vlSelf->__Vcoverage[1461]);
            }
            if ((1U & ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)) 
                       & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__g_sync_csr__DOT__reg_rd_capture))))) {
                ++(vlSelf->__Vcoverage[1462]);
            }
            if ((1U & ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_wr)) 
                       & (~ (IData)(vlSelfRef.tb_csr_golden__DOT__arm_rd))))) {
                ++(vlSelf->__Vcoverage[1463]);
            }
            ++(vlSelf->__Vcoverage[1464]);
        }
    }
    if ((0x00000000000001fbULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_csr_golden___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x00000000000001ffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_csr_golden___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_csr_golden___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x00000000000001fbULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd 
                = ((~ (IData)(vlSelfRef.tb_csr_golden__DOT__pwrite)) 
                   & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete));
            vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr 
                = ((IData)(vlSelfRef.tb_csr_golden__DOT__pwrite) 
                   & (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_complete));
            if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd) 
                 ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_rd))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1932, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_rd);
                vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_rd 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_rd;
            }
            if (((IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr) 
                 ^ (IData)(vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_wr))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1930, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr, vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_wr);
                vlSelfRef.tb_csr_golden__DOT__u_dut__DOT____Vtogcov__w_apb_wr 
                    = vlSelfRef.tb_csr_golden__DOT__u_dut__DOT__w_apb_wr;
            }
        }
    }
    if ((0x00000000000001ffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_csr_golden___024root___nba_comb__TOP__6(vlSelf);
    }
}

void Vtb_csr_golden___024root___timing_ready(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___timing_ready\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf924e64e__0.ready("@(posedge tb_csr_golden.clk_apb)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready("@(posedge tb_csr_golden.clk_reg)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf924e963__0.ready("@(negedge tb_csr_golden.clk_apb)");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcd89c853__0.ready("@( (32'sh1 == tb_csr_golden.test_phase))");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcd89a2f0__0.ready("@( (32'sh2 == tb_csr_golden.test_phase))");
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcd89a859__0.ready("@( (32'sh3 == tb_csr_golden.test_phase))");
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcd8a794e__0.ready("@( (32'sh4 == tb_csr_golden.test_phase))");
    }
}

void Vtb_csr_golden___024root___timing_resume(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___timing_resume\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hf924e64e__0.moveToResumeQueue(
                                                          "@(posedge tb_csr_golden.clk_apb)");
    vlSelfRef.__VtrigSched_hb2c7a3b7__0.moveToResumeQueue(
                                                          "@(posedge tb_csr_golden.clk_reg)");
    vlSelfRef.__VtrigSched_hf924e963__0.moveToResumeQueue(
                                                          "@(negedge tb_csr_golden.clk_apb)");
    vlSelfRef.__VtrigSched_hcd89c853__0.moveToResumeQueue(
                                                          "@( (32'sh1 == tb_csr_golden.test_phase))");
    vlSelfRef.__VtrigSched_hcd89a2f0__0.moveToResumeQueue(
                                                          "@( (32'sh2 == tb_csr_golden.test_phase))");
    vlSelfRef.__VtrigSched_hcd89a859__0.moveToResumeQueue(
                                                          "@( (32'sh3 == tb_csr_golden.test_phase))");
    vlSelfRef.__VtrigSched_hcd8a794e__0.moveToResumeQueue(
                                                          "@( (32'sh4 == tb_csr_golden.test_phase))");
    vlSelfRef.__VtrigSched_hf924e64e__0.resume("@(posedge tb_csr_golden.clk_apb)");
    vlSelfRef.__VtrigSched_hb2c7a3b7__0.resume("@(posedge tb_csr_golden.clk_reg)");
    vlSelfRef.__VtrigSched_hf924e963__0.resume("@(negedge tb_csr_golden.clk_apb)");
    vlSelfRef.__VtrigSched_hcd89c853__0.resume("@( (32'sh1 == tb_csr_golden.test_phase))");
    vlSelfRef.__VtrigSched_hcd89a2f0__0.resume("@( (32'sh2 == tb_csr_golden.test_phase))");
    vlSelfRef.__VtrigSched_hcd89a859__0.resume("@( (32'sh3 == tb_csr_golden.test_phase))");
    vlSelfRef.__VtrigSched_hcd8a794e__0.resume("@( (32'sh4 == tb_csr_golden.test_phase))");
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_csr_golden___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_csr_golden___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root____VbeforeTrig_hf924e64e__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0 
        = vlSelfRef.tb_csr_golden__DOT__clk_apb;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root____VbeforeTrig_hb2c7a3b7__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_csr_golden__DOT__clk_reg) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_reg__0))) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_reg__0 
        = vlSelfRef.tb_csr_golden__DOT__clk_reg;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb2c7a3b7__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root____VbeforeTrig_hf924e963__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_csr_golden__DOT__clk_apb) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_csr_golden__DOT__clk_apb__0 
        = vlSelfRef.tb_csr_golden__DOT__clk_apb;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e64e__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf924e963__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_csr_golden___024root____VbeforeTrig_hcd89c853__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root____VbeforeTrig_hcd89c853__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h099e188a__0;
    __Vtrigprevexpr_h099e188a__0 = 0;
    // Body
    __Vtrigprevexpr_h099e188a__0 = (1U == vlSelfRef.tb_csr_golden__DOT__test_phase);
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h099e188a__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h099e188a__1)) 
                                  << 5U)));
    vlSelfRef.__Vtrigprevexpr_h099e188a__1 = __Vtrigprevexpr_h099e188a__0;
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcd89c853__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_csr_golden___024root____VbeforeTrig_hcd89a2f0__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root____VbeforeTrig_hcd89a2f0__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h099e47ff__0;
    __Vtrigprevexpr_h099e47ff__0 = 0;
    // Body
    __Vtrigprevexpr_h099e47ff__0 = (2U == vlSelfRef.tb_csr_golden__DOT__test_phase);
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h099e47ff__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h099e47ff__1)) 
                                  << 6U)));
    vlSelfRef.__Vtrigprevexpr_h099e47ff__1 = __Vtrigprevexpr_h099e47ff__0;
    if ((0x0000000000000040ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcd89a2f0__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_csr_golden___024root____VbeforeTrig_hcd89a859__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root____VbeforeTrig_hcd89a859__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h099e3870__0;
    __Vtrigprevexpr_h099e3870__0 = 0;
    // Body
    __Vtrigprevexpr_h099e3870__0 = (3U == vlSelfRef.tb_csr_golden__DOT__test_phase);
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h099e3870__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h099e3870__1)) 
                                  << 7U)));
    vlSelfRef.__Vtrigprevexpr_h099e3870__1 = __Vtrigprevexpr_h099e3870__0;
    if ((0x0000000000000080ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcd89a859__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_csr_golden___024root____VbeforeTrig_hcd8a794e__0(Vtb_csr_golden___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root____VbeforeTrig_hcd8a794e__0\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h099e691d__0;
    __Vtrigprevexpr_h099e691d__0 = 0;
    // Body
    __Vtrigprevexpr_h099e691d__0 = (4U == vlSelfRef.tb_csr_golden__DOT__test_phase);
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h099e691d__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h099e691d__1)) 
                                  << 8U)));
    vlSelfRef.__Vtrigprevexpr_h099e691d__1 = __Vtrigprevexpr_h099e691d__0;
    if ((0x0000000000000100ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcd8a794e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_csr_golden___024root___eval_debug_assertions(Vtb_csr_golden___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_csr_golden___024root___eval_debug_assertions\n"); );
    Vtb_csr_golden__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
