/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Q3;

/**
 *
 * @author user
 */
public class main {

    void Method1() throws Exception{
        Method2();
    }
    void Method2() throws Exception{
        throw new Exception();
    }
    
    public static void main(String[] args) {
        try {
            main c=new main();
            c.Method1();
        } 
        catch (Exception e) {
            System.out.println("We are working");
        }
    }
    
}
