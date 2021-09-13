import java.util.*;

public class test {
    public static void main(String[] args)
    {
       Scanner ScnObj = new Scanner(System.in);
       System.out.println("Enter first number:");
       double num1 = ScnObj.nextDouble();
       System.out.println("Enter second number:");
       double num2 = ScnObj.nextDouble();
       System.out.println("Enter a menu option");
       System.out.println("[1] Add");
       System.out.println("[2] Subtract");
       System.out.println("[3] Multiply");
       System.out.println("[4] Divide");
       int oper = ScnObj.nextInt();
       if(oper == 1){
           double output = num1 + num2;
           System.out.println(num1 + " + " + num2 + " = " + output);
       }else if(oper == 2){
           double output = num1 - num2;
           System.out.println(num1 + " - " + num2 + " = " + output);
       }else if(oper == 3){
           double output = num1 * num2;
           System.out.println(num1 + " * " + num2 + " = " + output);
       }else if(oper == 4){
           if(num2 == 0){
               System.out.println("If Division is selected the second number cannot be zero.");
               return;
           }
           double output = num1 / num2;
           System.out.println(num1 + " / " + num2 + " = " + output);
       }else{
           System.out.println("Invalid menu option.");
       }
    }

}
