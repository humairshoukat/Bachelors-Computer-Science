/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author student
 */
public class BankAccount {
private String Name;
private String CNIC;
private String Contact;

BankAccount()
{
    Name="N/A";
    CNIC="N/A";
    Contact="N/A";
}

BankAccount(String nam, String cnic, String Ph)
{
    Name=nam;
    CNIC=cnic;
    Contact=Ph;
}

public void setName(String nam)
{
    Name=nam;
}

public String getName()
{
    return Name;
}

public void setCNIC(String cnic)
{
    CNIC=cnic;
}

public String getCNIC()
{
    return CNIC;
}

public void setContact(String Ph)
{
    Contact=Ph;
}

public String getContact()
{
    return Contact;
}

void show()
{
    System.out.println("Name: "+Name);
    System.out.println("CNIC: "+CNIC);
    System.out.println("Contact No: "+Contact);
}

}
