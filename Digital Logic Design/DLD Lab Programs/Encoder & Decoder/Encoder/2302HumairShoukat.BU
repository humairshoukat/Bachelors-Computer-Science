module humair4to2Encoder(A,B,Y3,Y2,Y1,Y0);
input Y3,Y2,Y1,Y0;
output A,B;
or (A, Y3,Y2);
or (B, Y3,Y1);
endmodule

module test;
reg Y3,Y2,Y1,Y0;
wire A,B;
humair4to2Encoder x(A,B,Y3,Y2,Y1,Y0);
initial
begin
Y3=1'b 0;Y2=1'b 0;Y1=1'b 0;Y0=1'b 1;#10
Y3=1'b 0;Y2=1'b 0;Y1=1'b 1;Y0=1'b 0;#10
Y3=1'b 0;Y2=1'b 1;Y1=1'b 0;Y0=1'b 0;#10
Y3=1'b 1;Y2=1'b 0;Y1=1'b 0;Y0=1'b 0;#10
Y3=1'b 0;Y2=1'b 0;Y1=1'b 0;Y0=1'b 0;
end
endmodule

