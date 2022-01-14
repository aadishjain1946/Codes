import java.util.*;
public class test
{
    public static int getCartesianProductIndex(int[] A, int[] B,int i, int j){
        if(i == 0){
            return j;
        }
        return (i * B.length) + j;
    }
	public static void main(String[] args) {
        int[] A = {1, 2, 3};
        int[] B = {4, 5};
        System.out.println("(1,0): " + getCartesianProductIndex(A,B,1,0));
        System.out.println("(2,1): " + getCartesianProductIndex(A,B,2,1));
        System.out.println("(1,1): " + getCartesianProductIndex(A,B,1,1));
    }
}
