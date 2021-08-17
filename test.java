import java.util.*;

public class test {
  public static void main(String[] args) {
    int i = 10,j=3,result; result=++j+ i--; j=i--; System.out.println(String.format("i=%d, j=%d, result=%d",i,j,result));
  }
}
