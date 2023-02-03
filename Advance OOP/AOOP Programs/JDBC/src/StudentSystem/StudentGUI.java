
package StudentSystem;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

public class StudentGUI extends JFrame implements ActionListener{
    JLabel l1, l2, l3, l4, l5;
    JTextField t1, t2, t3, t4;
    JButton b1, b2, b3, b4, b5;
    JComboBox cb1, cb2, cb3, cb4;

    StudentGUI() {
        setVisible(true);
        setSize(500, 500);
        setDefaultCloseOperation(3);
        setLayout(new FlowLayout());

        l1 = new JLabel("ID: ");
        l2 = new JLabel("Name: ");
        l3 = new JLabel("Degree: ");
        l4 = new JLabel("CellNumber: ");
        l5 = new JLabel("");

        t1 = new JTextField(20);
        t2 = new JTextField(20);
        t3 = new JTextField(20);
        t4 = new JTextField(20);

        b1 = new JButton("Insert");
        b2 = new JButton("Update");
        b3 = new JButton("Delete");
        b4 = new JButton("SelectById");
        b5 = new JButton("SelectAll");
        
        cb1 = new JComboBox();
        cb2 = new JComboBox();
        cb3 = new JComboBox();
        cb4 = new JComboBox();

        add(l1); add(t1);
        add(l2); add(t2);
        add(l3); add(t3);
        add(l4); add(t4);
        add(b1); add(b2); add(b3); add(b4); add(b5);
        add(l5);
        add(cb1); add(cb2); add(cb3); add(cb4);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);

    }

    public void actionPerformed(ActionEvent ae) 
    {
        Student s = new Student();
        StudentDAO dao = new StudentDAO();
       
        s.Name = t2.getText();
        s.Degree = t3.getText();
        s.CellNumber = t4.getText();
        
        cb1.removeAllItems();
        cb2.removeAllItems();
        cb3.removeAllItems();
        cb4.removeAllItems();
        
        if (ae.getSource() == b1) 
        {
             s.Id = Integer.parseInt(t1.getText());
            int a = dao.Insert(s);
            if (a > 0) {
                l5.setText("Inserted Successfully");
            }
        } 
        else if (ae.getSource() == b2) 
        {
             s.Id = Integer.parseInt(t1.getText());
            int a = dao.Update(s);
            if (a > 0) {
                l5.setText("Updated Successfully");
            }
        } 
        else if (ae.getSource() == b3) 
        {
             s.Id = Integer.parseInt(t1.getText());
            int a = dao.Delete(s);
            if (a > 0) {
                l5.setText("Delete Successfully");
            }
        }
        else if (ae.getSource() == b4) 
        {
            try
            {
                 s.Id = Integer.parseInt(t1.getText());
                ResultSet rs = dao.SelectById(s);
                while(rs.next()) 
                {
                    t2.setText(rs.getString(2));
                    t3.setText(rs.getString(3));
                    t4.setText(rs.getString(4));
                }
            }
            catch(Exception ex)
            {
                System.out.println(ex.toString());
            }

        }
        else if (ae.getSource() == b5) 
        {
            try
            {
                ResultSet rs = dao.SelectAll();
                while(rs.next()) 
                {
                    cb1.addItem(rs.getString(1));
                    cb2.addItem(rs.getString(2));
                    cb3.addItem(rs.getString(3));
                    cb4.addItem(rs.getString(4));
                }
            }
            catch(Exception ex)
            {
                System.out.println(ex.toString());
            }
        }

    }

    public static void main(String args[]) {
        StudentGUI obj = new StudentGUI();
    }
}
