module ALU #(

    parameter DATA_WIDTH = 32,
    parameter ALUCTRL_WIDTH = 3

) (

    input logic  [ALUCTRL_WIDTH-1:0]  ALUCtrl,
    input logic  [DATA_WIDTH-1:0]     ALUOP1,
    input logic  [DATA_WIDTH-1:0]     ALUOP2,
    output logic [DATA_WIDTH-1:0]     SUM,
    output logic                      EQ

)

//combinational logic so not using always_ff

if (ALUCtrl == 000) SUM = ALUOP1 + ALUOP2; //add
if (ALUCtrl == 001) SUM = ALUOP1 - ALUOP2; //subtract
if (ALUCtrl == 010) SUM = ALUOP1 & ALUOP2; //and
if (ALUCtrl == 011) SUM = ALUOP1 | ALUOP2; //or
if (ALUCtrl == 101) begin //SLT (set less than)
    if(ALUOP1 > ALUOP2) Sum = 32'b1;
    else Sum = 32'b0;
end
if (ALUOP1 == ALUOP2) EQ = 0'b1;
 

endmodule
