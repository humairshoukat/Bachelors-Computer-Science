using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace OfficeManagementSystem
{
    public class DbCon
    {
        DataTable dt = null;
        public static SqlConnection Connection()
        {
            SqlConnection conn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\dbOfficeManagementSystem.mdf;Integrated Security=True;Connect Timeout=30");
            try
            {
                conn.Open();
            }
            catch(SqlException ex)
            {
                MessageBox.Show(ex.ToString());
            }
            return conn;
        }

        public Boolean UDI(String query)
        {
            try
            {
                SqlConnection conn = Connection();
                SqlCommand cmd = new SqlCommand(query, conn);
                int c = cmd.ExecuteNonQuery();
                if (c>0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            catch(SqlException ex)
            {
                return false ;
            }
            finally
            {
                Connection().Close();
            }
        }

        public DataTable Search(String query)
        {
            try
            {
                SqlConnection conn = Connection();
                SqlCommand cmd = new SqlCommand(query, conn);
                SqlDataAdapter da = new SqlDataAdapter(cmd);
                dt = new DataTable();
                da.Fill(dt);
                return dt;
            }
            catch(SqlException ex)
            {
                return dt;
            }
            finally
            {
                Connection().Close();
            }
        }

        

        /*public void AddEmployee(Employee emp)
        {
            SqlConnection conn = GetConnection();
            string query = "INSERT INTO tblData VALUES(@ID, @Name,@Cell,@Address)";
            if (UDI(query))
            {
                MessageBox.Show("Record Instered Successfully");
            }
            else
            {
                MessageBox.Show("Record not found");
            }
        }

        public void UpdateEmployee(Employee emp)
        {
            SqlConnection conn = GetConnection();
            string query = "update tblData set empName=@Name , empCell=@Cell , empAddress=@Address where empId=@ID ";
            if (UDI(query))
            {
                MessageBox.Show("Record Updated Successfully");
            }
            else
            {
                MessageBox.Show("Record not found");
            }
        }

        public void DeleteEmployee(Employee emp)
        {
            SqlConnection conn = GetConnection();
            string query = "delete tblData where empId=@ID";
            DbCon obj = new DbCon();
            if (UDI(query))
            {
                MessageBox.Show("Record Instered Successfully");
            }
            else
            {
                MessageBox.Show("Record not found");
            }
        }*/

    }
}
