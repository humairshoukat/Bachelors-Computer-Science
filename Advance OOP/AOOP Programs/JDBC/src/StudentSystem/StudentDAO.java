
package StudentSystem;

import java.sql.*;

public class StudentDAO {
    Connection con = null;
    void connection()
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
    }
    int Insert(Student s)
    {
        int res = 0;
        try
        {
            connection();
            String qry = "insert into tblstudent values (?,?,?,?)";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, s.Id);
            pst.setString(2, s.Name);
            pst.setString(3, s.Degree);
            pst.setString(4, s.CellNumber);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    int Update(Student s)
    {
        int res = 0;
        try
        {
            connection();
            String qry = "update tblstudent set strName = ?, strDegree = ?, strCellNumber = ? where intId= ?";
            PreparedStatement pst = con.prepareStatement(qry);
            
            pst.setString(1, s.Name);
            pst.setString(2, s.Degree);
            pst.setString(3, s.CellNumber);
            pst.setInt(4, s.Id);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    int Delete(Student s)
    {
        int res = 0;
        try
        {
            connection();
            String qry = "delete from tblstudent where intId = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, s.Id);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    ResultSet SelectById(Student s)
    {
        ResultSet rs = null;
        try
        {
            connection();
            String qry = "select * from tblstudent where intId= ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, s.Id);
            rs = pst.executeQuery();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return rs;
    }
    ResultSet SelectAll()
    {
        ResultSet rs = null;
        try
        {
            connection();
            String qry = "select * from tblstudent";
            Statement pst = con.createStatement();
            rs = pst.executeQuery(qry);
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return rs;
    }
}
