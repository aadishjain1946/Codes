import java.util.Scanner;

public class Application {
    static class Employee{
        int salary;
        public void Input(){
            //complete this function according to your requirements
        }
    }
public static void main(String[] args)
{
int Num;
float Ave;
Employee[] Emp = new Employee[100];
System.out.println("Enter the number of employees:");
Num = Integer.parseInt(new Scanner(System.in).nextLine());
for (int i = 0; i < Num; i++){
Emp[i] = new Employee();
Emp[i].Input();
}

System.out.printf("The list of employees:");
System.out.println();
Display(Emp, Num);
Ave= AverageSalary(Emp, Num);
System.out.printf("\nAverage salary is:" + "%.2f", Ave);
System.out.printf("\nThe employee with highest salary is:\n" + employeeHigh(Emp, Num));

}

private static float AverageSalary(Employee [] emps, int n)
{
float sum=0;
for (int i = 0; i < n; i++)
sum = sum + emps[i].salary;
return sum/n;
}
private static void Display(Employee[] arr, int n)
{
for (int i = 0; i < n; i++){
System.out.printf("%s",arr[i]);
}
}

private static Employee employeeHigh(Employee[] arr, int n)
{
float high= arr[0].salary ;
int iHigh = 0;
for (int i = 1; i < n; i++){
if( arr[i].salary > high){
high = arr[i].salary;
iHigh = i;
}
}
return arr[iHigh];
}

}