
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class Driver {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    AdvCal objAdv=new AdvCal();
    
        System.out.print("Enter First No: ");
        int x=input.nextInt();
        System.out.print("Enter Second No: ");
        int y=input.nextInt();
        
        System.out.print("Sum is: ");
        objAdv.Sum(x, y);
    }
    
}
