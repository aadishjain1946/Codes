import java.util.*;

public class test {

  public static void main(String[] args) {
    Scanner scnObj = new Scanner(System.in);
    System.out.print("Enter String: ");
    String str = scnObj.nextLine();
    boolean flag = false;
    for(int i = 0;i<str.length();i++){
      if(Character.isUpperCase(str.charAt(i))){
        flag = true;
        break;
      }
    }
    System.out.println("String have uppercase characters? " + flag);
  }
}
