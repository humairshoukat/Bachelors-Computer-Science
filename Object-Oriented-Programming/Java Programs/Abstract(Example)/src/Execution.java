/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class Execution {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    ElectricGuitar guitar = new ElectricGuitar();
    ElectricBassGuitar bassGuitar = new ElectricBassGuitar();
		
    guitar.play();
    bassGuitar.play();
		
    guitar = new ElectricGuitar(5);
    bassGuitar = new ElectricBassGuitar(7);
		
    guitar.play();
    bassGuitar.play();

        
    }
    
}
