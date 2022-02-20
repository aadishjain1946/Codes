import java.util.*;
public class test  
{ 
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        int n = scnObj.nextInt();
        int m = scnObj.nextInt();
        int []a = new int[n];
        int []b = new int[m];
        for(int i = 0;i<n;i++){
            a[i] = scnObj.nextInt();
        }
        for(int i = 0;i<m;i++){
            b[i] = scnObj.nextInt();
        }
        HashSet<Integer> elem = new HashSet<>();
        ArrayList<Integer> c = new ArrayList<>();
        for(int i = 0;i<n;i++){
            elem.add(a[i]);
        }
        for(int i = 0;i<m;i++){
            if(elem.contains(b[i])){
                elem.remove(b[i]);
            }
        }
        System.out.println("Elements: " + elem);
    }  
}  
