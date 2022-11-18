module ALUMux #(

    parameter DATA_WIDTH = 32

) (
    input logic                     ALUsrc,
    input logic  [DATA_WIDTH-1:0]   in0,
    input logic  [DATA_WIDTH-1:0]   in1,
    output logic [DATA_WIDTH-1:0]   Out
);

always_ff @(posedge clk) begin

    if(ALUsrc) Out <= in1
    else Out <= in0;

end

endmodule