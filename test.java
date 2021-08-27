import java.util.*;

public class test {
  public static void main(String[] args) {
    Scanner scnObj = new Scanner(System.in);
    int num = scnObj.nextInt();
    while((num--) > 0){
      int n = scnObj.nextInt();
      int M = scnObj.nextInt();
      int []arr = new int[n];
      for(int i = 0;i<n;i++){
        arr[i] = 0;
      }
      for(int i = 0;i<M;i++){
        int round = scnObj.nextInt();
        int count = 1;
        for(int l = round-1;l>=0;l--){
          arr[l] = Math.max(arr[l],count);
          count++;
        }
        count = 1;
        for(int p = round+1;p<n;p++){
          arr[p] = Math.max(arr[p],count);
          count++;
        }
      }
      for(int i = 0;i<n;i++){
        System.out.print(arr[i] + " ");
      }
      System.out.print("\n");
    }
  }
}
