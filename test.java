import java.util.*;

public class test {

  public static void main(String[] args) {
    Scanner obj = new Scanner(System.in);
    //prompt user to enter integer 1
    System.out.print("Enter 1st 4-digit Number: ");
    int n1 = obj.nextInt();
    while (n1 > 9999 || n1 < 1000) {
      System.out.println("Wrong range... Integer should be 4-digit");
      n1 = obj.nextInt();
    }
    //prompt user to enter integer 2
    System.out.print("Enter 2nd 4-digit Number: ");
    int n2 = obj.nextInt();
    while (n2 > 9999 || n2 < 1000) {
      System.out.println("Wrong range... Integer should be 4-digit");
      n2 = obj.nextInt();
    }
    //calculating result by comparing each digit in the integer
    String output = "";
    while (n1 > 0 && n2 > 0) {
      if ((n1 % 10) == (n2 % 10)) {
        output = '*' + output;
      } else {
        output = 'X' + output;
      }
      n1 /= 10;
      n2 /= 10;
    }
    //printing
    System.out.print("Num= " + output);
  }
}
