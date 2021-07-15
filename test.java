import java.io.*;
import java.util.*;

public class test {

  public static void main(String[] args) {
    try{
      int ans = 10;
      if(ans >= 10){
        throw new ArithmeticException();
      }
    }catch(ArithmeticException e){
      System.out.print("Arithmetic Exception Thrown!!!");
    }
  }
}

