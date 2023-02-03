using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OfficeMgtSys
{
    public partial class InitialForm : Form
    {
        public InitialForm()
        {
            InitializeComponent();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            ProductForm obj = new ProductForm();
            obj.Show();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            EmployeeForm obj = new EmployeeForm();
            obj.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            CustomerForm obj = new CustomerForm();
            obj.Show();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            SupplierForm obj = new SupplierForm();
            obj.Show();
        }
    }
}
