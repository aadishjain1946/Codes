import java.util.*;
public class test {
    public static void main(String[] args)
    {
        int n = 10;
        int sum = 0,dupl = 0;
        HashSet<Integer> set = new HashSet();
        Scanner scnObj = new Scanner(System.in);
        for(int i = 0;i<n;i++){
            System.out.print("Number " + (i+1) + " = ");
            int num = scnObj.nextInt();
            if(set.contains(num)){
                dupl++;
            }else{
                set.add(num);
                sum +=num;
            }
        }
        System.out.println("Sum = "+sum);
        if(dupl > 0){
            System.out.println("The number of duplicates is: "+dupl);
        }else{
            System.out.println("No duplicate numbers were entered.");
        }
    }

}
