using System;
using System.Data;
using System.Data.SqlClient;
using System.Windows.Forms;

namespace WinFormCRUD
{
    public partial class FormEmployee : Form
    {
        string conString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\connect_storeprocedure.mdf;Integrated Security=True;Connect Timeout=30;";
        
        SqlConnection sqlCon;
        SqlCommand sqlCmd;
        string EmployeeId = "";

        public FormEmployee()
        {
            InitializeComponent();
            sqlCon = new SqlConnection(conString);
            sqlCon.Open();
        }

        private void FormEmployee_Load(object sender, EventArgs e)
        {
            dgvEmp.AutoGenerateColumns = false; // dgvEmp is DataGridView name
            dgvEmp.DataSource = FetchEmpDetails();
        }

        private DataTable FetchEmpDetails()
        {
            if (sqlCon.State == ConnectionState.Closed)
            {
                sqlCon.Open();
            }
            DataTable dtData = new DataTable();            
            sqlCmd = new SqlCommand("spEmployee", sqlCon);
            sqlCmd.CommandType = CommandType.StoredProcedure;
            sqlCmd.Parameters.AddWithValue("@ActionType", "FetchData");
            SqlDataAdapter sqlSda = new SqlDataAdapter(sqlCmd);
            sqlSda.Fill(dtData);
            return dtData;
        }

        private DataTable FetchEmpRecords(string empId)
        {
            if (sqlCon.State == ConnectionState.Closed)
            {
                sqlCon.Open();
            }
            DataTable dtData = new DataTable();
            sqlCmd = new SqlCommand("spEmployee", sqlCon);
            sqlCmd.CommandType = CommandType.StoredProcedure;
            sqlCmd.Parameters.AddWithValue("@ActionType", "FetchRecord");
            sqlCmd.Parameters.AddWithValue("@EmployeeId", empId);
            SqlDataAdapter sqlSda = new SqlDataAdapter(sqlCmd);
            sqlSda.Fill(dtData);
            return dtData;
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrWhiteSpace(textBoxEmp.Text))
            {
                MessageBox.Show("Enter Employee Name !!!");
                textBoxEmp.Select();
            }
            else if (string.IsNullOrWhiteSpace(textBoxCity.Text))
            {
                MessageBox.Show("Enter Current City !!!");
                textBoxCity.Select();
            }
            else if (string.IsNullOrWhiteSpace(textBoxDept.Text))
            {
                MessageBox.Show("Enter Department !!!");
                textBoxDept.Select();
            }
            else if (comboBoxGen.SelectedIndex <= -1)
            {
                MessageBox.Show("Select Gender !!!");
                comboBoxGen.Select();
            }
            else
            {
                try
                {                    
                    if (sqlCon.State == ConnectionState.Closed)
                    {
                        sqlCon.Open();
                    }
                    DataTable dtData = new DataTable();
                    sqlCmd = new SqlCommand("spEmployee", sqlCon);
                    sqlCmd.CommandType = CommandType.StoredProcedure;
                    sqlCmd.Parameters.AddWithValue("@ActionType", "SaveData");
                    sqlCmd.Parameters.AddWithValue("@EmployeeId", EmployeeId);
                    sqlCmd.Parameters.AddWithValue("@Name", textBoxEmp.Text);
                    sqlCmd.Parameters.AddWithValue("@City", textBoxCity.Text);
                    sqlCmd.Parameters.AddWithValue("@Department", textBoxDept.Text);
                    sqlCmd.Parameters.AddWithValue("@Gender", comboBoxGen.Text);
                    int numRes = sqlCmd.ExecuteNonQuery();
                    if (numRes > 0)
                    {
                        MessageBox.Show("Record Saved Successfully !!!");
                        ClearAllData();
                    }
                    else
                        MessageBox.Show("Please Try Again !!!");
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Error:- " + ex.Message);
                }
            }
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            ClearAllData();
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(EmployeeId))
            {
                try
                {
                    if (sqlCon.State == ConnectionState.Closed)
                    {
                        sqlCon.Open();
                    }
                    DataTable dtData = new DataTable();
                    sqlCmd = new SqlCommand("spEmployee", sqlCon);
                    sqlCmd.CommandType = CommandType.StoredProcedure;
                    sqlCmd.Parameters.AddWithValue("@ActionType", "DeleteData");               
                    sqlCmd.Parameters.AddWithValue("@EmployeeId", EmployeeId);
                    int numRes = sqlCmd.ExecuteNonQuery();
                    if (numRes > 0)
                    {
                        MessageBox.Show("Record Deleted Successfully !!!");
                        ClearAllData();
                    }
                    else
                    {
                        MessageBox.Show("Please Try Again !!!");
                    }
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Error:- " + ex.Message);
                }
            }
            else
            {
                MessageBox.Show("Please Select A Record !!!");
            }
        }

        private void dgvEmp_CellDoubleClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                btnSave.Text = "Update";
                EmployeeId = dgvEmp.Rows[e.RowIndex].Cells[0].Value.ToString();
                DataTable dtData = FetchEmpRecords(EmployeeId);
                if (dtData.Rows.Count > 0)
                {
                    EmployeeId = dtData.Rows[0][0].ToString();
                    textBoxEmp.Text = dtData.Rows[0][1].ToString();
                    textBoxCity.Text = dtData.Rows[0][2].ToString();
                    textBoxDept.Text = dtData.Rows[0][3].ToString();
                    comboBoxGen.Text = dtData.Rows[0][4].ToString();
                }
                else
                {
                    ClearAllData(); // For clear all control and refresh DataGridView data.
                }
            }
        }

        private void ClearAllData()
        {
            btnSave.Text = "Save";
            textBoxEmp.Text = "";
            textBoxCity.Text = "";
            textBoxDept.Text = "";
            comboBoxGen.SelectedIndex = -1;
            EmployeeId = "";
            dgvEmp.AutoGenerateColumns = false;
            dgvEmp.DataSource = FetchEmpDetails();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBoxEmp_TextChanged(object sender, EventArgs e)
        {

        }

        private void comboBoxGen_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
