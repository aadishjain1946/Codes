import java.util.*;
public class test {
	public static void main(String argc[])
	{
		try{
			Scanner scnObj = new Scanner(System.in);
			System.out.print("Enter two integers: ");
			int n1 = scnObj.nextInt();
			int n2 = scnObj.nextInt();
			System.out.println("Sum of two integers: " + (n1+n2));
		}catch(InputMismatchException e){
			System.out.println("Input Mismatch!");
		}
	}
}
