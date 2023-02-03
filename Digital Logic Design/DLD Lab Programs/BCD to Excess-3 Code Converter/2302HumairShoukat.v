module humairBCDToExcess3(E3,E2,E1,E0,B3,B2,B1,B0);
input B3,B2,B1,B0;
output E3,E2,E1,E0;
wire B0orB1,B0orB1andB2,B0xorB1;
or (B0orB1,B0,B1);
and (B1orB0andB2,B0orB1,B2);
or (E3,B0orB1andB2,B3);
xor (E2,B0orB1,B2);
xor (B0xorB1,B0,B1);
not (E1,B0xorB1);
not (E0,B0);
endmodule

module test;
reg B3,B2,B1,B0;
wire E3,E2,E1,E0;
humairBCDToExcess3 x(E3,E2,E1,E0,B3,B2,B1,B0);
initial
begin
B3=1'b 0;B2=1'b 0;B1=1'b 0;B0=1'b 0;#10
B3=1'b 0;B2=1'b 0;B1=1'b 0;B0=1'b 1;#10
B3=1'b 0;B2=1'b 0;B1=1'b 1;B0=1'b 0;#10
B3=1'b 0;B2=1'b 0;B1=1'b 1;B0=1'b 1;#10
B3=1'b 0;B2=1'b 1;B1=1'b 0;B0=1'b 0;#10
B3=1'b 0;B2=1'b 1;B1=1'b 0;B0=1'b 1;#10
B3=1'b 0;B2=1'b 1;B1=1'b 1;B0=1'b 0;#10
B3=1'b 0;B2=1'b 1;B1=1'b 1;B0=1'b 1;#10
B3=1'b 1;B2=1'b 0;B1=1'b 0;B0=1'b 0;#10
B3=1'b 1;B2=1'b 0;B1=1'b 0;B0=1'b 1;#10
B3=1'b 1;B2=1'b 0;B1=1'b 1;B0=1'b 0;#10
B3=1'b 1;B2=1'b 0;B1=1'b 1;B0=1'b 1;#10
B3=1'b 1;B2=1'b 1;B1=1'b 0;B0=1'b 0;#10
B3=1'b 1;B2=1'b 1;B1=1'b 0;B0=1'b 1;#10
B3=1'b 1;B2=1'b 1;B1=1'b 1;B0=1'b 0;#10
B3=1'b 1;B2=1'b 1;B1=1'b 1;B0=1'b 1;#10
B3=1'b 0;B2=1'b 0;B1=1'b 0;B0=1'b 0;
end
endmodule
