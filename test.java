import java.util.*;
public class test
{
    static int boxqty[] = {0,0};
    public static void printList(String [] list,int index){
        System.out.print("List " + index + ": ");
        for(int i = 0;i<list.length;i++){
            System.out.print(list[i]);
        }
        System.out.print('\n');
    }
    public static void addToBox(String [] list,ArrayList<String> box,int index){
        if(boxqty[index] == 5){
            return;
        }
        Scanner scnObj = new Scanner(System.in);
        for(int i = 0;i<list.length;i++){
            if(boxqty[index] == 5){
                return;
            }
            System.out.print("\nEnter quantity of " + list[i] + ": ");
            int num = scnObj.nextInt();
            if(num == 0){
                continue;
            }
            box.add((list[i] + "[" + Integer.toString(Math.min(num,5 - boxqty[index]))  +  "]"));
            boxqty[index] += Math.min(num,5 - boxqty[index]);
        }
    }
	public static void main(String[] args) {
        String [] list1 = {"Chocolate Strawberry", "Chocolate Milk", "Chocolate Nuts"};
        String [] list2 = {"Balloon red", "Balloon blue", "Balloon orange", "Balloon Pink"};
        String [] list3 = {"Candy 1", "Candy 2", "Candy 3", "Candy 4", "Candy 5"};
        String [] list4 = {"Card 1", "Card 2", "Card 3"};
        ArrayList<String> box1 = new ArrayList<String>();
        ArrayList<String> box2 = new ArrayList<String>();

        addToBox(list1,box1,0);
        addToBox(list2,box1,0);
        addToBox(list3,box1,0);
        addToBox(list4,box1,0);
        addToBox(list1,box2,1);
        addToBox(list2,box2,1);
        addToBox(list3,box2,1);
        addToBox(list4,box2,1);
        printList(list1,1);
        printList(list2,2);
        printList(list3,3);
        printList(list4,4);
        System.out.print("Box 1:");
        for(int i = 0;i<box1.size();i++){
            System.out.print(box1.get(i) + " ");
        }
        System.out.print("\nBox 2:");
        for(int i = 0;i<box2.size();i++){
            System.out.print(box2.get(i) + " ");
        }
    }
}
