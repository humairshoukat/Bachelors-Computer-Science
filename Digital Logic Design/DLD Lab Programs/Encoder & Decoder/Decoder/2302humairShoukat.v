module humair2to4Decoder(Y3,Y2,Y1,Y0,A,B);
input A,B;
output Y3,Y2,Y1,Y0;
wire Anot,Bnot;
and (Y3,A,B);
not (Bnot,B);
and (Y2,A,Bnot);
not (Anot,A);
and(Y1,Anot,B);
and(Y0,Anot,Bnot);
endmodule

module test;
reg A,B;
wire Y3,Y2,Y1,Y0;
humair2to4Decoder x(Y3,Y2,Y1,Y0,A,B);
initial
begin
A=1'b 0;B=1'b 0;#10
A=1'b 0;B=1'b 1;#10
A=1'b 1;B=1'b 0;#10
A=1'b 1;B=1'b 1;#10
A=1'b 0;B=1'b 0;
end
endmodule
