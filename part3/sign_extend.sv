module sign_extend#(
    paramater INSTR_WIDTH = 32,
                IMM_WIDTH = 12,
                DATA_WIDTH = 32
)(
    input logic  [1:0]                ImmSrc,
    input logic  [INSTR_WIDTH-1:0]    instr,
    output logic [DATA_WIDTH-1:0]     ImmOp
);

logic [IMM_WIDTH-1:0] Imm;
always_comb begin
    if (ImmSrc == 0){
        ImmOp = {{20{instr[31]}}, instr[31:20]}
    else if (ImmSrc == 1)
        ImmOp = {{20{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8]}

end