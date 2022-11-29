module sign_extend#(
    parameter DATA_WIDTH = 32
)(
    input logic                  ImmSrc,
    input logic  [DATA_WIDTH-1:0]     instr,
    output logic [DATA_WIDTH-1:0]     ImmOp
);

always_comb begin
    if (ImmSrc == 0)
        ImmOp = {{20{instr[31]}}, instr[31:20]};
    else 
        ImmOp = {{20{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8]};
    end

endmodule
