/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user
 */
public class Fish extends Animal{
    public Fish(int legs) {
        super(legs);
    }
    int getname(){
        return this.legs;
    }
    void setname(int legs){
        this.legs=legs;
    }
    void play(){
        
    }
    @Override
    void walk(){
        System.out.println("Fist can't walk and don't have legs");
    }
    @Override
    void eat(){
        
    }
}
