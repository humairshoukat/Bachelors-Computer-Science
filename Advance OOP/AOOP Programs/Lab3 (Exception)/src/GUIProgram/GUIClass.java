/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package GUIProgram;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
//import java.awt.event.ActionListener;
//import java.awt.FlowLayout;

/**
 *
 * @author user
 */
public class GUIClass extends JFrame implements ActionListener{
    JTextField T1,T2;
    JLabel L1, L2, L3;
    JButton B1;
    
    public GUIClass(){
            setVisible(true);
            setSize(400,400);
            setDefaultCloseOperation(3);
            setLayout(new FlowLayout());
            L1=new JLabel("First Number");
            add(L1);
            T1=new JTextField(10);
            add(T1);
            L2=new JLabel("Second Number");
            add(L2);
            T2=new JTextField(10);
            add(T2);
            
            B1=new JButton("ADD");
            add(B1);
            B1.addActionListener(this);
            
            L3=new JLabel("");
            add(L3);
            
            
    }
    
    public static void main(String[] args) {
        GUIClass obj=new GUIClass();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        int a = Integer.parseInt(T1.getText());
        int b = Integer.parseInt(T2.getText());
        int c= a+b;
        L3.setText(c+" ");
    }
    
}
