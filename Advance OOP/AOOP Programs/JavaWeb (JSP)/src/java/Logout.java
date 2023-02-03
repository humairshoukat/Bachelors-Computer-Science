
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet(urlPatterns = {"/Logout"})
public class Logout extends HttpServlet {
    
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            
            HttpSession session = request.getSession();
            
            if(session.getAttribute("username")!=null)
            {
                session.invalidate();
                out.println("You have successfully logged out, want to login again? <a href='login.html'>Click Here</a><br>");
            }
            
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }


}
