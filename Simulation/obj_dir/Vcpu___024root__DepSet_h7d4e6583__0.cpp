// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->cpu__DOT__ProgramCount__DOT__next_PC);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__regfile__DOT__rom_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__regfile__DOT__rom_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__regfile__DOT__rom_array__v0;
    // Body
    __Vdlyvset__cpu__DOT__regfile__DOT__rom_array__v0 = 0U;
    if (vlSelf->cpu__DOT__WEn) {
        __Vdlyvval__cpu__DOT__regfile__DOT__rom_array__v0 
            = vlSelf->cpu__DOT__ALUout;
        __Vdlyvset__cpu__DOT__regfile__DOT__rom_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__regfile__DOT__rom_array__v0 
            = (0x1fU & (vlSelf->cpu__DOT__instruction 
                        >> 7U));
    }
    vlSelf->cpu__DOT__read1 = vlSelf->cpu__DOT__regfile__DOT__rom_array
        [(0x1fU & (vlSelf->cpu__DOT__instruction >> 0xfU))];
    vlSelf->cpu__DOT__read2 = vlSelf->cpu__DOT__regfile__DOT__rom_array
        [(0x1fU & (vlSelf->cpu__DOT__instruction >> 0x14U))];
    vlSelf->a0 = vlSelf->cpu__DOT__regfile__DOT__rom_array
        [(0x1fU & (vlSelf->cpu__DOT__instruction >> 7U))];
    if (__Vdlyvset__cpu__DOT__regfile__DOT__rom_array__v0) {
        vlSelf->cpu__DOT__regfile__DOT__rom_array[__Vdlyvdim0__cpu__DOT__regfile__DOT__rom_array__v0] 
            = __Vdlyvval__cpu__DOT__regfile__DOT__rom_array__v0;
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->cpu__DOT__instruction = vlSelf->cpu__DOT__InstrMem__DOT__rom_array
        [(1U & ((IData)(1U) + vlSelf->cpu__DOT__PC))];
    if ((0x98U == ((0x3f8U & (vlSelf->cpu__DOT__instruction 
                              << 3U)) | (7U & (vlSelf->cpu__DOT__instruction 
                                               >> 0xcU))))) {
        vlSelf->cpu__DOT__WEn = 1U;
        vlSelf->cpu__DOT__ALUctrl = 0U;
        vlSelf->cpu__DOT__immSrc = 0U;
        vlSelf->cpu__DOT__ALUsrc = 1U;
    } else {
        vlSelf->cpu__DOT__WEn = 0U;
        vlSelf->cpu__DOT__ALUctrl = 7U;
        vlSelf->cpu__DOT__ALUsrc = 0U;
    }
    vlSelf->cpu__DOT__immSrc = (0x319U == ((0x3f8U 
                                            & (vlSelf->cpu__DOT__instruction 
                                               << 3U)) 
                                           | (7U & 
                                              (vlSelf->cpu__DOT__instruction 
                                               >> 0xcU))));
    vlSelf->WEnOut = vlSelf->cpu__DOT__WEn;
    if (vlSelf->cpu__DOT__immSrc) {
        if (vlSelf->cpu__DOT__immSrc) {
            vlSelf->cpu__DOT__Imm = (((- (IData)((vlSelf->cpu__DOT__instruction 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->cpu__DOT__instruction 
                                                      >> 0x14U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->cpu__DOT__instruction 
                                                         << 3U)) 
                                                     | ((0x3f0U 
                                                         & (vlSelf->cpu__DOT__instruction 
                                                            >> 0x15U)) 
                                                        | (0xfU 
                                                           & (vlSelf->cpu__DOT__instruction 
                                                              >> 8U))))));
        }
    } else {
        vlSelf->cpu__DOT__Imm = (((- (IData)((vlSelf->cpu__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->cpu__DOT__instruction 
                                              >> 0x14U));
    }
    vlSelf->cpu__DOT__ALUop2 = ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                 ? ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                     ? vlSelf->cpu__DOT__Imm
                                     : vlSelf->cpu__DOT__read2)
                                 : vlSelf->cpu__DOT__read2);
    vlSelf->cpu__DOT__ALUout = ((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                 ? 0U : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? (vlSelf->cpu__DOT__read1 
                                                 | vlSelf->cpu__DOT__ALUop2)
                                              : (vlSelf->cpu__DOT__read1 
                                                 & vlSelf->cpu__DOT__ALUop2))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? (vlSelf->cpu__DOT__read1 
                                                 - vlSelf->cpu__DOT__ALUop2)
                                              : (vlSelf->cpu__DOT__read1 
                                                 + vlSelf->cpu__DOT__ALUop2))));
    if ((5U == (IData)(vlSelf->cpu__DOT__ALUctrl))) {
        vlSelf->cpu__DOT__ALUout = ((vlSelf->cpu__DOT__read1 
                                     > vlSelf->cpu__DOT__ALUop2)
                                     ? 1U : 0U);
    }
    vlSelf->cpu__DOT__EQ = (vlSelf->cpu__DOT__read1 
                            == vlSelf->cpu__DOT__ALUop2);
    vlSelf->EQOut = vlSelf->cpu__DOT__EQ;
    vlSelf->cpu__DOT__ProgramCount__DOT__next_PC = 
        ((((0x319U == ((0x3f8U & (vlSelf->cpu__DOT__instruction 
                                  << 3U)) | (7U & (vlSelf->cpu__DOT__instruction 
                                                   >> 0xcU)))) 
           & (~ (IData)(vlSelf->cpu__DOT__EQ))) | (
                                                   (0x318U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->cpu__DOT__instruction 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (vlSelf->cpu__DOT__instruction 
                                                           >> 0xcU)))) 
                                                   & (IData)(vlSelf->cpu__DOT__EQ)))
          ? (vlSelf->cpu__DOT__Imm + vlSelf->cpu__DOT__PC)
          : ((IData)(4U) + vlSelf->cpu__DOT__PC));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
