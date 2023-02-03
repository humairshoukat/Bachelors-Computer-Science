module humair1x4DEMUX(D3,D2,D1,D0,A,B,I);
input A,B,I;
output D3,D2,D1,D0;
wire Anot,Bnot;
not (Anot, A);
not (Bnot, B);
and (D0, Anot, Bnot, I);
and (D1, Anot, B, I);
and (D2, A, Bnot, I);
and (D3, A, B, I);
endmodule

initial
begin
A=1'b 0;B=1'b 0;I=1'b 0;#10
A=1'b 0;B=1'b 0;I=1'b 1;#10
A=1'b 0;B=1'b 1;I=1'b 0;#10
A=1'b 0;B=1'b 1;I=1'b 1;#10
A=1'b 1;B=1'b 0;I=1'b 0;#10
A=1'b 1;B=1'b 0;I=1'b 1;#10
A=1'b 1;B=1'b 1;I=1'b 0;#10
A=1'b 1;B=1'b 1;I=1'b 1;#10
A=1'b 0;B=1'b 0;I=1'b 0;#10
end
endmodule
