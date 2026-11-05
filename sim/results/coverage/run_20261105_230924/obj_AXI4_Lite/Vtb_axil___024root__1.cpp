// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axil.h for the primary calling header

#include "Vtb_axil__pch.h"

void Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription);
void Vtb_axil___024root____VbeforeTrig_hc243f614__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription);

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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_263;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_267 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_267))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_267 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_267);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_267))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_267)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_263));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_14__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_13__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_13__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_254 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_254)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_254 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_254 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_252;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_253;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_256 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_256))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_256 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_256);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_256))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_256)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_13__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_251;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_255 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_255))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_255 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_255);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_255))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_255)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_251));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_13__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_12__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_12__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_242 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_242)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_242 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_242 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_240;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_241;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_244 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_244))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_244 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_244);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_244))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_244)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_12__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_239;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_243 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_243))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_243 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_243);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_243))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_243)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_239));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_12__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_11__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_11__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_230 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_230)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_230 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_230 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_228;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_229;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_232 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_232))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_232 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_232);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_232))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_232)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_11__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_227;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_231 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_231))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_231 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_231);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_231))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_231)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_227));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_11__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          313);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_199 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_199 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_201)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_10__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_200)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_196));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_10__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                          313);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_181 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_181 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_183)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_9__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_182)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_178));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_9__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_169 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_169 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_171)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_8__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_170)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_166));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_8__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_151 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_151 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_153)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_7__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_152)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_148));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_7__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_127 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_127 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_129)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_6__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_128)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_124));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_6__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_103 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_103 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_105)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_5__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_104)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_100));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_5__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_79 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_79 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_81)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_4__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_80)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_76));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_4__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_3__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_3__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_61 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_61)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_61 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_61 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_59;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_60;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_3__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_58;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_58));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_3__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_2__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_2__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_43 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_43)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_43 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_43 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_41;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_42;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_2__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_40;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_40));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_2__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_13 = 2U;
    while (VL_LTS_III(32, 0U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_13)) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             328);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_13 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_13 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[641]);
    }
    vlSelfRef.tb_axil__DOT__i_axi_wdata = vlSelfRef.__Vtask_tb_axil__DOT__write_request__data_11;
    vlSelfRef.tb_axil__DOT__i_axi_wstrb = vlSelfRef.__Vtask_tb_axil__DOT__write_request__strobe_12;
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             334);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15))) {
            ++(vlSelf->__Vcoverage[642]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15)) {
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
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 337, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         338);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         339);
    vlSelfRef.tb_axil__DOT__i_axi_wvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[647]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready) {
        ++(vlSelf->__Vcoverage[648]);
    }
    __Vfork_1__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         327);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(Vtb_axil___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         314);
    vlSelfRef.tb_axil__DOT__i_axi_awaddr = vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_10;
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 1U;
    vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14 = 0U;
    while (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
            & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14))) {
        Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                       "@(negedge tb_axil.i_clk_axi)");
        co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_axil.i_clk_axi)", 
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                             319);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14))) {
            ++(vlSelf->__Vcoverage[634]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_10));
        VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 322, "", false);
    }
    Vtb_axil___024root____VbeforeTrig_hc243f614__0(vlSelf, 
                                                   "@(posedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f614__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         323);
    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(vlSelf, 
                                                   "@(negedge tb_axil.i_clk_axi)");
    co_await vlSelfRef.__VtrigSched_hc243f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_axil.i_clk_axi)", 
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                                         324);
    vlSelfRef.tb_axil__DOT__i_axi_awvalid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[639]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready) {
        ++(vlSelf->__Vcoverage[640]);
    }
    __Vfork_1__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                         313);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__3(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 
                                         762);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:763: Assertion failed in %m: AXIL testbench timeout\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_230924\\tb_AXI4_Lite.sv", 763, "", false);
    co_return;
}

bool Vtb_axil___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___trigger_anySet__ico\n"); );
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

bool Vtb_axil___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___trigger_anySet__act\n"); );
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

