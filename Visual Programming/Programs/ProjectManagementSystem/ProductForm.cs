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

namespace ProjectManagementSystem
{
    public partial class ProductForm : Form
    {
        int Id = 0;
        public ProductForm()
        {
            InitializeComponent();
            DisplayData();
        }

        private void DisplayData()
        {
            SqlConnection conn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\dbOfficeManagementSystem.mdf;Integrated Security=True;Connect Timeout=30");
            DataTable dt = new DataTable();
            SqlDataAdapter adapt = new SqlDataAdapter("select * from tblProduct", conn);
            adapt.Fill(dt);
            dataGridView1.DataSource = dt;
            conn.Close();
        }

        private void btnInsert_Click(object sender, EventArgs e)
        {
            string Id = txtId.Text;
            string Name = txtName.Text;
            string Description = txtDesc.Text;
            string Quantity = txtQuan.Text;

            string query = "INSERT INTO tblProduct VALUES('"+Id+"','"+Name+"','"+Description+"','"+Quantity+"')";

            DbCon obj = new DbCon();
            if (obj.UDI(query))
            {
                MessageBox.Show("Record Inserted Successfully");
                DisplayData();
            }
            else
            {
                MessageBox.Show("Invalid. Try Again");
            }
        }

        private void btnUpdate_Click(object sender, EventArgs e)
        {
            string Id = txtId.Text;
            string Name = txtName.Text;
            string Description = txtDesc.Text;
            string Quantity = txtQuan.Text;

            string query = "update tblProduct set prodName='"+Name+"' , prodDescription='"+Description+"' , prodQuantity='"+Quantity+"' where prodId='"+Id+"'";

            DbCon obj = new DbCon();
            if (obj.UDI(query))
            {
                MessageBox.Show("Record Updated Successfully");
                DisplayData();
            }
            else
            {
                MessageBox.Show("Invalid. Try Again");
            }
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            string Id = txtId.Text;
            string query = "delete tblProduct where prodId = '"+Id+"'";

            DbCon obj = new DbCon();
            if (obj.UDI(query))
            {
                MessageBox.Show("Record Deleted Successfully");
                DisplayData();
            }
            else
            {
                MessageBox.Show("Invalid. Try Again");
            }
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            String query = "Select * from tblProduct where prodId='"+txtId.Text+"'";
            DbCon obj = new DbCon();
            DataTable dt = obj.Search(query);
            if (dt!=null)
            {
                txtName.Text=dt.Rows[0]["prodName"].ToString();
                txtDesc.Text=dt.Rows[0]["prodDescription"].ToString();
                txtQuan.Text=dt.Rows[0]["prodQuantity"].ToString();
            }
            else
            {
                MessageBox.Show("Data not found!");
            }
        }

        private void dataGridView1_RowHeaderMouseClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            Id = Convert.ToInt32(dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString());
            txtId.Text = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            txtName.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();
            txtDesc.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtQuan.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            InitialForm obj = new InitialForm();
            obj.Show();
        }
    }
}
