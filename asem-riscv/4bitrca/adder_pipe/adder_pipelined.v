//============================================================================
// 128-BIT Pipelined Adder using four 32-bit Carry-Select Adder stages
// (MSB LEFT / Stage 4, LSB RIGHT / Stage 1) -- design file only
//----------------------------------------------------------------------------
// Signal naming follows the block diagram:
//   Stage 1 : bits [ 31:  0], Cin = Cin (tie to 0)     -> Sum0, Cout0
//   Stage 2 : bits [ 63: 32], Sel = Cout0_d (registered) -> Sum1, Cout1
//   Stage 3 : bits [ 95: 64], Sel = Cout1_d (registered) -> Sum2, Cout2
//   Stage 4 : bits [127: 96], Sel = Cout2_d (registered) -> Sum3, Cout3
//   Final carry out = Cout3 (registered on the output register)
//
// NOTE vs. the original diagram (corrected here):
//   1. Pipeline registers must hold MORE than just the carry. Each register
//      also delays (a) the not-yet-used upper operand segments and (b) the
//      partial sums already produced, so all data of one 128-bit operation
//      stays time-aligned at 1 result/clock throughput.
//   2. Each stage's MUX select is the REGISTERED carry (Cout0_d/Cout1_d/
//      Cout2_d), not the combinational Cout of the previous stage.
//   3. Stage 1 needs only ONE adder (its Cin is a known constant), the
//      dual-adder + MUX drawn in the diagram is redundant.
//
// Latency: 4 clock cycles.  Throughput: one 128-bit addition per clock.
//============================================================================

//----------------------------------------------------------------------------
// 8-bit ripple-carry block (building block of the 32-bit CSLA)
//----------------------------------------------------------------------------
module rca8 (
    input  wire [7:0] a,
    input  wire [7:0] b,
    input  wire       cin,
    output wire [7:0] sum,
    output wire       cout
);
    assign {cout, sum} = a + b + cin;
endmodule

