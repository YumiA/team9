module control_unit(
    input logic     EQ,
    input logic     control_input,
    output logic    RegWrite,
    output logic    ALUctrl,
    output logic    ALUsrc,
    output logic    ImmSrc,
    output logic    PCsrc
);