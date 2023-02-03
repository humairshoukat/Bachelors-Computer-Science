using AppProps;
using BusinessLogicLayer;
using System.Data;

namespace Project3TierArchitecture
{
    public partial class EmployeeForm : Form
    {
        public EmployeeForm()
        {
            InitializeComponent();
        }

        private void btnInsert_Click(object sender, EventArgs e)
        {
            Employee emp = new Employee();
            emp.Id=int.Parse(txtId.Text);
            emp.Name=txtName.Text;
            emp.Cell=txtCell.Text;
            emp.Address=txtAddress.Text;
            EmployeeBLL obj = new EmployeeBLL();
            if (obj.AddEmployeeBLL(emp))
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
            Employee emp = new Employee();
            emp.Id=int.Parse(txtId.Text);
            emp.Name=txtName.Text;
            emp.Cell=txtCell.Text;
            emp.Address=txtAddress.Text;
            EmployeeBLL obj = new EmployeeBLL();
            if (obj.UpdateEmployeeBLL(emp))
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
            Employee emp = new Employee();
            emp.Id=int.Parse(txtId.Text);
            EmployeeBLL obj = new EmployeeBLL();
            if (obj.DeleteEmployeeBLL(emp))
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
            Employee emp = new Employee();
            emp.Id=int.Parse(txtId.Text);
            EmployeeBLL obj = new EmployeeBLL();
            DataTable dt = new DataTable();
            dt = obj.SearchEmployeeBLL(emp);
            if (dt.Rows.Count > 1)
            {
                dataGridView1.DataSource = dt;
            }
            else
            {
                txtId.Text = dt.Rows[0]["empId"].ToString();
                txtName.Text = dt.Rows[0]["empName"].ToString();
                txtCell.Text = dt.Rows[0]["empCell"].ToString();
                txtAddress.Text = dt.Rows[0]["empAddress"].ToString();
            }
        }
    }
}