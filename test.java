import java.util.*;
public class test
{
    public static boolean checkPower(int input)
    {
        if(input == 0)
            return false;
 
        return (int)(Math.ceil((Math.log(input) / Math.log(2)))) == (int)(Math.floor(((Math.log(input) / Math.log(2)))));
    }
	public static void main(String[] args) {
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter a integer: ");
        int input = scnObj.nextInt();
        boolean output = checkPower(input);
        if(output == true){
            System.out.println(input + " is a power of 2. ");
        }else{
            System.out.println(input + " is not a power of 2. ");
        }
    }
}
