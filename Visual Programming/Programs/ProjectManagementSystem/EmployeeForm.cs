using System.Data.SqlClient;
using System.Data;
using System.Xml.Linq;
using static System.Runtime.CompilerServices.RuntimeHelpers;

namespace ProjectManagementSystem
{
    public partial class EmployeeForm : Form
    {
        int Id = 0;
        
        public EmployeeForm()
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

        private void button1_Click(object sender, EventArgs e)
        {
            string Id = txtId.Text;
            string Name = txtName.Text;
            string Cell = txtCell.Text;
            string Address = txtAddress.Text;

            string query = "INSERT INTO tblEmployee VALUES('"+Id+"','"+Name+"','"+Cell+"','"+Address+"')";

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

            string query = "update tblEmployee set empName='"+Name+"' , empCell='"+Cell+"' , empAddress='"+Address+"' where empId='"+Id+"'";

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
            string query = "delete tblEmployee where empId = '"+Id+"'";

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
            String query = "Select * from tblEmployee where empId='"+txtId.Text+"'";
            DbCon obj = new DbCon();
            DataTable dt = obj.Search(query);
            if (dt!=null)
            {
                txtName.Text=dt.Rows[0]["empName"].ToString();
                txtCell.Text=dt.Rows[0]["empCell"].ToString();
                txtAddress.Text=dt.Rows[0]["empAddress"].ToString();
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

        private void btnInsertSP_Click(object sender, EventArgs e)
        {
            SqlConnection conn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\dbOfficeManagementSystem.mdf;Integrated Security=True;Connect Timeout=30");
            conn.Open();
            SqlCommand cmd = new SqlCommand("dbo.empInsert", conn);
            cmd.CommandType = CommandType.StoredProcedure;
            cmd.Parameters.Add(new SqlParameter("@empId", Convert.ToInt32(txtId.Text)));
            cmd.Parameters.Add(new SqlParameter("@empName", txtName.Text));
            cmd.Parameters.Add(new SqlParameter("@empCell", txtCell.Text));
            cmd.Parameters.Add(new SqlParameter("@empAddress", txtAddress.Text));
            cmd.ExecuteNonQuery();
            MessageBox.Show("Inserted");
        }
    }
}