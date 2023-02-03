/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Q1;

/**
 *
 * @author user
 */
public class main {

    public static void AFun()
    {
               try{
                   int a=10;
                   int b=0;
                   int x=0;
                   x=b/a;
                   
               }
               catch(ArrayIndexOutOfBoundsException ex) {
                   
               }
               
               
    }
    public static void main(String[] args) {
    
        try {
            AFun();
        } 
        catch (Exception e) {
            System.out.println("Syntax Error, Please Check your Values again");
        }
    }    
}
