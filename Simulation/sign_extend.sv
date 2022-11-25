module sign_extend#(
    parameter INSTR_WIDTH = 32,
                DATA_WIDTH = 32
)(
    input logic                  ImmSrc,
    input logic  [INSTR_WIDTH-1:0]    instr,
    output logic [DATA_WIDTH-1:0]     ImmOp
);

always_comb begin
    if (ImmSrc == 0) begin
        ImmOp = {{20{instr[31]}}, instr[31:20]};
    end 
    else if (ImmSrc == 1) begin 
        ImmOp = {{20{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8]};
    end
    end

endmodule
