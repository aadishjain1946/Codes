import java.util.*;
public class test  
{  
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = scnObj.nextLine();
        System.out.print("Enter a pattern: ");
        String pattern = scnObj.nextLine();
        HashMap<Character, Character> maping = new HashMap<>();
        boolean flag = true;
        for(int i = 0;i<input.length();i++){
            if(maping.containsKey(input.charAt(i))){
                if(pattern.charAt(i) != maping.get(input.charAt(i))){
                    flag = false;
                    break;
                }
            }else{
                maping.put(input.charAt(i),pattern.charAt(i));
            }
        }
        if(flag){
            System.out.println("Pattern matched successfully.");
        }else{
            System.out.println("Pattern matched failed.");
        }
    }  
}  
