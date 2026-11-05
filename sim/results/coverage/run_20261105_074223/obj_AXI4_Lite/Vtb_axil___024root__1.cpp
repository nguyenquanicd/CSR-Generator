// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axil.h for the primary calling header

#include "Vtb_axil__pch.h"

void Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription);
void Vtb_axil___024root____VbeforeTrig_hc243f614__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription);

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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_61 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_61 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_63)) {
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
    __Vfork_3__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_62)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_58));
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
    __Vfork_3__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_43 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_43 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_45)) {
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
    __Vfork_2__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_44)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_40));
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
    __Vfork_2__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             215);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_13 
            = (vlSelfRef.__Vtask_tb_axil__DOT__write_request__unnamedblk1_1__DOT____Vrepeat0_13 
               - (IData)(1U));
        ++(vlSelf->__Vcoverage[421]);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             221);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15))) {
            ++(vlSelf->__Vcoverage[422]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__w_cycles_15)) {
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
    __Vfork_1__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         214);
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
                                                         "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                         201);
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
                                                             "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                                             206);
        vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14 
            = ((IData)(1U) + vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14);
        if (((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)) 
             & VL_GTS_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14))) {
            ++(vlSelf->__Vcoverage[414]);
        }
        if (VL_LTES_III(32, 0x00000050U, vlSelfRef.__Vtask_tb_axil__DOT__write_request__aw_cycles_14)) {
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
                     , '#',16,(IData)(vlSelfRef.__Vtask_tb_axil__DOT__write_request__address_10));
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
    __Vfork_1__sync.done("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                         200);
    co_return;
}

