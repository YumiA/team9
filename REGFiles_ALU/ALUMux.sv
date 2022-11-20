/*
The Mux is used to select the seond operand of the ALU Unit, it can either be in0, which
is the output of the second register address (RA2 -> RD2) or an immidiate (sign extended)
operand for in1. The multiplexer is entirely combinational and not syncronous with a clock.
*/

module ALUMux #(

    //the width of the data for the multiplexer
    parameter DATA_WIDTH = 32

) (
    //ALUsrc is either 0 for in0 or 1 for in1
    input logic                     ALUsrc,
    input logic  [DATA_WIDTH-1:0]   in0,
    input logic  [DATA_WIDTH-1:0]   in1,
    output logic [DATA_WIDTH-1:0]   Out
);


//combinational so not doing always_ff

//if ALUsrc = 0, Out = in0, or Out = in1
if(ALUsrc) Out = in1
else Out = in0;


endmodule
