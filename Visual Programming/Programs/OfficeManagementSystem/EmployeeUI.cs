using System.Data;
using System.Data.SqlClient;
using static System.Runtime.CompilerServices.RuntimeHelpers;

namespace OfficeManagementSystem
{
    public partial class Employee : Form
    {
        int Id = 0;
        public Employee()
        {
            InitializeComponent();
            DisplayData();
        }

        //Display Data in datagridview
        private void DisplayData()
        {
            SqlConnection conn = DbCon.Connection();
            DataTable dt = new DataTable();
            SqlDataAdapter adapt = new SqlDataAdapter("select * from tbldata", conn);
            adapt.Fill(dt);
            dataGridView1.DataSource = dt;
            conn.Close();
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            /* Button Code if you are using Functions
            int id = int.Parse(txtId.Text);
            Employee emp = new Employee(id, txtName.Text, txtCell.Text, txtAddress.Text);
            DbCon obj = new DbCon();
            obj.AddEmployee(emp);*/


            string ID = txtId.Text;
            string Name = txtName.Text;
            string Cell = txtCell.Text;
            string Address = txtAddress.Text;

            string query = "INSERT INTO tblData VALUES('"+ID+"','"+Name+"','"+Cell+"','"+Address+"')";

            //Buuton Code for DbCon
            DbCon obj = new DbCon();
            if(obj.UDI(query))
            {
                MessageBox.Show("Record Inserted Successfully");
                DisplayData();
            }
            else
            {
                MessageBox.Show("Invalid. Try Again");
            }


            //Simple Code

            /*SqlConnection conn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\dbOfficeManagementSystem.mdf;Integrated Security=True;Connect Timeout=30");

            try
            {
                conn.Open();
                SqlCommand cmd = new SqlCommand(query, conn);
                cmd.ExecuteNonQuery();
                MessageBox.Show("Record Inserted Successfully");
            }
            catch (SqlException ex)
            {
                MessageBox.Show("Exception:"+ex.Message);
            }
            finally
            {
                conn.Close();
            }*/
        }

        private void button3_Click(object sender, EventArgs e)
        {
            /*Button Code if you are using Functions
            int id = int.Parse(txtId.Text);
            Employee emp = new Employee(id, txtName.Text, txtCell.Text, txtAddress.Text);
            DbCon obj = new DbCon();
            obj.UpdateEmployee(emp);*/

            string ID = txtId.Text;
            string Name = txtName.Text;
            string Cell = txtCell.Text;
            string Address = txtAddress.Text;

            string query = "update tblData set empName='"+Name+"' , empCell='"+Cell+"' , empAddress='"+Address+"' where empId='"+ID+"'";

            //Buuton Code for DbCon
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

        private void button2_Click(object sender, EventArgs e)
        {
            /*Button Code if you are using Functions
            int id = int.Parse(txtId.Text);
            Employee emp = new Employee(id, txtName.Text, txtCell.Text, txtAddress.Text);
            DbCon obj = new DbCon();
            obj.DeleteEmployee(emp);*/

            string ID = txtId.Text;
            string query = "delete tblData where empId = '"+ID+"'";

            //Buuton Code for DbCon
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


            //Simple Code
            /*SqlConnection conn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\dbOfficeManagementSystem.mdf;Integrated Security=True;Connect Timeout=30");

             try
             {
                 conn.Open();
                 SqlCommand cmd = new SqlCommand(query, conn);
                 cmd.ExecuteNonQuery();
                 MessageBox.Show("Record Deleted Successfully");
             }
             catch (SqlException ex)
             {
                 MessageBox.Show("Exception:"+ex.Message);
             }
             finally
             {
                 conn.Close();
             }*/
        }


        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void dataGridView1_RowHeaderMouseDoubleClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            
        }

        private void dataGridView1_RowHeaderMouseClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            Id = Convert.ToInt32(dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString());
            txtId.Text = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            txtName.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();
            txtCell.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtAddress.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            String query = "Select * from tblData where empId='"+txtId.Text+"'";
            DbCon obj = new DbCon();
            DataTable dt = obj.Search(query);
            if(dt!=null)
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
    }
}