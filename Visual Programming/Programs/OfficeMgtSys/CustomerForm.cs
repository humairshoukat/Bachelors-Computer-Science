using AppProps;
using BusinessLogicLayer;
using DataAccessLayer;
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
    public partial class CustomerForm : Form
    {
        int Id = 0;
        public CustomerForm()
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
            Customer cust = new Customer();
            cust.Id=int.Parse(txtId.Text);
            cust.Name=txtName.Text;
            cust.Cell=txtCell.Text;
            cust.Address=txtAddress.Text;
            CustomerBLL obj = new CustomerBLL();
            if (obj.AddCustomerBLL(cust))
            {
                MessageBox.Show("Added Successfully.");
                DisplayData();
            }
            else
            {
                MessageBox.Show("Data not added.");
            }
        }

        private void btnUpdate_Click(object sender, EventArgs e)
        {
            Customer cust = new Customer();
            cust.Id=int.Parse(txtId.Text);
            cust.Name=txtName.Text;
            cust.Cell=txtCell.Text;
            cust.Address=txtAddress.Text;
            CustomerBLL obj = new CustomerBLL();
            if (obj.UpdateCustomerBLL(cust))
            {
                MessageBox.Show("Updated Successfully.");
                DisplayData();
            }
            else
            {
                MessageBox.Show("Data not Updated.");
            }
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            Customer cust = new Customer();
            cust.Id=int.Parse(txtId.Text);
            CustomerBLL obj = new CustomerBLL();
            if (obj.DeleteCustomerBLL(cust))
            {
                MessageBox.Show("Deleted Successfully.");
                DisplayData();
            }
            else
            {
                MessageBox.Show("Data not Deleted.");
            }
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            Customer cust = new Customer();
            cust.Id=int.Parse(txtId.Text);
            CustomerBLL obj = new CustomerBLL();
            DataTable dt = new DataTable();
            dt = obj.SearchCustomerBLL(cust);
            if (dt.Rows.Count > 1)
            {
                dataGridView1.DataSource = dt;
            }
            else
            {
                txtId.Text = dt.Rows[0]["custId"].ToString();
                txtName.Text = dt.Rows[0]["custName"].ToString();
                txtCell.Text = dt.Rows[0]["custCell"].ToString();
                txtAddress.Text = dt.Rows[0]["custAddress"].ToString();
            }
        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            InitialForm frm = new InitialForm();
            frm.Show();
        }

        private void dataGridView1_RowHeaderMouseClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            Id = Convert.ToInt32(dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString());
            txtId.Text = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            txtName.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();
            txtCell.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtAddress.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
        }
    }
}
