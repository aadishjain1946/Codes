import java.util.*;

public class test {

  static boolean Prime(int num) {
    boolean checkPrime = true;
    for (int i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        checkPrime = false;
        break;
      }
    }
    return checkPrime;
  }

  static int getGcd(int num1, int num2) {
    if (num1 == 0) {
      return num2;
    }
    if (num2 == 0) {
      return num1;
    }
    if (num1 == num2) {
      return num1;
    }
    if (num1 > num2) {
      return getGcd(num1 - num2, num2);
    }
    return getGcd(num1, num2 - num1);
  }

  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<Integer>();
    ArrayList<Integer> gcd1 = new ArrayList<Integer>();
    ArrayList<Integer> gcdn1 = new ArrayList<Integer>();
    Scanner scn = new Scanner(System.in);
    System.out.print("Enter value of n: ");
    int n = scn.nextInt();
    System.out.print("Enter array elements: ");
    for (int i = 0; i < n; i++) {
      int a = scn.nextInt();
      arr.add(a);
    }
    for (int i = 0; i < n; i++) {
      if (Prime(arr.get(i)) == true) {
        gcd1.add(arr.get(i));
      } else {
        gcdn1.add(arr.get(i));
      }
    }
    System.out.println("Group one: " + gcd1);
    System.out.println("Group two: " + gcdn1);
  }
}
