
import java.sql.*;

public class EmployeeDAO {
    
    Connection con = null;
    void connection()
    {
        try
        {
            Class.forName("com.mysql.jdbc.Driver");
            String url = "jdbc:mysql://localhost:3306/dbemployee";
            con = DriverManager.getConnection(url,"root","");
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }
    int Insert(Employee e)
    {
        int res = 0;
        try
        {
            System.out.println("IN Insert");
            connection();
            String qry = "insert into tblemployee values (?,?,?,?,?,?)";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, e.id);
            pst.setString(2, e.name);
            pst.setString(3, e.designation);
            pst.setString(4, e.salary);
            pst.setString(5, e.username);
            pst.setString(6, e.password);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    int Update(Employee e)
    {
        int res = 0;
        try
        {
            connection();
            String qry = "update tblemployee set name = ?, designation = ?, salary = ?, usernam = ?, password = ? where id = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setString(1, e.name);
            pst.setString(2, e.designation);
            pst.setString(3, e.salary);
            pst.setString(4, e.username);
            pst.setString(5, e.password);
            pst.setInt(6, e.id);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    int Delete(Employee s)
    {
        int res = 0;
        try
        {
            connection();
            String qry = "delete from tblstudentsystem where id = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, s.id);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    ResultSet SelectById(Employee e)
    {
        ResultSet res = null;
        try
        {
            connection();
            String qry = "select * from tblemployee where id = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, e.id);
            res = pst.executeQuery();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    ResultSet SelectAll()
    {
        ResultSet res = null;
        try
        {
            connection();
            String qry = "select * from tblstudentsystem";
            Statement pst = con.createStatement();
            res = pst.executeQuery(qry);
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    int CheckLogin(Employee e)
    {
        ResultSet res = null;
        int check = 0;
        try
        {
            connection();
            String qry = "select * from tblemployee where username = ? and password = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setString(1, e.username);
            pst.setString(2, e.password);
            res = pst.executeQuery();
            while(res.next()) 
            {
                check = 1; 
            }
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return check;
    }
    
}
