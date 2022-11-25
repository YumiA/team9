// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpart2.h"
#include "Vpart2__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpart2::Vpart2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpart2__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , AD1{vlSymsp->TOP.AD1}
    , AD2{vlSymsp->TOP.AD2}
    , AD3{vlSymsp->TOP.AD3}
    , WE3{vlSymsp->TOP.WE3}
    , ALUsrc{vlSymsp->TOP.ALUsrc}
    , ALUCtrl{vlSymsp->TOP.ALUCtrl}
    , EQ{vlSymsp->TOP.EQ}
    , ImmOP{vlSymsp->TOP.ImmOP}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpart2::Vpart2(const char* _vcname__)
    : Vpart2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpart2::~Vpart2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpart2___024root___eval_initial(Vpart2___024root* vlSelf);
void Vpart2___024root___eval_settle(Vpart2___024root* vlSelf);
void Vpart2___024root___eval(Vpart2___024root* vlSelf);
#ifdef VL_DEBUG
void Vpart2___024root___eval_debug_assertions(Vpart2___024root* vlSelf);
#endif  // VL_DEBUG
void Vpart2___024root___final(Vpart2___024root* vlSelf);

static void _eval_initial_loop(Vpart2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpart2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpart2___024root___eval_settle(&(vlSymsp->TOP));
        Vpart2___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vpart2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpart2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpart2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpart2___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vpart2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpart2::final() {
    Vpart2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpart2::hierName() const { return vlSymsp->name(); }
const char* Vpart2::modelName() const { return "Vpart2"; }
unsigned Vpart2::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vpart2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpart2___024root__trace_init_top(Vpart2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpart2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpart2___024root*>(voidSelf);
    Vpart2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vpart2___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vpart2___024root__trace_register(Vpart2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpart2::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpart2___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
