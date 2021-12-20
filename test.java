import java.util.*;
public class test
{
	public static void main(String[] args) {
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter mass of a cylinder: ");
        int mass = scnObj.nextInt();
        System.out.print("Enter radius of a cylinder: ");
        int radius = scnObj.nextInt();
        int centerOfIntertia = mass * radius * radius;
        System.out.println("The Center of Intertia is " + centerOfIntertia);
    }
}
