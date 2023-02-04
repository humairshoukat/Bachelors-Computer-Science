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
    public class UserBLL
    {
        UserDAL obj = new UserDAL();
        public bool registerUserBLL(User u)
        {
            return obj.registerUserDAL(u);
        }
        public DataTable LoginUserBLL(User u)
        {
            return obj.LoginUserDAL(u);
        }

    }
}
