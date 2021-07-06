import java.util.*;

public class Sample<T1, T2> {

  private T1 data;
  private T2 info;

  public void setDataInfo(T1 d, T2 s) {
    this.data = d; //[1] setting value of data
    this.info = s; //[2] setting value of info
  }

  public static void main(String[] args) {
    Sample<Double, String> obj = new Sample<Double, String>(); //[3] creating object of Sample class
    obj.setDataInfo(34.55, "Hello"); //[4] calling setDataInfo method
  }
}
