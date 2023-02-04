using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AppProps
{
    public class Supplier
    {
        private int id;
        private string name;
        private string cell;
        private string address;

        public int Id { get => id; set => id = value; }
        public string Name { get => name; set => name = value; }
        public string Cell { get => cell; set => cell = value; }
        public string Address { get => address; set => address=value; }
    }
}
