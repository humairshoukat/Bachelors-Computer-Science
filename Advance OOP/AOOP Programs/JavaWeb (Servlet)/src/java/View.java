
import java.io.IOException;
import java.io.PrintWriter;
import java.sql.ResultSet;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet(urlPatterns = {"/View"})
public class View extends HttpServlet {

    protected void service(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            
            HttpSession session = request.getSession();
        
        if(session.getAttribute("username")!=null)
        {
          
            out.println("<!DOCTYPE html>");
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Servlet View</title>");            
            out.println("</head>");
            out.println("<body>");
            
            out.println("<table><tr><th>Id</th><th>Name</th><th>Degree</th><th>CellNumber</th><th>Edit</th><th>Delete</th></tr>");
                
            EmployeeDAO dao = new EmployeeDAO();
            ResultSet rs = dao.SelectAll();
            
            while(rs.next())
            {
            
                out.println("<tr>");
            
                out.println("<td>"+rs.getString(1)+"</td>");
                out.println("<td>"+rs.getString(2)+"</td>");
                out.println("<td>"+rs.getString(3)+"</td>");
                out.println("<td>"+rs.getString(4)+"</td>");
            
                out.println("<td><a href='Edit?id="+rs.getString(1)+"'>Edit</a></td>");
                out.println("<td><a href='Delete?id="+rs.getString(1)+"'>Delete</a></td>");
            
                out.println("</tr>");
            
            }
            
            out.println("</table>");
            
            out.println("To Insert the data <a href='index.html'>Click Here</a><br>");
            out.println("<a href='Logout'>Logout</a>");
            
            out.println("</body>");
            out.println("</html>");
        }
        else   
        { response.sendRedirect("login1.html"); }
        
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
            
    }
}
