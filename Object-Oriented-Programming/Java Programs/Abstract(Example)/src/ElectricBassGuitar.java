/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class ElectricBassGuitar extends StringedInstrument{
public ElectricBassGuitar() 
{
	super();
	this.name = "Bass Guitar";
	this.numberOfStrings = 6;
}
	
public ElectricBassGuitar(int numberOfStrings)
{
	super();
	this.name = "Bass Guitar";
	this.numberOfStrings = numberOfStrings;
}

@Override
public void play()
{
	System.out.println("An electric " + numberOfStrings + "-string " + name+ " is rocking!");
}
    
}
