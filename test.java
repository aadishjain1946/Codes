import java.util.*;
public class test
{
	public static void main(String[] args) {
        HashSet<String> mySet = new HashSet(); 
        String input;
        Scanner scnObj = new Scanner(System.in);
        System.out.println("Add a name to set, use end to terminate input: ");
        input = scnObj.nextLine();
        while(input.compareTo("end") != 0){
            mySet.add(input);
            System.out.println(input + " inserted.");
            System.out.println("Add a name to set, use end to terminate input: ");
            input = scnObj.nextLine();
        }

        String search;
        System.out.println("Search a name, use end to terminate searching: ");
        search = scnObj.nextLine();
        while(search.compareTo("end") != 0){
            if(mySet.contains(search)){
               System.out.println(search + " found in set.");
            }else{
                System.out.println(search + " not found in set.");
            }
            System.out.println("Search a name, use end to terminate searching: ");
            search = scnObj.nextLine();
        }
    }
}
