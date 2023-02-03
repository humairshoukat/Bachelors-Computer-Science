import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class GUIExercise extends JFrame implements ActionListener{
    
    JLabel L1, L2;
    JTextField T1;
    JButton B1;
    JRadioButton RB1, RB2;
    JCheckBox CB1, CB2, CB3;
    public GUIExercise(){
        setVisible(true);
        setSize(500,300);
        setLayout(new FlowLayout());
        setDefaultCloseOperation(3);
        
        L1=new JLabel("Name: ");
        L2=new JLabel("");
        T1=new JTextField(15);
        B1=new JButton("Display");
        RB1=new JRadioButton("Male");
        RB2=new JRadioButton("Female");
        CB1=new JCheckBox("Sports");
        CB2=new JCheckBox("Music");
        CB3=new JCheckBox("Internet Surfing");
        
        add(L1); add(T1); add(RB1); add(RB2); add(CB1); add(CB2); add(CB3); add(B1); add(L2);
        
        ButtonGroup BG=new ButtonGroup();
        BG.add(RB1); BG.add(RB2);
        
        B1.addActionListener(this);
    }
    
    public static void main(String args[]){
        
        GUIExercise obj=new GUIExercise();
    }

    @Override
    public void actionPerformed(ActionEvent ae) {
        String name=T1.getText();
        if(RB1.isSelected())
        {
            name = "Mr. "+name;
        }
        if(RB2.isSelected())
        {
            name= "Miss. "+name;
        }
        name= name+" and Hobbies are";
        if(CB1.isSelected())
        {
            name = name+"Sports";
        }
        if(CB2.isSelected())
        {
            name = name+"Music";
        }
        if(CB3.isSelected())
        {
            name = name+"Internet Surfing";
        }
        L2.setText(name);
    }
    
    
    
}
