/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class ElectricGuitar extends StringedInstrument{
public ElectricGuitar()
{
    super();
    this.name="Guitar";
    this.numberOfStrings=4;
}

public ElectricGuitar(int numberOfStrings)
{
    super();
    this.name="Guitar";
    this.numberOfStrings=numberOfStrings;
}

@Override
public void play()
{
    System.out.println("An electric " + numberOfStrings + "-string " + name+ " is rocking!");
}
    
}
