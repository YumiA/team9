/*
The ALU unit can perform five different operations based on the opcode (ALUCtrl). See the Readme for the details
On the Opcode. The Two inputs must have the same input data width, as the ALU does not sign extend. The ALU is 
asyncronous and thus does not have a clocked input
*/

module ALU #(

    //width of both operands
    parameter DATA_WIDTH = 32,
    //width of opcode
    parameter ALUCTRL_WIDTH = 3

) (

    input logic  [ALUCTRL_WIDTH-1:0]  ALUCtrl,
    input logic  [DATA_WIDTH-1:0]     ALUOP1,
    input logic  [DATA_WIDTH-1:0]     ALUOP2,
    output logic [DATA_WIDTH-1:0]     SUM,
    output logic                      EQ

)

//combinational logic so not using always_ff, these are all the different opcodes. SLT sets the output SUM to 1 if
//op1 > op2, else sets it to 0, EQ is 1 if both the operands equal eachother.

if (ALUCtrl == 000) SUM = ALUOP1 + ALUOP2; //add
if (ALUCtrl == 001) SUM = ALUOP1 - ALUOP2; //subtract
if (ALUCtrl == 010) SUM = ALUOP1 & ALUOP2; //and
if (ALUCtrl == 011) SUM = ALUOP1 | ALUOP2; //or
if (ALUCtrl == 101) begin //SLT (set less than)
    if(ALUOP1 > ALUOP2) Sum = 32'b1;
    else Sum = 32'b0;
end

//setting EQ
if (ALUOP1 == ALUOP2) EQ = 0'b1;
 

endmodule
