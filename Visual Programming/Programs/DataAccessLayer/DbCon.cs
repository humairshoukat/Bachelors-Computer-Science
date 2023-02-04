using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer
{
    public class DbCon
    {
        SqlConnection con;

        public DbCon()
        {
            con = new SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\Admin\\OneDrive\\Documents\\dbOfficeManagementSystem.mdf;Integrated Security=True;Connect Timeout=30");
        }

        public bool UDI(string qry)
        {
            con.Open();
            SqlCommand cmd = new SqlCommand(qry, con);
            bool check = cmd.ExecuteNonQuery() > 0;
            con.Close();
            return check;
        }
        public DataTable Search(String qry)
        {
            con.Open();
            SqlDataAdapter sda = new SqlDataAdapter(qry, con);
            DataTable dt = new DataTable();
            sda.Fill(dt);
            con.Close();
            return dt;
        }
    }
}
