module sign_extend#(
    parameter DATA_WIDTH = 32
)(
    input logic                  ImmSrc,
    input logic  [31:20]         Imm31to20,
    input logic  [11:7]          Imm11to7,
    output logic [DATA_WIDTH-1:0]     ImmOp
);

always_comb begin
    if (ImmSrc == 0)
        ImmOp = {{20{Imm31to20[31]}}, Imm31to20};
    else 
        ImmOp = {{20{Imm31to20[31]}}, Imm31to20[31], Imm11to7[7], Imm31to20[30:25], Imm11to7[11:8]};
    end

endmodule
