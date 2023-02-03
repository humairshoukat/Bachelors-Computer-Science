import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


@WebServlet(urlPatterns = {"/Page3"})
public class Page3 extends HttpServlet {

    
    @Override
    protected void service(HttpServletRequest request, HttpServletResponse response)
    {        
        try
        {
            response.sendRedirect("Page4");
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }

}
