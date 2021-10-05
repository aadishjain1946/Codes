import java.util.*;
public class test {
    public static void main(String[] args)
    {
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = scnObj.nextLine();
        if(str.substring(0,4).equals("Java")){
            System.out.println("Output: True");
        }else{
            System.out.println("Output: False");
        }
    }

}
