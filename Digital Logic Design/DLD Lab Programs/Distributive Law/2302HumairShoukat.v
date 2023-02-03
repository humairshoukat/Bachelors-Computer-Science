module humairdistrib(lhs,rhs,a,b,c);
input a,b,c;
output lhs,rhs;
wire ab,ac,bc_or;
and (lhs,a,bc_or);
or (bc_or,b,c);
and (ab,a,b);
and (ac,a,c);
or(rhs,ab,ac);
endmodule

module test;
reg a,b,c;
wire lhs,rhs;
humairdistrib x(lhs,rhs,a,b,c);
initial
begin
a=1'b 0; b=1'b 0; c=1'b 0;#10
a=1'b 0; b=1'b 0; c=1'b 1;#10
a=1'b 0; b=1'b 1; c=1'b 0;#10
a=1'b 0; b=1'b 1; c=1'b 1;#10
a=1'b 1; b=1'b 0; c=1'b 0;#10
a=1'b 1; b=1'b 0; c=1'b 1;#10
a=1'b 1; b=1'b 1; c=1'b 0;#10
a=1'b 1; b=1'b 1; c=1'b 1;#10
a=1'b 0; b=1'b 0; c=1'b 0;
end
endmodule
