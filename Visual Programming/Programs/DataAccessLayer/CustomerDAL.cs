using AppProps;
using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer
{
    public class CustomerDAL
    {
        DbCon obj = new DbCon();
        public bool AddCustomerDAL(Customer c)
        {
            return obj.UDI("INSERT INTO tblCustomer (custId, custName, custCell, custAddress) VALUES('"+c.Id+"', '"+c.Name+"', '"+c.Cell+"', '"+c.Address+"')");
        }
        public bool UpdateCustomerDAL(Customer c)
        {
            return obj.UDI("update tblCustomer set custName='"+c.Name+"' , custCell='"+c.Cell+"' , custAddress='"+c.Address+"' where custId='"+c.Id+"'");
        }
        public bool DeleteCustomerDAL(Customer c)
        {
            return obj.UDI("delete tblCustomer where custId = '"+c.Id+"'");
        }
        public DataTable SearchCustomerDAL(Customer c)
        {
            return obj.Search("Select * from tblCustomer where custId='"+c.Id+"'");
        }
    }
}
