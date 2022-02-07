import java.util.*;
public class test  
{  
    public static String noVowels(String str){
        String output = "";
        for(int i = 0;i<str.length();i++){
            if(str.charAt(i) == 'A' || str.charAt(i) == 'E' || str.charAt(i) == 'I' || str.charAt(i) == 'O' || str.charAt(i) == 'U'){
                continue;
            }
            if(str.charAt(i) == 'S'){
                output += '$';    
            }else{
                output += str.charAt(i);
            }
        }
        return output;
    }
    public static void main(String[] args)  
    {  
        String input = "WHEN I CLOSE MY EYES";
        System.out.println("Output: " + noVowels(input));
    }  
}  
