import java.util.*;
public class test {
    static class node{
        public int data;
        public node next;
        node(int data){
            this.data = data;
            this.next = null;
        }
    }
    static int countNodes(node head){
        node temp = head;
        int count = 0;
        while(temp!=null){
            count++;
            temp = temp.next;
        }
        return count;
    }
    static node insertBeforeFive(node head,int data){
        node prev = null,temp = head;
        boolean flag = false;
        while(temp!=null){
            if(temp.data == 5){
                flag = true;
                break;
            }
            prev = temp;
            temp = temp.next;
        }
        node newNode = new node(data);
        if(flag == true){
            if(prev == null){
                newNode.next = temp;
                return newNode;
            }else{
                node sudo = prev.next;
                prev.next = newNode;
                newNode.next = sudo;
                return head;
            }
        }else{
            System.out.println("Value 5 not available.");
            return head;
        }
    }
    static void searchElement(node head,int data){
        node temp = head;
        int index = 0;
        while(temp!=null){
            if(temp.data == data){
                System.out.println("Element found at "+index+".");
                break;
            }
            index++;
            temp = temp.next;
        }
        System.out.println("Element not found.");
    }
    static void printList(node head){
        node temp = head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println("");
    }
    public static void main(String[] args)
    {
        int choices = -1;
        Scanner scn = new Scanner(System.in);
        node head = null,temp = null;
        for(int i = 0;i<5;i++){
            System.out.print("Input data for node "+(i+1)+": ");
            int num = scn.nextInt();
            if(head == null){
                head = new node(num);
                temp = head;
            }else{
                temp.next = new node(num);
                temp = temp.next;
            }
        }
        System.out.print("List: ");
        printList(head);
        while(choices !=4){
            System.out.println("1. Count the number of nodes.");
            System.out.println("2. Insert a new node before the value 5 of Singly Linked List.");
            System.out.println("3. Search an existing element in a Singly linked list.");
            System.out.println("4. Exit.");
            choices = scn.nextInt();
            if(choices == 1){
                System.out.println("Node Counts: "+countNodes(head));
            }else if(choices == 2){
                System.out.println("Input data: ");
                int num = scn.nextInt();
                head = insertBeforeFive(head,num);
                System.out.print("List: ");
                printList(head);
            }else if(choices == 3){
                System.out.println("Input data: ");
                int num = scn.nextInt();
                searchElement(head,num);
            }else{
                break;
            }
        }
    }

}
