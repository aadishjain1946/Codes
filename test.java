import java.util.*;

public class test {
    public static int my_method(int n){
      if(n==1){
        return 4;
      } else{
        int ans = 2 + 3 * my_method(n-1);
        System.out.println(ans);
        return ans;
      }
}

  public static void main(String[] args) {
    System.out.println(my_method(5));
  }
}
