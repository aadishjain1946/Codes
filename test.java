import java.util.*;
public class test
{
	public static void main(String[] args) {
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Please enter a ten-digit phone number: ");
        String number = scnObj.nextLine();
        System.out.println("(" + number.substring(0,3) + ") " + number.substring(3,6) + "-" + number.substring(6,10));
    }
}
