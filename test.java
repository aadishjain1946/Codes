import java.util.*;
public class test  
{  
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter age: ");
        int age = scnObj.nextInt();
        if(age < 13){
            System.out.println("Too young to create a Facebook account");
        }else if(age < 16){
            System.out.println("Too young to get a driver's licence.");
        }else if(age < 18){
            System.out.println("Too young to get a tattoo.");
        }else if(age < 21){
            System.out.println("Too young to dirnk alcohol");
        }else if(age < 35){
            System.out.println("Too young to run for the President of the U.S");
            System.out.println("How sad!");
        }else{
            System.out.println("able to do anything");
            System.out.println("How happy!");
        }
    }  
}  
