using AppProps;
using DataAccessLayer;
using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BusinessLogicLayer
{
    public class CustomerBLL
    {
        CustomerDAL obj = new CustomerDAL();
        public bool AddCustomerBLL(Customer c)
        {
            return obj.AddCustomerDAL(c);
        }
        public bool UpdateCustomerBLL(Customer c)
        {
            return obj.UpdateCustomerDAL(c);
        }
        public bool DeleteCustomerBLL(Customer c)
        {
            return obj.DeleteCustomerDAL(c);
        }
        public DataTable SearchCustomerBLL(Customer c)
        {
            return obj.SearchCustomerDAL(c);
        }
    }
}
