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
public class ResizeableCircle extends Circle implements Resizeable {
    @Override
    public void resize() {
        
    }
    public void resize(double radius){
        this.radius=radius;
    }
    
}
