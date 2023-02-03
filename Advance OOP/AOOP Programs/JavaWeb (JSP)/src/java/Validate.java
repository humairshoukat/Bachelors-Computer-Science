
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet(urlPatterns = {"/Validate"})
public class Validate extends HttpServlet {

    protected void service(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            
            Employee e = new Employee();
            EmployeeDAO dao = new EmployeeDAO();
            
            e.username = request.getParameter("username");
            e.password = request.getParameter("password");
            
            int a = dao.CheckLogin(e);
            out.print(a);
            
            if(a>0)
            {
                HttpSession session= request.getSession();
                session.setAttribute("username",request.getParameter("username"));
                response.sendRedirect("view.jsp");
            }
            else
            {
                response.sendRedirect("login.html");
            }
            
        }
    }

}
