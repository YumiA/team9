module decode_instr #(
    parameter INSTR_WIDTH = 32,
    parameter ADDRESS_WIDTH = 5
)(
    input logic [INSTR_WIDTH-1:0]      instr,
    output logic [ADDRESS_WIDTH-1:0]      rs1,
    output logic [ADDRESS_WIDTH-1:0]      rs2,
    output logic [ADDRESS_WIDTH-1:0]      rsd,
    output logic [6:0]                    opcode,
    output logic [14:12]                  funct3,
    output logic [31:20]                  Imm31to20,
    output logic [11:7]                   Imm11to7
);

always_comb begin
    rs1 = instr[19:15];
    rs2 = instr[24:20];
    rsd = instr[11:7];
    opcode = instr[6:0];
    funct3 = instr[14:12];
    Imm31to20 = instr[31:20];
    Imm11to7 = instr[11:7];
end

endmodule
