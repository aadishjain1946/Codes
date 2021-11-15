import java.util.*;
public class test
{
	static int count = 0;
    public static int readGrades() {
        int grade;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a grade : ");
        grade = input.nextInt();
        return grade;
    }
	public static int maxValue(int []grades,int j,int n){
		int maxVal = -1;
		for(int i = j;i<=n;i++){
			maxVal = Math.max(grades[i],maxVal);
		}
		return maxVal;
	}
	public static int minValue(int []grades,int j,int n){
		int minVal = 9999;
		for(int i = j;i<=n;i++){
			minVal = Math.min(grades[i],minVal);
		}
		return minVal;
	}
	public static void main(String[] args) {
        int grade[] = new int[1000];
        int i = 0;
        while (i < 100) {
            grade[i] = readGrades();
            if (grade[i] == -1) {
                grade[i] = -1;
                break;
            } else {
                i++;
                count++;
            }
        }

        System.out.println("Number of grades: " + count);
		System.out.println("The maximum grades is: " + maxValue(grade, 0, count -1));
		System.out.println("The minimum grades is: " + minValue(grade, 0, count -1));
    }
}
