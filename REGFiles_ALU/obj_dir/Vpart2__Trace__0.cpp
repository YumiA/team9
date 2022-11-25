// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpart2__Syms.h"


void Vpart2___024root__trace_chg_sub_0(Vpart2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpart2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root__trace_chg_top_0\n"); );
    // Init
    Vpart2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpart2___024root*>(voidSelf);
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpart2___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vpart2___024root__trace_chg_sub_0(Vpart2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->part2__DOT__Read1),32);
        bufp->chgIData(oldp+1,(vlSelf->part2__DOT__Read2),32);
        bufp->chgIData(oldp+2,(vlSelf->part2__DOT__Reg__DOT__rom_array[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->part2__DOT__Reg__DOT__rom_array[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->part2__DOT__Reg__DOT__rom_array[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->part2__DOT__Reg__DOT__rom_array[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->part2__DOT__Reg__DOT__rom_array[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->part2__DOT__Reg__DOT__rom_array[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->part2__DOT__Reg__DOT__rom_array[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->part2__DOT__Reg__DOT__rom_array[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->part2__DOT__Reg__DOT__rom_array[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->part2__DOT__Reg__DOT__rom_array[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->part2__DOT__Reg__DOT__rom_array[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->part2__DOT__Reg__DOT__rom_array[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->part2__DOT__Reg__DOT__rom_array[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->part2__DOT__Reg__DOT__rom_array[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->part2__DOT__Reg__DOT__rom_array[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->part2__DOT__Reg__DOT__rom_array[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->part2__DOT__Reg__DOT__rom_array[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->part2__DOT__Reg__DOT__rom_array[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->part2__DOT__Reg__DOT__rom_array[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->part2__DOT__Reg__DOT__rom_array[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->part2__DOT__Reg__DOT__rom_array[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->part2__DOT__Reg__DOT__rom_array[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->part2__DOT__Reg__DOT__rom_array[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->part2__DOT__Reg__DOT__rom_array[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->part2__DOT__Reg__DOT__rom_array[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->part2__DOT__Reg__DOT__rom_array[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->part2__DOT__Reg__DOT__rom_array[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->part2__DOT__Reg__DOT__rom_array[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->part2__DOT__Reg__DOT__rom_array[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->part2__DOT__Reg__DOT__rom_array[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->part2__DOT__Reg__DOT__rom_array[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->part2__DOT__Reg__DOT__rom_array[31]),32);
    }
    bufp->chgBit(oldp+34,(vlSelf->clk));
    bufp->chgCData(oldp+35,(vlSelf->AD1),5);
    bufp->chgCData(oldp+36,(vlSelf->AD2),5);
    bufp->chgCData(oldp+37,(vlSelf->AD3),5);
    bufp->chgBit(oldp+38,(vlSelf->WE3));
    bufp->chgBit(oldp+39,(vlSelf->ALUsrc));
    bufp->chgIData(oldp+40,(vlSelf->ImmOP),32);
    bufp->chgCData(oldp+41,(vlSelf->ALUCtrl),3);
    bufp->chgIData(oldp+42,(vlSelf->a0),32);
    bufp->chgBit(oldp+43,(vlSelf->EQ));
    bufp->chgIData(oldp+44,(vlSelf->part2__DOT__MuxOut),32);
    bufp->chgIData(oldp+45,(vlSelf->part2__DOT__SUM),32);
}

void Vpart2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root__trace_cleanup\n"); );
    // Init
    Vpart2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpart2___024root*>(voidSelf);
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
