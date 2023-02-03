/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    ShapeC circleshape = new Circle();
    circleshape.Draw();
    circleshape.Draw2();
    circleshape.Draw3();
        // Note we can't call function Draw2 because the reference of type shapeA
        //circleshape.Draw2(); 
        
    }
    
}
