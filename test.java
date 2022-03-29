import java.util.*;
public class test {
	public static void main(String argc[])
	{
		Scanner scnObj = new Scanner(System.in);
		System.out.print("Input: ");
		String strInp = scnObj.nextLine();
		String[] strList = strInp.split(" ");
		System.out.println("Output: ");
		for(int i = 0;i<strList.length;i++){
			strList[i] = "hi " + strList[i] + " hi";
			System.out.println(strList[i]);
		}
	}
}
