
import java.sql.*;

public class main {
    public static void main(String[] args) 
    {
        try
        {
            Class.forName("com.mysql.jdbc.Driver");
            String url = "jdbc:mysql://localhost:3306/dbstudentsystem";
            Connection con = DriverManager.getConnection(url,"root","");
            
            String qry = "insert into tblstudent value (?,?,?,?)";
            PreparedStatement pst = con.prepareStatement(qry);
            pst.setInt(1, 5);
            pst.setString(2, "Aneela");
            pst.setString(3, "BSCS");
            pst.setString(4, "123");
            int result = pst.executeUpdate();
            
            if(result > 0)
            {
                System.out.println("Inserted Successfully");
            }
            
            con.close();            
            
            
//            Query for Select
//            String qry = "Select * from tblstudent";
//            Statement st = con.createStatement();
//            ResultSet rs = st.executeQuery(qry);
//            
//            while(rs.next())
//            {
//                System.out.println(rs.getString(1));
//                System.out.println(rs.getString(2));
//                System.out.println(rs.getString(3));
//            }
//            con.close();
            
        }
        catch(Exception ex)
        {
           System.out.println(ex.toString());
        }
    }
    
}
