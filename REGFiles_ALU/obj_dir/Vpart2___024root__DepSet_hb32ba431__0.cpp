// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpart2.h for the primary calling header

#include "verilated.h"

#include "Vpart2___024root.h"

VL_INLINE_OPT void Vpart2___024root___sequent__TOP__0(Vpart2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__part2__DOT__Reg__DOT__rom_array__v0;
    IData/*31:0*/ __Vdlyvval__part2__DOT__Reg__DOT__rom_array__v0;
    CData/*0:0*/ __Vdlyvset__part2__DOT__Reg__DOT__rom_array__v0;
    // Body
    __Vdlyvset__part2__DOT__Reg__DOT__rom_array__v0 = 0U;
    if (vlSelf->WE3) {
        __Vdlyvval__part2__DOT__Reg__DOT__rom_array__v0 
            = vlSelf->part2__DOT__SUM;
        __Vdlyvset__part2__DOT__Reg__DOT__rom_array__v0 = 1U;
        __Vdlyvdim0__part2__DOT__Reg__DOT__rom_array__v0 
            = vlSelf->AD3;
    }
    vlSelf->part2__DOT__Read1 = vlSelf->part2__DOT__Reg__DOT__rom_array
        [vlSelf->AD1];
    vlSelf->part2__DOT__Read2 = vlSelf->part2__DOT__Reg__DOT__rom_array
        [vlSelf->AD2];
    vlSelf->a0 = vlSelf->part2__DOT__Reg__DOT__rom_array
        [vlSelf->AD3];
    if (__Vdlyvset__part2__DOT__Reg__DOT__rom_array__v0) {
        vlSelf->part2__DOT__Reg__DOT__rom_array[__Vdlyvdim0__part2__DOT__Reg__DOT__rom_array__v0] 
            = __Vdlyvval__part2__DOT__Reg__DOT__rom_array__v0;
    }
}

VL_INLINE_OPT void Vpart2___024root___combo__TOP__0(Vpart2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->part2__DOT__MuxOut = ((IData)(vlSelf->ALUsrc)
                                   ? ((IData)(vlSelf->ALUsrc)
                                       ? vlSelf->ImmOP
                                       : vlSelf->part2__DOT__Read2)
                                   : vlSelf->part2__DOT__Read2);
    vlSelf->EQ = (vlSelf->part2__DOT__Read1 == vlSelf->part2__DOT__MuxOut);
    vlSelf->part2__DOT__SUM = ((4U & (IData)(vlSelf->ALUCtrl))
                                ? 0U : ((2U & (IData)(vlSelf->ALUCtrl))
                                         ? ((1U & (IData)(vlSelf->ALUCtrl))
                                             ? (vlSelf->part2__DOT__Read1 
                                                | vlSelf->part2__DOT__MuxOut)
                                             : (vlSelf->part2__DOT__Read1 
                                                & vlSelf->part2__DOT__MuxOut))
                                         : ((1U & (IData)(vlSelf->ALUCtrl))
                                             ? (vlSelf->part2__DOT__Read1 
                                                - vlSelf->part2__DOT__MuxOut)
                                             : (vlSelf->part2__DOT__Read1 
                                                + vlSelf->part2__DOT__MuxOut))));
    if ((5U == (IData)(vlSelf->ALUCtrl))) {
        vlSelf->part2__DOT__SUM = ((vlSelf->part2__DOT__Read1 
                                    > vlSelf->part2__DOT__MuxOut)
                                    ? 1U : 0U);
    }
}

void Vpart2___024root___eval(Vpart2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vpart2___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vpart2___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vpart2___024root___eval_debug_assertions(Vpart2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->AD1 & 0xe0U))) {
        Verilated::overWidthError("AD1");}
    if (VL_UNLIKELY((vlSelf->AD2 & 0xe0U))) {
        Verilated::overWidthError("AD2");}
    if (VL_UNLIKELY((vlSelf->AD3 & 0xe0U))) {
        Verilated::overWidthError("AD3");}
    if (VL_UNLIKELY((vlSelf->WE3 & 0xfeU))) {
        Verilated::overWidthError("WE3");}
    if (VL_UNLIKELY((vlSelf->ALUsrc & 0xfeU))) {
        Verilated::overWidthError("ALUsrc");}
    if (VL_UNLIKELY((vlSelf->ALUCtrl & 0xf8U))) {
        Verilated::overWidthError("ALUCtrl");}
}
#endif  // VL_DEBUG
