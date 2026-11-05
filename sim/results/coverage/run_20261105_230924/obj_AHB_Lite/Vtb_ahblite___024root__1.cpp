// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ahblite.h for the primary calling header

#include "Vtb_ahblite__pch.h"

void Vtb_ahblite___024root___nba_sequent__TOP__0(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___nba_sequent__TOP__0\n"); );
    Vtb_ahblite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid;
    tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_valid = 0;
    CData/*0:0*/ tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready;
    tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__o_w_ready = 0;
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
            ++(vlSelf->__Vcoverage[3043]);
        } else if ((1U == (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 
                = (3U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3044]);
        } else {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3045]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_42 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_rsp_w_data;
            __Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_43 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem_44 = 1U;
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr) {
                ++(vlSelf->__Vcoverage[3046]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5 = 0U;
            } else {
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3047]);
            }
            ++(vlSelf->__Vcoverage[3048]);
        } else {
            ++(vlSelf->__Vcoverage[3049]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs) {
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr) {
                ++(vlSelf->__Vcoverage[3050]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6 = 0U;
            } else {
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3051]);
            }
            ++(vlSelf->__Vcoverage[3052]);
        } else {
            ++(vlSelf->__Vcoverage[3053]);
        }
        ++(vlSelf->__Vcoverage[3055]);
    } else {
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr_5 = 0U;
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr_6 = 0U;
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count_4 = 0U;
        ++(vlSelf->__Vcoverage[3054]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[3056]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[3057]);
    }
    ++(vlSelf->__Vcoverage[3058]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        if ((2U == (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[3291]);
        } else if ((1U == (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs)))) {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 
                = (3U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3292]);
        } else {
            __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3293]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_45 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data;
            __Vdly_Dim0__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_46 
                = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem_47 = 1U;
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr) {
                ++(vlSelf->__Vcoverage[3294]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8 = 0U;
            } else {
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3295]);
            }
            ++(vlSelf->__Vcoverage[3296]);
        } else {
            ++(vlSelf->__Vcoverage[3297]);
        }
        if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) {
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr) {
                ++(vlSelf->__Vcoverage[3298]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9 = 0U;
            } else {
                __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3299]);
            }
            ++(vlSelf->__Vcoverage[3300]);
        } else {
            ++(vlSelf->__Vcoverage[3301]);
        }
        ++(vlSelf->__Vcoverage[3303]);
    } else {
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr_8 = 0U;
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr_9 = 0U;
        __Vdly__tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count_7 = 0U;
        ++(vlSelf->__Vcoverage[3302]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[3304]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[3305]);
    }
    ++(vlSelf->__Vcoverage[3306]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2865]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_key_data_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2864]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2866]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2867]);
    }
    ++(vlSelf->__Vcoverage[2868]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        if ((4U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
                ++(vlSelf->__Vcoverage[2496]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
                ++(vlSelf->__Vcoverage[2496]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
            } else {
                if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                      & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                     & ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                        | (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans))))) {
                    ++(vlSelf->__Vcoverage[2487]);
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr 
                        = vlSelfRef.tb_ahblite__DOT__i_ahb_haddr;
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite 
                        = vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite;
                    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize 
                        = vlSelfRef.tb_ahblite__DOT__i_ahb_hsize;
                    __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 1U;
                } else {
                    ++(vlSelf->__Vcoverage[2488]);
                    __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
                }
                if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                      & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                     & (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                    ++(vlSelf->__Vcoverage[2489]);
                }
                if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                      & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                     & (2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                    ++(vlSelf->__Vcoverage[2490]);
                }
                if (((2U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                     & (3U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                    ++(vlSelf->__Vcoverage[2491]);
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)))) {
                    ++(vlSelf->__Vcoverage[2493]);
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready)))) {
                    ++(vlSelf->__Vcoverage[2494]);
                }
                ++(vlSelf->__Vcoverage[2495]);
            }
        } else if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
                ++(vlSelf->__Vcoverage[2486]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 4U;
            } else {
                if ((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count))) {
                    if ((0U != (3U & (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                                              [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr] 
                                              >> 0x20U))))) {
                        ++(vlSelf->__Vcoverage[2482]);
                        __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 4U;
                    } else {
                        if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                              & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                             & ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                                | (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans))))) {
                            ++(vlSelf->__Vcoverage[2474]);
                            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr 
                                = vlSelfRef.tb_ahblite__DOT__i_ahb_haddr;
                            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite 
                                = vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite;
                            vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize 
                                = vlSelfRef.tb_ahblite__DOT__i_ahb_hsize;
                            __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 1U;
                        } else {
                            ++(vlSelf->__Vcoverage[2475]);
                            __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
                        }
                        if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                              & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                             & (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                            ++(vlSelf->__Vcoverage[2476]);
                        }
                        if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                              & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                             & (2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                            ++(vlSelf->__Vcoverage[2477]);
                        }
                        if (((2U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                             & (3U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                            ++(vlSelf->__Vcoverage[2478]);
                        }
                        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)))) {
                            ++(vlSelf->__Vcoverage[2480]);
                        }
                        if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready)))) {
                            ++(vlSelf->__Vcoverage[2481]);
                        }
                    }
                    ++(vlSelf->__Vcoverage[2483]);
                } else {
                    ++(vlSelf->__Vcoverage[2484]);
                }
                ++(vlSelf->__Vcoverage[2485]);
            }
        } else if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state))) {
            if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_size_ok) {
                if (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready) {
                    ++(vlSelf->__Vcoverage[2470]);
                    __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 2U;
                } else {
                    ++(vlSelf->__Vcoverage[2471]);
                }
            } else {
                ++(vlSelf->__Vcoverage[2472]);
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 3U;
            }
            ++(vlSelf->__Vcoverage[2473]);
        } else {
            if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                  & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                 & ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                    | (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans))))) {
                ++(vlSelf->__Vcoverage[2461]);
                vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr 
                    = vlSelfRef.tb_ahblite__DOT__i_ahb_haddr;
                vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite 
                    = vlSelfRef.tb_ahblite__DOT__i_ahb_hwrite;
                vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize 
                    = vlSelfRef.tb_ahblite__DOT__i_ahb_hsize;
                __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 1U;
            } else {
                ++(vlSelf->__Vcoverage[2462]);
            }
            if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                  & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                 & (3U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                ++(vlSelf->__Vcoverage[2463]);
            }
            if ((((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready) 
                  & (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)) 
                 & (2U == (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                ++(vlSelf->__Vcoverage[2464]);
            }
            if (((2U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)) 
                 & (3U != (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_htrans)))) {
                ++(vlSelf->__Vcoverage[2465]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hsel)))) {
                ++(vlSelf->__Vcoverage[2467]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hready)))) {
                ++(vlSelf->__Vcoverage[2468]);
            }
            ++(vlSelf->__Vcoverage[2469]);
        }
        ++(vlSelf->__Vcoverage[2498]);
    } else {
        __Vdly__tb_ahblite__DOT__u_dut__DOT__reg_ahb_state_0 = 0U;
        ++(vlSelf->__Vcoverage[2497]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2499]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2500]);
    }
    ++(vlSelf->__Vcoverage[2501]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2616]);
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
        ++(vlSelf->__Vcoverage[2615]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2617]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2618]);
    }
    ++(vlSelf->__Vcoverage[2619]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2661]);
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
        ++(vlSelf->__Vcoverage[2660]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2662]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2663]);
    }
    ++(vlSelf->__Vcoverage[2664]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2706]);
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
        ++(vlSelf->__Vcoverage[2705]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2707]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2708]);
    }
    ++(vlSelf->__Vcoverage[2709]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2751]);
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
        ++(vlSelf->__Vcoverage[2750]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow = 0U;
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb)))) {
        ++(vlSelf->__Vcoverage[2752]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2753]);
    }
    ++(vlSelf->__Vcoverage[2754]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2803]);
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
        ++(vlSelf->__Vcoverage[2802]);
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
        ++(vlSelf->__Vcoverage[2804]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2805]);
    }
    ++(vlSelf->__Vcoverage[2806]);
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2854]);
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
        ++(vlSelf->__Vcoverage[2853]);
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
        ++(vlSelf->__Vcoverage[2855]);
    }
    if (vlSelfRef.tb_ahblite__DOT__i_rst_n_ahb) {
        ++(vlSelf->__Vcoverage[2856]);
    }
    ++(vlSelf->__Vcoverage[2857]);
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
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3025, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_wr_ptr;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3271, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_wr_ptr;
    }
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1336, 
                               (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3275, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3273, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr;
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
    vlSelfRef.__Vdfg_Regularize_108 = (0x0000000fU 
                                       & (IData)((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                                                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr] 
                                                  >> 0x00000030U)));
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr 
        = (0xfffcU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_mem
                             [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_rd_ptr]));
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 258, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_key_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1304, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hwrite 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3027, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr;
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
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
        = (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_rd_ptr]);
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1306, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_hsize 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hsize;
    }
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
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1272, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_haddr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr;
    }
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
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 1312, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_ahb_state 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state;
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
    if (((0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1342, 
                               (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)), vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_rsp_r_valid 
            = (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3029, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count;
    }
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
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_rd_hs 
        = ((2U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_state)) 
           & (0U != (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__reg_count)));
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 866, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 882, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 880, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_engine_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_overflow;
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
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 884, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 900, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 898, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_overflow;
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
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 902, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 918, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 916, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_overflow;
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
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 920, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_mode 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 936, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_done 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_done;
    }
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 934, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_overflow;
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
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 970, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_match 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 966, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_overflow;
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
    if ((0U != ((IData)(vlSelfRef.__Vdfg_Regularize_108) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1130, vlSelfRef.__Vdfg_Regularize_108, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_wstrb 
            = vlSelfRef.__Vdfg_Regularize_108;
    }
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wmask))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1138, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wmask);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_wmask 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask;
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
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1034, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__reg_addr 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr;
    }
    vlSelfRef.__Vdfg_Regularize_110 = (((0x0204U == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)) 
                                        << 1U) | (0x0200U 
                                                  == (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_addr)));
    if ((0U != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata 
                ^ vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 130, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata, vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__o_ahb_hrdata 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__o_ahb_hrdata;
    }
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1324, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_wstrb 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb;
    }
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
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1338, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_r_ready 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__o_w_ready 
        = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_rsp_fifo__DOT__w_wr_hs) 
           | (2U > (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__reg_count)));
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
    if (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3279, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__g_sync_ahb_fifo__DOT__u_ahb_cmd_fifo__DOT__w_wr_hs;
    }
}

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
    if (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_clr_key_data) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clr_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 322, vlSelfRef.tb_ahblite__DOT__i_hw_clr_key_data, vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clr_key_data);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__i_hw_clr_key_data 
            = vlSelfRef.tb_ahblite__DOT__i_hw_clr_key_data;
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
    if ((0U != ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment) 
                ^ (IData)(vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 520, vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment, vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment);
        vlSelfRef.tb_ahblite__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment 
            = vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment;
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
}

