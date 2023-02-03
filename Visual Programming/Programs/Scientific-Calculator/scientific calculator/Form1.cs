using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace scientific_calculator
{
    public partial class Form1 : Form
    {
        double result;
        double firstdigit;
        String Operator;
        bool isoperator=false;

        public Form1()
        {
            InitializeComponent();
        }

        private void Btn0_Click(object sender, EventArgs e)
        {
            if (txtresult.Text == "0" || isoperator)
                txtresult.Clear();
                isoperator = false;
            {
                Button button = (Button)sender;
                if (button.Text == ".")
                {
                    if (!txtresult.Text.Contains("."))
                    {
                        txtresult.Text += button.Text;
                    }
                }
                else
                {
                    txtresult.Text += button.Text;
                }

            }
        }
        private void Btndel_Click(object sender, EventArgs e)
        {
            int index = txtresult.Text.Length;
            index--;
            txtresult.Text = txtresult.Text.Remove(index);
            if (txtresult.Text == "")
            {
                txtresult.Text = "0";
            }
        }

        private void Btnplus_Click(object sender, EventArgs e)
        {
            firstdigit = double.Parse(txtresult.Text);
            Button opr= (Button)sender;
            Operator = opr.Text;
            isoperator = true;
        }

        private void Button1_Click(object sender, EventArgs e)
        {
            double result = double.Parse(txtresult.Text);
            result = result * (-1);
            txtresult.Text = result.ToString();
            
        }

        private void Btnequal_Click(object sender, EventArgs e)
        {
            switch (Operator)
            {
                case "+":
                    txtresult.Text = (firstdigit + double.Parse(txtresult.Text)).ToString();
                    break;
                case "-":
                    txtresult.Text = (firstdigit - double.Parse(txtresult.Text)).ToString();
                    break;
                case "*":
                    txtresult.Text = (firstdigit * double.Parse(txtresult.Text)).ToString();
                    break;
                case "/":
                    txtresult.Text = (firstdigit / double.Parse(txtresult.Text)).ToString();
                    break;
                case "%":
                    txtresult.Text = (firstdigit % double.Parse(txtresult.Text)).ToString();
                    break;
            }
        }

        private void Btnac_Click(object sender, EventArgs e)
        {
            txtresult.Text = "0";
        }

        private void Btnoff_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Btnlog_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Log(result);
            txtresult.Text = result.ToString();
        }

        private void Btnsqrt_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Sqrt(result);
            txtresult.Text = result.ToString();
        }

        private void Btnsin_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Sin(result);
            txtresult.Text = result.ToString();
        }

        private void Btnsinh_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Sinh(result);
            txtresult.Text = result.ToString();
        }

        private void Btncos_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Cos(result);
            txtresult.Text = result.ToString();
        }

        private void Btncosh_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Cosh(result);
            txtresult.Text = result.ToString();
        }

        private void Btntan_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Tan(result);
            txtresult.Text = result.ToString();
        }

        private void Btntanh_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Tanh(result);
            txtresult.Text = result.ToString();
        }

        private void Btnpi_Click(object sender, EventArgs e)
        {
            result = Math.PI;
            txtresult.Text = result.ToString();
        }

        private void Btnfact_Click(object sender, EventArgs e)
        {
            
        }

        private void Btnfloor_Click(object sender, EventArgs e)
        {
            double a = Convert.ToInt32(txtresult.Text);
            double res = Math.Pow(a, 2);
            txtresult.Text = res.ToString();
        }

        private void Btnexp_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtresult.Text);
            result = Math.Exp(result);
            txtresult.Text = result.ToString();
        }

        private void Nfact_Click(object sender, EventArgs e)
        {
           
                int i;
                double number, fact = 1;
                number = Convert.ToInt32(txtresult.Text);
                for (i = 1; i <= number; i++)
                {
                    fact = fact * i;
                }
                txtresult.Text = fact.ToString();
        }

        private void XPOW3_Click(object sender, EventArgs e)
        {
            double a = Convert.ToInt32(txtresult.Text);
            double res = Math.Pow(a, 3);
            txtresult.Text = res.ToString();
        }

        private void BTNLOG10_Click(object sender, EventArgs e)
        {


            result = double.Parse(txtresult.Text);
            result = Math.Log10(result);
            txtresult.Text = result.ToString();
        }
    }
}