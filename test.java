import java.util.*;
import java.lang.Math;
public class test  
{  
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter p: ");
        double p = scnObj.nextDouble();
        double output = p*(Math.sin(p)) + p*(Math.cos(p));
        System.out.println("Output: " + output);
    }  
}  
