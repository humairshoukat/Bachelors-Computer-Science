
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Calculator extends JFrame implements ActionListener{
    JButton B1, B2, B3, B4, B5;
    JTextField T1;
    int a, b, c;
            String ch = null;
    public Calculator(){
            setVisible(true);
            setSize(400,400);
            setDefaultCloseOperation(3);
            setLayout(new FlowLayout());
            
            T1=new JTextField(10);
            add(T1);
            
            B1=new JButton("1");
            add(B1);
            B1.addActionListener(this);
            
            B2=new JButton("2");
            add(B2);
            B2.addActionListener(this);
            
            B3=new JButton("+");
            add(B3);
            B3.addActionListener(this);
            
            B4=new JButton("-");
            add(B4);
            B4.addActionListener(this);
            
            B5=new JButton("=");
            add(B5);
            B5.addActionListener(this);
            
            
            
            
            
            
            
    }
    
    @Override
    public void actionPerformed(ActionEvent e) {
        
        if (e.getSource()==B1)
        {
            a = 1;
            T1.setText(a+"");
        }
        if(e.getSource()==B2)
        {
            b = 2;
            T1.setText(b+"");
        }
        if(e.getSource()==B3)
        {
            ch = "+";
            T1.setText(ch+"");
        }
        if(e.getSource()==B4)
        {
            ch = "-";
            T1.setText(ch+"");
        }
        if(e.getSource()==B5)
        {
            if(ch=="+")
            {
                c = a+b;
                T1.setText(c+"");
            }
            else
            {
                c = a-b;
                T1.setText(c+"");
            }
        }
        
        
    }
    
    public static void main(String[] args) {
        Calculator obj=new Calculator();
        
        
    }
    
    
    
}
