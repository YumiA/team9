module decode_instr (
    input logic [31:0]      inst,
    output logic [4:0]      rs1,
    output logic [4:0]      rs2,
    output logic [4:0]      rsd
)