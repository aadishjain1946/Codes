import java.util.*;

public class test {

  //node class to store node in a linked list
  static class Node {

    public String data;
    public Node next;

    Node(String data) {
      this.data = data;
      this.next = null;
    }

    public void display() {
      System.out.print(this.data + " ");
    }
  }

  //linked list class to perform different operations on linked list
  static class orderedList {

    private Node head;

    orderedList() {
      head = null;
    }

    //function to insert data in linked list
    public void insert(String data) {
      Node newLLNode = new Node(data);
      Node curr = head;
      Node prev = null;
      while (curr != null && data.compareTo(curr.data) > 0) {
        prev = curr;
        curr = curr.next;
      }
      if (prev == null) {
        head = newLLNode;
      } else {
        prev.next = newLLNode;
      }
      newLLNode.next = curr;
    }

    //function to remove node from the linked list
    public Node remove() {
      if (head == null) {
        System.out.println("Empty List!!");
      }
      Node sudo = head;
      head = head.next;
      return sudo;
    }

    //function to search for element in linked list
    public Node search(String data) {
      if (head == null) {
        System.out.println("Empty List!!");
      }
      Node sudo = head;
      while (sudo != null) {
        if (sudo.data == data) {
          return sudo;
        }
        sudo = sudo.next;
      }
      return null;
    }

    //function to print linked list
    public void displayLL() {
      Node sudo = head;
      while (sudo != null) {
        sudo.display();
        sudo = sudo.next;
      }
      System.out.println("");
    }
  }

  public static void main(String[] args) {
    orderedList mylist = new orderedList();
    mylist.insert("lmno");
    mylist.insert("defg");
    mylist.insert("abcd");
    mylist.insert("hijk");
    System.out.print("Printing Linked List after inserting 4 nodes: ");
    mylist.displayLL();
    System.out.println("Searching for node with data 'defg' in Linked List");
    Node s1 = mylist.search("defg");
    if (s1 != null) {
      System.out.println("Found 'defg' in Linked List");
    } else {
      System.out.println("Not Found 'defg' in Linked List");
    }
  }
}
