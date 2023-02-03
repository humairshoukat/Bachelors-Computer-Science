/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user
 */
public class Cat extends Animal implements Pet {
    String name;
    public Cat(){
        this("");
    }
    public Cat(String name){
        super(4);
        this.name=name;
        
    }
    public String getname(){
        return this.name;
    }
    public void setname(String name){
        this.name=name;
    }
    public void play(){
        
    }
    void eat(){
        
    }
}
