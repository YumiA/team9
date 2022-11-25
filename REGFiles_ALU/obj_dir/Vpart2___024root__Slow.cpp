// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpart2.h for the primary calling header

#include "verilated.h"

#include "Vpart2__Syms.h"
#include "Vpart2___024root.h"

void Vpart2___024root___ctor_var_reset(Vpart2___024root* vlSelf);

Vpart2___024root::Vpart2___024root(Vpart2__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpart2___024root___ctor_var_reset(this);
}

void Vpart2___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpart2___024root::~Vpart2___024root() {
}
