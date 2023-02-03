module humairExcess3toBCD(B4,B3,B2,B1,E4,E3,E2,E1);
input E4,E3,E2,E1;
output B4,B3,B2,B1;
wire E3andE4,E2orE3andE4,E3not,E4not,E3notorE4not;
and (E3andE4,E3,E4);
or (E2orE3andE4,E2,E3andE4);
and (B4,E2orE3andE4,E1);
not (E3not,E3);
not (E4not,E4);
or (E3notorE4not,E3not,E4not);
xor (B3,E3notorE4not,E2);
xor (B2,E3,E4);
not (B1,E4);
endmodule

module test;
reg E4,E3,E2,E1;
wire B4,B3,B2,B1;
humairExcess3toBCD x(B4,B3,B2,B1,E4,E3,E2,E1);
initial
begin
E4=1'b 0;E3=1'b 0;E2=1'b 1;E1=1'b 1;#10
E4=1'b 0;E3=1'b 1;E2=1'b 0;E1=1'b 0;#10
E4=1'b 0;E3=1'b 1;E2=1'b 0;E1=1'b 1;#10
E4=1'b 0;E3=1'b 1;E2=1'b 1;E1=1'b 0;#10
E4=1'b 0;E3=1'b 1;E2=1'b 1;E1=1'b 1;#10
E4=1'b 1;E3=1'b 0;E2=1'b 0;E1=1'b 0;#10
E4=1'b 1;E3=1'b 0;E2=1'b 0;E1=1'b 1;#10
E4=1'b 1;E3=1'b 0;E2=1'b 1;E1=1'b 0;#10
E4=1'b 1;E3=1'b 0;E2=1'b 1;E1=1'b 1;#10
E4=1'b 1;E3=1'b 1;E2=1'b 0;E1=1'b 0;#10
E4=1'b 0;E3=1'b 0;E2=1'b 0;E1=1'b 0;
end
endmodule
