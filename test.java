import java.util.*;
public class test  
{ 
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        String str1 = scnObj.nextLine();
        String str2 = scnObj.nextLine();
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();
        String [] strArr = str2.split(" ");
        int output = 0;
        for(int i = 0;i<strArr.length;i++){
            if(str1.equals(strArr[i])){
                output++;
            }
        }
        if(output > 0){
            System.out.println(str1 + " is contained " + output +" times in the array.");
        }else{
            System.out.println(str1 + " was NOT found in the array");
        }
    }  
}  
