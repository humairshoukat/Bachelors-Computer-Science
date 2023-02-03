/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user
 */
abstract public class Animal {
    protected int legs;
    Animal()
    {
        
    }
    protected Animal(int legs)
    {
        this.legs=legs;
    }
    abstract void eat();
    void walk(){
        System.out.println("Animal Walks");
        System.out.println("Number of legs are:" +legs);
    }
}
