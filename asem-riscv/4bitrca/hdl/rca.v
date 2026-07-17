module adder(
	input [31:0] a,b,
	output [31:0] sum,
	output carry
);

assign {carry,sum} = a+b;
endmodule
