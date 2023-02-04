using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AppProps
{
    public class Product
    {
        private int id;
        private string name;
        private string description;
        private string quantity;

        public int Id { get => id; set => id = value; }
        public string Name { get => name; set => name = value; }
        public string Description { get => description; set => description = value; }
        public string Quantity { get => quantity; set => quantity=value; }
    }
}
