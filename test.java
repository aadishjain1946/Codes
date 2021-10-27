import java.util.*;
public class test
{
	public static void main(String[] args)
	{
		Scanner scnObj = new Scanner(System.in);
		System.out.print("Enter you answer for number 10: ");
		char answer = scnObj.next().charAt(0);
		if(answer == 'A'){
			System.out.println("Oh, my answer is A as well");
		}else{
			System.out.println("Sorry, my answer is A");
		}
	}
}
