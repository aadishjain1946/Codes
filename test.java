import java.lang.*;
import java.util.*;
public class test {
	public static void main(String argc[])
	{
		Scanner scnObj = new Scanner(System.in);
		System.out.print("Choose a number: ");
		int n = scnObj.nextInt();
		for(int i = 1;i<=12;i++){
			System.out.println(n + "X" + i + " = " + (n*i));
		}
	}
}
