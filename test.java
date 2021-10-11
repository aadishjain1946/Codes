import java.util.*;
public class test {
    public static void main(String[] args)
    {
        Scanner scnObj = new Scanner(System.in);
        System.out.print("Enter starting point of line (x, y): ");
        int x1 = scnObj.nextInt();
        int y1 = scnObj.nextInt();
        System.out.print("Enter ending point of line (x, y): ");
        int x2 = scnObj.nextInt();
        int y2 = scnObj.nextInt();
        int xMid = (x1 + x2)/2;
        int yMid = (y1 + y2)/2;
        System.out.println("\nMid Point of line (x, y): (" + xMid + ", " + yMid + ")");
    }

}
