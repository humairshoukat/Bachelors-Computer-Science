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
    public class ProductBLL
    {
        ProductDAL obj = new ProductDAL();
        public bool AddProductBLL(Product p)
        {
            return obj.AddProductDAL(p);
        }
        public bool UpdateProductBLL(Product p)
        {
            return obj.UpdateProductDAL(p);
        }
        public bool DeleteProductBLL(Product p)
        {
            return obj.DeleteProductDAL(p);
        }
        public DataTable SearchProductBLL(Product p)
        {
            return obj.SearchProductDAL(p);
        }
    }
}
