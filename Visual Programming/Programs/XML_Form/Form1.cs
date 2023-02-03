using System.Xml.Linq;

namespace XML_Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            XDocument xmlDocument = new XDocument(
            new XDeclaration("1.0", "utf-8", "yes"),
                new XComment("Creating an XML Tree using LINQ to XML"),
                new XElement("Students",
                    new XElement("Student", new XAttribute("Id", 101),
                    new XElement("Name", "Mark"),
                    new XElement("Gender", "Male"),
                    new XElement("TotalMarks", 800)),

                    new XElement("Student", new XAttribute("Id", 102),
                    new XElement("Name", "Rosy"),
                    new XElement("Gender", "Female"),
                    new XElement("TotalMarks", 900)),

                    new XElement("Student", new XAttribute("Id", 104),
                    new XElement("Name", "John"),
                    new XElement("Gender", "Male"),
                    new XElement("TotalMarks", 950))));

            xmlDocument.Save(@"C:\Users\Admin\source\repos\Data.xml");
        }
    }
}