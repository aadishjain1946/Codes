#include <stdio.h>
int main()
{
    int salary, numberOfWorkingDays, numberOfWorkingHours, payPerHour;
    printf("Enter the number of working days: ");
    scanf("%d", &numberOfWorkingDays);
    printf("Enter the number of working hours per days: ");
    scanf("%d", &numberOfWorkingHours);
    printf("Pay per hours: $");
    scanf("%d", &payPerHour);
    salary = numberOfWorkingDays * numberOfWorkingHours * payPerHour;
    printf("Total salary: $%d", salary);
    return 0;
}
