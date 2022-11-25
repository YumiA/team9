// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpart2.h for the primary calling header

#include "verilated.h"

#include "Vpart2___024root.h"

VL_ATTR_COLD void Vpart2___024root___eval_initial(Vpart2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vpart2___024root___combo__TOP__0(Vpart2___024root* vlSelf);

VL_ATTR_COLD void Vpart2___024root___eval_settle(Vpart2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root___eval_settle\n"); );
    // Body
    Vpart2___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vpart2___024root___final(Vpart2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root___final\n"); );
}

VL_ATTR_COLD void Vpart2___024root___ctor_var_reset(Vpart2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->AD1 = VL_RAND_RESET_I(5);
    vlSelf->AD2 = VL_RAND_RESET_I(5);
    vlSelf->AD3 = VL_RAND_RESET_I(5);
    vlSelf->WE3 = VL_RAND_RESET_I(1);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmOP = VL_RAND_RESET_I(32);
    vlSelf->ALUCtrl = VL_RAND_RESET_I(3);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->part2__DOT__Read1 = VL_RAND_RESET_I(32);
    vlSelf->part2__DOT__Read2 = VL_RAND_RESET_I(32);
    vlSelf->part2__DOT__MuxOut = VL_RAND_RESET_I(32);
    vlSelf->part2__DOT__SUM = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->part2__DOT__Reg__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
