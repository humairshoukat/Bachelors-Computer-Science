/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author student
 */
public class CurrentAccount extends BankAccount {
private double SCharges;

CurrentAccount()
{
    SCharges=0;
}

CurrentAccount(double charges)
{
    SCharges=charges;
}

public void setCharges(double charges)
{
    SCharges=charges;
}

public double getCharges()
{
    return SCharges;
}

@Override
void show()
{
    super.show();
    System.out.println("Service Charges: "+SCharges);
}
    
}
