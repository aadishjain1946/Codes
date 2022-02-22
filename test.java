import java.lang.*;
import java.util.*;
public class test {

	public static int allPossibleSteps(int num)
	{
		if (num == 0)
			return 1;
		else if (num < 0)
			return 0;
		else
			return allPossibleSteps(num - 3) + allPossibleSteps(num - 2)
				+ allPossibleSteps(num - 1);
	}

	public static void main(String argc[])
	{
		int num = 10;
		System.out.println("All Possible Steps: " + allPossibleSteps(num));
	}
}
