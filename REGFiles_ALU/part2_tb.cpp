/*

Test bench to run the part2 files. This consists of a rom that has the value of a sine wave
stored sequentially in a rom, and uses a counter to cycle along this rom and output the discrete
values of the sine wave

*/

//all the required headers, to allow verilator as well as 
//the internal vbuddy functions for the testbench

#include "Vpart2.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main (int argc, char **argv, char **env) {

    //define variables for the clock value (i) as
    //well as the high/low cycles of the clock (clk)
    int i;
    int clk;


    //The initialisation of the vbuddy module

    Verilated::commandArgs(argc,argv);
    //innit top verilog instance
    Vpart2* top = new Vpart2;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top -> trace (tfp, 99);

    //NEW
    //need to open the new file (change the name)
    tfp -> open ("part2.vcd");

    //init vbuddy
    if (vbdOpen()!=1) return (-1);

    //NEW
    //need to open the correct file
    vbdHeader("TEAM9");

    //done initialising the Vbuddy






    //set the "initial conditions" for the simulation parameters

    top->clk = 1;
    top->AD1 = 0;
    top->AD2 = 0;
    top->AD3 = 0;
    top->WE3 = 0;
    
    top->ALUsrc = 0; 
    top->ImmOP = 0;
    top->ALUCtrl = 0;


 
    //initiate the clock, with clock Cycles being how many cycles to run
    int numCycles = 1000000;
    for(i = 1; i < numCycles; i++) {

        //write to the VCD file
        //dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk); //units will be in picoseconds 
            top->clk = !top->clk;
            top->eval ();
        }

        //This block does the interaction between the CPU and the  

        //plot the current count
        //changed to dout as this is the output of the rom

        vbdCycle(i+1);


        //end this clock cycle

        //if(Verilated::gotFinish()) exit(0);
        if((Verilated::gotFinish()) || (vbdGetkey()  == 'q')) exit(0);



    }

    vbdClose();
    tfp->close();
    exit(0);

}