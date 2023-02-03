module humairSBE(lhs,rhs,a,b,c);
input a,b,c;
output lhs,rhs;
wire abc,an,bn,abnc;
and (abc,a,b,c);
not (bn,b);
and (abnc,a,bn,c);
not (an,a);
or (lhs,an,abc,abnc);
or (rhs,an,c);
endmodule

module test;
reg a,b,c;
wire lhs,rhs;
humairSBE x(lhs,rhs,a,b,c);
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