VlCoroutine Vtb_axil___024root___eval_initial__TOP__Vtiming__3(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 
                                         544);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_AXI4_Lite.sv:545: Assertion failed in %m: AXIL testbench timeout\n",3, 'M',vlSymsp->name(),"tb_axil", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("C:\\HQuan\\102_MyGithub\\APB-CSR-Generator\\sim\\results\\coverage\\run_20261105_074223\\tb_AXI4_Lite.sv", 545, "", false);
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
    SData/*14:0*/ tb_axil__DOT__u_dut__DOT____VlemCond_43;
    SData/*14:0*/ tb_axil__DOT__u_dut__DOT____VlemCond_35;
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
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_0;
    tb_axil__DOT__u_dut__DOT__w_we_port_0 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_0;
    tb_axil__DOT__u_dut__DOT__w_rd_port_0 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_1;
    tb_axil__DOT__u_dut__DOT__w_we_port_1 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_1;
    tb_axil__DOT__u_dut__DOT__w_rd_port_1 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_2;
    tb_axil__DOT__u_dut__DOT__w_we_port_2 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_2;
    tb_axil__DOT__u_dut__DOT__w_rd_port_2 = 0;
    CData/*1:0*/ tb_axil__DOT__u_dut__DOT__w_we_monitor;
    tb_axil__DOT__u_dut__DOT__w_we_monitor = 0;
    CData/*1:0*/ tb_axil__DOT__u_dut__DOT__w_rd_monitor;
    tb_axil__DOT__u_dut__DOT__w_rd_monitor = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_key;
    tb_axil__DOT__u_dut__DOT__w_we_key = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready = 0;
    CData/*1:0*/ __Vdfg_Regularize_180;
    __Vdfg_Regularize_180 = 0;
    // Body
    if (vlSelfRef.tb_axil__DOT__i_axi_wvalid) {
        ++(vlSelf->__Vcoverage[2335]);
    }
    if (vlSelfRef.tb_axil__DOT__i_axi_awvalid) {
        ++(vlSelf->__Vcoverage[2336]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid)) 
               & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid))))) {
        ++(vlSelf->__Vcoverage[2337]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[2391]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[2392]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2393]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[2394]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[2395]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2396]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[2867]);
    }
    if ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2868]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[2869]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[2870]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[2874]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[2875]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2876]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[3039]);
    }
    if ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3040]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[3041]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3042]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[3046]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[3047]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3048]);
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
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 376, vlSelfRef.tb_axil__DOT__i_hw_clear_key_data, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data 
            = vlSelfRef.tb_axil__DOT__i_hw_clear_key_data;
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
    if ((0U != (vlSelfRef.tb_axil__DOT__old_value ^ vlSelfRef.tb_axil__DOT____Vtogcov__old_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 470, vlSelfRef.tb_axil__DOT__old_value, vlSelfRef.tb_axil__DOT____Vtogcov__old_value);
        vlSelfRef.tb_axil__DOT____Vtogcov__old_value 
            = vlSelfRef.tb_axil__DOT__old_value;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
           | (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_bready) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_rready) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1617, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1613, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready 
        = ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1611, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs));
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1225, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1223, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready);
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
            ++(vlSelf->__Vcoverage[2434]);
        } else {
            tb_axil__DOT__u_dut__DOT__w_issue_write = 1U;
            ++(vlSelf->__Vcoverage[2435]);
        }
        ++(vlSelf->__Vcoverage[2445]);
    } else {
        if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
             & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready))) {
            tb_axil__DOT__u_dut__DOT__w_issue_read = 1U;
            ++(vlSelf->__Vcoverage[2441]);
        } else {
            if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
                 & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
                tb_axil__DOT__u_dut__DOT__w_issue_write = 1U;
                ++(vlSelf->__Vcoverage[2436]);
            } else {
                ++(vlSelf->__Vcoverage[2437]);
            }
            if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
                 & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
                ++(vlSelf->__Vcoverage[2438]);
            }
            if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
                ++(vlSelf->__Vcoverage[2439]);
            }
            if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[2440]);
            }
        }
        if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
             & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready))) {
            ++(vlSelf->__Vcoverage[2442]);
        }
        if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
            ++(vlSelf->__Vcoverage[2443]);
        }
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[2444]);
        }
    }
    if (((((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)) 
          & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2446]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2447]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2448]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2449]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2450]);
    }
    ++(vlSelf->__Vcoverage[2451]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2871]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2872]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[2873]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write))) {
        ++(vlSelf->__Vcoverage[3499]);
    }
    if ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3500]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[3501]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3502]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write))) {
        ++(vlSelf->__Vcoverage[3506]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[3507]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3508]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1221, tb_axil__DOT__u_dut__DOT__w_issue_write, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_ready);
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
        ++(vlSelf->__Vcoverage[3043]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3044]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3045]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read))) {
        ++(vlSelf->__Vcoverage[3601]);
    }
    if ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3602]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3603]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3604]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read))) {
        ++(vlSelf->__Vcoverage[3608]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3609]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3610]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1213, tb_axil__DOT__u_dut__DOT__w_issue_read, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready 
            = tb_axil__DOT__u_dut__DOT__w_issue_read;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready));
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2474]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2477]);
        if (tb_axil__DOT__u_dut__DOT__w_issue_write) {
            ++(vlSelf->__Vcoverage[2475]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2 = 1U;
        } else {
            ++(vlSelf->__Vcoverage[2476]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read;
        }
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3;
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2472]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2473]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)));
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2454]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr];
    } else {
        ++(vlSelf->__Vcoverage[2455]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0 
            = (0x0000ffffU & (IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                      >> 0x24U)));
    }
    tb_axil__DOT__u_dut__DOT__w_issue_addr = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0;
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2452]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2453]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2865, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3497, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready 
        = ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3037, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1619, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3599, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs));
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 841, tb_axil__DOT__u_dut__DOT__w_issue_addr, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr 
            = tb_axil__DOT__u_dut__DOT__w_issue_addr;
    }
    __Vdfg_Regularize_180 = (((0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
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
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2816]);
        } else if ((0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2817]);
        } else if ((0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2818]);
        } else if ((0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2819]);
        } else if ((0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value);
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2820]);
            ++(vlSelf->__Vcoverage[2822]);
        } else if ((0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = (IData)(
                                                            (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value 
                                                             >> 0x20U));
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2823]);
            ++(vlSelf->__Vcoverage[2825]);
        } else if ((0x0208U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            ++(vlSelf->__Vcoverage[2827]);
            ++(vlSelf->__Vcoverage[2828]);
        } else {
            ++(vlSelf->__Vcoverage[2830]);
            ++(vlSelf->__Vcoverage[2831]);
        }
    } else if ((0x0400U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        tb_axil__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
        ++(vlSelf->__Vcoverage[2832]);
    } else {
        tb_axil__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_axil__DOT__u_dut__DOT__w_addr_mapped = 0U;
        ++(vlSelf->__Vcoverage[2833]);
    }
    ++(vlSelf->__Vcoverage[2834]);
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3503]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3504]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid)))) {
        ++(vlSelf->__Vcoverage[3505]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1217, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready;
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2348]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2349]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2350]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2351]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2352]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2353]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2354]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2355]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2356]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2357]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2358]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2359]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2362]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)))) {
        ++(vlSelf->__Vcoverage[2363]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) {
        ++(vlSelf->__Vcoverage[2364]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2365]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2366]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2367]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2368]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2369]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2370]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2371]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2372]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2373]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2374]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2375]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2376]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2379]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)))) {
        ++(vlSelf->__Vcoverage[2380]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) {
        ++(vlSelf->__Vcoverage[2381]);
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
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1209, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready;
    }
    if (((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read))) {
        ++(vlSelf->__Vcoverage[2338]);
    }
    if (((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate)))) {
        ++(vlSelf->__Vcoverage[2339]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)))) {
        ++(vlSelf->__Vcoverage[2340]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read))) {
        ++(vlSelf->__Vcoverage[2341]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate)))) {
        ++(vlSelf->__Vcoverage[2342]);
    }
    if (((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2343]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2346]);
    }
    if ((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) {
        ++(vlSelf->__Vcoverage[2347]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready));
    if ((0U != (tb_axil__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1013, tb_axil__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = tb_axil__DOT__u_dut__DOT__w_rdata_nxt;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_addr_mapped) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1077, tb_axil__DOT__u_dut__DOT__w_addr_mapped, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped 
            = tb_axil__DOT__u_dut__DOT__w_addr_mapped;
    }
    if ((0U != (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2458]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 2U;
    } else {
        ++(vlSelf->__Vcoverage[2463]);
        if (tb_axil__DOT__u_dut__DOT__w_addr_mapped) {
            ++(vlSelf->__Vcoverage[2462]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 0U;
            ++(vlSelf->__Vcoverage[2461]);
        } else {
            ++(vlSelf->__Vcoverage[2459]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 3U;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1;
    if ((0U != (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2456]);
    }
    if ((0U == (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2457]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3495, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[2385]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[2386]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid)))) {
        ++(vlSelf->__Vcoverage[2387]);
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
        ++(vlSelf->__Vcoverage[2388]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[2389]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid)))) {
        ++(vlSelf->__Vcoverage[2390]);
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
        ++(vlSelf->__Vcoverage[2382]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[2383]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2384]);
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
        ++(vlSelf->__Vcoverage[2464]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp))) {
        ++(vlSelf->__Vcoverage[2465]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2466]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)))) {
        ++(vlSelf->__Vcoverage[2467]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp))) {
        ++(vlSelf->__Vcoverage[2468]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[2469]);
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1603, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp;
    }
    tb_axil__DOT__u_dut__DOT__w_rd_en = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
                                         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)));
    tb_axil__DOT__u_dut__DOT__w_wr_en = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
                                         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1607, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1609, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs;
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs))) {
        ++(vlSelf->__Vcoverage[2397]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs))) {
        ++(vlSelf->__Vcoverage[2398]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs)) 
               & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs))))) {
        ++(vlSelf->__Vcoverage[2399]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) {
        ++(vlSelf->__Vcoverage[2400]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) {
        ++(vlSelf->__Vcoverage[2401]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve 
        = ((~ ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
           & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs) 
              | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3605]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3606]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid)))) {
        ++(vlSelf->__Vcoverage[3607]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1207, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid));
    if (tb_axil__DOT__u_dut__DOT__w_rd_en) {
        ++(vlSelf->__Vcoverage[2470]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2471]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2504]);
    }
    if ((0U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2505]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2506]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2507]);
    }
    if ((0x0100U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2508]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2509]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2510]);
    }
    if ((0x0104U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2511]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2512]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2513]);
    }
    if ((0x0108U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2514]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2515]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2516]);
    }
    if ((0x0200U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2517]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2518]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2519]);
    }
    if ((0x0204U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2520]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2521]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1009, tb_axil__DOT__u_dut__DOT__w_rd_en, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en 
            = tb_axil__DOT__u_dut__DOT__w_rd_en;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data 
        = (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)) 
            << 0x00000020U) | (QData)((IData)((tb_axil__DOT__u_dut__DOT__w_rdata_nxt 
                                               & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))))));
    tb_axil__DOT__u_dut__DOT__w_rd_port_0 = ((0x0100U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_port_1 = ((0x0104U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_port_2 = ((0x0108U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_engine = ((0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_monitor = ((IData)(__Vdfg_Regularize_180) 
                                              & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en))));
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2483]);
    }
    if ((0U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2484]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2485]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2486]);
    }
    if ((0x0100U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2487]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2488]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2489]);
    }
    if ((0x0104U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2490]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2491]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2492]);
    }
    if ((0x0108U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2493]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2494]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2495]);
    }
    if ((0x0200U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2496]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2497]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2498]);
    }
    if ((0x0204U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2499]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2500]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0400U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2501]);
    }
    if ((0x0400U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2502]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2503]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1011, tb_axil__DOT__u_dut__DOT__w_wr_en, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en 
            = tb_axil__DOT__u_dut__DOT__w_wr_en;
    }
    tb_axil__DOT__u_dut__DOT__w_we_key = ((0x0400U 
                                           == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
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
    tb_axil__DOT__u_dut__DOT__w_we_engine = ((0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en));
    tb_axil__DOT__u_dut__DOT__w_we_monitor = ((IData)(__Vdfg_Regularize_180) 
                                              & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en))));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1615, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3597, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs;
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1467, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_0) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1709, tb_axil__DOT__u_dut__DOT__w_rd_port_0, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_0;
    }
    ++(vlSelf->__Vcoverage[2605]);
    if (tb_axil__DOT__u_dut__DOT__w_rd_port_0) {
        ++(vlSelf->__Vcoverage[2603]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2604]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15;
    ++(vlSelf->__Vcoverage[2601]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_1) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1795, tb_axil__DOT__u_dut__DOT__w_rd_port_1, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_1;
    }
    ++(vlSelf->__Vcoverage[2650]);
    if (tb_axil__DOT__u_dut__DOT__w_rd_port_1) {
        ++(vlSelf->__Vcoverage[2648]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2649]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21;
    ++(vlSelf->__Vcoverage[2646]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_2) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1881, tb_axil__DOT__u_dut__DOT__w_rd_port_2, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_2;
    }
    ++(vlSelf->__Vcoverage[2695]);
    if (tb_axil__DOT__u_dut__DOT__w_rd_port_2) {
        ++(vlSelf->__Vcoverage[2693]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2694]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27;
    ++(vlSelf->__Vcoverage[2691]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_engine) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1623, tb_axil__DOT__u_dut__DOT__w_rd_engine, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine 
            = tb_axil__DOT__u_dut__DOT__w_rd_engine;
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2557]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_done;
    } else {
        ++(vlSelf->__Vcoverage[2560]);
        if (tb_axil__DOT__u_dut__DOT__w_rd_engine) {
            ++(vlSelf->__Vcoverage[2558]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2559]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2555]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_done)))) {
        ++(vlSelf->__Vcoverage[2556]);
    }
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2065, tb_axil__DOT__u_dut__DOT__w_rd_monitor, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor 
            = tb_axil__DOT__u_dut__DOT__w_rd_monitor;
    }
    ++(vlSelf->__Vcoverage[2740]);
    if ((1U & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor))) {
        ++(vlSelf->__Vcoverage[2738]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2739]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33));
    ++(vlSelf->__Vcoverage[2736]);
    ++(vlSelf->__Vcoverage[2791]);
    if ((2U & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor))) {
        ++(vlSelf->__Vcoverage[2789]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2790]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                     >> 1U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41) 
              << 1U));
    ++(vlSelf->__Vcoverage[2787]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_key) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2197, tb_axil__DOT__u_dut__DOT__w_we_key, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key 
            = tb_axil__DOT__u_dut__DOT__w_we_key;
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2806]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2809]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))) {
            ++(vlSelf->__Vcoverage[2807]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44 
                = ((vlSelfRef.__Vdfg_Regularize_178 
                    & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                   | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)));
        } else {
            ++(vlSelf->__Vcoverage[2808]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data;
        }
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45;
    if (vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2804]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_clear_key_data)))) {
        ++(vlSelf->__Vcoverage[2805]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1707, tb_axil__DOT__u_dut__DOT__w_we_port_0, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0 
            = tb_axil__DOT__u_dut__DOT__w_we_port_0;
    }
    ++(vlSelf->__Vcoverage[2599]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2597]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2598]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14;
    ++(vlSelf->__Vcoverage[2595]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2573]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2574]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2567]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2568]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2569]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2570]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2571]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2572]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2578]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2581]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start;
        ++(vlSelf->__Vcoverage[2580]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2575]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2576]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2577]);
    }
    ++(vlSelf->__Vcoverage[2587]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2585]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                      & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2586]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12;
    ++(vlSelf->__Vcoverage[2583]);
    ++(vlSelf->__Vcoverage[2593]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2591]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_178 
                   >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2592]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13;
    ++(vlSelf->__Vcoverage[2589]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1793, tb_axil__DOT__u_dut__DOT__w_we_port_1, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1 
            = tb_axil__DOT__u_dut__DOT__w_we_port_1;
    }
    ++(vlSelf->__Vcoverage[2644]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2642]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2643]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20;
    ++(vlSelf->__Vcoverage[2640]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2618]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2619]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2612]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2613]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2614]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2615]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2616]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2617]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2623]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2626]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start;
        ++(vlSelf->__Vcoverage[2625]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2620]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2621]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2622]);
    }
    ++(vlSelf->__Vcoverage[2632]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2630]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                      & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2631]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18;
    ++(vlSelf->__Vcoverage[2628]);
    ++(vlSelf->__Vcoverage[2638]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2636]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_178 
                   >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2637]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19;
    ++(vlSelf->__Vcoverage[2634]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1879, tb_axil__DOT__u_dut__DOT__w_we_port_2, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2 
            = tb_axil__DOT__u_dut__DOT__w_we_port_2;
    }
    ++(vlSelf->__Vcoverage[2689]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2687]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2688]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26;
    ++(vlSelf->__Vcoverage[2685]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2663]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2664]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2657]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2658]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2659]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2660]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2661]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2662]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2668]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2671]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start;
        ++(vlSelf->__Vcoverage[2670]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2665]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2666]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2667]);
    }
    ++(vlSelf->__Vcoverage[2677]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2675]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                      & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2676]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24;
    ++(vlSelf->__Vcoverage[2673]);
    ++(vlSelf->__Vcoverage[2683]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2681]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_178 
                   >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2682]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25;
    ++(vlSelf->__Vcoverage[2679]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1621, tb_axil__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = tb_axil__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2528]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2529]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2522]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2523]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2524]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2525]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2526]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2527]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2551]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2554]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
            ++(vlSelf->__Vcoverage[2552]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2553]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2549]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow)))) {
        ++(vlSelf->__Vcoverage[2550]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2533]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2536]);
        if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_start) {
            ++(vlSelf->__Vcoverage[2534]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start;
        } else {
            ++(vlSelf->__Vcoverage[2535]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2530]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2531]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2532]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2539]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_fault;
    } else {
        ++(vlSelf->__Vcoverage[2542]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2540]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2541]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2537]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault)))) {
        ++(vlSelf->__Vcoverage[2538]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2545]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending;
    } else {
        ++(vlSelf->__Vcoverage[2548]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2546]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_178 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2547]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2543]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending)))) {
        ++(vlSelf->__Vcoverage[2544]);
    }
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2061, tb_axil__DOT__u_dut__DOT__w_we_monitor, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor 
            = tb_axil__DOT__u_dut__DOT__w_we_monitor;
    }
    ++(vlSelf->__Vcoverage[2734]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2732]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2733]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32));
    ++(vlSelf->__Vcoverage[2730]);
    ++(vlSelf->__Vcoverage[2785]);
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2783]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2784]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow) 
                     >> 1U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40) 
              << 1U));
    ++(vlSelf->__Vcoverage[2781]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2708]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2709]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28;
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2702]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2703]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2704]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2705]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2706]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2707]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2713]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2716]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture));
        ++(vlSelf->__Vcoverage[2715]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29));
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2710]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2711]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2712]);
    }
    ++(vlSelf->__Vcoverage[2722]);
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x12U)))) {
        ++(vlSelf->__Vcoverage[2720]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                     & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                            & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                           >> 0x12U))));
    } else {
        ++(vlSelf->__Vcoverage[2721]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30));
    ++(vlSelf->__Vcoverage[2718]);
    ++(vlSelf->__Vcoverage[2728]);
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x11U)))) {
        ++(vlSelf->__Vcoverage[2726]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                     & ((vlSelfRef.__Vdfg_Regularize_178 
                         >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x11U)))));
    } else {
        ++(vlSelf->__Vcoverage[2727]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31));
    ++(vlSelf->__Vcoverage[2724]);
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2759]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2760]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                              >> 4U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36;
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2753]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2754]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2755]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2756]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2757]);
    }
    if ((1U & (~ ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2758]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2764]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                    >> 1U) & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                 >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2767]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                     >> 1U));
        ++(vlSelf->__Vcoverage[2766]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37) 
              << 1U));
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2761]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2762]);
    }
    if ((1U & (~ ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2763]);
    }
    ++(vlSelf->__Vcoverage[2773]);
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000012U)))) {
        ++(vlSelf->__Vcoverage[2771]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
            = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                        >> 1U) & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                                      & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                                     >> 0x12U))));
    } else {
        ++(vlSelf->__Vcoverage[2772]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                     >> 1U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38) 
              << 1U));
    ++(vlSelf->__Vcoverage[2769]);
    ++(vlSelf->__Vcoverage[2779]);
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000011U)))) {
        ++(vlSelf->__Vcoverage[2777]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
            = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                        >> 1U) & ((vlSelfRef.__Vdfg_Regularize_178 
                                   >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                   >> 0x11U)))));
    } else {
        ++(vlSelf->__Vcoverage[2778]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                     >> 1U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39) 
              << 1U));
    ++(vlSelf->__Vcoverage[2775]);
    ++(vlSelf->__Vcoverage[2746]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2744]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34 
            = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_178 
                               & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                              | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                 & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))));
    } else {
        ++(vlSelf->__Vcoverage[2745]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34 
            = (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    tb_axil__DOT__u_dut__DOT____VlemCond_35 = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ 
        = tb_axil__DOT__u_dut__DOT____VlemCond_35;
    ++(vlSelf->__Vcoverage[2742]);
    ++(vlSelf->__Vcoverage[2797]);
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2795]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42 
            = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_178 
                               & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                              | ((vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                  >> 0x0fU) & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))));
    } else {
        ++(vlSelf->__Vcoverage[2796]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42 
            = (0x00007fffU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                              >> 0x0fU));
    }
    tb_axil__DOT__u_dut__DOT____VlemCond_43 = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ 
        = tb_axil__DOT__u_dut__DOT____VlemCond_43;
    ++(vlSelf->__Vcoverage[2793]);
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1727, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1813, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1899, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1641, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1997, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2199, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1725, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1711, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1719, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1721, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1723, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1811, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1797, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1805, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1807, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1809, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1897, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1883, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1891, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1893, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1895, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1625, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1639, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1633, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1635, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1637, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1993, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__) 
                               ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1965, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0xf0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                               ^ ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                  >> 4U))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1973, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__, 
                               ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                >> 4U));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0x0fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1981, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1985, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1989, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt;
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__) 
                               ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2001, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                               ^ (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                  >> 0x0000000fU))))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2031, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__, 
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
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr;
    __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count;
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
            ++(vlSelf->__Vcoverage[3611]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 
                = (3U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3612]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3613]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_62 
                = vlSelfRef.tb_axil__DOT__i_axi_araddr;
            __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_63 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem_64 = 1U;
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr) {
                ++(vlSelf->__Vcoverage[3614]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3615]);
            }
            ++(vlSelf->__Vcoverage[3616]);
        } else {
            ++(vlSelf->__Vcoverage[3617]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs) {
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr) {
                ++(vlSelf->__Vcoverage[3618]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3619]);
            }
            ++(vlSelf->__Vcoverage[3620]);
        } else {
            ++(vlSelf->__Vcoverage[3621]);
        }
        ++(vlSelf->__Vcoverage[3623]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr_18 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr_19 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count_17 = 0U;
        ++(vlSelf->__Vcoverage[3622]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[3624]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[3625]);
    }
    ++(vlSelf->__Vcoverage[3626]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[3049]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 
                = (3U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3050]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3051]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_56 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data;
            __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_57 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem_58 = 1U;
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr) {
                ++(vlSelf->__Vcoverage[3052]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3053]);
            }
            ++(vlSelf->__Vcoverage[3054]);
        } else {
            ++(vlSelf->__Vcoverage[3055]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs) {
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr) {
                ++(vlSelf->__Vcoverage[3056]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3057]);
            }
            ++(vlSelf->__Vcoverage[3058]);
        } else {
            ++(vlSelf->__Vcoverage[3059]);
        }
        ++(vlSelf->__Vcoverage[3061]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr_12 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr_13 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count_11 = 0U;
        ++(vlSelf->__Vcoverage[3060]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[3062]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[3063]);
    }
    ++(vlSelf->__Vcoverage[3064]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[2877]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 
                = (7U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[2878]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[2879]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_53 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp;
            __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_54 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem_55 = 1U;
            if ((3U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr))) {
                ++(vlSelf->__Vcoverage[2880]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[2881]);
            }
            ++(vlSelf->__Vcoverage[2882]);
        } else {
            ++(vlSelf->__Vcoverage[2883]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs) {
            if ((3U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr))) {
                ++(vlSelf->__Vcoverage[2884]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[2885]);
            }
            ++(vlSelf->__Vcoverage[2886]);
        } else {
            ++(vlSelf->__Vcoverage[2887]);
        }
        ++(vlSelf->__Vcoverage[2889]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr_9 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr_10 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count_8 = 0U;
        ++(vlSelf->__Vcoverage[2888]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2890]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2891]);
    }
    ++(vlSelf->__Vcoverage[2892]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)));
            ++(vlSelf->__Vcoverage[3509]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 
                = (7U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count) 
                         - (IData)(1U)));
            ++(vlSelf->__Vcoverage[3510]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count;
            ++(vlSelf->__Vcoverage[3511]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) {
            __Vdly_Val__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_59 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data;
            __Vdly_Dim0__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_60 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr;
            __Vdly_Set__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem_61 = 1U;
            if ((3U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr))) {
                ++(vlSelf->__Vcoverage[3512]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr)));
                ++(vlSelf->__Vcoverage[3513]);
            }
            ++(vlSelf->__Vcoverage[3514]);
        } else {
            ++(vlSelf->__Vcoverage[3515]);
        }
        if (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs) {
            if ((3U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr))) {
                ++(vlSelf->__Vcoverage[3516]);
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16 = 0U;
            } else {
                __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr)));
                ++(vlSelf->__Vcoverage[3517]);
            }
            ++(vlSelf->__Vcoverage[3518]);
        } else {
            ++(vlSelf->__Vcoverage[3519]);
        }
        ++(vlSelf->__Vcoverage[3521]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr_15 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr_16 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count_14 = 0U;
        ++(vlSelf->__Vcoverage[3520]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[3522]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[3523]);
    }
    ++(vlSelf->__Vcoverage[3524]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2811]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2810]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2812]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2813]);
    }
    ++(vlSelf->__Vcoverage[2814]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
             & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
            ++(vlSelf->__Vcoverage[2409]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending = 0U;
            vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending = 0U;
        } else {
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs) {
                ++(vlSelf->__Vcoverage[2405]);
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending = 1U;
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold 
                    = vlSelfRef.tb_axil__DOT__i_axi_awaddr;
            } else {
                ++(vlSelf->__Vcoverage[2406]);
            }
            if (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs) {
                ++(vlSelf->__Vcoverage[2407]);
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending = 1U;
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold 
                    = vlSelfRef.tb_axil__DOT__i_axi_wdata;
                vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold 
                    = vlSelfRef.tb_axil__DOT__i_axi_wstrb;
            } else {
                ++(vlSelf->__Vcoverage[2408]);
            }
            ++(vlSelf->__Vcoverage[2410]);
        }
        if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
             & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
            ++(vlSelf->__Vcoverage[2411]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
            ++(vlSelf->__Vcoverage[2412]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid)))) {
            ++(vlSelf->__Vcoverage[2413]);
        }
    } else {
        ++(vlSelf->__Vcoverage[2414]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2415]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2416]);
    }
    ++(vlSelf->__Vcoverage[2417]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2607]);
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
        ++(vlSelf->__Vcoverage[2606]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2608]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2609]);
    }
    ++(vlSelf->__Vcoverage[2610]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2652]);
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
        ++(vlSelf->__Vcoverage[2651]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2653]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2654]);
    }
    ++(vlSelf->__Vcoverage[2655]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2697]);
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
        ++(vlSelf->__Vcoverage[2696]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2698]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2699]);
    }
    ++(vlSelf->__Vcoverage[2700]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2562]);
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
        ++(vlSelf->__Vcoverage[2561]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow = 0U;
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2563]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2564]);
    }
    ++(vlSelf->__Vcoverage[2565]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2479]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt;
    } else {
        ++(vlSelf->__Vcoverage[2478]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2480]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2481]);
    }
    ++(vlSelf->__Vcoverage[2482]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)));
            ++(vlSelf->__Vcoverage[2418]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count) 
                                  - (IData)(1U)));
            ++(vlSelf->__Vcoverage[2419]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count;
            ++(vlSelf->__Vcoverage[2420]);
        }
        if ((2U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve) 
                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)));
            ++(vlSelf->__Vcoverage[2421]);
        } else if ((1U == (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve) 
                            << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs)))) {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count) 
                                  - (IData)(1U)));
            ++(vlSelf->__Vcoverage[2422]);
        } else {
            __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count;
            ++(vlSelf->__Vcoverage[2423]);
        }
        ++(vlSelf->__Vcoverage[2428]);
        ++(vlSelf->__Vcoverage[2430]);
    } else {
        __Vdly__tb_axil__DOT__u_dut__DOT__reg_rd_count_5 = 0U;
        __Vdly__tb_axil__DOT__u_dut__DOT__reg_wr_count_6 = 0U;
        ++(vlSelf->__Vcoverage[2429]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_rst_n_axi)))) {
        ++(vlSelf->__Vcoverage[2431]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2432]);
    }
    ++(vlSelf->__Vcoverage[2433]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2749]);
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
        ++(vlSelf->__Vcoverage[2748]);
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
        ++(vlSelf->__Vcoverage[2750]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2751]);
    }
    ++(vlSelf->__Vcoverage[2752]);
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2800]);
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
        ++(vlSelf->__Vcoverage[2799]);
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
        ++(vlSelf->__Vcoverage[2801]);
    }
    if (vlSelfRef.tb_axil__DOT__i_rst_n_axi) {
        ++(vlSelf->__Vcoverage[2802]);
    }
    ++(vlSelf->__Vcoverage[2803]);
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
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3589, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_wr_ptr;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3591, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
                [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr] 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1227, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[0U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 3525, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[0U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[0U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[1U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 3557, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[1U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem[1U];
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1211, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3593, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3029, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_wr_ptr;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3031, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr;
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
                  [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1535, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_r_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_r_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[0U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 2893, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[0U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[0U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[1U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 2961, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_mem[1U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_mem[1U]);
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
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3033, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_wr_ptr)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2851, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_wr_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_rd_ptr)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2855, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_rd_ptr);
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
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2835, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[0U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[0U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[1U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2839, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[1U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[1U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[2U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2843, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[2U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[2U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[2U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[2U];
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[3U] 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[3U]))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2847, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_mem[3U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_mem[3U]);
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
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 2859, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__reg_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_wr_ptr)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3481, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_wr_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_wr_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_wr_ptr;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_rd_ptr)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 3485, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_rd_ptr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_rd_ptr 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr;
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                  [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 1363, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr], vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[0U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[0U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 3065, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[0U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[0U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[0U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[0U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[1U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[1U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 3169, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[1U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[1U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[1U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[1U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[2U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[2U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 3273, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[2U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[2U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[2U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[2U];
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[3U] 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[3U]))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 3377, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[3U], vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[3U]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_mem[3U] 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem[3U];
    }
    vlSelfRef.__Vdfg_Regularize_179 = (0x0000000fU 
                                       & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                 [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr]));
    vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask = 
        ((((0x0000ff00U & ((- (IData)((1U & (IData)(
                                                    (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                     [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                     >> 3U))))) 
                           << 8U)) | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                             [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                             >> 2U))))))) 
          << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                                    [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                                                    >> 1U))))) 
                                             << 8U)) 
                             | (0x000000ffU & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                                                    [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr])))))));
    vlSelfRef.__Vdfg_Regularize_178 = (IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                               [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                               >> 4U));
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1219, 
                               (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)), vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_valid 
            = (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 3489, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__reg_count);
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
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 1103, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_awaddr_hold);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_awaddr_hold 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata_hold))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1135, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata_hold);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata_hold 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb_hold)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1199, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb_hold);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb_hold 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data 
        = (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_awaddr_hold)) 
            << 0x00000024U) | (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wdata_hold)) 
                                << 4U) | (QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wstrb_hold))));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1099, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_aw_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) {
        ++(vlSelf->__Vcoverage[2402]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)))) {
        ++(vlSelf->__Vcoverage[2403]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)))) {
        ++(vlSelf->__Vcoverage[2404]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1101, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_w_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid 
        = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 655, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 653, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 637, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 645, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_start);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 649, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_fault);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 651, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_0_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_value 
        = (0x34000000U | ((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                            << 0x00000014U) | (((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow))) 
                                               << 0x00000010U)) 
                          | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done) 
                             << 0x0000000fU)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 689, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 687, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 673, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 681, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_start);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 683, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_fault);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 685, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_1_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_value 
        = ((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
             << 0x00000014U) | (((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start) 
                                   << 3U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
                                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow))) 
                                << 0x00000010U)) | 
           ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done) 
            << 0x0000000fU));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 707, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 705, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 691, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 699, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_start);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 701, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_fault);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 703, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_port_2_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_value 
        = ((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
             << 0x00000014U) | (((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start) 
                                   << 3U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
                                     << 1U) | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow))) 
                                << 0x00000010U)) | 
           ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done) 
            << 0x0000000fU));
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 603, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_mode 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 619, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_done 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 617, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 611, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_start);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_start 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_fault))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 613, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_fault);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_fault 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_pending))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 615, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_engine_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_value 
        = (0x12000000U | ((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                            << 0x00000014U) | (((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow))) 
                                               << 0x00000010U)) 
                          | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done) 
                             << 0x0000000fU)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1079, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_accept_read))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1081, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_accept_read);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_accept_read 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_rd_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1083, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_rd_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_rd_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wr_count)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1091, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wr_count);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wr_count 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count;
    }
    if ((0U != (0x00007fffU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                               ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 781, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != (0x00007fffU & ((vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
                               >> 0x0000000fU)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 811, 
                               (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                >> 0x0000000fU), (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
                                                  >> 0x0000000fU));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment 
            = ((0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_key_fragment) 
               | (0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 777, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_match 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 773, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_overflow 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_capture)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 757, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_capture);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_capture 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_error)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 765, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_error);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_error 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_pending)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 769, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_pending);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_pending 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                               ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 741, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold 
            = ((0xf0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
               | (0x0000000fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    if ((0U != (0x0000000fU & (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
                               >> 4U)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 749, 
                               ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                >> 4U), ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold) 
                                         >> 4U));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold 
            = ((0x0fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__o_monitor_threshold)) 
               | (0x000000f0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold)));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value 
        = (0x0000000056000000ULL | (((QData)((IData)(
                                                     (0x0000f000U 
                                                      | ((((0x0000001eU 
                                                            & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                                               >> 3U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                                                 >> 1U))) 
                                                          << 4U) 
                                                         | ((((2U 
                                                               & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error)) 
                                                              | (1U 
                                                                 & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                                                                    >> 1U))) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow)) 
                                                               | (1U 
                                                                  & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                                                                     >> 1U)))))))) 
                                     << 0x0000002fU) 
                                    | (QData)((IData)(
                                                      ((((0x0000001eU 
                                                          & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture))) 
                                                        << 0x00000013U) 
                                                       | ((((2U 
                                                             & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending))) 
                                                           << 0x00000011U) 
                                                          | ((0x00010000U 
                                                              & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow) 
                                                                 << 0x00000010U)) 
                                                             | (0x00008000U 
                                                                & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                                                                   << 0x0000000fU)))))))));
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
    if ((0U != ((IData)(vlSelfRef.__Vdfg_Regularize_179) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 937, vlSelfRef.__Vdfg_Regularize_179, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wstrb 
            = vlSelfRef.__Vdfg_Regularize_179;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wmask))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 945, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wmask);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wmask 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask;
    }
    if ((0U != (vlSelfRef.__Vdfg_Regularize_178 ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 873, vlSelfRef.__Vdfg_Regularize_178, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_wdata 
            = vlSelfRef.__Vdfg_Regularize_178;
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(52, vlSelf->__Vcoverage + 1259, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_data;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1215, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_valid 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_value 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1729, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_value, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_value);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_value 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_value;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_value 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1815, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_value, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_value);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_value 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_value;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_value 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1901, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_value, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_value);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_value 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_value;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_value 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1643, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_value, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_value);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_value 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_value;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value)))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2069, (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value), (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0xffffffff00000000ULL & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | (IData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value)));
    }
    if ((0U != ((IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value 
                         >> 0x00000020U)) ^ (IData)(
                                                    (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                     >> 0x00000020U))))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2133, (IData)(
                                                                       (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value 
                                                                        >> 0x00000020U)), (IData)(
                                                                                (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
                                                                                >> 0x00000020U)));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value 
            = ((0x00000000ffffffffULL & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_value) 
               | ((QData)((IData)((IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value 
                                           >> 0x00000020U)))) 
                  << 0x00000020U));
    }
}

