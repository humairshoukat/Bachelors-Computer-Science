/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package LabExercise4;

/**
 *
 * @author Hp
 */
public class SubClass extends SuperClass{
    int data2;
    boolean checkCondition(){
        if(data1==10 && data2==15)
        {
            return true;
        }
    }
    
    int getData2(){
        return data2;
    }
    
    void setData2(int data2){
        this.data2=data2;
    }
    
    SubClass(int data1, int data2){
        this.data1=data1;
        this.data2=data2;
    }
}
