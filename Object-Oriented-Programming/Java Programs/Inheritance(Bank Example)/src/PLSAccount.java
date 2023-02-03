/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author student
 */
public class PLSAccount extends BankAccount{
private double IRate;

PLSAccount()
{
    IRate=0;
}

PLSAccount(double rate)
{
    IRate=rate;
}

public void setInterestRate(double rate)
{
    IRate=rate;
}

public double getInterestRate()
{
    return IRate;
}

@Override
void show()
{
    super.show();
    System.out.println("Interest Rate: "+IRate);
}

}
