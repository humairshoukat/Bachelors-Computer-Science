<%@page import="java.sql.*" contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>View</title>
    </head>
    <body>
        <table class="table">
            <tr>
                <th>Id</th>
                <th>Name</th>
                <th>Designation</th>
                <th>Salary</th>
                <th>Username</th>
                <th>Password</th>
                <th>Edit</th>
                <th>Delete</th>
            </tr>
            <%
                EmployeeDAO dao = new EmployeeDAO();
                ResultSet rs = dao.SelectAll();

                while (rs.next()) 
                {
            %>
            <tr>
                <td>
                    <%=rs.getString(1)%>
                </td>
                <td>
                    <%=rs.getString(2)%>
                </td>
                <td>
                    <%=rs.getString(3)%>
                </td>
                <td>
                    <%=rs.getString(4)%>
                </td>
                <td>
                    <%=rs.getString(5)%>
                </td>
                <td>
                    <%=rs.getString(6)%>
                </td>
                <td>
                    <a href="edit.jsp?id=<%=rs.getString(1)%>" >Edit</a>
                </td>
                <td>
                    <a href="Delete?id=<%=rs.getString(1)%>" >Delete</a>
                </td>
            </tr>
            <%}%>
                
        </table>
    </body>
</html>
