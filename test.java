import java.util.*;

public class test {
  public static void main(String[] args) {
    String str = "CODER";
    for(int i = 0;i<str.length();i++){
      int n = str.length() - 1;
      for(int j = 0;j<i+1;j++){
        System.out.print(str.charAt(n) + " ");
        n--;
      }
      System.out.print("\n");
    }
  }
}
