using AppProps;
using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer
{
    public class SupplierDAL
    {
        DbCon obj = new DbCon();
        public bool AddSupplierDAL(Supplier s)
        {
            return obj.UDI("INSERT INTO tblSupplier (supId, supName, supCell, supAddress) VALUES('"+s.Id+"', '"+s.Name+"', '"+s.Cell+"', '"+s.Address+"')");
        }
        public bool UpdateSupplierDAL(Supplier s)
        {
            return obj.UDI("update tblSupplier set supName='"+s.Name+"' , supCell='"+s.Cell+"' , supAddress='"+s.Address+"' where supId='"+s.Id+"'");
        }
        public bool DeleteSupplierDAL(Supplier s)
        {
            return obj.UDI("delete tblSupplier where supId = '"+s.Id+"'");
        }
        public DataTable SearchSupplierDAL(Supplier s)
        {
            return obj.Search("Select * from tblSupplier where supId='"+s.Id+"'");
        }
    }
}