void Vtb_axil___024root___act_comb__TOP__0(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___act_comb__TOP__0\n"); );
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
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_clr_key_data) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clr_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 376, vlSelfRef.tb_axil__DOT__i_hw_clr_key_data, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clr_key_data);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clr_key_data 
            = vlSelfRef.tb_axil__DOT__i_hw_clr_key_data;
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
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 594, vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__old_value ^ vlSelfRef.tb_axil__DOT____Vtogcov__old_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 692, vlSelfRef.tb_axil__DOT__old_value, vlSelfRef.tb_axil__DOT____Vtogcov__old_value);
        vlSelfRef.tb_axil__DOT____Vtogcov__old_value 
            = vlSelfRef.tb_axil__DOT__old_value;
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
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
           | (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid));
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
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1753, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate;
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
    if (vlSelfRef.tb_axil__DOT__i_hw_clr_key_data) {
        ++(vlSelf->__Vcoverage[2942]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2945]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask))) {
            ++(vlSelf->__Vcoverage[2943]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44 
                = ((vlSelfRef.__Vdfg_Regularize_133 
                    & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                   | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)));
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
    if (vlSelfRef.tb_axil__DOT__i_hw_clr_key_data) {
        ++(vlSelf->__Vcoverage[2940]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_clr_key_data)))) {
        ++(vlSelf->__Vcoverage[2941]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1757, tb_axil__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = tb_axil__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2664]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2665]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2658]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2659]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2660]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2661]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2669]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2666]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2676]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2682]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2709]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2710]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2703]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2704]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2705]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2706]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2714]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2711]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2721]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2727]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2754]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2755]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2748]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2749]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2750]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2751]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2759]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2756]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2766]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2772]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2799]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2800]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2793]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2794]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2795]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2796]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2804]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2801]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2811]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2817]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2844]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2845]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28;
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2838]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2839]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2840]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2841]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[2842]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2843]);
    }
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2895]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2889]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2890]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2891]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2892]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2849]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture))
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2846]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                   & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                      >> 0x12U)))) {
            ++(vlSelf->__Vcoverage[2856]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                         & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
                   & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                      >> 0x11U)))) {
            ++(vlSelf->__Vcoverage[2862]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                         & ((vlSelfRef.__Vdfg_Regularize_133 
                             >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2900]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture))
                                     ? ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture) 
                                        >> 1U) : ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                                  >> 1U)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2897]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                      >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                >> 0x00000012U)))) {
            ++(vlSelf->__Vcoverage[2907]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
                = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                            >> 1U) & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
                      >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                >> 0x00000011U)))) {
            ++(vlSelf->__Vcoverage[2913]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
                = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                            >> 1U) & ((vlSelfRef.__Vdfg_Regularize_133 
                                       >> 0x11U) | 
                                      (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2879]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_35 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2882]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
            ++(vlSelf->__Vcoverage[2880]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_133 
                                   & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                                  | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                     & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask))));
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
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2877]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[2878]);
    }
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2930]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_43 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2933]);
        if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
            ++(vlSelf->__Vcoverage[2931]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_133 
                                   & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                                  | ((vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                      >> 0x0fU) & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask))));
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
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2928]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment) 
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

