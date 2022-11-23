module control_unit#(
    parameter DATA_WIDTH = 32
)(
    input logic                         EQ,
    input logic [DATA_WIDTH-1:0]        instr,
    output logic                        RegWrite,
    output logic [2:0]                  ALUctrl,
    output logic                        ALUsrc,
    output logic [1:0]                  ImmSrc,
    output logic                        PCsrc
);

// logic [6:0] op = instr[6:0];
// logic [2:0] funct3 = instr[14:12];
// to be used for later: funct7 = instr[31:25]

// main decoder

always_comb
begin
    // PC value to jump only if bne or beq evalute as true
    if (({instr[6:0], instr[14:12]} == {7'b1100011,3'b001}) && ~EQ) // bne eval
        PCsrc = 1'b1;
    else if (({instr[6:0], instr[14:12]} == {7'b1100011,3'b000}) && EQ) // beq evaluation
        PCsrc = 1'b1;
    else
        PCsrc = 1'b0;

        
    // ALUsrc and RegWrite should be 1, only if it's an addi instr
    // ALUctrl set to 000 for addition, otherwise choose a value that doesn't correspond to any operation in the ALU block
    // TO BE IMPLEMENTED: ALUctrl FOR OTHER ARITHMETIC AND LOGIC INSTRUDTIONS
    if ({instr[6:0], instr[14:12]}) == {7'b0010011, 3'b000}{
        RegWrite = 1'b1;
        ALUsrc = 1'b1;
        ALUctrl = 3'b000;
    }
    else{
        RegWrite = 1'b0;
        ALUsrc = 1'b0;
        ALUctrl = 3'b111;
    }


    // Imm = instr[31:20] and ImmSrc = 0 if {op, funct3} = 0010011000
    // Imm = {instr[31], instr[7], instr[30:25], instr[11:8]} and ImmSrc = 01 if {op, funct3} = 1100011001
    // since we are not using the 3 Imm opp, let Imm = instr[31:20] for any other {op, funct3}
    if ({instr[6:0], instr[14:12]} == {7'b0010011, 3'b000})
        ImmSrc = ImmSrc = 2'b00;
    else if ({instr[6:0], instr[14:12]} == {7'b1100011,3'b001})
        ImmSrc = 2'b01;
    else
        ImmSrc = 2'b00;

end

endmodule
 