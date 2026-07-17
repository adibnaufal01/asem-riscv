//32 bit adder
module 32adder(
    input [31:0] a,b,
    input Cin,
    output [31:0] Sum,
    output cout
);

wire [31:0] sum0, sum1;
wire cout0, cout1;

assign {cout0, sum0} = a+b;
assign {cout1, sum1} = a+b+1'b1;

assign Sum = (Cin)? sum1:sum0;
assign Cout = (Cin)? cout1:cout0;

endmodule

module top(
    input [127:0]a,b,
    input clk, rst
    output reg [127:0] sum,
    output reg cout
):

//stage 1

wire [31:0] s1;
wire c1, c2;

//cara instantiation: .fromModule(connectedTo)
32adder stage1(.a(a[31:0]), .b(b[31:0], .cin(1'b0), .sum(s1), .cout(c1))
);

reg [127:0] con;
s1 = a+b;
c2 <= c1;
con <= {32'b0,32'b0,32'b0,s1}

always @(posedge clk) begin
    if (rst) begin
        s1 <= 0;
        c1 <= 0; end
    else begin
        c2 <= c1;
    end
end

//stage 2


