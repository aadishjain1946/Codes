import java.lang.*;
import java.util.*;
public class test {
	public static void main(String argc[])
	{
		int arr[] = {1,2,9,9,9,6,7,9,9,4,5,9,9};
		int countNine = 0;
		for(int i = 0;i<arr.length;i++){
			if(arr[i] == 9){
				countNine++;
			}
		}
		System.out.println("Number of Nines: " + countNine);
	}
}
