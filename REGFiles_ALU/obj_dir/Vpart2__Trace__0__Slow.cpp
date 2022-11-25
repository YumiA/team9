// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpart2__Syms.h"


VL_ATTR_COLD void Vpart2___024root__trace_init_sub__TOP__0(Vpart2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+36,"AD1", false,-1, 4,0);
    tracep->declBus(c+37,"AD2", false,-1, 4,0);
    tracep->declBus(c+38,"AD3", false,-1, 4,0);
    tracep->declBit(c+39,"WE3", false,-1);
    tracep->declBit(c+40,"ALUsrc", false,-1);
    tracep->declBus(c+41,"ImmOP", false,-1, 31,0);
    tracep->declBus(c+42,"ALUCtrl", false,-1, 2,0);
    tracep->declBus(c+43,"a0", false,-1, 31,0);
    tracep->declBit(c+44,"EQ", false,-1);
    tracep->pushNamePrefix("part2 ");
    tracep->declBus(c+47,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"IMM_LENGTH", false,-1, 31,0);
    tracep->declBus(c+49,"ALU_CONTROL_LENGTH", false,-1, 31,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+36,"AD1", false,-1, 4,0);
    tracep->declBus(c+37,"AD2", false,-1, 4,0);
    tracep->declBus(c+38,"AD3", false,-1, 4,0);
    tracep->declBit(c+39,"WE3", false,-1);
    tracep->declBit(c+40,"ALUsrc", false,-1);
    tracep->declBus(c+41,"ImmOP", false,-1, 31,0);
    tracep->declBus(c+42,"ALUCtrl", false,-1, 2,0);
    tracep->declBus(c+43,"a0", false,-1, 31,0);
    tracep->declBit(c+44,"EQ", false,-1);
    tracep->declBus(c+1,"Read1", false,-1, 31,0);
    tracep->declBus(c+2,"Read2", false,-1, 31,0);
    tracep->declBus(c+45,"MuxOut", false,-1, 31,0);
    tracep->declBus(c+46,"SUM", false,-1, 31,0);
    tracep->pushNamePrefix("Arithmatic ");
    tracep->declBus(c+48,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"ALUCTRL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"ALUCtrl", false,-1, 2,0);
    tracep->declBus(c+1,"ALUOP1", false,-1, 31,0);
    tracep->declBus(c+45,"ALUOP2", false,-1, 31,0);
    tracep->declBus(c+46,"SUM", false,-1, 31,0);
    tracep->declBit(c+44,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Mux ");
    tracep->declBus(c+48,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+40,"ALUsrc", false,-1);
    tracep->declBus(c+2,"in0", false,-1, 31,0);
    tracep->declBus(c+41,"in1", false,-1, 31,0);
    tracep->declBus(c+45,"Out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Reg ");
    tracep->declBus(c+48,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+39,"WE3", false,-1);
    tracep->declBus(c+36,"AD1", false,-1, 4,0);
    tracep->declBus(c+37,"AD2", false,-1, 4,0);
    tracep->declBus(c+38,"AD3", false,-1, 4,0);
    tracep->declBus(c+46,"WD3", false,-1, 31,0);
    tracep->declBus(c+1,"RD1", false,-1, 31,0);
    tracep->declBus(c+2,"RD2", false,-1, 31,0);
    tracep->declBus(c+43,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"rom_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vpart2___024root__trace_init_top(Vpart2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root__trace_init_top\n"); );
    // Body
    Vpart2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpart2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpart2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpart2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpart2___024root__trace_register(Vpart2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpart2___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpart2___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpart2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpart2___024root__trace_full_sub_0(Vpart2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpart2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root__trace_full_top_0\n"); );
    // Init
    Vpart2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpart2___024root*>(voidSelf);
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpart2___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpart2___024root__trace_full_sub_0(Vpart2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpart2___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->part2__DOT__Read1),32);
    bufp->fullIData(oldp+2,(vlSelf->part2__DOT__Read2),32);
    bufp->fullIData(oldp+3,(vlSelf->part2__DOT__Reg__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->part2__DOT__Reg__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->part2__DOT__Reg__DOT__rom_array[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->part2__DOT__Reg__DOT__rom_array[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->part2__DOT__Reg__DOT__rom_array[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->part2__DOT__Reg__DOT__rom_array[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->part2__DOT__Reg__DOT__rom_array[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->part2__DOT__Reg__DOT__rom_array[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->part2__DOT__Reg__DOT__rom_array[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->part2__DOT__Reg__DOT__rom_array[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->part2__DOT__Reg__DOT__rom_array[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->part2__DOT__Reg__DOT__rom_array[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->part2__DOT__Reg__DOT__rom_array[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->part2__DOT__Reg__DOT__rom_array[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->part2__DOT__Reg__DOT__rom_array[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->part2__DOT__Reg__DOT__rom_array[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->part2__DOT__Reg__DOT__rom_array[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->part2__DOT__Reg__DOT__rom_array[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->part2__DOT__Reg__DOT__rom_array[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->part2__DOT__Reg__DOT__rom_array[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->part2__DOT__Reg__DOT__rom_array[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->part2__DOT__Reg__DOT__rom_array[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->part2__DOT__Reg__DOT__rom_array[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->part2__DOT__Reg__DOT__rom_array[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->part2__DOT__Reg__DOT__rom_array[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->part2__DOT__Reg__DOT__rom_array[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->part2__DOT__Reg__DOT__rom_array[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->part2__DOT__Reg__DOT__rom_array[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->part2__DOT__Reg__DOT__rom_array[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->part2__DOT__Reg__DOT__rom_array[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->part2__DOT__Reg__DOT__rom_array[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->part2__DOT__Reg__DOT__rom_array[31]),32);
    bufp->fullBit(oldp+35,(vlSelf->clk));
    bufp->fullCData(oldp+36,(vlSelf->AD1),5);
    bufp->fullCData(oldp+37,(vlSelf->AD2),5);
    bufp->fullCData(oldp+38,(vlSelf->AD3),5);
    bufp->fullBit(oldp+39,(vlSelf->WE3));
    bufp->fullBit(oldp+40,(vlSelf->ALUsrc));
    bufp->fullIData(oldp+41,(vlSelf->ImmOP),32);
    bufp->fullCData(oldp+42,(vlSelf->ALUCtrl),3);
    bufp->fullIData(oldp+43,(vlSelf->a0),32);
    bufp->fullBit(oldp+44,(vlSelf->EQ));
    bufp->fullIData(oldp+45,(vlSelf->part2__DOT__MuxOut),32);
    bufp->fullIData(oldp+46,(vlSelf->part2__DOT__SUM),32);
    bufp->fullIData(oldp+47,(5U),32);
    bufp->fullIData(oldp+48,(0x20U),32);
    bufp->fullIData(oldp+49,(3U),32);
}
