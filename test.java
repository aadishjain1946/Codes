import java.util.*;

public class test {

  public static void main(String[] args) {
    Scanner scnObj = new Scanner(System.in);
    // prompt user to enter full name
    System.out.print("Enter Full Name: ");
    String name = scnObj.nextLine();
    //split the name around string
    String[] nameSplit = name.split(" ");

    String userName = "";
    userName += nameSplit[0].charAt(0);
    // check if name has middle name or not
    if (nameSplit.length > 2) {
      userName += nameSplit[1].charAt(0);
      if (nameSplit[2].length() >= 6) {
        userName += nameSplit[2].substring(0, 6);
      } else {
        System.out.println("Cannot create userName!!");
      }
    } else {
      if (nameSplit[1].length() >= 7) {
        userName += nameSplit[1].substring(0, 7);
      } else {
        System.out.println("Cannot create userName!!");
      }
    }
    //print output
    System.out.println("Your username is: " + userName.toLowerCase());
  }
}
