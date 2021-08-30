import java.util.Scanner;

public class test {
    public static int getSum(int n){
        if(n <= 0){
            return 0;
        }
        if(n%2 == 0 && n%3 == 0){
            return n + getSum(n-1);
        }
        return getSum(n-1);
    }
    public static void main(String[] args)
    {
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = scnObj.nextInt();
        int sum = getSum(n);
        System.out.println("Output: " + sum);
    }

}
