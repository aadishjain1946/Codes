// import java.util.*;

// public class test {

//   public static void main(String[] args) {
//     //initializing sum to 0
//     int sum = 0;
//     //loop from integers 10 to 100
//     for (int i = 10; i <= 100; i++) {
//       //checking if number is divisible by 3 or 5
//       if (i % 3 == 0 || i % 5 == 0) {
//         sum += i;
//       }
//     }
//     //printing output
//     System.out.println(
//       "Sum of numbers divisible by 3 or 5 between 10 to 100 is " + sum
//     );
//   }
// }

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class httpServletClass extends HttpServlet {

  private String data;

  public void init() throws ServletException {
    data = "This is a test program.";
  }

  public void doGet(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, IOException {
    response.setContentType("text/html");
    PrintWriter outputObj = response.getWriter();
    outputObj.println("<h1>" + data + "</h1>");
  }

  public void destroy() {}
}
