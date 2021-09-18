import java.util.*;
import java.text.DecimalFormat;

public class test {
    public void get() throws InterruptedException
    {
        while (true) {
            synchronized (this)
            {
                System.out.println("Got-"+ n);
                notify();
                Thread.sleep(1000);
            }
        }
    }

    public static void main(String[] args)
    {
        node root = new node(1);
        root.next = new node(2);
        (root.next).next = new node(3);
        print(root);
        makePalindrome(root);
        print(root);

        node root1 = new node(8);
        root1.next = new node(9);
        (root1.next).next = new node(1);
        ((root1.next).next).next = new node(4);
        print(root1);
        makePalindrome(root1);
        print(root1);
    }

}
