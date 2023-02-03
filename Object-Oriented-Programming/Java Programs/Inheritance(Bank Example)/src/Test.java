
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author student
 */
public class Test {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    
    CurrentAccount C1=new CurrentAccount();
    
    PLSAccount P1=new PLSAccount();
    
    System.out.println("Enter Account Type");
    System.out.print("For Current Account Enter 1 & For PLS Account Enter 2: ");
    int acc=input.nextInt();
    if(acc==1)
    {
            
            System.out.print("Enter Name: ");
            String cnam=input.next();
            C1.setName(cnam);
            
            System.out.print("Enter CNIC: ");
            String cnic=input.next();
            C1.setCNIC(cnic);
            
            System.out.print("Enter Contact Number: ");
            String Ph=input.next();
            C1.setContact(Ph);
            
            System.out.print("Enter Service Charges: ");
            double charges=input.nextDouble();
            C1.setCharges(charges);
    }
    else
    {
            
            System.out.print("Enter Name: ");
            String cnam=input.next();
            P1.setName(cnam);
            
            System.out.print("Enter CNIC: ");
            String cnic=input.next();
            P1.setCNIC(cnic);
            
            System.out.print("Enter Contact Number: ");
            String Ph=input.next();
            P1.setContact(Ph);
            
            System.out.print("Enter Interest Rate: ");
            double p=input.nextDouble();
            P1.setInterestRate(p);
    }
    
    System.out.println("*********OUTPUT***********");
    if(acc==1)
    {
        C1.show();
    }
    else
    {
        P1.show();
    }
    
  
}
}
