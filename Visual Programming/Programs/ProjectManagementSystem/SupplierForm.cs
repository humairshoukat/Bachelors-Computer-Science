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
            SqlDataAdapter adapt = new SqlDataAdapter("select * from tblSupplier", conn);
            adapt.Fill(dt);
            dataGridView1.DataSource = dt;
            conn.Close();
        }

        private void btnInsert_Click(object sender, EventArgs e)
        {
            string Id = txtId.Text;
            string Name = txtName.Text;
            string Cell = txtCell.Text;
            string Address = txtAddress.Text;

            string query = "INSERT INTO tblSupplier VALUES('"+Id+"','"+Name+"','"+Cell+"','"+Address+"')";

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
            string Cell = txtCell.Text;
            string Address = txtAddress.Text;

            string query = "update tblSupplier set supName='"+Name+"' , supCell='"+Cell+"' , supAddress='"+Address+"' where supId='"+Id+"'";

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
            string query = "delete tblSupplier where supId = '"+Id+"'";

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
            String query = "Select * from tblSupplier where supId='"+txtId.Text+"'";
            DbCon obj = new DbCon();
            DataTable dt = obj.Search(query);
            if (dt!=null)
            {
                txtName.Text=dt.Rows[0]["supName"].ToString();
                txtCell.Text=dt.Rows[0]["supCell"].ToString();
                txtAddress.Text=dt.Rows[0]["supAddress"].ToString();
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
            txtCell.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtAddress.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            InitialForm obj = new InitialForm();
            obj.Show();
        }
    }
}
