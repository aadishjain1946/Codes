import java.util.*;

public class test {
  public static void main(String[] args) {
    ArrayList<Integer> numbers = new ArrayList<Integer>();
    Scanner scnObj = new Scanner(System.in);
    while(true){
      String str = scnObj.nextLine();
      if(str.charAt(0) == 'u'){
        numbers.remove(numbers.size()-1);
      }else if(str.charAt(0) == 'r'){
        numbers.clear();
      }else if(str.charAt(0) == 'q'){
        break;
      }else{
        numbers.add(Integer.parseInt(str));
      }
    }
    System.out.println("Output: ");
    for(int i = 0;i<numbers.size();i++){
      System.out.println(numbers.get(i));
    }
  }
}
