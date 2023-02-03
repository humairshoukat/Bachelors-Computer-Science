import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet(urlPatterns = {"/Page4"})
public class Page4 extends HttpServlet {

    @Override
    protected void service(HttpServletRequest request, HttpServletResponse response){
        
        try
        {
            
            String str1 = null;
            String str2 = null;
            String str3 = null;
            String str4 = null;
            
            Cookie cookies[] = request.getCookies();
            for(Cookie c:cookies)
            {
                if(c.getName().equals("t1"))
                {
                    str1 = c.getValue();
                }
                if(c.getName().equals("t2"))
                {
                    str2 = c.getValue();
                }
                if(c.getName().equals("t3"))
                {
                    str3 = c.getValue();
                }
                if(c.getName().equals("t4"))
                {
                    str4 = c.getValue();
                }
            }
            
//            HttpSession session = request.getSession();
//            String str1 = session.getAttribute("t1").toString();
//            String str2 = session.getAttribute("t2").toString();
//            String str3 = session.getAttribute("t3").toString();
//            String str4 = session.getAttribute("t4").toString();

            PrintWriter out = response.getWriter();
            out.println("<h2>Welcome to the 4th Page</h2><br>");
            out.println("<h4>Your details are as follow:</h4><br>");
            out.println("<b>Name: <b>"+str1+"<br>");
            out.println("<b>Contact No: <b>"+str2+"<br>");
            out.println("<b>Email Address: <b>"+str3+"<br>");
            out.println("<b>Address: <b>"+str4+"<br>");
            
        }
        catch(Exception ex)
        {
            System.out.println(ex.toString());
        }
    }

}
