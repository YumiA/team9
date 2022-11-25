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
    input logic  [DATA_WIDTH-1:0]     ALUop1,
    input logic  [DATA_WIDTH-1:0]     ALUop2,
    output logic [DATA_WIDTH-1:0]     SUM,
    output logic                      EQ

);

//combinational logic so not using always_ff, these are all the different opcodes. SLT sets the output SUM to 1 if
//op1 > op2, else sets it to 0, EQ is 1 if both the operands equal eachother.

always_comb
    begin

    case (ALUCtrl)
        3'b000: SUM = ALUop1 + ALUop2; //add
        3'b001: SUM = ALUop1 - ALUop2; //subtract
        3'b010: SUM = ALUop1 & ALUop2; //and
        3'b011: SUM = ALUop1 | ALUop2; //or
        default: SUM = 32'b0;


    endcase

    if (ALUCtrl == 3'b101) begin //SLT (set less than)
        if(ALUop1 > ALUop2) assign SUM = 32'b1;
        else assign SUM = 32'b0;
    end

    //setting EQ
    if (ALUop1 == ALUop2) assign EQ = 1'b1;
    else assign EQ = 1'b0;

 
    end



endmodule
