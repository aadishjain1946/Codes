import java.util.*;
public class test {
	public static int binary_Search_algo(int numArr[], int left, int right, int element)
    {
        if (right >= left) {
            int mid = left + (right - left) / 2;
            if (numArr[mid] == element){
				return mid;
			}
            if (numArr[mid] > element){
				return binary_Search_algo(numArr, left, mid - 1, element);
			}
            return binary_Search_algo(numArr, mid + 1, right, element);
        }
        return -1;
    }
	public static void main(String argc[])
	{
		Scanner scnObj = new Scanner(System.in);
		System.out.print("Input: ");
		int n = scnObj.nextInt();
		int[] arr = new int[n];
		for(int i = 0;i<n;i++){
			arr[i] = scnObj.nextInt();
		}
		int ele = scnObj.nextInt();
		int index = binary_Search_algo(arr,0,n-1,ele);
		System.out.println("Output: ");
		if(index == -1){
			System.out.println("Element not found!");
		}else{
			System.out.println("Element found at: " + index);
		}
	}
}
