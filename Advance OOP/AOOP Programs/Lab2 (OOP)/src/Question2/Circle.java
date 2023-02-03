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
public class Circle implements GeometricObject {
    double radius;
    double pie = 3.142;
    
    
    void setRadius(int radius){
        this.radius=radius;
    }
    double getR(){
        return this.radius;
    }

    @Override
    public double getArea(){
        return pie*radius*2;
    }

    @Override
    public double getParimeter() {
        return 0;
    }
}
