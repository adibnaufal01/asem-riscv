/* verilator lint_off DECLFILENAME */  // helper module shares this file
//============================================================================
// 8-bit Pipelined Multiplier -- minimum pipeline depth (2 stages)
//----------------------------------------------------------------------------
// Why 2 is the minimum:
//   * 1 stage  = a single output register: the entire 8x8 partial-product
//     reduction remains one combinational path, so nothing is gained --
//     that is just a registered combinational multiplier, not a pipeline.
//   * 2 stages = the first level that actually cuts the critical path.
//     The multiply  P = A * B  is split by the radix-16 identity
//         P = A*B[3:0]  +  (A*B[7:4]) << 4
//     Stage 1 computes the two independent 8x4 sub-products in parallel
//     (each roughly half the depth of the full 8x8 reduction tree) and
//     registers them; Stage 2 performs one 16-bit addition and registers
//     the product. The two stages are well balanced.
//
//   Latency    : 2 clock cycles
//   Throughput : one 8x8 multiply per clock cycle
//   Interface  : same valid-pipeline style as adder_pipelined
//============================================================================

//----------------------------------------------------------------------------
// 8x4 sub-multiplier: sum of four shifted partial products (combinational)
//----------------------------------------------------------------------------
module mult8x4 (
    input  wire [7:0]  a,
    input  wire [3:0]  b,
    output wire [11:0] p
);
    wire [11:0] pp0 = b[0] ? {4'b0, a       } : 12'b0;
    wire [11:0] pp1 = b[1] ? {3'b0, a, 1'b0 } : 12'b0;
    wire [11:0] pp2 = b[2] ? {2'b0, a, 2'b0 } : 12'b0;
    wire [11:0] pp3 = b[3] ? {1'b0, a, 3'b0 } : 12'b0;

    assign p = pp0 + pp1 + pp2 + pp3;
endmodule

//----------------------------------------------------------------------------
// Top level: 2-stage pipelined 8x8 multiplier
//----------------------------------------------------------------------------
module mult_pipelined (
    input  wire        clk,
    input  wire        rst,        // synchronous, active high
    input  wire        in_valid,   // qualifies A, B
    input  wire [7:0]  A,
    input  wire [7:0]  B,
    output reg         out_valid,  // asserts 2 cycles after in_valid
    output reg  [15:0] P           // product A * B
);

    //========================================================================
    // STAGE 1: two independent 8x4 sub-products (parallel partial reduction)
    //========================================================================
    wire [11:0] pl;                // A * B[3:0]
    wire [11:0] ph;                // A * B[7:4]

    mult8x4 u_lo (.a(A), .b(B[3:0]), .p(pl));
    mult8x4 u_hi (.a(A), .b(B[7:4]), .p(ph));

    //------------------------------------------------------------------------
    // PIPELINE REGISTER 1: both sub-products, plus valid
    //------------------------------------------------------------------------
    reg [11:0] pl_r, ph_r;
    reg        v1;

    always @(posedge clk) begin
        if (rst) v1 <= 1'b0;
        else     v1 <= in_valid;
        pl_r <= pl;
        ph_r <= ph;
    end

    //========================================================================
    // STAGE 2: final 16-bit addition  P = pl + (ph << 4)
    //========================================================================
    wire [15:0] product = {4'b0, pl_r} + {ph_r, 4'b0};

    //------------------------------------------------------------------------
    // OUTPUT REGISTER
    //------------------------------------------------------------------------
    always @(posedge clk) begin
        if (rst) out_valid <= 1'b0;
        else     out_valid <= v1;
        P <= product;
    end

endmodule
