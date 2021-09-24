import java.util.*;
public class test {
    public static void main(String[] args)
    {
       TreeSet<Integer> myTSet = new TreeSet<>();
        myTSet.add(10);
        myTSet.add(20);
        myTSet.add(30);
        myTSet.add(40);
        myTSet.add(120);
        System.out.println("Current TreeSet: " + myTSet);
        System.out.println("Treeset emement which is strictly greater than or equal to 23: "+ myTSet.ceiling(23));
    }

}







