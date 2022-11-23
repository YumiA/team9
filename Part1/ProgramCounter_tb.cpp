#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VProgramCounter.h"
#include "vbuddy.cpp"     // include vbuddy code

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
    int simcyc;     // simulation clock count
    int tick;       // each clk cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    VProgramCounter* top = new VProgramCounter;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("ProgramCounter.vcd");

    if (vbdOpen()!=1) return(-1);
    vbdHeader("L4T1");

    //initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->PCsrc = 0;
    top->ImmOp = 0;

    //run simulation for many clock cycles
    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++)  {
        
        //PCsrc for selecting branch_PC from the multiplexer controlled by pressing the vbuddy rotary encoder
        vbdSetMode(0);
        top->PCsrc = vbdFlag();
        //ImmOp controlled by vbuddy rotary encoder
        top->ImmOp = vbdValue();

        // dump variables into VCD file and toggle clock
        for (tick=0; tick<2; tick++)  {
            tfp->dump (2*simcyc+tick);
            top->clk = !top->clk;
            top->eval ();
        }

        if (simcyc < 2)
            top->rst = 1;
        else
            top->rst = 0;
        
        //Plot PC on the vbuddy as a graph
        vbdPlot(int (top->PC), 0, 4096);
        vbdCycle(simcyc);

        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
            exit(0);
    }

    vbdClose();     // ++++
    tfp->close(); 
    printf("Exiting\n");
    exit(0);
}
    
