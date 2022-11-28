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
logic [DATA_WIDTH-1:0]            ALUout;
logic [DATA_WIDTH-1:0]            read1;
logic [DATA_WIDTH-1:0]            read2;
logic [ADDRESS_WIDTH-1:0]         rd;
logic [INSTR_WIDTH-1:0]           instruction;
logic                             WEn;
logic [ALU_CONTROL_LENGTH-1:0]    ALUctrl;
logic                             ALUsrc;
logic                             immSrc;
logic [DATA_WIDTH-1:0]            ALUop2;
logic [ADDRESS_WIDTH-1:0]         rs1;
logic [ADDRESS_WIDTH-1:0]         rs2;
logic [6:0]                       opcode;
logic [14:12]                     funct3;
logic  [31:20]                    Imm31to20;
logic  [11:7]                     Imm11to7;

ALU ALU (
    .ALUCtrl   (ALUctrl),
    .ALUop1    (read1),
    .ALUop2    (ALUop2),
    .SUM       (ALUout),
    .EQ        (EQ)
);

ALUMux ALUMux (
    .ALUsrc    (ALUsrc),
    .in0       (read2),
    .in1       (Imm),
    .ALUop2    (ALUop2)
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
    .Imm31to20    (Imm31to20),
    .Imm11to7     (Imm11to7),
    .ImmOp    (Imm)

);

control_unit CtrlUnit (
    .EQ         (EQ),
    .opcode     (opcode),
    .funct3     (funct3),
    .RegWrite   (WEn),
    .ALUctrl    (ALUctrl),
    .ALUsrc     (ALUsrc),
    .ImmSrc     (immSrc),
    .PCsrc      (PCsrc)
);

decode_instr Decode (
    .instr      (instruction),
    .rs1        (rs1),
    .rs2        (rs2),
    .rsd        (rd),
    .opcode     (opcode),
    .funct3     (funct3),
    .Imm31to20  (Imm31to20),
    .Imm11to7   (Imm11to7)
);

regFile regfile (
    .clk        (clk),
    .WE3        (WEn),
    .AD1        (rs1),
    .AD2        (rs2),
    .AD3        (rd),
    .WD3        (ALUout),
    .RD1        (read1),
    .RD2        (read2),
    .a0         (a0)
);



    always_comb begin
    assign EQOut = EQ;
    assign WEnOut = WEn;
    end

endmodule
