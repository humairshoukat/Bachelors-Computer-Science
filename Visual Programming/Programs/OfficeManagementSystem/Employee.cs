using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OfficeManagementSystem
{
    internal class Employee
    {
        int ID;
        String Name;
        String Cell;
        String Address;

        public Employee(int id, string name, string cell, string address)
        {
            ID=id;
            Name=name;
            Cell=cell;
            Address=address;
        }
    }
}
