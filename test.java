import java.util.*;

public class test {
    public static void main(String[] args)
    {
        int n = 25;
        ArrayList<Integer> list = new ArrayList<Integer>(n);
        for(int i = 0;i<n;i++){
            list.add(-1);
        }
        for(int i = 0;i<n;i++){
            System.out.print(list.get(i) + " ");
        }
    }

}
