// Auto-generated test bench created by VeriLogger Pro at Tue Jun 29 22:54:55 2021

// Timing model is min/max timing. 

`timescale 1ns / 1ps

module syncad_top;


wire [1:0] tb_status;
reg [1:0] tb_status_driver;
assign tb_status = tb_status_driver;

initial tb_status_driver = 1'b1; //diagram always running in auto-generated file

test test();

  initial
    begin
    end
endmodule

