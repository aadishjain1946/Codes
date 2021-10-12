import java.util.*;
public class test {
    static int getMissingInt(int[] arr, int n){
        int missing = arr[0];
        for(int i = 1;i<n;i++){
            missing = missing ^ arr[i];
        }
        for(int i = 1;i<n;i++){
            missing = missing ^ i;
        }
        return missing;
    }
    public static void main(String[] args)
    {
        int n = 5;
        int[] arr = {1,2,3,3,4};
        System.out.println("Output: "+getMissingInt(arr, n));
    }

}
