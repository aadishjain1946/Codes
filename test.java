import java.util.*;
public class test
{
    private static final String[] beforeTen = new String[] {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    private static final String[] beforeTwenty = new String[] {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    
    private static final String[] beforeHundred = new String[] {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    public static String numToWord(int num){
        String output = new String();
        if(num < 10) output = beforeTen[num];
        else if(num < 20) output = beforeTwenty[num-10];
        else if(num < 100) output = beforeHundred[num/10] + " " + numToWord(num%10);
        else if(num < 1000) output = numToWord(num/100) + " Hundred " + numToWord(num%100);
        else if(num < 1000000) output = numToWord(num/1000) + " Thousand " + numToWord(num%1000);
        else if(num < 1000000000) output = numToWord(num/1000000) + " Million " + numToWord(num%1000000);
        else output = numToWord(num/1000000000) + " Billion " + numToWord(num%1000000000);
        return output.trim();
    }
	public static void main(String[] args) {
       int num = 12345;
       System.out.println(num + " -> " + numToWord(num));
    }
}
