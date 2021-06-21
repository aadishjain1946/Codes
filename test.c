#include <stdio.h>
int main()
{
    //prompt user to enter basic salary
    float basic, tax = 0, spf = 0, gi = 0;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    //calculating tax, staff provident fund, global insurance
    if (basic >= 0 && basic < 2000)
    {
        tax = 0;
        spf = basic * 0.11;
        gi = basic * 0.01;
    }
    else if (basic >= 2000 && basic < 3000)
    {
        tax = basic * 0.05;
        spf = basic * 0.12;
        gi = basic * 0.02;
    }
    else if (basic >= 3000 && basic < 4000)
    {
        tax = basic * 0.08;
        spf = basic * 0.13;
        gi = basic * 0.05;
    }
    else
    {
        tax = basic * 0.10;
        spf = basic * 0.17;
        gi = basic * 0.08;
    }
    //calculating net salary
    float total = basic - tax - spf - gi;
    printf("Net salary of employee is %f\n", total);
}