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
    public class EmployeeBLL
    {
        EmployeeDAL obj = new EmployeeDAL();
        public bool AddEmployeeBLL(Employee e)
        {
            return obj.AddEmployeeDAL(e);
        }
        public bool UpdateEmployeeBLL(Employee e)
        {
            return obj.UpdateEmployeeDAL(e);
        }
        public bool DeleteEmployeeBLL(Employee e)
        {
            return obj.DeleteEmployeeDAL(e);
        }
        public DataTable SearchEmployeeBLL(Employee e)
        {
            return obj.SearchEmployeeDAL(e);
        }
    }
}
