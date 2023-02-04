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
    public class UserDAL
    {
        DbCon obj = new DbCon();
        public bool registerUserDAL(User u)
        {
            return obj.UDI("INSERT INTO tblUser VALUES('"+u.Id+"', '"+u.Name+"', '"+u.Pass+"', '"+u.AccessLevel+"', '"+u.ActiveStatus+"')");
        }

        public DataTable LoginUserDAL(User u)
        {
            return obj.Search(" SELECT userAccessLevel FROM tblUser where userName = '"+u.Name+"' AND userPassword = '"+u.Pass+"' ");

        }
}
