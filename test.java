import java.util.*;
import java.text.DecimalFormat;

public class test {
    public static class node{
        public int data;
        public node next;
        public node(int data){
            this.data = data;
            this.next = null;
        }
    }
    public static void makePalindrome(node root){
        if(root == null){
            return;
        }
        node newnode = new node(root.data);
        makePalindrome(root.next);
        node tail = root;
        while(tail.next != null){
            tail = tail.next;
        }
        tail.next = newnode;
    }
    public static void print(node root){
        node temp = root;
        System.out.print("Elements in Linked list: ");
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println(" ");
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
