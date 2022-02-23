import java.lang.*;
import java.util.*;
public class test {

	static int minofThree(int num1, int num2, int num3)
    {
        if (num1 <= num2 && num1 <= num3)
            return num1;
        if (num2 <= num1 && num2 <= num3)
            return num2;
        else
            return num3;
    }
    static void editDistanceSolution(String inp1, String inp2, int m, int n)
    {
        int dpArray[][] = new int[m + 1][n + 1];
		for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
				if (i == 0)
                    dpArray[i][j] = j;
				else if (j == 0)
                    dpArray[i][j] = i;
				else if (inp1.charAt(i - 1) == inp2.charAt(j - 1))
                    dpArray[i][j] = dpArray[i - 1][j - 1];
				else
                    dpArray[i][j] = 1 + minofThree(dpArray[i][j - 1], dpArray[i - 1][j], dpArray[i - 1][j - 1]);
            }
        }
		System.out.print("    ");
		for(int i = 0;i<n;i++){
			System.out.print(inp2.charAt(i) + " ");
		}
		System.out.print("\n");
		int k = 0;
		for(int i = 0;i<=m;i++){
			if(i ==0){
				System.out.print("  ");
			}
			if(i !=0 && i<=m){
				System.out.print(inp1.charAt(k) + " ");
				k++;
			}
			for(int j = 0;j<=n;j++){
				System.out.print(dpArray[i][j] + " ");
			}
			System.out.print("\n");
		}
        
    }

	public static void main(String argc[])
	{
		Scanner scnObj = new Scanner(System.in);
		String inp1 = scnObj.nextLine();
        String inp2 = scnObj.nextLine();
        editDistanceSolution(inp1, inp2, inp1.length(), inp2.length());
	}
}
