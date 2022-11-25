// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpart2.h for the primary calling header

#ifndef VERILATED_VPART2___024ROOT_H_
#define VERILATED_VPART2___024ROOT_H_  // guard

#include "verilated.h"

class Vpart2__Syms;

class Vpart2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(AD1,4,0);
    VL_IN8(AD2,4,0);
    VL_IN8(AD3,4,0);
    VL_IN8(WE3,0,0);
    VL_IN8(ALUsrc,0,0);
    VL_IN8(ALUCtrl,2,0);
    VL_OUT8(EQ,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOP,31,0);
    VL_OUT(a0,31,0);
    IData/*31:0*/ part2__DOT__Read1;
    IData/*31:0*/ part2__DOT__Read2;
    IData/*31:0*/ part2__DOT__MuxOut;
    IData/*31:0*/ part2__DOT__SUM;
    VlUnpacked<IData/*31:0*/, 32> part2__DOT__Reg__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vpart2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpart2___024root(Vpart2__Syms* symsp, const char* name);
    ~Vpart2___024root();
    VL_UNCOPYABLE(Vpart2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
