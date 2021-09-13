import java.util.*;

public class StackTest {
    public static void main(String[] args)
    {
       Stack<Integer> stack = new Stack<Integer>(); //custom stack implementation can contain some error, hence using inbuild stack
       System.out.print("ENTER AN INTEGER VALUE(n): ");
       int dec = new java.util.Scanner(System.in).nextInt();
       int rem = dec%2;
       stack.push(rem);
       dec/=2;
       while(dec!=0)
       {
           int temp = dec%2; //rem was already declared
           stack.push(temp);
           dec/=2;
        }
        System.out.print("Decimal to Binary  :");
        while(!(stack.isEmpty())){
            System.out.print(stack.pop());
        }
    }

}
