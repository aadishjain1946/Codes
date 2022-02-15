import java.util.*;
import java.time.LocalTime;
public class test  
{ 
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        String input = scnObj.nextLine();
        String cur1 = input.split(";")[0];
        String cur2 = input.split(";")[1].split("\\|")[0];
        String rcur1 = input.split(";")[1].split("\\|")[1].substring(0,3);
        String rcur2 = input.split(";")[1].split("\\|")[1].substring(3,6);
        if(cur1.contains(rcur1)){
            if(cur2.contains(rcur2)){
                double ans = Double.parseDouble(cur1.split(":")[1]) * Double.parseDouble(cur2.split(":")[1]);
                System.out.println((input.split(";")[1].split("\\|")[1]) + ": " + ans);
            }else{
                System.out.println("Unable to determine rate for " + (input.split(";")[1].split("\\|")[1]));
            }
        }else if(cur1.contains(rcur2)){
            if(cur2.contains(rcur1)){
                double ans = Double.parseDouble(cur1.split(":")[1]) * Double.parseDouble(cur2.split(":")[1]);
                System.out.println((input.split(";")[1].split("\\|")[1]) + ": " + ans);
            }else{
                System.out.println("Unable to determine rate for " + (input.split(";")[1].split("\\|")[1]));
            }
        }else{
            System.out.println("Unable to determine rate for " + (input.split(";")[1].split("\\|")[1]));
        }
    }  
    
}  
