// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBit(c+53,"EQOut", false,-1);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->declBit(c+55,"WEnOut", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+58,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"ALU_CONTROL_LENGTH", false,-1, 31,0);
    tracep->declBus(c+59,"PC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBit(c+53,"EQOut", false,-1);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->declBit(c+55,"WEnOut", false,-1);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBit(c+38,"PCsrc", false,-1);
    tracep->declBit(c+39,"EQ", false,-1);
    tracep->declBus(c+40,"Imm", false,-1, 31,0);
    tracep->declBus(c+61,"Write", false,-1, 31,0);
    tracep->declBus(c+41,"read1", false,-1, 4,0);
    tracep->declBus(c+42,"read2", false,-1, 4,0);
    tracep->declBus(c+43,"writeAddr", false,-1, 4,0);
    tracep->declBus(c+44,"instruction", false,-1, 31,0);
    tracep->declBit(c+45,"WEn", false,-1);
    tracep->declBus(c+46,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+47,"ALUsrc", false,-1);
    tracep->declBit(c+48,"immSrc", false,-1);
    tracep->pushNamePrefix("CtrlUnit ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+39,"EQ", false,-1);
    tracep->declBus(c+44,"instr", false,-1, 31,0);
    tracep->declBit(c+45,"RegWrite", false,-1);
    tracep->declBus(c+46,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+47,"ALUsrc", false,-1);
    tracep->declBit(c+48,"ImmSrc", false,-1);
    tracep->declBit(c+38,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Decode ");
    tracep->declBus(c+59,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"instr", false,-1, 31,0);
    tracep->declBus(c+41,"rs1", false,-1, 4,0);
    tracep->declBus(c+42,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"rsd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstrMem ");
    tracep->declBus(c+62,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 7,0);
    tracep->declBus(c+44,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ProgramCount ");
    tracep->declBus(c+59,"PC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+52,"rst", false,-1);
    tracep->declBit(c+38,"PCsrc", false,-1);
    tracep->declBus(c+40,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+3,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+56,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+57,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegALU ");
    tracep->declBus(c+58,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"IMM_LENGTH", false,-1, 31,0);
    tracep->declBus(c+60,"ALU_CONTROL_LENGTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBus(c+41,"AD1", false,-1, 4,0);
    tracep->declBus(c+42,"AD2", false,-1, 4,0);
    tracep->declBus(c+43,"AD3", false,-1, 4,0);
    tracep->declBit(c+45,"WE3", false,-1);
    tracep->declBit(c+47,"ALUsrc", false,-1);
    tracep->declBus(c+40,"ImmOP", false,-1, 31,0);
    tracep->declBus(c+46,"ALUCtrl", false,-1, 2,0);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->declBit(c+39,"EQ", false,-1);
    tracep->declBus(c+4,"Read1", false,-1, 31,0);
    tracep->declBus(c+5,"Read2", false,-1, 31,0);
    tracep->declBus(c+49,"MuxOut", false,-1, 31,0);
    tracep->declBus(c+50,"SUM", false,-1, 31,0);
    tracep->pushNamePrefix("Arithmatic ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"ALUCTRL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"ALUCtrl", false,-1, 2,0);
    tracep->declBus(c+4,"ALUOP1", false,-1, 31,0);
    tracep->declBus(c+49,"ALUOP2", false,-1, 31,0);
    tracep->declBus(c+50,"SUM", false,-1, 31,0);
    tracep->declBit(c+39,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Mux ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+47,"ALUsrc", false,-1);
    tracep->declBus(c+5,"in0", false,-1, 31,0);
    tracep->declBus(c+40,"in1", false,-1, 31,0);
    tracep->declBus(c+49,"Out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Reg ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"clk", false,-1);
    tracep->declBit(c+45,"WE3", false,-1);
    tracep->declBus(c+41,"AD1", false,-1, 4,0);
    tracep->declBus(c+42,"AD2", false,-1, 4,0);
    tracep->declBus(c+43,"AD3", false,-1, 4,0);
    tracep->declBus(c+50,"WD3", false,-1, 31,0);
    tracep->declBus(c+4,"RD1", false,-1, 31,0);
    tracep->declBus(c+5,"RD2", false,-1, 31,0);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+6+i*1,"rom_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Sec ");
    tracep->declBus(c+59,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+48,"ImmSrc", false,-1);
    tracep->declBus(c+44,"instr", false,-1, 31,0);
    tracep->declBus(c+40,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+64,"Imm", false,-1, 11,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__PC),32);
    bufp->fullCData(oldp+2,((0xffU & vlSelf->cpu__DOT__PC)),8);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->cpu__DOT__PC)),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__RegALU__DOT__Read1),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__RegALU__DOT__Read2),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[4]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[5]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[6]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[7]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[8]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[9]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[10]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[11]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[12]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[13]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[14]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[15]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[16]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[17]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[18]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[19]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[20]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[21]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[22]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[23]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[24]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[25]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[26]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[27]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[28]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[29]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[30]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu__DOT__RegALU__DOT__Reg__DOT__rom_array[31]),32);
    bufp->fullBit(oldp+38,((((0x319U == ((0x3f8U & 
                                          (vlSelf->cpu__DOT__instruction 
                                           << 3U)) 
                                         | (7U & (vlSelf->cpu__DOT__instruction 
                                                  >> 0xcU)))) 
                             & (~ (IData)(vlSelf->cpu__DOT__EQ))) 
                            | ((0x318U == ((0x3f8U 
                                            & (vlSelf->cpu__DOT__instruction 
                                               << 3U)) 
                                           | (7U & 
                                              (vlSelf->cpu__DOT__instruction 
                                               >> 0xcU)))) 
                               & (IData)(vlSelf->cpu__DOT__EQ)))));
    bufp->fullBit(oldp+39,(vlSelf->cpu__DOT__EQ));
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__Imm),32);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->cpu__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->cpu__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->cpu__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__instruction),32);
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__WEn));
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+47,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullBit(oldp+48,(vlSelf->cpu__DOT__immSrc));
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__RegALU__DOT__MuxOut),32);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__RegALU__DOT__SUM),32);
    bufp->fullBit(oldp+51,(vlSelf->clk));
    bufp->fullBit(oldp+52,(vlSelf->rst));
    bufp->fullBit(oldp+53,(vlSelf->EQOut));
    bufp->fullIData(oldp+54,(vlSelf->a0),32);
    bufp->fullBit(oldp+55,(vlSelf->WEnOut));
    bufp->fullIData(oldp+56,((vlSelf->cpu__DOT__Imm 
                              + vlSelf->cpu__DOT__PC)),32);
    bufp->fullIData(oldp+57,(((((0x319U == ((0x3f8U 
                                             & (vlSelf->cpu__DOT__instruction 
                                                << 3U)) 
                                            | (7U & 
                                               (vlSelf->cpu__DOT__instruction 
                                                >> 0xcU)))) 
                                & (~ (IData)(vlSelf->cpu__DOT__EQ))) 
                               | ((0x318U == ((0x3f8U 
                                               & (vlSelf->cpu__DOT__instruction 
                                                  << 3U)) 
                                              | (7U 
                                                 & (vlSelf->cpu__DOT__instruction 
                                                    >> 0xcU)))) 
                                  & (IData)(vlSelf->cpu__DOT__EQ)))
                               ? (vlSelf->cpu__DOT__Imm 
                                  + vlSelf->cpu__DOT__PC)
                               : ((IData)(4U) + vlSelf->cpu__DOT__PC))),32);
    bufp->fullIData(oldp+58,(5U),32);
    bufp->fullIData(oldp+59,(0x20U),32);
    bufp->fullIData(oldp+60,(3U),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__Write),32);
    bufp->fullIData(oldp+62,(8U),32);
    bufp->fullIData(oldp+63,(0xcU),32);
    bufp->fullSData(oldp+64,(vlSelf->cpu__DOT__Sec__DOT__Imm),12);
}
