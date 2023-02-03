using AppProps;
using BusinessLogicLayer;
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

namespace OfficeMgtSys
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
            SqlDataAdapter adapt = new SqlDataAdapter("select * from tblEmployee", conn);
            adapt.Fill(dt);
            dataGridView1.DataSource = dt;
            conn.Close();
        }

        private void btnInsert_Click(object sender, EventArgs e)
        {
            Product prod = new Product();
            prod.Id=int.Parse(txtId.Text);
            prod.Name=txtName.Text;
            prod.Description=txtDesc.Text;
            prod.Quantity=txtQuan.Text;
            ProductBLL obj = new ProductBLL();
            if (obj.AddProductBLL(prod))
            {
                MessageBox.Show("Added Successfully.");
            }
            else
            {
                MessageBox.Show("Data not added.");
            }
        }

        private void btnUpdate_Click(object sender, EventArgs e)
        {
            Product prod = new Product();
            prod.Id=int.Parse(txtId.Text);
            prod.Name=txtName.Text;
            prod.Description=txtDesc.Text;
            prod.Quantity=txtQuan.Text;
            ProductBLL obj = new ProductBLL();
            if (obj.UpdateProductBLL(prod))
            {
                MessageBox.Show("Updated Successfully.");
            }
            else
            {
                MessageBox.Show("Data not Updated.");
            }
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            Product prod = new Product();
            prod.Id=int.Parse(txtId.Text);
            ProductBLL obj = new ProductBLL();
            if (obj.DeleteProductBLL(prod))
            {
                MessageBox.Show("Deleted Successfully.");
            }
            else
            {
                MessageBox.Show("Data not Deleted.");
            }
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            Product prod = new Product();
            prod.Id=int.Parse(txtId.Text);
            ProductBLL obj = new ProductBLL();
            DataTable dt = new DataTable();
            dt = obj.SearchProductBLL(prod);
            if (dt.Rows.Count > 1)
            {
                dataGridView1.DataSource = dt;
            }
            else
            {
                txtId.Text = dt.Rows[0]["prodId"].ToString();
                txtName.Text = dt.Rows[0]["prodName"].ToString();
                txtDesc.Text = dt.Rows[0]["prodDescription"].ToString();
                txtQuan.Text = dt.Rows[0]["prodQuantity"].ToString();
            }
        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            InitialForm obj = new InitialForm();
            obj.Show();
        }

        private void dataGridView1_RowHeaderMouseClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            Id = Convert.ToInt32(dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString());
            txtId.Text = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            txtName.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();
            txtDesc.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtQuan.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
        }
    }
}
