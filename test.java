import java.util.*;
public class test {
    static int helper(char inp)
    {
        if(inp == '+' || inp == '-'){
            return 1;
        }else if(inp == '*' || inp == '/'){
            return 2;
        }else if(inp == '^'){
            return 3;
        }else{
            return -1;
        }
    }
    static String infixPostfix(String inp)
    {
        Stack<Character> myStack = new Stack<>();
        String output = new String("");
        for (int i = 0; i<inp.length(); ++i)
        {
            char temp = inp.charAt(i);
            if (Character.isLetterOrDigit(temp)){
                output += temp;
            }
            else if (temp == '('){
                myStack.push(temp);
            }
            else if (temp == ')')
            {
                while (!myStack.isEmpty() && myStack.peek() != '('){
                    output += myStack.pop();
                }
                myStack.pop();
            }
            else
            {
                while (!myStack.isEmpty() && helper(temp) <= helper(myStack.peek())){
                    output += myStack.pop();
                }
                myStack.push(temp);
            }
      
        }
        while (!myStack.isEmpty()){
            if(myStack.peek() == '('){
                return "Invalid";
            }
            output += myStack.pop();
         }
        return output;
    }
    public static void main(String[] args)
    {
        System.out.println("a*b/(c-d) infix to postfix: " + infixPostfix("a*b/(c-d)"));
        System.out.println("\n(a-b*c)/(d*e*f+g) infix to postfix: " + infixPostfix("(a-b*c)/(d*e*f+g)"));
        System.out.println("\na/b*(c+(d-e)) infix to postfix: " + infixPostfix("a/b*(c+(d-e))"));
        System.out.println("\n(a^b*c-d)^e+f^g^h infix to postfix: " + infixPostfix("(a^b*c-d)^e+f^g^h"));
    }

}
