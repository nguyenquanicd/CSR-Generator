// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ahblite.h for the primary calling header

#include "Vtb_ahblite__pch.h"

void Vtb_ahblite___024root___nba_comb__TOP__0(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___nba_comb__TOP__0\n"); );
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
}

void Vtb_ahblite___024root___nba_comb__TOP__1(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___nba_comb__TOP__1\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2134, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt;
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
}

void Vtb_ahblite___024root___timing_ready(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___timing_ready\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he1403ac9__0.ready("@(negedge tb_ahblite.i_clk_ahb)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5fcdb6b6__0.ready("@(negedge tb_ahblite.i_clk_reg)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he1407110__0.ready("@(posedge tb_ahblite.i_clk_ahb)");
    }
}

void Vtb_ahblite___024root___timing_resume(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___timing_resume\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he1403ac9__0.moveToResumeQueue(
                                                          "@(negedge tb_ahblite.i_clk_ahb)");
    vlSelfRef.__VtrigSched_h5fcdb6b6__0.moveToResumeQueue(
                                                          "@(negedge tb_ahblite.i_clk_reg)");
    vlSelfRef.__VtrigSched_he1407110__0.moveToResumeQueue(
                                                          "@(posedge tb_ahblite.i_clk_ahb)");
    vlSelfRef.__VtrigSched_he1403ac9__0.resume("@(negedge tb_ahblite.i_clk_ahb)");
    vlSelfRef.__VtrigSched_h5fcdb6b6__0.resume("@(negedge tb_ahblite.i_clk_reg)");
    vlSelfRef.__VtrigSched_he1407110__0.resume("@(posedge tb_ahblite.i_clk_ahb)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ahblite___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_ahblite___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0(Vtb_ahblite___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root____VbeforeTrig_he1403ac9__0\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0 
        = vlSelfRef.tb_ahblite__DOT__i_clk_ahb;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_ahblite___024root____VbeforeTrig_h5fcdb6b6__0(Vtb_ahblite___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root____VbeforeTrig_h5fcdb6b6__0\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_reg)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_reg__0)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_reg__0 
        = vlSelfRef.tb_ahblite__DOT__i_clk_reg;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5fcdb6b6__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_ahblite___024root____VbeforeTrig_he1407110__0(Vtb_ahblite___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root____VbeforeTrig_he1407110__0\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_ahblite__DOT__i_clk_ahb) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ahblite__DOT__i_clk_ahb__0 
        = vlSelfRef.tb_ahblite__DOT__i_clk_ahb;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1407110__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_ahblite___024root___eval_debug_assertions(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___eval_debug_assertions\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
