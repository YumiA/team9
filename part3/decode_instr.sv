module decode_instr #(
    parameter INSTR_WIDTH = 32
)(
    input logic [31:0]      instr,
    output logic [4:0]      rs1,
    output logic [4:0]      rs2,
    output logic [4:0]      rsd
);

always_comb begin
    rs1 = instr[19:15]
    rs2 = instr[24:20]
    rsd = instr[11:7]
end

endmodule
