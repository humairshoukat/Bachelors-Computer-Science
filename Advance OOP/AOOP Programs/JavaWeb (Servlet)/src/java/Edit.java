
import java.io.IOException;
import java.io.PrintWriter;
import java.sql.ResultSet;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet(urlPatterns = {"/Edit"})
public class Edit extends HttpServlet {

    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            
            Employee e = new Employee();
            EmployeeDAO dao = new EmployeeDAO();
            e.id = Integer.parseInt(request.getParameter("id"));
            
            ResultSet rs= dao.SelectById(e);
            rs.next();
            {
                out.println("<form action='Update' method='post'>");
                out.println("Id:");
                out.println("<input type='text' value='"+rs.getString(1)+"' name='id'>");
                out.println("<br>");
                out.println("Name:");
                out.println("<input type='text' value='"+rs.getString(2)+"' name='name'>");
                out.println("<br>");
                out.println("Designation:");
                out.println("<input type='text' value='"+rs.getString(3)+"' name='designation'>");
                out.println("<br>");
                out.println("Salary:");
                out.println("<input type='text' value='"+rs.getString(4)+"' name='salary'>");
                out.println("<br>");
                out.println("Username:");
                out.println("<input type='text' value='"+rs.getString(4)+"' name='username'>");
                out.println("<br>");
                out.println("Password:");
                out.println("<input type='text' value='"+rs.getString(4)+"' name='password'>");
                out.println("<br>");
                out.println("<input type='submit' value='Update'>");
                out.println("</form>");
            }
   
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
            
    }
}
