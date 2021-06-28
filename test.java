import java.util.*;

public class test {

  //linked list node class to store linked list data
  public static class ListNode {

    int data;
    ListNode next;

    ListNode(int data) {
      this.data = data;
    }
  }

  public static class sort {

    //method to sort linked list using insertion sort
    public ListNode insertLSort(ListNode head) {
      ListNode temp = null;
      ListNode curr = head;
      while (curr != null) {
        ListNode next = curr.next;
        if (temp == null || temp.data >= curr.data) {
          curr.next = temp;
          temp = curr;
        } else {
          ListNode sudo = temp;
          while (sudo.next != null && sudo.next.data < curr.data) {
            sudo = sudo.next;
          }
          curr.next = sudo.next;
          sudo.next = curr;
        }
        curr = next;
      }
      head = temp;
      return head;
    }
  }

  //method to print linked list
  public static void print(ListNode head) {
    ListNode temp = head;
    while (temp != null) {
      System.out.print(temp.data + " ");
      temp = temp.next;
    }
  }

  public static void main(String[] args) {
    ListNode d1 = new ListNode(30);
    ListNode d2 = new ListNode(50);
    ListNode d3 = new ListNode(10);
    ListNode d4 = new ListNode(20);
    ListNode d5 = new ListNode(40);
    d1.next = d2;
    d2.next = d3;
    d3.next = d4;
    d4.next = d5;

    sort s1 = new sort();
    System.out.print("Linked list before sorting: ");
    print(d1);
    System.out.println("");
    d1 = s1.insertLSort(d1);
    System.out.print("Linked list after sorting: ");
    print(d1);
  }
}




public static void doSomething(int x){}

doSomething(25);