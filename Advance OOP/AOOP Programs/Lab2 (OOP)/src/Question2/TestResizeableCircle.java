/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Question2;

/**
 *
 * @author user
 */
public class TestResizeableCircle {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ResizeableCircle r= new ResizeableCircle();
        
        r.resize(5);
        
        System.out.println(r.getArea());
        
    }
    
}
