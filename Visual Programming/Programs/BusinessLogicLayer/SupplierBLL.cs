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
    public class SupplierBLL
    {
        SupplierDAL obj = new SupplierDAL();
        public bool AddSupplierBLL(Supplier s)
        {
            return obj.AddSupplierDAL(s);
        }
        public bool UpdateSupplierBLL(Supplier s)
        {
            return obj.UpdateSupplierDAL(s);
        }
        public bool DeleteSupplierBLL(Supplier s)
        {
            return obj.DeleteSupplierDAL(s);
        }
        public DataTable SearchSupplierBLL(Supplier s)
        {
            return obj.SearchSupplierDAL(s);
        }
    }
}
