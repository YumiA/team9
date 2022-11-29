module decode_instr #(
    parameter INSTR_WIDTH = 32,
    parameter ADDRESS_WIDTH = 5
)(
    input logic [INSTR_WIDTH-1:0]      instr,
    output logic [ADDRESS_WIDTH-1:0]      rs1,
    output logic [ADDRESS_WIDTH-1:0]      rs2,
    output logic [ADDRESS_WIDTH-1:0]      rsd
);

always_comb begin
    rs1 = instr[19:15];
    rs2 = instr[24:20];
    rsd = instr[11:7];
end

endmodule
