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
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBit(c+54,"EQOut", false,-1);
    tracep->declBus(c+55,"a0", false,-1, 31,0);
    tracep->declBit(c+56,"WEnOut", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+61,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"ALU_CONTROL_LENGTH", false,-1, 31,0);
    tracep->declBus(c+62,"PC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBit(c+54,"EQOut", false,-1);
    tracep->declBus(c+55,"a0", false,-1, 31,0);
    tracep->declBit(c+56,"WEnOut", false,-1);
    tracep->declBus(c+57,"PC", false,-1, 31,0);
    tracep->declBit(c+37,"PCsrc", false,-1);
    tracep->declBit(c+38,"EQ", false,-1);
    tracep->declBus(c+39,"Imm", false,-1, 31,0);
    tracep->declBus(c+40,"ALUout", false,-1, 31,0);
    tracep->declBus(c+3,"read1", false,-1, 31,0);
    tracep->declBus(c+4,"read2", false,-1, 31,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->declBus(c+42,"instruction", false,-1, 31,0);
    tracep->declBit(c+43,"WEn", false,-1);
    tracep->declBus(c+44,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+43,"ALUsrc", false,-1);
    tracep->declBit(c+45,"immSrc", false,-1);
    tracep->declBus(c+46,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+47,"rs1", false,-1, 4,0);
    tracep->declBus(c+48,"rs2", false,-1, 4,0);
    tracep->declBus(c+49,"opcode", false,-1, 6,0);
    tracep->declBus(c+50,"funct3", false,-1, 14,12);
    tracep->declBus(c+51,"Imm31to20", false,-1, 31,20);
    tracep->declBus(c+41,"Imm11to7", false,-1, 11,7);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"ALUCTRL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"ALUCtrl", false,-1, 2,0);
    tracep->declBus(c+3,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+46,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+40,"SUM", false,-1, 31,0);
    tracep->declBit(c+38,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux ");
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+43,"ALUsrc", false,-1);
    tracep->declBus(c+4,"in0", false,-1, 31,0);
    tracep->declBus(c+39,"in1", false,-1, 31,0);
    tracep->declBus(c+46,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CtrlUnit ");
    tracep->declBit(c+38,"EQ", false,-1);
    tracep->declBus(c+49,"opcode", false,-1, 6,0);
    tracep->declBus(c+50,"funct3", false,-1, 14,12);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBus(c+44,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+43,"ALUsrc", false,-1);
    tracep->declBit(c+45,"ImmSrc", false,-1);
    tracep->declBit(c+37,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Decode ");
    tracep->declBus(c+62,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"instr", false,-1, 31,0);
    tracep->declBus(c+47,"rs1", false,-1, 4,0);
    tracep->declBus(c+48,"rs2", false,-1, 4,0);
    tracep->declBus(c+41,"rsd", false,-1, 4,0);
    tracep->declBus(c+49,"opcode", false,-1, 6,0);
    tracep->declBus(c+50,"funct3", false,-1, 14,12);
    tracep->declBus(c+51,"Imm31to20", false,-1, 31,20);
    tracep->declBus(c+41,"Imm11to7", false,-1, 11,7);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstrMem ");
    tracep->declBus(c+62,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"PC", false,-1, 31,0);
    tracep->declBus(c+42,"instr", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+-1), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ProgramCount ");
    tracep->declBus(c+62,"PC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBit(c+37,"PCsrc", false,-1);
    tracep->declBus(c+39,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+57,"PC", false,-1, 31,0);
    tracep->declBus(c+58,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+59,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+60,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Sec ");
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+45,"ImmSrc", false,-1);
    tracep->declBus(c+51,"Imm31to20", false,-1, 31,20);
    tracep->declBus(c+41,"Imm11to7", false,-1, 11,7);
    tracep->declBus(c+39,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+43,"WE3", false,-1);
    tracep->declBus(c+47,"AD1", false,-1, 4,0);
    tracep->declBus(c+48,"AD2", false,-1, 4,0);
    tracep->declBus(c+41,"AD3", false,-1, 4,0);
    tracep->declBus(c+40,"WD3", false,-1, 31,0);
    tracep->declBus(c+3,"RD1", false,-1, 31,0);
    tracep->declBus(c+4,"RD2", false,-1, 31,0);
    tracep->declBus(c+55,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,"rom_array", true,(i+0), 31,0);
    }
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
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__InstrMem__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__InstrMem__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__read1),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__read2),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__regfile__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__regfile__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__regfile__DOT__rom_array[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__regfile__DOT__rom_array[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__regfile__DOT__rom_array[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__regfile__DOT__rom_array[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__regfile__DOT__rom_array[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__regfile__DOT__rom_array[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__regfile__DOT__rom_array[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__regfile__DOT__rom_array[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__regfile__DOT__rom_array[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__regfile__DOT__rom_array[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__regfile__DOT__rom_array[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__regfile__DOT__rom_array[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__regfile__DOT__rom_array[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__regfile__DOT__rom_array[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__regfile__DOT__rom_array[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__regfile__DOT__rom_array[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__regfile__DOT__rom_array[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__regfile__DOT__rom_array[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__regfile__DOT__rom_array[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__regfile__DOT__rom_array[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__regfile__DOT__rom_array[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__regfile__DOT__rom_array[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__regfile__DOT__rom_array[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__regfile__DOT__rom_array[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__regfile__DOT__rom_array[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__regfile__DOT__rom_array[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__regfile__DOT__rom_array[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__regfile__DOT__rom_array[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__regfile__DOT__rom_array[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__regfile__DOT__rom_array[31]),32);
    bufp->fullBit(oldp+37,((((0x319U == ((0x3f8U & 
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
    bufp->fullBit(oldp+38,(vlSelf->cpu__DOT__EQ));
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__Imm),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__ALUout),32);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->cpu__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__instruction),32);
    bufp->fullBit(oldp+43,(vlSelf->cpu__DOT__WEn));
    bufp->fullCData(oldp+44,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__immSrc));
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__ALUop2),32);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->cpu__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->cpu__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+49,((0x7fU & vlSelf->cpu__DOT__instruction)),7);
    bufp->fullCData(oldp+50,((7U & (vlSelf->cpu__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+51,((vlSelf->cpu__DOT__instruction 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+52,(vlSelf->clk));
    bufp->fullBit(oldp+53,(vlSelf->rst));
    bufp->fullBit(oldp+54,(vlSelf->EQOut));
    bufp->fullIData(oldp+55,(vlSelf->a0),32);
    bufp->fullBit(oldp+56,(vlSelf->WEnOut));
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__PC),32);
    bufp->fullIData(oldp+58,(((IData)(4U) + vlSelf->cpu__DOT__PC)),32);
    bufp->fullIData(oldp+59,((vlSelf->cpu__DOT__Imm 
                              + vlSelf->cpu__DOT__PC)),32);
    bufp->fullIData(oldp+60,(((((0x319U == ((0x3f8U 
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
    bufp->fullIData(oldp+61,(5U),32);
    bufp->fullIData(oldp+62,(0x20U),32);
    bufp->fullIData(oldp+63,(3U),32);
}