void Vtb_axil___024root___nba_sequent__TOP__0(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___nba_sequent__TOP__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5;
    __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 = 0;
    CData/*3:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6;
    __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 = 0;
    CData/*2:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 = 0;
    CData/*1:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9 = 0;
    CData/*1:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10 = 0;
    CData/*1:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 = 0;
    CData/*0:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12 = 0;
    CData/*0:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13 = 0;
    CData/*2:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 = 0;
    CData/*1:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 = 0;
    CData/*1:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16 = 0;
    CData/*1:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 = 0;
    CData/*0:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18 = 0;
    CData/*0:0*/ __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19 = 0;
    CData/*1:0*/ __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_53;
    __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_53 = 0;
    CData/*1:0*/ __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_54;
    __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_54 = 0;
    CData/*0:0*/ __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_55;
    __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_55 = 0;
    QData/*33:0*/ __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_56;
    __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_56 = 0;
    CData/*0:0*/ __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_57;
    __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_57 = 0;
    CData/*0:0*/ __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_58;
    __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_58 = 0;
    QData/*51:0*/ __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_59;
    __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_59 = 0;
    CData/*1:0*/ __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_60;
    __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_60 = 0;
    CData/*0:0*/ __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_61;
    __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_61 = 0;
    SData/*15:0*/ __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_62;
    __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_62 = 0;
    CData/*0:0*/ __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_63;
    __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_63 = 0;
    CData/*0:0*/ __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_64;
    __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_64 = 0;
    // Body
    __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count;
    __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr;
    __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_58 = 0U;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr;
    __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_55 = 0U;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr;
    __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_64 = 0U;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr;
    __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_61 = 0U;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count;
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[3747]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 
                = (3U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3748]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3749]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_62 
                = vlSelfRef.tb_axil__DOT__i_axi_araddr;
            __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_63 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_64 = 1U;
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr) {
                ++(vlSelf->__Vcoverage[3750]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3751]);
            }
            ++(vlSelf->__Vcoverage[3752]);
        } else {
            ++(vlSelf->__Vcoverage[3753]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs) {
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr) {
                ++(vlSelf->__Vcoverage[3754]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3755]);
            }
            ++(vlSelf->__Vcoverage[3756]);
        } else {
            ++(vlSelf->__Vcoverage[3757]);
        }
        ++(vlSelf->__Vcoverage[3759]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 = 0U;
        ++(vlSelf->__Vcoverage[3758]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[3760]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[3761]);
    }
    ++(vlSelf->__Vcoverage[3762]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[3185]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 
                = (3U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3186]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3187]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_56 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data;
            __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_57 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_58 = 1U;
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr) {
                ++(vlSelf->__Vcoverage[3188]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3189]);
            }
            ++(vlSelf->__Vcoverage[3190]);
        } else {
            ++(vlSelf->__Vcoverage[3191]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs) {
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr) {
                ++(vlSelf->__Vcoverage[3192]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3193]);
            }
            ++(vlSelf->__Vcoverage[3194]);
        } else {
            ++(vlSelf->__Vcoverage[3195]);
        }
        ++(vlSelf->__Vcoverage[3197]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 = 0U;
        ++(vlSelf->__Vcoverage[3196]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[3198]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[3199]);
    }
    ++(vlSelf->__Vcoverage[3200]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[3013]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 
                = (7U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3014]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3015]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_53 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp;
            __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_54 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_55 = 1U;
            if ((3U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr))) {
                ++(vlSelf->__Vcoverage[3016]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3017]);
            }
            ++(vlSelf->__Vcoverage[3018]);
        } else {
            ++(vlSelf->__Vcoverage[3019]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs) {
            if ((3U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr))) {
                ++(vlSelf->__Vcoverage[3020]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3021]);
            }
            ++(vlSelf->__Vcoverage[3022]);
        } else {
            ++(vlSelf->__Vcoverage[3023]);
        }
        ++(vlSelf->__Vcoverage[3025]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 = 0U;
        ++(vlSelf->__Vcoverage[3024]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[3026]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[3027]);
    }
    ++(vlSelf->__Vcoverage[3028]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[3645]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 
                = (7U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3646]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3647]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_59 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data;
            __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_60 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_61 = 1U;
            if ((3U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr))) {
                ++(vlSelf->__Vcoverage[3648]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3649]);
            }
            ++(vlSelf->__Vcoverage[3650]);
        } else {
            ++(vlSelf->__Vcoverage[3651]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs) {
            if ((3U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr))) {
                ++(vlSelf->__Vcoverage[3652]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3653]);
            }
            ++(vlSelf->__Vcoverage[3654]);
        } else {
            ++(vlSelf->__Vcoverage[3655]);
        }
        ++(vlSelf->__Vcoverage[3657]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 = 0U;
        ++(vlSelf->__Vcoverage[3656]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[3658]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[3659]);
    }
    ++(vlSelf->__Vcoverage[3660]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2947]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2946]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2948]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2949]);
    }
    ++(vlSelf->__Vcoverage[2950]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
             & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
            ++(vlSelf->__Vcoverage[2545]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending = 0U;
            vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending = 0U;
        } else {
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs) {
                ++(vlSelf->__Vcoverage[2541]);
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending = 1U;
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold 
                    = vlSelfRef.tb_axil__DOT__i_axi_awaddr;
            } else {
                ++(vlSelf->__Vcoverage[2542]);
            }
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs) {
                ++(vlSelf->__Vcoverage[2543]);
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending = 1U;
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold 
                    = vlSelfRef.tb_axil__DOT__i_axi_wdata;
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold 
                    = vlSelfRef.tb_axil__DOT__i_axi_wstrb;
            } else {
                ++(vlSelf->__Vcoverage[2544]);
            }
            ++(vlSelf->__Vcoverage[2546]);
        }
        if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
             & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
            ++(vlSelf->__Vcoverage[2547]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
            ++(vlSelf->__Vcoverage[2548]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid)))) {
            ++(vlSelf->__Vcoverage[2549]);
        }
    } else {
        ++(vlSelf->__Vcoverage[2550]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2551]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2552]);
    }
    ++(vlSelf->__Vcoverage[2553]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2698]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2697]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2699]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2700]);
    }
    ++(vlSelf->__Vcoverage[2701]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2743]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2742]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2744]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2745]);
    }
    ++(vlSelf->__Vcoverage[2746]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2788]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2787]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2789]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2790]);
    }
    ++(vlSelf->__Vcoverage[2791]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2833]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2832]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2834]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2835]);
    }
    ++(vlSelf->__Vcoverage[2836]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2615]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2614]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2616]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2617]);
    }
    ++(vlSelf->__Vcoverage[2618]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)));
            ++(vlSelf->__Vcoverage[2554]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count) 
                                  - (IData)(1U)));
            ++(vlSelf->__Vcoverage[2555]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count;
            ++(vlSelf->__Vcoverage[2556]);
        }
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)));
            ++(vlSelf->__Vcoverage[2557]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count) 
                                  - (IData)(1U)));
            ++(vlSelf->__Vcoverage[2558]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count;
            ++(vlSelf->__Vcoverage[2559]);
        }
        ++(vlSelf->__Vcoverage[2564]);
        ++(vlSelf->__Vcoverage[2566]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 = 0U;
        ++(vlSelf->__Vcoverage[2565]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2567]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2568]);
    }
    ++(vlSelf->__Vcoverage[2569]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2885]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold 
            = ((0xf0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold)) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture 
            = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture)) 
               | (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error 
            = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error)) 
               | (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending 
            = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending)) 
               | (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow 
            = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow)) 
               | (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match 
            = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match)) 
               | (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = ((0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    } else {
        ++(vlSelf->__Vcoverage[2884]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold 
            = (0xf0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture 
            = (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error 
            = (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending 
            = (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow 
            = (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match 
            = (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = (0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2886]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2887]);
    }
    ++(vlSelf->__Vcoverage[2888]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2936]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold 
            = ((0x0fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold)) 
               | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture 
            = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture)) 
               | (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error 
            = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error)) 
               | (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending 
            = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending)) 
               | (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow 
            = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow)) 
               | (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match 
            = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match)) 
               | (2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = ((0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment) 
               | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                  << 0x0000000fU));
    } else {
        ++(vlSelf->__Vcoverage[2935]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold 
            = (0x0fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match));
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
            = (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2937]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2938]);
    }
    ++(vlSelf->__Vcoverage[2939]);
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19;
    if (__Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_64) {
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[__Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_63] 
            = __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_62;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13;
    if (__Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_58) {
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[__Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_57] 
            = __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_56;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10;
    if (__Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_55) {
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[__Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_54] 
            = __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_53;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16;
    if (__Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_61) {
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[__Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_60] 
            = __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_59;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count 
        = __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count 
        = __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count 
        = __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6;
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
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr] 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1363, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr];
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
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1347, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3729, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count;
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
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rresp 
        = (3U & (IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
                         [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr] 
                         >> 0x00000020U)));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_rdata 
        = (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr]);
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 178, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rvalid);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_rvalid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3169, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count;
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
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr] 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bresp)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 172, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bresp);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bresp 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr];
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
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 170, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bvalid);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_axi_bvalid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2995, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count;
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
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                  [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 1499, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr];
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
    vlSelfRef.__Vdfg_Regularize_134 = (0x0000000fU 
                                       & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                 [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr]));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask = (
                                                   (((0x0000ff00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                                                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                                                >> 3U))))) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                                                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                                                >> 2U))))))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                                                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                                                >> 1U))))) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                                                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr])))))));
    vlSelfRef.__Vdfg_Regularize_133 = (IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                               >> 4U));
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1355, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 3625, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
                ^ vlSelfRef.tb_axil__DOT____Vtogcov__o_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 312, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data, vlSelfRef.tb_axil__DOT____Vtogcov__o_key_data);
        vlSelfRef.tb_axil__DOT____Vtogcov__o_key_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data;
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
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data 
        = (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold)) 
            << 0x00000024U) | (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold)) 
                                << 4U) | (QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold))));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1235, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending;
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
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1237, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid 
        = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending));
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 809, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 825, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 823, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow;
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
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 827, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 843, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 841, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow;
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
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 845, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 861, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 859, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow;
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
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 863, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 879, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 877, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow;
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
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 913, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 909, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow;
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
    if ((0U != ((IData)(vlSelfRef.__Vdfg_Regularize_134) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1073, vlSelfRef.__Vdfg_Regularize_134, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb 
            = vlSelfRef.__Vdfg_Regularize_134;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wmask))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1081, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wmask);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wmask 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask;
    }
    if ((0U != (vlSelfRef.__Vdfg_Regularize_133 ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1009, vlSelfRef.__Vdfg_Regularize_133, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata 
            = vlSelfRef.__Vdfg_Regularize_133;
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 1395, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1351, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid;
    }
}

void Vtb_axil___024root___nba_comb__TOP__0(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___nba_comb__TOP__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_clr_key_data) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clr_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 376, vlSelfRef.tb_axil__DOT__i_hw_clr_key_data, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clr_key_data);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clr_key_data 
            = vlSelfRef.tb_axil__DOT__i_hw_clr_key_data;
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
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment) 
                ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 594, vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment, vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment);
        vlSelfRef.tb_axil__DOT____Vtogcov__cov_i_hw_clr_monitor_key_fragment 
            = vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__old_value ^ vlSelfRef.tb_axil__DOT____Vtogcov__old_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 692, vlSelfRef.tb_axil__DOT__old_value, vlSelfRef.tb_axil__DOT____Vtogcov__old_value);
        vlSelfRef.tb_axil__DOT____Vtogcov__old_value 
            = vlSelfRef.tb_axil__DOT__old_value;
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
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
           | (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1753, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate;
    }
}