//----------------------------------------------------------------------------
// 32-bit Carry-Select Adder: four 8-bit blocks; blocks 1..3 precompute the
// Cin=0 and Cin=1 results and a MUX picks the correct one, shortening the
// internal carry path.
//----------------------------------------------------------------------------
module adder32 (
    input  wire [31:0] a,
    input  wire [31:0] b,
    input  wire        cin,
    output wire [31:0] sum,
    output wire        cout
);
    wire [7:0] s0;
    wire       c0;
    rca8 u_b0 (.a(a[7:0]), .b(b[7:0]), .cin(cin), .sum(s0), .cout(c0));

    wire [7:0] s1_0, s1_1, s2_0, s2_1, s3_0, s3_1;
    wire       c1_0, c1_1, c2_0, c2_1, c3_0, c3_1;

    rca8 u_b1_0 (.a(a[15:8]),  .b(b[15:8]),  .cin(1'b0), .sum(s1_0), .cout(c1_0));
    rca8 u_b1_1 (.a(a[15:8]),  .b(b[15:8]),  .cin(1'b1), .sum(s1_1), .cout(c1_1));
    rca8 u_b2_0 (.a(a[23:16]), .b(b[23:16]), .cin(1'b0), .sum(s2_0), .cout(c2_0));
    rca8 u_b2_1 (.a(a[23:16]), .b(b[23:16]), .cin(1'b1), .sum(s2_1), .cout(c2_1));
    rca8 u_b3_0 (.a(a[31:24]), .b(b[31:24]), .cin(1'b0), .sum(s3_0), .cout(c3_0));
    rca8 u_b3_1 (.a(a[31:24]), .b(b[31:24]), .cin(1'b1), .sum(s3_1), .cout(c3_1));

    wire c1 = c0 ? c1_1 : c1_0;
    wire c2 = c1 ? c2_1 : c2_0;
    wire c3 = c2 ? c3_1 : c3_0;

    assign sum  = { (c2 ? s3_1 : s3_0),
                    (c1 ? s2_1 : s2_0),
                    (c0 ? s1_1 : s1_0),
                     s0 };
    assign cout = c3;
endmodule

//----------------------------------------------------------------------------
// Top level
//----------------------------------------------------------------------------
module adder_pipelined (
    input  wire         clk,
    input  wire         rst,        // synchronous, active high
    input  wire         in_valid,   // qualifies A, B, Cin
    input  wire         Cin,        // overall carry-in (tie to 1'b0 per spec)
    input  wire [127:0] A,
    input  wire [127:0] B,
    output reg          out_valid,  // asserts 4 cycles after in_valid
    output reg  [127:0] SUM,        // {Sum3, Sum2, Sum1, Sum0}, time-aligned
    output reg          Cout        // final carry out (= registered Cout3)
);

    //========================================================================
    // STAGE 1  (Bits 31:0) -- single adder, Cin is known at input time
    //========================================================================
    wire [31:0] Sum0;
    wire        Cout0;

    adder32 u_stage1 (
        .a   (A[31:0]),
        .b   (B[31:0]),
        .cin (Cin),
        .sum (Sum0),
        .cout(Cout0)
    );

    //------------------------------------------------------------------------
    // PIPELINE REGISTER 1
    //   carry:    Cout0_d
    //   operands: A/B[127:32] delayed by 1 cycle
    //   sums:     Sum0 delayed by 1 cycle
    //------------------------------------------------------------------------
    reg         Cout0_d;
    reg  [31:0] Sum0_r1;
    reg  [31:0] A1_d,  B1_d;    // A[ 63:32], B[ 63:32] delayed 1
    reg  [31:0] A2_d1, B2_d1;   // A[ 95:64], B[ 95:64] delayed 1
    reg  [31:0] A3_d1, B3_d1;   // A[127:96], B[127:96] delayed 1
    reg         v1;

    always @(posedge clk) begin
        if (rst) v1 <= 1'b0;
        else     v1 <= in_valid;
        Cout0_d <= Cout0;
        Sum0_r1 <= Sum0;
        A1_d    <= A[ 63:32];   B1_d  <= B[ 63:32];
        A2_d1   <= A[ 95:64];   B2_d1 <= B[ 95:64];
        A3_d1   <= A[127:96];   B3_d1 <= B[127:96];
    end

    //========================================================================
    // STAGE 2  (Bits 63:32) -- carry-select, Sel = Cout0_d
    //========================================================================
    wire [31:0] Sum1_0, Sum1_1;
    wire        Cout1_0, Cout1_1;

    adder32 u_stage2_c0 (.a(A1_d), .b(B1_d), .cin(1'b0), .sum(Sum1_0), .cout(Cout1_0));
    adder32 u_stage2_c1 (.a(A1_d), .b(B1_d), .cin(1'b1), .sum(Sum1_1), .cout(Cout1_1));

    wire [31:0] Sum1  = Cout0_d ? Sum1_1  : Sum1_0;   // MUX, Sel = Cout0_d
    wire        Cout1 = Cout0_d ? Cout1_1 : Cout1_0;

    //------------------------------------------------------------------------
    // PIPELINE REGISTER 2
    //   carry:    Cout1_d
    //   operands: A/B[127:64] delayed by 2 cycles
    //   sums:     Sum0 (2 cycles), Sum1 (1 cycle)
    //------------------------------------------------------------------------
    reg         Cout1_d;
    reg  [31:0] Sum0_r2, Sum1_r1;
    reg  [31:0] A2_d2, B2_d2;   // A[ 95:64], B[ 95:64] delayed 2
    reg  [31:0] A3_d2, B3_d2;   // A[127:96], B[127:96] delayed 2
    reg         v2;

    always @(posedge clk) begin
        if (rst) v2 <= 1'b0;
        else     v2 <= v1;
        Cout1_d <= Cout1;
        Sum0_r2 <= Sum0_r1;
        Sum1_r1 <= Sum1;
        A2_d2   <= A2_d1;   B2_d2 <= B2_d1;
        A3_d2   <= A3_d1;   B3_d2 <= B3_d1;
    end

    //========================================================================
    // STAGE 3  (Bits 95:64) -- carry-select, Sel = Cout1_d
    //========================================================================
    wire [31:0] Sum2_0, Sum2_1;
    wire        Cout2_0, Cout2_1;

    adder32 u_stage3_c0 (.a(A2_d2), .b(B2_d2), .cin(1'b0), .sum(Sum2_0), .cout(Cout2_0));
    adder32 u_stage3_c1 (.a(A2_d2), .b(B2_d2), .cin(1'b1), .sum(Sum2_1), .cout(Cout2_1));

    wire [31:0] Sum2  = Cout1_d ? Sum2_1  : Sum2_0;   // MUX, Sel = Cout1_d
    wire        Cout2 = Cout1_d ? Cout2_1 : Cout2_0;

    //------------------------------------------------------------------------
    // PIPELINE REGISTER 3
    //   carry:    Cout2_d
    //   operands: A/B[127:96] delayed by 3 cycles
    //   sums:     Sum0 (3 cycles), Sum1 (2 cycles), Sum2 (1 cycle)
    //------------------------------------------------------------------------
    reg         Cout2_d;
    reg  [31:0] Sum0_r3, Sum1_r2, Sum2_r1;
    reg  [31:0] A3_d3, B3_d3;   // A[127:96], B[127:96] delayed 3
    reg         v3;

    always @(posedge clk) begin
        if (rst) v3 <= 1'b0;
        else     v3 <= v2;
        Cout2_d <= Cout2;
        Sum0_r3 <= Sum0_r2;
        Sum1_r2 <= Sum1_r1;
        Sum2_r1 <= Sum2;
        A3_d3   <= A3_d2;   B3_d3 <= B3_d2;
    end

    //========================================================================
    // STAGE 4  (Bits 127:96) -- carry-select, Sel = Cout2_d
    //========================================================================
    wire [31:0] Sum3_0, Sum3_1;
    wire        Cout3_0, Cout3_1;

    adder32 u_stage4_c0 (.a(A3_d3), .b(B3_d3), .cin(1'b0), .sum(Sum3_0), .cout(Cout3_0));
    adder32 u_stage4_c1 (.a(A3_d3), .b(B3_d3), .cin(1'b1), .sum(Sum3_1), .cout(Cout3_1));

    wire [31:0] Sum3  = Cout2_d ? Sum3_1  : Sum3_0;   // MUX, Sel = Cout2_d
    wire        Cout3 = Cout2_d ? Cout3_1 : Cout3_0;  // final carry out

    //------------------------------------------------------------------------
    // OUTPUT REGISTER -- RESULT ASSEMBLY (concatenate time-aligned blocks)
    //------------------------------------------------------------------------
    always @(posedge clk) begin
        if (rst) out_valid <= 1'b0;
        else     out_valid <= v3;
        SUM  <= {Sum3, Sum2_r1, Sum1_r2, Sum0_r3};
        Cout <= Cout3;
    end

endmodule
