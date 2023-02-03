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
using System.Collections;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace ShopApplication
{
    public partial class Form3 : Form
    {
        SqlConnection conn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\dbShopApplication.mdf;Integrated Security=True;Connect Timeout=30;");
        SqlDataAdapter adapt;
        int Id = 0;

        public Form3()
        {
            InitializeComponent();
            DisplayData();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
        }

        //Display Data in datagridview
        private void DisplayData()
        {
            conn.Open();
            DataTable dt = new DataTable();
            adapt = new SqlDataAdapter("select * from tbldata", conn);
            adapt.Fill(dt);
            dataGridView1.DataSource = dt;
            conn.Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string ID = txtId.Text;
            string Brand = txtBrand.Text;
            string Price = txtPrice.Text;
            string Gender = txtGender.Text;

            string query = "INSERT INTO tbldata VALUES('"+ID+"','"+Brand+"','"+Price+"','"+Gender+"')";

            try
            {
                conn.Open();
                SqlCommand cmd = new SqlCommand(query, conn);
                cmd.ExecuteNonQuery();
                MessageBox.Show("Data Inserted Successfully");
                conn.Close();
                DisplayData();
                
            }
            catch (SqlException ex)
            {
                MessageBox.Show("Exception:"+ex.Message);
            }
            finally
            {
                
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string ID = txtId.Text;
            string Brand = txtBrand.Text;
            string Price = txtPrice.Text;
            string Gender = txtGender.Text;

            string query = "update tbldata set  Id = '" + ID + "' , Brand = '" + Brand + "' , Price = '" + Price + "' , Gender = '" + Gender + "'";

            try
            {
                conn.Open();
                SqlCommand cmd = new SqlCommand(query, conn);
                cmd.ExecuteNonQuery();
                MessageBox.Show("Data Updated Successfully");
                conn.Close();
                DisplayData();
            }
            catch (SqlException ex)
            {
                MessageBox.Show("Exception:"+ex.Message);
            }
            finally
            {
                
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string ID = txtId.Text;
            string Brand = txtBrand.Text;
            string Price = txtPrice.Text;
            string Gender = txtGender.Text;

            string query = "delete tbldata where Id= '" + ID + "'";

            try
            {
                conn.Open();
                SqlCommand cmd = new SqlCommand(query, conn);
                cmd.ExecuteNonQuery();
                MessageBox.Show("Data Deleted Successfully");
                conn.Close();
                DisplayData();
            }
            catch (SqlException ex)
            {
                MessageBox.Show("Exception:"+ex.Message);
            }
            finally
            {
                
            }
        }

        private void dataGridView1_RowHeaderMouseClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            Id = Convert.ToInt32(dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString());
            txtId.Text = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            txtBrand.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();
            txtPrice.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtGender.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