void Vtb_axil___024root___nba_comb__TOP__1(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___nba_comb__TOP__1\n"); );
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
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_rready) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)));
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
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_bready) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)));
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
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1747, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1749, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready 
        = ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs));
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
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1359, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1361, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready;
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
    if (vlSelfRef.tb_axil__DOT__i_hw_clr_key_data) {
        ++(vlSelf->__Vcoverage[2942]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2945]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask))) {
            ++(vlSelf->__Vcoverage[2943]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44 
                = ((vlSelfRef.__Vdfg_Regularize_133 
                    & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                   | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)));
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
    if (vlSelfRef.tb_axil__DOT__i_hw_clr_key_data) {
        ++(vlSelf->__Vcoverage[2940]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_clr_key_data)))) {
        ++(vlSelf->__Vcoverage[2941]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1757, tb_axil__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = tb_axil__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2664]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2665]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2658]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2659]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2660]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2661]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2669]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2666]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2676]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2682]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2709]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2710]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2703]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2704]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2705]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2706]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2714]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_0_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_0_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2711]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2721]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2727]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2754]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2755]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2748]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2749]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2750]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2751]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2759]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_1_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_1_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2756]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2766]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2772]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2799]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2800]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2793]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2794]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2795]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2796]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2804]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_port_2_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_port_2_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2801]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2811]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2817]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_133 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2844]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2845]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28;
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2838]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2839]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2840]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2841]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
        ++(vlSelf->__Vcoverage[2842]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2843]);
    }
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2895]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2889]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2890]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2891]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2892]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
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
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2849]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture))
                                     ? (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2846]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                   & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                      >> 0x12U)))) {
            ++(vlSelf->__Vcoverage[2856]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                         & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
                   & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                      >> 0x11U)))) {
            ++(vlSelf->__Vcoverage[2862]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
                = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                         & ((vlSelfRef.__Vdfg_Regularize_133 
                             >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2900]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_133 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                      >> 0x13U) | (((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_we_monitor_capture))
                                     ? ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_wdata_monitor_capture) 
                                        >> 1U) : ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                                  >> 1U)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2897]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
                      >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                >> 0x00000012U)))) {
            ++(vlSelf->__Vcoverage[2907]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
                = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                            >> 1U) & (~ ((vlSelfRef.__Vdfg_Regularize_133 
                                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
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
                      >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
                                >> 0x00000011U)))) {
            ++(vlSelf->__Vcoverage[2913]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
                = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                            >> 1U) & ((vlSelfRef.__Vdfg_Regularize_133 
                                       >> 0x11U) | 
                                      (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask 
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
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2879]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_35 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2882]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
             & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
            ++(vlSelf->__Vcoverage[2880]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_133 
                                   & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                                  | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                     & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask))));
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
    if ((1U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2877]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment)))) {
        ++(vlSelf->__Vcoverage[2878]);
    }
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2930]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_43 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2933]);
        if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
              >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask)))) {
            ++(vlSelf->__Vcoverage[2931]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42 
                = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_133 
                                   & vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask) 
                                  | ((vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                      >> 0x0fU) & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wmask))));
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
    if ((2U & (IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment))) {
        ++(vlSelf->__Vcoverage[2928]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_axil__DOT__cov_i_hw_clr_monitor_key_fragment) 
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
