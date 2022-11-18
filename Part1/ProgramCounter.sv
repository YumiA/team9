module ProgramCounter#(
    parameter WIDTH = 32
)(
    input logic     clk, rst,
    input logic     PCsrc,
    input logic     [WIDTH-1:0] ImmOp,
    output logic    [WIDTH-1:0] PC
);

    logic [WIDTH-1:0] inc_PC = PC + {{(WIDTH-3){1'b0}}, 3'b100};
    logic [WIDTH-1:0] branch_PC = ImmOp + PC;
    logic [WIDTH-1:0] next_PC;

    always_comb begin
    if (PCsrc) next_PC = branch_PC;
    else next_PC = inc_PC;
    end

    always_ff @(posedge clk, posedge rst)
    if (rst) PC <= {WIDTH{1'b0}};
    else PC <= next_PC;

endmodule
