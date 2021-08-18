import java.util.*;

public class test {
  public static class RetrieveRandomElmFromArrList{
    public static Integer solution(ArrayList<Integer> arrList, int index){
    // ↓↓↓↓ your code goes here ↓↓↓↓
    int start = 0, end = arrList.size() - 1;
    Random rand = new Random();
    int ind = rand.nextInt(end-start) + start;
    Integer output = new Integer(arrList.get(ind));
    return 0;
    }
  }
  public static void main(String[] args) {
    
  }
}
