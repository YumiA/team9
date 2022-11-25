module cpu#(

    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32,
    //parameter IMM_LENGTH = 32,  //is sign extended to 32 bits
    parameter ALU_CONTROL_LENGTH = 3,
    parameter PC_WIDTH = 32,
    parameter INSTR_WIDTH = 32

)(

    //system inputs
    input logic clk,
    input logic rst,

    //system outputs   
    output logic                     EQOut,
    output logic [DATA_WIDTH-1:0]    a0,




    //outputs just for debugging (implemented wrong, need to fix)
//    output logic [PC_WIDTH-1:0]              PC,
//    output logic [ADDRESS_WIDTH-1:0]         read1,
//    output logic [ADDRESS_WIDTH-1:0]         read2,
//    output logic [ADDRESS_WIDTH-1:0]         writeAddr,
//    output logic [INSTR_WIDTH-1:0]           instruction,
//    output logic [ALU_CONTROL_LENGTH-1:0]    ALUctrl,
//    output logic                             ALUsrc,


    output logic                             WEnOut


);

//all internal signals
logic [PC_WIDTH-1:0]              PC;
logic                             PCsrc;
logic                             EQ;
logic [DATA_WIDTH-1:0]            Imm;
logic [DATA_WIDTH-1:0]            Write;
logic [ADDRESS_WIDTH-1:0]         read1;
logic [ADDRESS_WIDTH-1:0]         read2;
logic [ADDRESS_WIDTH-1:0]         writeAddr;
logic [INSTR_WIDTH-1:0]           instruction;
logic                             WEn;
logic [ALU_CONTROL_LENGTH-1:0]    ALUctrl;
logic                             ALUsrc;
logic                             immSrc;

part2 RegALU (
    .clk       (clk),
    .AD1       (read1),
    .AD2       (read2),
    .AD3       (writeAddr),
    .WE3       (WEn),
    .ALUsrc    (ALUsrc),
    .ImmOP     (Imm),
    .ALUCtrl   (ALUctrl),
    .a0        (a0),
    .EQ        (EQ)
);

ProgramCounter ProgramCount (
    .clk       (clk),
    .rst       (rst),
    .PCsrc     (PCsrc),
    .ImmOp     (Imm),
    .PC        (PC)
);

instr_mem InstrMem (
    .PC        (PC),
    .instr     (instruction)
);

sign_extend Sec (

    .ImmSrc   (immSrc),
    .instr    (instruction),
    .ImmOp    (Imm)

);

control_unit CtrlUnit (
    .EQ         (EQ),
    .instr      (instruction),
    .RegWrite   (WEn),
    .ALUctrl    (ALUctrl),
    .ALUsrc     (ALUsrc),
    .ImmSrc     (immSrc),
    .PCsrc      (PCsrc)
);

decode_instr Decode (
    .instr (instruction),
    .rs1   (read1),
    .rs2   (read2),
    .rsd   (writeAddr)
);



always_comb begin
    assign EQOut = EQ;
    assign WEnOut = WEn;   
end

endmodule


