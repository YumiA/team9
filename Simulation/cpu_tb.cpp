#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VCPU.h"
#include "VRegFile.h"

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
    int simcyc;     // simulation clock count
    int tick;       // each clk cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    VCPU* top = new VCPU;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("CPU.vcd")


    top->clk = 0;
    top->rst = 0;
    
    for (simcyc=0; simcyc < MAX_SIM_CYC; simcyc++){
        for (tick=0; tick<2; tick++){
            tfp->dump (2*simcyc+tick);
            top->clk = !top->clk;
            top->eval();
        }

        if (Verilated::gotFinish()){
            exit(0);
        }
    }
    tfp->close();
    printf("Exiting\n");
    exit(0);
}
    