void Vtb_axil___024root___nba_comb__TOP__0(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___nba_comb__TOP__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_axil__DOT__i_axi_wvalid) {
        ++(vlSelf->__Vcoverage[2335]);
    }
    if (vlSelfRef.tb_axil__DOT__i_axi_awvalid) {
        ++(vlSelf->__Vcoverage[2336]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid)) 
               & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid))))) {
        ++(vlSelf->__Vcoverage[2337]);
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
    if (((IData)(vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) 
         ^ (IData)(vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 376, vlSelfRef.tb_axil__DOT__i_hw_clear_key_data, vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data);
        vlSelfRef.tb_axil__DOT____Vtogcov__i_hw_clear_key_data 
            = vlSelfRef.tb_axil__DOT__i_hw_clear_key_data;
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
    if ((0U != (vlSelfRef.tb_axil__DOT__old_value ^ vlSelfRef.tb_axil__DOT____Vtogcov__old_value))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 470, vlSelfRef.tb_axil__DOT__old_value, vlSelfRef.tb_axil__DOT____Vtogcov__old_value);
        vlSelfRef.tb_axil__DOT____Vtogcov__old_value 
            = vlSelfRef.tb_axil__DOT__old_value;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
           | (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1617, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_write_candidate 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate;
    }
}

void Vtb_axil___024root___nba_comb__TOP__1(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___nba_comb__TOP__1\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*14:0*/ tb_axil__DOT__u_dut__DOT____VlemCond_43;
    SData/*14:0*/ tb_axil__DOT__u_dut__DOT____VlemCond_35;
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
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_0;
    tb_axil__DOT__u_dut__DOT__w_we_port_0 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_0;
    tb_axil__DOT__u_dut__DOT__w_rd_port_0 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_1;
    tb_axil__DOT__u_dut__DOT__w_we_port_1 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_1;
    tb_axil__DOT__u_dut__DOT__w_rd_port_1 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_port_2;
    tb_axil__DOT__u_dut__DOT__w_we_port_2 = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_rd_port_2;
    tb_axil__DOT__u_dut__DOT__w_rd_port_2 = 0;
    CData/*1:0*/ tb_axil__DOT__u_dut__DOT__w_we_monitor;
    tb_axil__DOT__u_dut__DOT__w_we_monitor = 0;
    CData/*1:0*/ tb_axil__DOT__u_dut__DOT__w_rd_monitor;
    tb_axil__DOT__u_dut__DOT__w_rd_monitor = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__w_we_key;
    tb_axil__DOT__u_dut__DOT__w_we_key = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready = 0;
    CData/*0:0*/ tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready;
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready = 0;
    CData/*1:0*/ __Vdfg_Regularize_180;
    __Vdfg_Regularize_180 = 0;
    // Body
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[2391]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[2392]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2393]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[3039]);
    }
    if ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3040]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[3041]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3042]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready))) {
        ++(vlSelf->__Vcoverage[3046]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_rready)))) {
        ++(vlSelf->__Vcoverage[3047]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3048]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_rready) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)));
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[2394]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[2395]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2396]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[2867]);
    }
    if ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2868]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[2869]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[2870]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
         & (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready))) {
        ++(vlSelf->__Vcoverage[2874]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_bready)))) {
        ++(vlSelf->__Vcoverage[2875]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2876]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs 
        = ((IData)(vlSelfRef.tb_axil__DOT__i_axi_bready) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1611, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_r_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_rd_hs));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1613, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_b_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready 
        = ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_rd_hs));
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1223, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1225, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_ready);
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
            ++(vlSelf->__Vcoverage[2434]);
        } else {
            tb_axil__DOT__u_dut__DOT__w_issue_write = 1U;
            ++(vlSelf->__Vcoverage[2435]);
        }
        ++(vlSelf->__Vcoverage[2445]);
    } else {
        if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
             & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready))) {
            tb_axil__DOT__u_dut__DOT__w_issue_read = 1U;
            ++(vlSelf->__Vcoverage[2441]);
        } else {
            if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
                 & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
                tb_axil__DOT__u_dut__DOT__w_issue_write = 1U;
                ++(vlSelf->__Vcoverage[2436]);
            } else {
                ++(vlSelf->__Vcoverage[2437]);
            }
            if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
                 & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
                ++(vlSelf->__Vcoverage[2438]);
            }
            if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
                ++(vlSelf->__Vcoverage[2439]);
            }
            if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
                ++(vlSelf->__Vcoverage[2440]);
            }
        }
        if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
             & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready))) {
            ++(vlSelf->__Vcoverage[2442]);
        }
        if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
            ++(vlSelf->__Vcoverage[2443]);
        }
        if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
            ++(vlSelf->__Vcoverage[2444]);
        }
    }
    if (((((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)) 
          & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2446]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2447]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2448]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2449]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[2450]);
    }
    ++(vlSelf->__Vcoverage[2451]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2871]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2872]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[2873]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write))) {
        ++(vlSelf->__Vcoverage[3499]);
    }
    if ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3500]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[3501]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3502]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write))) {
        ++(vlSelf->__Vcoverage[3506]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[3507]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3508]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1221, tb_axil__DOT__u_dut__DOT__w_issue_write, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_r_ready);
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
        ++(vlSelf->__Vcoverage[3043]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3044]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3045]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read))) {
        ++(vlSelf->__Vcoverage[3601]);
    }
    if ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3602]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3603]);
    }
    if (((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)))) {
        ++(vlSelf->__Vcoverage[3604]);
    }
    if (((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read))) {
        ++(vlSelf->__Vcoverage[3608]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[3609]);
    }
    if ((0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count))) {
        ++(vlSelf->__Vcoverage[3610]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1213, tb_axil__DOT__u_dut__DOT__w_issue_read, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_r_ready 
            = tb_axil__DOT__u_dut__DOT__w_issue_read;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__o_w_ready));
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2474]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2477]);
        if (tb_axil__DOT__u_dut__DOT__w_issue_write) {
            ++(vlSelf->__Vcoverage[2475]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2 = 1U;
        } else {
            ++(vlSelf->__Vcoverage[2476]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read;
        }
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_2;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_3;
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2472]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2473]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
           & (0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)));
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2454]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_mem
            [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_rd_ptr];
    } else {
        ++(vlSelf->__Vcoverage[2455]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0 
            = (0x0000ffffU & (IData)((vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_mem
                                      [vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_rd_ptr] 
                                      >> 0x24U)));
    }
    tb_axil__DOT__u_dut__DOT__w_issue_addr = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_0;
    if (tb_axil__DOT__u_dut__DOT__w_issue_read) {
        ++(vlSelf->__Vcoverage[2452]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2453]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2865, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_rsp_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3497, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_rd_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready 
        = ((4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_rd_hs));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3037, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_rsp_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1619, vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_axi_rr_read_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_rr_read_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3599, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_rd_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs;
    }
    tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__reg_count)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_rd_hs));
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 841, tb_axil__DOT__u_dut__DOT__w_issue_addr, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__reg_addr 
            = tb_axil__DOT__u_dut__DOT__w_issue_addr;
    }
    __Vdfg_Regularize_180 = (((0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
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
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2816]);
        } else if ((0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2817]);
        } else if ((0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2818]);
        } else if ((0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_value;
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2819]);
        } else if ((0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value);
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2820]);
            ++(vlSelf->__Vcoverage[2822]);
        } else if ((0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            tb_axil__DOT__u_dut__DOT__w_rdata_nxt = (IData)(
                                                            (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_value 
                                                             >> 0x20U));
            tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
            ++(vlSelf->__Vcoverage[2823]);
            ++(vlSelf->__Vcoverage[2825]);
        } else if ((0x0208U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
            ++(vlSelf->__Vcoverage[2827]);
            ++(vlSelf->__Vcoverage[2828]);
        } else {
            ++(vlSelf->__Vcoverage[2830]);
            ++(vlSelf->__Vcoverage[2831]);
        }
    } else if ((0x0400U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        tb_axil__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_axil__DOT__u_dut__DOT__w_addr_mapped = 1U;
        ++(vlSelf->__Vcoverage[2832]);
    } else {
        tb_axil__DOT__u_dut__DOT__w_rdata_nxt = 0U;
        tb_axil__DOT__u_dut__DOT__w_addr_mapped = 0U;
        ++(vlSelf->__Vcoverage[2833]);
    }
    ++(vlSelf->__Vcoverage[2834]);
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3503]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3504]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_cmd_w_valid)))) {
        ++(vlSelf->__Vcoverage[3505]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1217, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_cmd_w_ready 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready;
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2348]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2349]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2350]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2351]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2352]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2353]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2354]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2355]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2356]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2357]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2358]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2359]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2362]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)))) {
        ++(vlSelf->__Vcoverage[2363]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) {
        ++(vlSelf->__Vcoverage[2364]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2365]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2366]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2367]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2368]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2369]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2370]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2371]);
    }
    if ((((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
            & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2372]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)))) {
        ++(vlSelf->__Vcoverage[2373]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read)))) {
        ++(vlSelf->__Vcoverage[2374]);
    }
    if (((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
           & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
          & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2375]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending)) 
          & (4U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2376]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2379]);
    }
    if (((4U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)))) {
        ++(vlSelf->__Vcoverage[2380]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) {
        ++(vlSelf->__Vcoverage[2381]);
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
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1209, tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_ready);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_ready 
            = tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready;
    }
    if (((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read))) {
        ++(vlSelf->__Vcoverage[2338]);
    }
    if (((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
          & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count))) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate)))) {
        ++(vlSelf->__Vcoverage[2339]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wr_count)))) {
        ++(vlSelf->__Vcoverage[2340]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_axi_accept_read))) {
        ++(vlSelf->__Vcoverage[2341]);
    }
    if ((((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
          & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)) 
         & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_write_candidate)))) {
        ++(vlSelf->__Vcoverage[2342]);
    }
    if (((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[2343]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[2346]);
    }
    if ((2U <= (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count))) {
        ++(vlSelf->__Vcoverage[2347]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready 
        = ((2U > (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_rd_count)) 
           & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready));
    if ((0U != (tb_axil__DOT__u_dut__DOT__w_rdata_nxt 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1013, tb_axil__DOT__u_dut__DOT__w_rdata_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rdata_nxt 
            = tb_axil__DOT__u_dut__DOT__w_rdata_nxt;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_addr_mapped) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1077, tb_axil__DOT__u_dut__DOT__w_addr_mapped, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_addr_mapped 
            = tb_axil__DOT__u_dut__DOT__w_addr_mapped;
    }
    if ((0U != (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2458]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 2U;
    } else {
        ++(vlSelf->__Vcoverage[2463]);
        if (tb_axil__DOT__u_dut__DOT__w_addr_mapped) {
            ++(vlSelf->__Vcoverage[2462]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 0U;
            ++(vlSelf->__Vcoverage[2461]);
        } else {
            ++(vlSelf->__Vcoverage[2459]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1 = 3U;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_1;
    if ((0U != (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2456]);
    }
    if ((0U == (3U & (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2457]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3495, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_wr_cmd_fifo__DOT__w_wr_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready))) {
        ++(vlSelf->__Vcoverage[2385]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_awready)))) {
        ++(vlSelf->__Vcoverage[2386]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_awvalid)))) {
        ++(vlSelf->__Vcoverage[2387]);
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
        ++(vlSelf->__Vcoverage[2388]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_wready)))) {
        ++(vlSelf->__Vcoverage[2389]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_wvalid)))) {
        ++(vlSelf->__Vcoverage[2390]);
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
        ++(vlSelf->__Vcoverage[2382]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__o_axi_arready)))) {
        ++(vlSelf->__Vcoverage[2383]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_axi_arvalid)))) {
        ++(vlSelf->__Vcoverage[2384]);
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
        ++(vlSelf->__Vcoverage[2464]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp))) {
        ++(vlSelf->__Vcoverage[2465]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_read)))) {
        ++(vlSelf->__Vcoverage[2466]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)))) {
        ++(vlSelf->__Vcoverage[2467]);
    }
    if ((0U != (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp))) {
        ++(vlSelf->__Vcoverage[2468]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_issue_write)))) {
        ++(vlSelf->__Vcoverage[2469]);
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1603, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_rsp_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp;
    }
    tb_axil__DOT__u_dut__DOT__w_rd_en = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_read) 
                                         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)));
    tb_axil__DOT__u_dut__DOT__w_wr_en = ((IData)(tb_axil__DOT__u_dut__DOT__w_issue_write) 
                                         & (0U == (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1607, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_aw_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1609, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_w_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs;
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs))) {
        ++(vlSelf->__Vcoverage[2397]);
    }
    if ((((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending)) 
          & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
         & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs))) {
        ++(vlSelf->__Vcoverage[2398]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs)) 
               & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs))))) {
        ++(vlSelf->__Vcoverage[2399]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending) {
        ++(vlSelf->__Vcoverage[2400]);
    }
    if (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) {
        ++(vlSelf->__Vcoverage[2401]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve 
        = ((~ ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_aw_pending) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_w_pending))) 
           & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_aw_hs) 
              | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_w_hs)));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
         & (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready))) {
        ++(vlSelf->__Vcoverage[3605]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready)))) {
        ++(vlSelf->__Vcoverage[3606]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid)))) {
        ++(vlSelf->__Vcoverage[3607]);
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1207, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_cmd_w_valid 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs 
        = ((IData)(tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__o_w_ready) 
           & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_cmd_w_valid));
    if (tb_axil__DOT__u_dut__DOT__w_rd_en) {
        ++(vlSelf->__Vcoverage[2470]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2471]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2504]);
    }
    if ((0U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2505]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2506]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2507]);
    }
    if ((0x0100U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2508]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2509]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2510]);
    }
    if ((0x0104U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2511]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2512]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2513]);
    }
    if ((0x0108U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2514]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2515]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2516]);
    }
    if ((0x0200U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2517]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2518]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         & (0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2519]);
    }
    if ((0x0204U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2520]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))) {
        ++(vlSelf->__Vcoverage[2521]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1009, tb_axil__DOT__u_dut__DOT__w_rd_en, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_en 
            = tb_axil__DOT__u_dut__DOT__w_rd_en;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data 
        = (((QData)((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_issue_resp)) 
            << 0x00000020U) | (QData)((IData)((tb_axil__DOT__u_dut__DOT__w_rdata_nxt 
                                               & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en)))))));
    tb_axil__DOT__u_dut__DOT__w_rd_port_0 = ((0x0100U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_port_1 = ((0x0104U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_port_2 = ((0x0108U 
                                              == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_engine = ((0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_en));
    tb_axil__DOT__u_dut__DOT__w_rd_monitor = ((IData)(__Vdfg_Regularize_180) 
                                              & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_rd_en))));
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2483]);
    }
    if ((0U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2484]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2485]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0100U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2486]);
    }
    if ((0x0100U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2487]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2488]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0104U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2489]);
    }
    if ((0x0104U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2490]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2491]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0108U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2492]);
    }
    if ((0x0108U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2493]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2494]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0200U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2495]);
    }
    if ((0x0200U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2496]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2497]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0204U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2498]);
    }
    if ((0x0204U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2499]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2500]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         & (0x0400U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)))) {
        ++(vlSelf->__Vcoverage[2501]);
    }
    if ((0x0400U != (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr))) {
        ++(vlSelf->__Vcoverage[2502]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en)))) {
        ++(vlSelf->__Vcoverage[2503]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1011, tb_axil__DOT__u_dut__DOT__w_wr_en, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_en 
            = tb_axil__DOT__u_dut__DOT__w_wr_en;
    }
    tb_axil__DOT__u_dut__DOT__w_we_key = ((0x0400U 
                                           == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
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
    tb_axil__DOT__u_dut__DOT__w_we_engine = ((0U == (IData)(tb_axil__DOT__u_dut__DOT__w_issue_addr)) 
                                             & (IData)(tb_axil__DOT__u_dut__DOT__w_wr_en));
    tb_axil__DOT__u_dut__DOT__w_we_monitor = ((IData)(__Vdfg_Regularize_180) 
                                              & (- (IData)((IData)(tb_axil__DOT__u_dut__DOT__w_wr_en))));
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1615, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_wr_reserve 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_wr_reserve;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3597, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs, vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs);
        vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT____Vtogcov__w_wr_hs 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__g_sync_axi_fifo__DOT__u_axi_rd_cmd_fifo__DOT__w_wr_hs;
    }
    if ((0ULL != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data 
                  ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data))) {
        VL_COV_TOGGLE_CHG_ST_Q(34, vlSelf->__Vcoverage + 1467, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_rsp_w_data 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_rd_rsp_w_data;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_0) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1709, tb_axil__DOT__u_dut__DOT__w_rd_port_0, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_0 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_0;
    }
    ++(vlSelf->__Vcoverage[2605]);
    if (tb_axil__DOT__u_dut__DOT__w_rd_port_0) {
        ++(vlSelf->__Vcoverage[2603]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2604]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_done;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_15;
    ++(vlSelf->__Vcoverage[2601]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_1) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1795, tb_axil__DOT__u_dut__DOT__w_rd_port_1, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_1 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_1;
    }
    ++(vlSelf->__Vcoverage[2650]);
    if (tb_axil__DOT__u_dut__DOT__w_rd_port_1) {
        ++(vlSelf->__Vcoverage[2648]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2649]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_done;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_21;
    ++(vlSelf->__Vcoverage[2646]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_port_2) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1881, tb_axil__DOT__u_dut__DOT__w_rd_port_2, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_port_2 
            = tb_axil__DOT__u_dut__DOT__w_rd_port_2;
    }
    ++(vlSelf->__Vcoverage[2695]);
    if (tb_axil__DOT__u_dut__DOT__w_rd_port_2) {
        ++(vlSelf->__Vcoverage[2693]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2694]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_done;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_27;
    ++(vlSelf->__Vcoverage[2691]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_rd_engine) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1623, tb_axil__DOT__u_dut__DOT__w_rd_engine, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_engine 
            = tb_axil__DOT__u_dut__DOT__w_rd_engine;
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2557]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_done;
    } else {
        ++(vlSelf->__Vcoverage[2560]);
        if (tb_axil__DOT__u_dut__DOT__w_rd_engine) {
            ++(vlSelf->__Vcoverage[2558]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2559]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_done;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_9;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_done) {
        ++(vlSelf->__Vcoverage[2555]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_done)))) {
        ++(vlSelf->__Vcoverage[2556]);
    }
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2065, tb_axil__DOT__u_dut__DOT__w_rd_monitor, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_rd_monitor 
            = tb_axil__DOT__u_dut__DOT__w_rd_monitor;
    }
    ++(vlSelf->__Vcoverage[2740]);
    if ((1U & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor))) {
        ++(vlSelf->__Vcoverage[2738]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2739]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_33));
    ++(vlSelf->__Vcoverage[2736]);
    ++(vlSelf->__Vcoverage[2791]);
    if ((2U & (IData)(tb_axil__DOT__u_dut__DOT__w_rd_monitor))) {
        ++(vlSelf->__Vcoverage[2789]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2790]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_match) 
                     >> 1U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_41) 
              << 1U));
    ++(vlSelf->__Vcoverage[2787]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_key) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 2197, tb_axil__DOT__u_dut__DOT__w_we_key, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_key 
            = tb_axil__DOT__u_dut__DOT__w_we_key;
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2806]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2809]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_key) 
             & (0U != vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))) {
            ++(vlSelf->__Vcoverage[2807]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44 
                = ((vlSelfRef.__Vdfg_Regularize_178 
                    & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                   | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data 
                      & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)));
        } else {
            ++(vlSelf->__Vcoverage[2808]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_key_data;
        }
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_44;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_45;
    if (vlSelfRef.tb_axil__DOT__i_hw_clear_key_data) {
        ++(vlSelf->__Vcoverage[2804]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_clear_key_data)))) {
        ++(vlSelf->__Vcoverage[2805]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1707, tb_axil__DOT__u_dut__DOT__w_we_port_0, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_0 
            = tb_axil__DOT__u_dut__DOT__w_we_port_0;
    }
    ++(vlSelf->__Vcoverage[2599]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2597]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2598]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_overflow;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_14;
    ++(vlSelf->__Vcoverage[2595]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2573]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2574]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_10;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2567]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2568]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2569]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2570]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2571]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2572]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2578]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2581]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_start;
        ++(vlSelf->__Vcoverage[2580]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_11;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2575]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2576]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0)))) {
        ++(vlSelf->__Vcoverage[2577]);
    }
    ++(vlSelf->__Vcoverage[2587]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2585]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                      & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2586]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_fault;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_12;
    ++(vlSelf->__Vcoverage[2583]);
    ++(vlSelf->__Vcoverage[2593]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_0) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2591]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_178 
                   >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2592]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_0_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_13;
    ++(vlSelf->__Vcoverage[2589]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1793, tb_axil__DOT__u_dut__DOT__w_we_port_1, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_1 
            = tb_axil__DOT__u_dut__DOT__w_we_port_1;
    }
    ++(vlSelf->__Vcoverage[2644]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2642]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2643]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_overflow;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_20;
    ++(vlSelf->__Vcoverage[2640]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2618]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2619]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_16;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2612]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2613]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2614]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2615]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2616]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2617]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2623]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2626]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_start;
        ++(vlSelf->__Vcoverage[2625]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_17;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2620]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2621]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1)))) {
        ++(vlSelf->__Vcoverage[2622]);
    }
    ++(vlSelf->__Vcoverage[2632]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2630]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                      & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2631]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_fault;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_18;
    ++(vlSelf->__Vcoverage[2628]);
    ++(vlSelf->__Vcoverage[2638]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_1) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2636]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_178 
                   >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2637]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_1_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_19;
    ++(vlSelf->__Vcoverage[2634]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1879, tb_axil__DOT__u_dut__DOT__w_we_port_2, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_port_2 
            = tb_axil__DOT__u_dut__DOT__w_we_port_2;
    }
    ++(vlSelf->__Vcoverage[2689]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2687]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2688]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_overflow;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_26;
    ++(vlSelf->__Vcoverage[2685]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2663]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2664]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_22;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2657]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2658]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2659]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2660]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2661]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2662]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2668]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2671]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_start;
        ++(vlSelf->__Vcoverage[2670]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_23;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2665]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2666]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2)))) {
        ++(vlSelf->__Vcoverage[2667]);
    }
    ++(vlSelf->__Vcoverage[2677]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x12U))) {
        ++(vlSelf->__Vcoverage[2675]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault) 
               & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                      & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                     >> 0x12U)));
    } else {
        ++(vlSelf->__Vcoverage[2676]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_fault;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_24;
    ++(vlSelf->__Vcoverage[2673]);
    ++(vlSelf->__Vcoverage[2683]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_port_2) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x11U))) {
        ++(vlSelf->__Vcoverage[2681]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
            = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending) 
               & ((vlSelfRef.__Vdfg_Regularize_178 
                   >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                   >> 0x11U))));
    } else {
        ++(vlSelf->__Vcoverage[2682]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_port_2_pending;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_25;
    ++(vlSelf->__Vcoverage[2679]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1621, tb_axil__DOT__u_dut__DOT__w_we_engine, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_engine 
            = tb_axil__DOT__u_dut__DOT__w_we_engine;
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2528]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2529]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_mode;
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_4;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000017U))) {
        ++(vlSelf->__Vcoverage[2522]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000016U))) {
        ++(vlSelf->__Vcoverage[2523]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000015U))) {
        ++(vlSelf->__Vcoverage[2524]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x00000014U))) {
        ++(vlSelf->__Vcoverage[2525]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2526]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2527]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2551]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_overflow;
    } else {
        ++(vlSelf->__Vcoverage[2554]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
            ++(vlSelf->__Vcoverage[2552]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 = 0U;
        } else {
            ++(vlSelf->__Vcoverage[2553]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_overflow;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_8;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow) {
        ++(vlSelf->__Vcoverage[2549]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_overflow)))) {
        ++(vlSelf->__Vcoverage[2550]);
    }
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2533]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_start)
                                     ? (IData)(vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start)
                                     : (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start)) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2536]);
        if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_start) {
            ++(vlSelf->__Vcoverage[2534]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_start;
        } else {
            ++(vlSelf->__Vcoverage[2535]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_start;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_5;
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
         & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
            >> 0x13U))) {
        ++(vlSelf->__Vcoverage[2530]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2531]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_engine)))) {
        ++(vlSelf->__Vcoverage[2532]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2539]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_fault;
    } else {
        ++(vlSelf->__Vcoverage[2542]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x12U))) {
            ++(vlSelf->__Vcoverage[2540]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault) 
                   & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                          & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                         >> 0x12U)));
        } else {
            ++(vlSelf->__Vcoverage[2541]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_fault;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_6;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault) {
        ++(vlSelf->__Vcoverage[2537]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_fault)))) {
        ++(vlSelf->__Vcoverage[2538]);
    }
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2545]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
            = vlSelfRef.tb_axil__DOT__i_hw_wdata_engine_pending;
    } else {
        ++(vlSelf->__Vcoverage[2548]);
        if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_engine) 
             & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                >> 0x11U))) {
            ++(vlSelf->__Vcoverage[2546]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
                = ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending) 
                   & ((vlSelfRef.__Vdfg_Regularize_178 
                       >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                       >> 0x11U))));
        } else {
            ++(vlSelf->__Vcoverage[2547]);
            vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7 
                = vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_engine_pending;
        }
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_7;
    if (vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending) {
        ++(vlSelf->__Vcoverage[2543]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axil__DOT__i_hw_we_engine_pending)))) {
        ++(vlSelf->__Vcoverage[2544]);
    }
    if ((0U != ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 2061, tb_axil__DOT__u_dut__DOT__w_we_monitor, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_we_monitor 
            = tb_axil__DOT__u_dut__DOT__w_we_monitor;
    }
    ++(vlSelf->__Vcoverage[2734]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2732]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2733]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_32));
    ++(vlSelf->__Vcoverage[2730]);
    ++(vlSelf->__Vcoverage[2785]);
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (IData)(vlSelfRef.__Vdfg_Regularize_179)))) {
        ++(vlSelf->__Vcoverage[2783]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2784]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_overflow) 
                     >> 1U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_40) 
              << 1U));
    ++(vlSelf->__Vcoverage[2781]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                  >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2708]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2709]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28 
            = (0x0000000fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_28;
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2702]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2703]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2704]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2705]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2706]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2707]);
    }
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2713]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                   & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2716]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture));
        ++(vlSelf->__Vcoverage[2715]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_29));
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2710]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2711]);
    }
    if ((1U & (~ (IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor)))) {
        ++(vlSelf->__Vcoverage[2712]);
    }
    ++(vlSelf->__Vcoverage[2722]);
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x12U)))) {
        ++(vlSelf->__Vcoverage[2720]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                     & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                            & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                           >> 0x12U))));
    } else {
        ++(vlSelf->__Vcoverage[2721]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_30));
    ++(vlSelf->__Vcoverage[2718]);
    ++(vlSelf->__Vcoverage[2728]);
    if ((1U & ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
               & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x11U)))) {
        ++(vlSelf->__Vcoverage[2726]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                     & ((vlSelfRef.__Vdfg_Regularize_178 
                         >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                         >> 0x11U)))));
    } else {
        ++(vlSelf->__Vcoverage[2727]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31 
            = (1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((2U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_31));
    ++(vlSelf->__Vcoverage[2724]);
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x0000000fU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                          >> 0x14U))))) {
        ++(vlSelf->__Vcoverage[2759]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & (((vlSelfRef.__Vdfg_Regularize_178 
                                & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                               >> 0x14U) | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                                             >> 4U) 
                                            & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                  >> 0x14U)))));
    } else {
        ++(vlSelf->__Vcoverage[2760]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_threshold) 
                              >> 4U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__ 
        = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_36;
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000017U)))) {
        ++(vlSelf->__Vcoverage[2753]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000016U)))) {
        ++(vlSelf->__Vcoverage[2754]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000015U)))) {
        ++(vlSelf->__Vcoverage[2755]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000014U)))) {
        ++(vlSelf->__Vcoverage[2756]);
    }
    if ((IData)((0U == (0x00f00000U & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2757]);
    }
    if ((1U & (~ ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2758]);
    }
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2764]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
            = (1U & (((vlSelfRef.__Vdfg_Regularize_178 
                       & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                      >> 0x13U) | (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                                    >> 1U) & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                 >> 0x13U)))));
    } else {
        ++(vlSelf->__Vcoverage[2767]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_capture) 
                     >> 1U));
        ++(vlSelf->__Vcoverage[2766]);
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_37) 
              << 1U));
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000013U)))) {
        ++(vlSelf->__Vcoverage[2761]);
    }
    if ((1U & (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                  >> 0x13U)))) {
        ++(vlSelf->__Vcoverage[2762]);
    }
    if ((1U & (~ ((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[2763]);
    }
    ++(vlSelf->__Vcoverage[2773]);
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000012U)))) {
        ++(vlSelf->__Vcoverage[2771]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
            = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                        >> 1U) & (~ ((vlSelfRef.__Vdfg_Regularize_178 
                                      & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                                     >> 0x12U))));
    } else {
        ++(vlSelf->__Vcoverage[2772]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_error) 
                     >> 1U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_38) 
              << 1U));
    ++(vlSelf->__Vcoverage[2769]);
    ++(vlSelf->__Vcoverage[2779]);
    if ((IData)((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
                  >> 1U) & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                            >> 0x00000011U)))) {
        ++(vlSelf->__Vcoverage[2777]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
            = (IData)((((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                        >> 1U) & ((vlSelfRef.__Vdfg_Regularize_178 
                                   >> 0x11U) | (~ (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask 
                                                   >> 0x11U)))));
    } else {
        ++(vlSelf->__Vcoverage[2778]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39 
            = (1U & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_pending) 
                     >> 1U));
    }
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt 
        = ((1U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt)) 
           | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_39) 
              << 1U));
    ++(vlSelf->__Vcoverage[2775]);
    ++(vlSelf->__Vcoverage[2746]);
    if (((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
         & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2744]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34 
            = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_178 
                               & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                              | (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                 & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))));
    } else {
        ++(vlSelf->__Vcoverage[2745]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34 
            = (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment);
    }
    tb_axil__DOT__u_dut__DOT____VlemCond_35 = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_34;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__ 
        = tb_axil__DOT__u_dut__DOT____VlemCond_35;
    ++(vlSelf->__Vcoverage[2742]);
    ++(vlSelf->__Vcoverage[2797]);
    if ((((IData)(tb_axil__DOT__u_dut__DOT__w_we_monitor) 
          >> 1U) & (0U != (0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask)))) {
        ++(vlSelf->__Vcoverage[2795]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42 
            = (0x00007fffU & ((vlSelfRef.__Vdfg_Regularize_178 
                               & vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask) 
                              | ((vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                                  >> 0x0fU) & (~ vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_wmask))));
    } else {
        ++(vlSelf->__Vcoverage[2796]);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42 
            = (0x00007fffU & (vlSelfRef.tb_axil__DOT__u_dut__DOT__reg_monitor_key_fragment 
                              >> 0x0fU));
    }
    tb_axil__DOT__u_dut__DOT____VlemCond_43 = vlSelfRef.tb_axil__DOT__u_dut__DOT____VlemCond_42;
    vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__ 
        = tb_axil__DOT__u_dut__DOT____VlemCond_43;
    ++(vlSelf->__Vcoverage[2793]);
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1727, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1813, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1899, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_done_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1641, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_done_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_done_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1997, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_match_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_match_nxt;
    }
    if ((0U != (vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt 
                ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2199, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_key_data_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_key_data_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1725, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1711, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1719, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1721, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1723, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_0_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_0_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1811, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1797, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1805, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1807, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1809, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_1_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_1_pending_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1897, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_overflow_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1883, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1891, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1893, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1895, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_port_2_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_port_2_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1625, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_mode_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_mode_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1639, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_overflow_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1633, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_start_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_start_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1635, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_fault_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_fault_nxt;
    }
    if (((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt) 
         ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1637, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_engine_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_engine_pending_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1993, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_overflow_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_overflow_nxt;
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__) 
                               ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1965, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0xf0U & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__3__03a0__KET__));
    }
    if ((0U != (0x0000000fU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                               ^ ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                  >> 4U))))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1973, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__, 
                               ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt) 
                                >> 4U));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt 
            = ((0x0fU & (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_threshold_nxt)) 
               | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_threshold_nxt__BRA__7__03a4__KET__) 
                  << 4U));
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1981, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_capture_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_capture_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1985, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_error_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_error_nxt;
    }
    if ((0U != ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt) 
                ^ (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1989, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_pending_nxt 
            = vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_pending_nxt;
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__) 
                               ^ vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt)))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2001, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__, vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt);
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x3fff8000U & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | (IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__14__03a0__KET__));
    }
    if ((0U != (0x00007fffU & ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                               ^ (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                  >> 0x0000000fU))))) {
        VL_COV_TOGGLE_CHG_ST_I(15, vlSelf->__Vcoverage + 2031, vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__, 
                               (vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
                                >> 0x0000000fU));
        vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt 
            = ((0x00007fffU & vlSelfRef.tb_axil__DOT__u_dut__DOT____Vtogcov__w_monitor_key_fragment_nxt) 
               | ((IData)(vlSelfRef.tb_axil__DOT__u_dut__DOT__w_monitor_key_fragment_nxt__BRA__29__03a15__KET__) 
                  << 0x0000000fU));
    }
}

