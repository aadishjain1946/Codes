import java.util.*;

public class test {
  public static void main(String[] args) {
    int[] daysOfMonth = {31,28,31,30,31,30,31,31,30,31,30,31};
    //prompt user to enter a date
    Scanner scnObj = new Scanner(System.in);
    System.out.print("Please enter a date to be checked: ");
    String str = scnObj.nextLine();
    String[] arr = str.split("/");
    int day = Integer.parseInt(arr[0]);
    int month = Integer.parseInt(arr[1]);
    int year = Integer.parseInt(arr[2]);
    String output = "";
    //check for leap year
    if(year%400 == 0){
      daysOfMonth[1]++;
    }
    //calculating the output
    if(day > 0 && day < daysOfMonth[month - 1]){
      output = "It is a valid date";
    }else{
      output = "It isn't a valid date";
    }
    //printing the result
    System.out.println("Your date was " + day+":"+month+":"+year + " " + output);
  }
}
