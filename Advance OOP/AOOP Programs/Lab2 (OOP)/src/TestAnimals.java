/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user
 */
public class TestAnimals {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Fish d = new Fish(0);
        Cat c = new Cat("Fluffy");
        Animal a = new Fish(0);
        Animal e = new Spider(8);
        Pet p = new Cat();
        
        //a. calling the methods in each object
        d.eat();
        d.walk();
        
        c.eat();
        c.setname("Fluffy");
        c.getname();
        c.play();
        
        a.eat();
        a.walk();
        
        e.eat();
        e.walk();
        
        p.setname("Fluffy");
        p.getname();
        p.play();
        
        
        //b. casting objects
//        Fish f = new Fish();
//        Cat zub = new Cat("ZUB");
        
        
        //c. using polymorphism
        Animal anm = new Fish(0);
        Animal enm = new Spider(8);
        Pet duke = new Cat();
        
        anm.eat();
        anm.walk();
        
        enm.eat();
        enm.walk();
        
        
        //d. using super to call super class methods
        
        

    }
    
}