void Vtb_axil___024root___timing_ready(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___timing_ready\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready("@(negedge tb_axil.i_clk_axi)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hde8656e6__0.ready("@(negedge tb_axil.i_clk_reg)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc243f614__0.ready("@(posedge tb_axil.i_clk_axi)");
    }
}

void Vtb_axil___024root___timing_resume(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___timing_resume\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc243f8bd__0.moveToResumeQueue(
                                                          "@(negedge tb_axil.i_clk_axi)");
    vlSelfRef.__VtrigSched_hde8656e6__0.moveToResumeQueue(
                                                          "@(negedge tb_axil.i_clk_reg)");
    vlSelfRef.__VtrigSched_hc243f614__0.moveToResumeQueue(
                                                          "@(posedge tb_axil.i_clk_axi)");
    vlSelfRef.__VtrigSched_hc243f8bd__0.resume("@(negedge tb_axil.i_clk_axi)");
    vlSelfRef.__VtrigSched_hde8656e6__0.resume("@(negedge tb_axil.i_clk_reg)");
    vlSelfRef.__VtrigSched_hc243f614__0.resume("@(posedge tb_axil.i_clk_axi)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_axil___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_axil___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_axil___024root____VbeforeTrig_hc243f8bd__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root____VbeforeTrig_hc243f8bd__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_axi)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_axil__DOT__i_clk_axi) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0 
        = vlSelfRef.tb_axil__DOT__i_clk_axi;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axil___024root____VbeforeTrig_hde8656e6__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root____VbeforeTrig_hde8656e6__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_reg)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_reg__0)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_reg__0 
        = vlSelfRef.tb_axil__DOT__i_clk_reg;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hde8656e6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde8656e6__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axil___024root____VbeforeTrig_hc243f614__0(Vtb_axil___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root____VbeforeTrig_hc243f614__0\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_axil__DOT__i_clk_axi)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_axil__DOT__i_clk_axi) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axil__DOT__i_clk_axi__0 
        = vlSelfRef.tb_axil__DOT__i_clk_axi;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f614__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc243f8bd__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_axil___024root___eval_debug_assertions(Vtb_axil___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axil___024root___eval_debug_assertions\n"); );
    Vtb_axil__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
