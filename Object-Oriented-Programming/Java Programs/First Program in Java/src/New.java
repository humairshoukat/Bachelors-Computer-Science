/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class New {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
             if(i%2==0)
             {
                  System.out.print(" $ ");
             }
             else
             {
                  System.out.print(" * ");
             }
        }
        System.out.println("");
    }
}
}