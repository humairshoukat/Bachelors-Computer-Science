module humairFSBT(D,B,a,b,c);
input a,b,c;
output D,B;
wire axorb,an,anb,axorbn,axorbnc;
xor (axorb,a,b);
not (an,a);
and (anb,an,b);
xor (D,axorb,c);
not (axorbn,axorb);
and (axorbnc,axorbn,c);
or (B,axorbnc,anb);
endmodule

module test;
reg a,b,c;
wire D,B;
humairFSBT x(D,B,a,b,c);
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
