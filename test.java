import java.util.*;

public class test {
  //function to return sum of an array
  static int getSum(int arr[],int n){
      int sum = 0;
      for(int j = 0;j<n;j++){
        sum += arr[j];
      }
      return sum;
  }
  //function to return maximum sum after flipping necessary card
  static int maxSum(int arr[],int i,int n,int flipCnt){
    if(i>=n){
      return getSum(arr,n);
    }
    if(flipCnt > 0 && flipCnt < i){
      return getSum(arr,n);
    }

    arr[i] *= -1;
    int ans1 = maxSum(arr,i+1,n,flipCnt+1);
    arr[i] *= -1;
    int ans2 = maxSum(arr,i+1,n,flipCnt);
    return Math.max(ans1,ans2);
  }
  public static void main(String[] args) {
    //prompt user to enter input
    System.out.println("Input:");
    Scanner scnObj = new Scanner(System.in);
    int n = scnObj.nextInt();
    int []arr = new int[n];
    for(int i = 0;i<n;i++){
      arr[i] = scnObj.nextInt();
    }
    //printing output
    System.out.println("Output:");
    System.out.println(maxSum(arr,0,n,0));
  }
}
