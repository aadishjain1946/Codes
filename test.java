import java.util.*;
public class test
{
	public static void main(String[] args) {
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter Input: ");
        String firstName = scnObj.next();
        String lastName = scnObj.next();
        int year = scnObj.nextInt();
        String Id = Character.toLowerCase(firstName.charAt(0)) + lastName.substring(0,3).toLowerCase() + Integer.toString(year%100);
        System.out.println("ID: " + Id);
    }
}
