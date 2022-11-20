module part2 #(

    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32,
    parameter IMM_LENGTH = 12,
    parameter ALU_CONTROL_LENGTH = 3,


)(

    input logic                            clk,

    //reg file inputs
    input logic  [ADDRESS_WIDTH-1:0]       AD1,
    input logic  [ADDRESS_WIDTH-1:0]       AD2,
    input logic  [ADDRESS_WIDTH-1:0]       AD3,
    input logic                            WE3,
    
    //ALU multiplexer input
    input logic                            ALUsrc,
    input logic  [IMM_LENGTH-1:0]          ImmOP,

    //ALU input
    input logic  [ALU_CONTROL_LENGTH-1:0]  ALUCtrl,

    //System Outputs
    output logic [DATA_WIDTH-1:0]          a0,
    output logic                           EQ

);

    logic [DATA_WIDTH-1:0]  Read1;
    logic [DATA_WIDTH-1:0]  Read2;
    logic [DATA_WIDTH-1:0]  MuxOut;
    logic [DATA_WIDTH-1:0]  SUM;

regFile Register (
    .clk    (clk),
    .WE3    (WE3),
    .AD1    (AD1),
    .AD2    (AD2),
    .AD3    (AD3),
    .WD3    (SUM),
    .RD1    (Read1),
    .RD2    (Read2),
    .a0     (a0)
);

ALUMux Mux (

    .ALUsrc (ALUsrc),
    .in0    (Read1),
    .in1    (ImmOP),
    .Out    (MuxOut)

);

ALU Arithmatic (

    .ALUCtrl    (ALUCtrl),
    .ALUOP1     (Read1),
    .ALUOP2     (MuxOut),
    .SUM        (SUM),
    .EQ         (EQ)

);

endmodule
