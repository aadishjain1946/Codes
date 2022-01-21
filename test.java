import java.util.*;
public class test  
{  
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        int n = scnObj.nextInt();
        ArrayList<Integer> arr = new ArrayList<>(n);
        for(int i = 0;i<n;i++){
            arr.add(scnObj.nextInt());
        }
        for(int i = arr.size() - 1;i>=0;i--){
            System.out.println(arr.get(i));
        }
    }  
}  
