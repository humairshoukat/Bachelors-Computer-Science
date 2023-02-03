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


@WebServlet(urlPatterns = {"/Page1"})
public class Page1 extends HttpServlet {

    
    @Override
    protected void service(HttpServletRequest request, HttpServletResponse response)
    {        
        try
        {
            
            String str1 = request.getParameter("t1");
            String str2 = request.getParameter("t2");
            String str3 = request.getParameter("t3");
            String str4 = request.getParameter("t4");
            
//            HttpSession session = request.getSession();
//            session.setAttribute("t1", str1);
//            session.setAttribute("t2", str2);
//            session.setAttribute("t3", str3);
//            session.setAttribute("t4", str4);

            Cookie cookie1 = new Cookie ("t1", str1);
            Cookie cookie2 = new Cookie ("t2", str2);
            Cookie cookie3 = new Cookie ("t3", str3);
            Cookie cookie4 = new Cookie ("t4", str4);
            response.addCookie(cookie1);
            response.addCookie(cookie2);
            response.addCookie(cookie3);
            response.addCookie(cookie4);
            
            response.sendRedirect("Page2");
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }

}
