using AppProps;
using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer
{
    public class ProductDAL
    {
        DbCon obj = new DbCon();
        public bool AddProductDAL(Product p)
        {
            return obj.UDI("INSERT INTO tblProduct (prodId, prodName, prodDescription, prodQuantity) VALUES('"+p.Id+"', '"+p.Name+"', '"+p.Description+"', '"+p.Quantity+"')");
        }
        public bool UpdateProductDAL(Product p)
        {
            return obj.UDI("update tblProduct set prodName='"+p.Name+"' , prodDescription='"+p.Description+"' , prodQuantity='"+p.Quantity+"' where prodId='"+p.Id+"'");
        }
        public bool DeleteProductDAL(Product p)
        {
            return obj.UDI("delete tblProduct where prodId = '"+p.Id+"'");
        }
        public DataTable SearchProductDAL(Product p)
        {
            return obj.Search("Select * from tblProduct where prodId='"+p.Id+"'");
        }
    }
}
