module humairnot(c,a);
input a;
output c;
not(c,a);
endmodule

module test_humairnot;
reg a;
wire c;
humairnot x(c,a);
initial
begin
a=1'b 0;#10
a=1'b 1;#10
a=1'b 0;
end
endmodule
