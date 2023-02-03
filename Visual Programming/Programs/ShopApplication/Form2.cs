using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Runtime.CompilerServices.RuntimeHelpers;
using System.Xml.Linq;

namespace ShopApplication
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {
        }

        private void btnSignup_Click(object sender, EventArgs e)
        {
            string Name = txtName.Text;
            string Gender = txtGender.Text;
            string Username = txtUsername.Text;
            string Password = txtPassword.Text;

            SqlConnection conn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\dbShopApplication.mdf;Integrated Security=True;Connect Timeout=30;");

            string query = "INSERT INTO tblUsers VALUES('"+Name+"','"+Gender+"','"+Username+"','"+Password+"')";

            try
            {
                conn.Open();
                SqlCommand cmd = new SqlCommand(query, conn);
                cmd.ExecuteNonQuery();
                MessageBox.Show("Signed up Successfully");
                Form1 obj = new Form1();
                obj.ShowDialog();
            }
            catch (SqlException ex)
            {
                MessageBox.Show("Exception:"+ex.Message);
            }
            finally
            {
                conn.Close();
            }
        }

        private void txtPassword_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
