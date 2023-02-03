/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author student
 */
public class MainClass {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    Calculator CalObj= new Calculator();
    int c= CalObj.sum(15,5);
    System.out.println("Sum is: "+ c);
    
    c= CalObj.subtract(15,5);
    System.out.println("Subtract is: "+ c);
    
    c= CalObj.multiply(15,5);
    System.out.println("Multiplication is: "+ c);
    
    c= CalObj.divide(15,5);
    System.out.println("Division is: "+ c);
    
    
    Factorial FactObj=new Factorial();
    c=FactObj.fact(5);
    System.out.println("Factorial is: "+ c);
    
    }
    
}
