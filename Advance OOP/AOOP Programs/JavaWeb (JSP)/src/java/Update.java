
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet(urlPatterns = {"/Update"})
public class Update extends HttpServlet {
    
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            
            Employee e = new Employee();
            EmployeeDAO dao = new EmployeeDAO();
            
            e.id = Integer.parseInt(request.getParameter("id"));
            e.name = request.getParameter("name");
            e.designation = request.getParameter("designation");
            e.salary = request.getParameter("salary");
            e.username = request.getParameter("username");
            e.password = request.getParameter("password");
            
            int a = dao.Update(e);
            
            if(a>0)
            {
                response.sendRedirect("view.jsp");
            }
            
        }
    }

}
