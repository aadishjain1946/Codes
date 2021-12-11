import java.util.*;
public class test
{
    public static class PalindromeChecker{
        Stack<Character> myStack;
        Queue<Character> myQueue;

        public boolean isPalindrome(String line){
            myStack = new Stack<Character>();
            myQueue = new LinkedList<Character>();
            line = line.toLowerCase(); 
            for(int i = 0;i<line.length();i++){
                myStack.push(line.charAt(i));
                myQueue.add(line.charAt(i));
            }
            while(!myStack.empty() && !myQueue.isEmpty()){
                if(myStack.peek() != myQueue.peek()){
                    return false;
                }
                myQueue.remove();
                myStack.pop();
            }
            return true;
        }
    }
	public static void main(String[] args) {
        PalindromeChecker P1 = new PalindromeChecker();
        String str1 = "aabaa";
        String str2 = "aagbcbsaa";
        String str3 = "aabghgbaa";
        System.out.println("Is String "+str1 + " palindrome? "+P1.isPalindrome(str1));
        System.out.println("Is String "+str2 + " palindrome? "+P1.isPalindrome(str2));
        System.out.println("Is String "+str3 + " palindrome? "+P1.isPalindrome(str3));
    }
}
