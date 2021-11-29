import java.util.*;
public class test
{
	public static void main(String[] args) {
        Random rand = new Random();
        int number = rand.nextInt(100-1) + 1;
        System.out.println(number);
        Scanner scnObj = new Scanner(System.in);
        int inp = 0,count = 0,correct = 0,wrong = 0;
        while(inp != 2){
            count++;
            System.out.print("Enter you guess(1 - 100): ");
            inp = scnObj.nextInt();
            if(inp == number){
                correct++;
                System.out.println("You Won!!");
                System.out.println("Total number of guess: " + count + ", correct guess: " + correct + ", wrong guess: " + wrong);
                break;
            }else{
                wrong++;
                System.out.println("Wrong guess!!");
                System.out.println("Total number of guess: " + count + ", correct guess: " + correct + ", wrong guess: " + wrong + '\n');
                System.out.println("1. Guess again?");
                System.out.println("2. Exit");
                System.out.print("Enter: ");
                inp = scnObj.nextInt();
                if(inp == 1){
                    continue;
                }else{
                    System.out.println("Total number of guess: " + count + ", correct guess: " + correct);
                    System.out.println("Exiting the game!!");
                    break;
                }
            }
        }
    }
}
