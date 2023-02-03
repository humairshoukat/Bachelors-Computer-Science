
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;


public class DBGUI extends JFrame implements ActionListener 
{
    JLabel l1,l2,l3,l4,l5;
    JTextField t1,t2,t3,t4;
    JButton b1,b2,b3,b4;
    Connection con = null;
    
    DBGUI ()
    {
        setVisible(true);
        setSize(500,500);
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
        b4 = new JButton("Select");
        
        add(l1); add(t1);
        add(l2); add(t2);
        add(l3); add(t3);
        add(l4); add(t4);
        
        add(b1); add(b2); add(b3); add(b4);
        add(l5);
        
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent ae) 
    {
        try
        {
            Class.forName("com.mysql.jdbc.Driver");
            String url = "jdbc:mysql://localhost:3306/dbstudentsystem";
            con = DriverManager.getConnection(url,"root","");
        }
        catch(Exception ex)
        {
           System.out.println(ex.toString());
        }
        if(ae.getSource()==b1)
        {
            try
            {
            String qry = "insert into tblstudent values (?,?,?,?)";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, Integer.parseInt(t1.getText()));
            pst.setString(2, t2.getText());
            pst.setString(3, t3.getText());
            pst.setString(4, t4.getText());
            int result = pst.executeUpdate();
            
            if(result > 0)
            {
                l5.setText("Inserted Successfully");
            }
            
            con.close();            
            
            }
            catch(Exception ex)
            {
                System.out.println(ex.toString());
            }
        
        }
        else if(ae.getSource()==b2)
        {
            try
            {
            String qry = "update tblstudent set strName = ?, strDegree = ?, strCellNumber = ? where intId = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setString(1, t2.getText());
            pst.setString(2, t3.getText());
            pst.setString(3, t4.getText());
            pst.setInt(4, Integer.parseInt(t1.getText()));
            int result = pst.executeUpdate();
            
            if(result > 0)
            {
                l5.setText("Updated Successfully");
            }
            
            con.close();            
            
            }
            catch(Exception ex)
            {
                System.out.println(ex.toString());
            }
        }
        else if(ae.getSource()==b3)
        {
            try
            {
            String qry = "delete from tblstudent where intId = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, Integer.parseInt(t1.getText()));
            int result = pst.executeUpdate();
            
            if(result > 0)
            {
                l5.setText("Deleted Successfully");
            }
            
            con.close();            
            
            }
            catch(Exception ex)
            {
                System.out.println(ex.toString());
            }
        }
        else if(ae.getSource()==b4)
        {
            try
            {
            String qry = "select * from tblstudent where intId = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, Integer.parseInt(t1.getText()));
            ResultSet rs = pst.executeQuery();
            while(rs.next())
            {
                t2.setText(rs.getString(2));
                t3.setText(rs.getString(3));
                t4.setText(rs.getString(4));
            }
            
            con.close();            
            
            }
            catch(Exception ex)
            {
                System.out.println(ex.toString());
            }
        }
    }
    public static void main(String args[])
    {
        DBGUI obj = new DBGUI();
    }
    
}
