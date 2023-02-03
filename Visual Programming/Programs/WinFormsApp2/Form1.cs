using System.Configuration;

namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show(ConfigurationManager.AppSettings["k1"]+ConfigurationManager.AppSettings["k2"]);
            MessageBox.Show(ConfigurationManager.AppSettings["k2"]);
            MessageBox.Show(ConfigurationManager.AppSettings["k3"]);
 
        }
    }
}