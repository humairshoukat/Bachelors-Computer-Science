using AppProps;
using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer
{
    public class EmployeeDAL
    {
        DbCon obj = new DbCon();
        public bool AddEmployeeDAL(Employee e)
        {
            return obj.UDI("INSERT INTO tblEmployee (empId, empName, empCell, empAddress) VALUES('"+e.Id+"', '"+e.Name+"', '"+e.Cell+"', '"+e.Address+"')");
        }
        public bool UpdateEmployeeDAL(Employee e)
        {
            return obj.UDI("update tblEmployee set empName='"+e.Name+"' , empCell='"+e.Cell+"' , empAddress='"+e.Address+"' where empId='"+e.Id+"'");
        }
        public bool DeleteEmployeeDAL(Employee e)
        {
            return obj.UDI("delete tblEmployee where empId = '"+e.Id+"'");
        }
        public DataTable SearchEmployeeDAL(Employee e)
        {
            return obj.Search("Select * from tblEmployee where empId='"+e.Id+"'");
        }
    }
}
