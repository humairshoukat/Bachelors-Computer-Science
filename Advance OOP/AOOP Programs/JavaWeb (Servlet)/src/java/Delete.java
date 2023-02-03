
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet(urlPatterns = {"/Delete"})
public class Delete extends HttpServlet {

    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            
            Employee e = new Employee();
            EmployeeDAO dao = new EmployeeDAO();
            e.id = Integer.parseInt(request.getParameter("id"));
            
            int a = dao.Delete(e);
            
            if(a>0)
            {
                response.sendRedirect("View");
            }
            
        }
    }

}
