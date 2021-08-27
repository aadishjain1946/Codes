import java.util.*;

public class test {
  static int trailZeros(int n)
    {
        if (n < 0) 
        {
          return -1;
        }
        int cnt = 0;
        for (int i = 5; n / i >= 1; i *= 5)
        {
          cnt += n / i;
        }
        return cnt;
    }
  public static void main(String[] args) {
    System.out.println("Trailing zeros: " + trailZeros(100));
  }
}
