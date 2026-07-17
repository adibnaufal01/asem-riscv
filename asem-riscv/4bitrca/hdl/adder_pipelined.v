`timescale 1ns/1ps

//------------------------------------------------------------
// 32-bit Carry Select Adder
//------------------------------------------------------------
module csla32 (
    input  [31:0] A,
    input  [31:0] B,
    input         Cin,

    output [31:0] Sum,
    output        Cout
);

wire [31:0] sum0, sum1;
wire        cout0, cout1;

// Addition assuming Cin = 0
assign {cout0, sum0} = A + B;

// Addition assuming Cin = 1
assign {cout1, sum1} = A + B + 1'b1;

// Select correct result
assign Sum  = (Cin) ? sum1  : sum0;
assign Cout = (Cin) ? cout1 : cout0;

endmodule


//------------------------------------------------------------
// 128-bit 4-Stage Pipelined Carry Select Adder
//------------------------------------------------------------
module pipelined_128bit_csla (

    input              clk,
    input              rst,

    input      [127:0] A,
    input      [127:0] B,

    output reg [127:0] SUM,
    output reg         COUT

);

//------------------------------------------------------------
// Stage 1 (Bits 31:0)
//------------------------------------------------------------
wire [31:0] sum0;
wire        carry0;

csla32 STAGE0(
    .A(A[31:0]),
    .B(B[31:0]),
    .Cin(1'b0),
    .Sum(sum0),
    .Cout(carry0)
);

// Pipeline Registers
reg [31:0] sum0_r;

reg carry0_r;

reg [31:0] A1_r;
reg [31:0] B1_r;

reg [31:0] A2_r;
reg [31:0] B2_r;

reg [31:0] A3_r;
reg [31:0] B3_r;

always @(posedge clk) begin

    if(rst) begin

        sum0_r  <= 0;
        carry0_r<=0;

        A1_r<=0; B1_r<=0;
        A2_r<=0; B2_r<=0;
        A3_r<=0; B3_r<=0;

    end
    else begin

        sum0_r<=sum0;
        carry0_r<=carry0;

        A1_r<=A[63:32];
        B1_r<=B[63:32];

        A2_r<=A[95:64];
        B2_r<=B[95:64];

        A3_r<=A[127:96];
        B3_r<=B[127:96];

    end

end

//------------------------------------------------------------
// Stage 2 (Bits 63:32)
//------------------------------------------------------------
wire [31:0] sum1;
wire carry1;

csla32 STAGE1(
    .A(A1_r),
    .B(B1_r),
    .Cin(carry0_r),
    .Sum(sum1),
    .Cout(carry1)
);

// Pipeline Registers

reg [63:0] sum1_r;

reg carry1_r;

reg [31:0] A2_rr;
reg [31:0] B2_rr;

reg [31:0] A3_rr;
reg [31:0] B3_rr;

always @(posedge clk) begin

    if(rst) begin

        sum1_r<=0;
        carry1_r<=0;

        A2_rr<=0;
        B2_rr<=0;

        A3_rr<=0;
        B3_rr<=0;

    end
    else begin

        sum1_r[31:0]  <= sum0_r;
        sum1_r[63:32] <= sum1;

        carry1_r<=carry1;

        A2_rr<=A2_r;
        B2_rr<=B2_r;

        A3_rr<=A3_r;
        B3_rr<=B3_r;

    end

end


//------------------------------------------------------------
// Stage 3 (Bits 95:64)
//------------------------------------------------------------
wire [31:0] sum2;
wire carry2;

csla32 STAGE2(

    .A(A2_rr),
    .B(B2_rr),
    .Cin(carry1_r),

    .Sum(sum2),
    .Cout(carry2)

);

// Pipeline Registers

reg [95:0] sum2_r;
reg carry2_r;

reg [31:0] A3_rrr;
reg [31:0] B3_rrr;

always @(posedge clk) begin

    if(rst) begin

        sum2_r<=0;
        carry2_r<=0;

        A3_rrr<=0;
        B3_rrr<=0;

    end
    else begin

        sum2_r[63:0]  <= sum1_r;
        sum2_r[95:64] <= sum2;

        carry2_r<=carry2;

        A3_rrr<=A3_rr;
        B3_rrr<=B3_rr;

    end

end

//------------------------------------------------------------
// Stage 4 (Bits 127:96)
//------------------------------------------------------------
wire [31:0] sum3;
wire carry3;

csla32 STAGE3(

    .A(A3_rrr),
    .B(B3_rrr),
    .Cin(carry2_r),

    .Sum(sum3),
    .Cout(carry3)

);

//------------------------------------------------------------
// Final Output Register
//------------------------------------------------------------
always @(posedge clk) begin

    if(rst) begin

        SUM<=0;
        COUT<=0;

    end
    else begin

        SUM[95:0]   <= sum2_r;
        SUM[127:96] <= sum3;

        COUT<=carry3;

    end

end

endmodule
