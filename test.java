import java.util.*;
public class test
{
    public static long combinations(long n, long r){
        long result = 1;
        for(long i = n;i > Math.max((n-r),r);i--){
            result *= i;
        }
        result /= Math.min((n-r),r);
        return result;
    }
	public static void main(String[] args) {
        int numberOfmen = 9,numberOfWomen = 12;
        int toatl = 3;
        long result = combinations(numberOfWomen, toatl);
        System.out.println("To form a committee of 3 womens comginations are: " + result);
    }
}