void Vtb_ahblite___024root___nba_comb__TOP__1(Vtb_ahblite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ahblite___024root___nba_comb__TOP__1\n"); );
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
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_hwrite) 
                              << 4U) | (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_wstrb)))) 
            << 0x00000030U) | (((QData)((IData)(vlSelfRef.tb_ahblite__DOT__i_ahb_hwdata)) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_ahb_haddr))));
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
    if ((0ULL != (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data 
                  ^ vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(53, vlSelf->__Vcoverage + 1346, vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_ahb_cmd_w_data 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_ahb_cmd_w_data;
    }
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
    if (vlSelfRef.tb_ahblite__DOT__i_hw_clr_key_data) {
        ++(vlSelf->__Vcoverage[2860]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_42 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2863]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask))) {
            ++(vlSelf->__Vcoverage[2861]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_41 
                = ((vlSelfRef.__Vdfg_Regularize_107 
                    & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                   | (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)));
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
    if (vlSelfRef.tb_ahblite__DOT__i_hw_clr_key_data) {
        ++(vlSelf->__Vcoverage[2858]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_clr_key_data)))) {
        ++(vlSelf->__Vcoverage[2859]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1700, tb_ahblite__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = tb_ahblite__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2582]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2583]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_1;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2576]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2577]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2578]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2579]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2587]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_2 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__i_hw_we_engine_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__i_hw_wdata_engine_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2584]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2594]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_3 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2600]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_4 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_107 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2627]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2628]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_7;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2621]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2622]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2623]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2624]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2632]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_8 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_0_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_0_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2629]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2639]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_9 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2645]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_10 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_0_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_107 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2672]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2673]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_13;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2666]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2667]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2668]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2669]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2677]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_14 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_1_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_1_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2674]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2684]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_15 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2690]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_16 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_1_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_107 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2717]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2718]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19 
            = vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_19;
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2711]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2712]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2713]);
    }
    if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2714]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2722]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_20 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_port_2_start)
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_port_2_start)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_start)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2719]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2729]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_21 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2735]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_22 
                = ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_port_2_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_107 
                       >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2762]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2763]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25 
            = (0x0000000fU & (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_25;
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2756]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2757]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2758]);
    }
    if ((1U & ((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2759]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[2760]);
    }
    if ((1U & (~ (IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2761]);
    }
    if ((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2813]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_33 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2807]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2808]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2809]);
    }
    if ((IData)((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2810]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)))) {
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
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2767]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_26 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture))
                                     ? (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture)
                                     : (IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
               & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2764]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
                   & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                      >> 0x12U)))) {
            ++(vlSelf->__Vcoverage[2774]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_27 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                         & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                                & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
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
                   & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                      >> 0x11U)))) {
            ++(vlSelf->__Vcoverage[2780]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_28 
                = (1U & ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                         & ((vlSelfRef.__Vdfg_Regularize_107 
                             >> 0x11U) | (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2818]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_34 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_107 
                       & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_we_monitor_capture))
                                     ? ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_wdata_monitor_capture) 
                                        >> 1U) : ((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_capture) 
                                                  >> 1U)) 
                                   & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2815]);
    }
    if ((1U & (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
                      >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                >> 0x00000012U)))) {
            ++(vlSelf->__Vcoverage[2825]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_35 
                = (IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_error) 
                            >> 1U) & (~ ((vlSelfRef.__Vdfg_Regularize_107 
                                          & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
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
                      >> 1U) & (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
                                >> 0x00000011U)))) {
            ++(vlSelf->__Vcoverage[2831]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_36 
                = (IData)((((IData)(vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_pending) 
                            >> 1U) & ((vlSelfRef.__Vdfg_Regularize_107 
                                       >> 0x11U) | 
                                      (~ (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask 
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
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2797]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_32 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2800]);
        if (((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)))) {
            ++(vlSelf->__Vcoverage[2798]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_31 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_107 
                                   & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                                  | (vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                     & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask))));
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
    if ((1U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2795]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[2796]);
    }
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2848]);
        vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_40 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2851]);
        if ((((IData)(tb_ahblite__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask)))) {
            ++(vlSelf->__Vcoverage[2849]);
            vlSelfRef.tb_ahblite__DOT__u_dut__DOT____VlemCond_39 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_107 
                                   & vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask) 
                                  | ((vlSelfRef.tb_ahblite__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                      >> 0x0fU) & (~ vlSelfRef.tb_ahblite__DOT__u_dut__DOT__w_wmask))));
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
    if ((2U & (IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2846]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_ahblite__DOT__cov_i_hw_clr_monitor_key_fragment) 
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
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
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
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he1403ac9__0.ready(__VeventDescription);
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
