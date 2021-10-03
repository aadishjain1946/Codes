import java.util.*;
public class test {
    public static void main(String[] args)
    {
        Scanner scnObj = new Scanner(System.in);
        String strInp = scnObj.nextLine();
        System.out.println("Input: " + strInp);
        String output = "#" + strInp.substring(1);
        System.out.println("Output: " + output);
    }

}
