import java.util.*;
public class test  
{  
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter day: ");
        String day = scnObj.nextLine();
        switch(day.toLowerCase()){
            case "monday":
                System.out.println("Not Weekend day.");
                break;
            case "tuesday":
                System.out.println("Not Weekend day.");
                break;
            case "wednesday":
                System.out.println("Not Weekend day.");
                break;
            case "thrusday":
                System.out.println("Not Weekend day.");
                break;
            case "friday":
                System.out.println("Not Weekend day.");
                break;
            case "saturday":
                System.out.println("Weekend day.");
                break;
            case "sunday":
                System.out.println("Weekend day.");
                break;
            default:
                System.out.println("Wrong Input.");
                break;
        }
    }  
}  
