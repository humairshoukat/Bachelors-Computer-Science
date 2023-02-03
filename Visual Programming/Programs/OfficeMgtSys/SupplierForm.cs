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
    public partial class SupplierForm : Form
    {
        int Id = 0;
        public SupplierForm()
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
            Supplier sup = new Supplier();
            sup.Id=int.Parse(txtId.Text);
            sup.Name=txtName.Text;
            sup.Cell=txtCell.Text;
            sup.Address=txtAddress.Text;
            SupplierBLL obj = new SupplierBLL();
            if (obj.AddSupplierBLL(sup))
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
            Supplier sup = new Supplier();
            sup.Id=int.Parse(txtId.Text);
            sup.Name=txtName.Text;
            sup.Cell=txtCell.Text;
            sup.Address=txtAddress.Text;
            SupplierBLL obj = new SupplierBLL();
            if (obj.UpdateSupplierBLL(sup))
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
            Supplier sup = new Supplier();
            sup.Id=int.Parse(txtId.Text);
            SupplierBLL obj = new SupplierBLL();
            if (obj.DeleteSupplierBLL(sup))
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
            Supplier sup = new Supplier();
            sup.Id=int.Parse(txtId.Text);
            SupplierBLL obj = new SupplierBLL();
            DataTable dt = new DataTable();
            dt = obj.SearchSupplierBLL(sup);
            if (dt.Rows.Count > 1)
            {
                dataGridView1.DataSource = dt;
            }
            else
            {
                txtId.Text = dt.Rows[0]["supId"].ToString();
                txtName.Text = dt.Rows[0]["supName"].ToString();
                txtCell.Text = dt.Rows[0]["supCell"].ToString();
                txtAddress.Text = dt.Rows[0]["supAddress"].ToString();
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
            txtCell.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtAddress.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
        }
    }
}
