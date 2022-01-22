import java.util.*;
public class test  
{  
    public static void main(String[] args)  
    {  
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Input charaters(maximum of 5): ");
        StringBuilder str = new StringBuilder(scnObj.nextLine());
        if(str.length() > 5){
            System.out.println("You entered more than 5 characters.");
        }else{
            for(int i = 0;i<str.length();i++){
                switch(str.charAt(i)){
                    case 'a':
                        str.setCharAt(i,'0');
                        break;
                    case 'e':
                        str.setCharAt(i,'1');
                        break;
                    case 'i':
                        str.setCharAt(i,'2');
                        break;
                    case 'o':
                        str.setCharAt(i,'3');
                        break;
                    case 'u':
                        str.setCharAt(i,'4');
                        break;
                    case 'A':
                        str.setCharAt(i,'5');
                        break;
                    case 'E':
                        str.setCharAt(i,'6');
                        break;
                    case 'I':
                        str.setCharAt(i,'7');
                        break;
                    case 'O':
                        str.setCharAt(i,'8');
                        break;
                    case 'U':
                        str.setCharAt(i,'9');
                        break;
                }
            }
            System.out.println("Encrypted words: " + str);
        }
    }  
}  
