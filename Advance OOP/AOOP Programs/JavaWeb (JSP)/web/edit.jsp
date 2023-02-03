<%@page import="java.sql.*" contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Edit</title>
    </head>
    <body>
        <%!
            String id;
            String name;
            String designation;
            String salary;
            String username;
            String password;
        %>
        
        <%
            Employee s= new Employee();
            EmployeeDAO dao = new EmployeeDAO();
            s.id = Integer.parseInt(request.getParameter("id"));
            ResultSet rs = dao.SelectById(s);
            rs.next();
            id = rs.getString(1);
            name = rs.getString(2);
            designation = rs.getString(3);
            salary = rs.getString(4);
            username = rs.getString(5);
            password = rs.getString(6);
        %>

        <form action="Insert" method="post">
            
            <label>ID: </label>
            <input type="text" value="<%=id%>"  name="t1">
            
            <label>Name: </label>
            <input type="text" value="<%=name%>"  name="t2">
            
            <label>Designation: </label>
            <input type="text" value="<%=designation%>"  name="t3">
            
            <label>Salary: </label>
            <input type="text" value="<%=salary%>"  name="t4">
            
            <label>Username: </label>
            <input type="text" value="<%=username%>"  name="t5">
            
            <label>Password: </label>
            <input type="text" value="<%=password%>"  name="t6">
            
            <input type="submit" value="Update">
           
        </form>
        </div>
    </body>
</html>
