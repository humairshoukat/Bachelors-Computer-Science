import java.sql.*;

public class TMSDao {
    Connection con = null;
    void connection()
    {
        try
        {
            Class.forName("com.mysql.jdbc.Driver");
            String url = "jdbc:mysql://localhost:3306/db_transaction";
            con = DriverManager.getConnection(url,"root","");
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }
    int Insert(TMS obj)
    {
        int res = 0;
        try
        {
            connection();
            String qry = "insert into tbl_data values (?,?,?,?,?,?)";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, obj.id);
            pst.setString(2, obj.date);
            pst.setString(3, obj.type);
            pst.setInt(4, obj.amount);
            pst.setInt(5, obj.accno);
            pst.setString(6, obj.serve);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    int Update(TMS obj)
    {
        int res = 0;
        try
        {
            connection();
            String qry = "update tbl_data set str_date = ?, str_type = ?, int_amount = ?, int_accno = ?, str_serve = ? where int_id= ?";
            PreparedStatement pst = con.prepareStatement(qry);
            
            pst.setString(1, obj.date);
            pst.setString(2, obj.type);
            pst.setInt(3, obj.amount);
            pst.setInt(4, obj.accno);
            pst.setString(5, obj.serve);
            pst.setInt(6, obj.id);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    int Delete(TMS obj)
    {
        int res = 0;
        try
        {
            connection();
            String qry = "delete from tbl_data where int_id = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, obj.id);
            res = pst.executeUpdate();
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
        return res;
    }
    ResultSet SelectById(TMS obj)
    {
        ResultSet rs = null;
        try
        {
            connection();
            String qry = "select * from tbl_data where int_id = ?";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, obj.id);
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
            String qry = "select * from tbl_data";
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
