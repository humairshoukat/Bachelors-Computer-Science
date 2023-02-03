using System.Data;
using System.Data.SqlClient;

namespace ShopApplication
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Admin\OneDrive\Documents\dbShopApplication.mdf;Integrated Security=True;Connect Timeout=30;");
            SqlCommand cmd = new SqlCommand("select * from tblUsers where username=@username and password=@password", con);
            cmd.Parameters.AddWithValue("@username", txtUser.Text);
            cmd.Parameters.AddWithValue("@password", txtPass.Text);
            SqlDataAdapter adapter = new SqlDataAdapter(cmd);
            DataTable dt = new DataTable();
            adapter.Fill(dt);

            //Connection open here   
            con.Open();
            int i = cmd.ExecuteNonQuery();
            con.Close();
            if (dt.Rows.Count > 0)
            {
                MessageBox.Show("Congratulations! You have successfully logged in", "Done", MessageBoxButtons.OK, MessageBoxIcon.Information);
                if(txtUser.Text == "admin" && txtPass.Text == "123")
                {
                    Form1 x = new Form1();
                    x.Close();
                    Form3 obj = new Form3();                    
                    obj.Show();
                }
                else
                {
                    Form4 obj = new Form4();
                    obj.Show();
                }
            }
            else
            {
                MessageBox.Show("Please enter Correct Username and Password", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        private void txtSign_Click(object sender, EventArgs e)
        {
            Form2 obj = new Form2();
            obj.ShowDialog(); this.Close();
        }
    }
}