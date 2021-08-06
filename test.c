#include <stdio.h>
int main()
{
    int nYear = 365;
    int year;
    //prompt user to enter year
    printf("Enter a year: ");
    scanf("%d", &year);
    //calculating number of days in a year
    if (year % 4 == 0 || year % 400 == 0)
    {
        nYear++;
    }
    printf("Number of days in %d year is %d", year, nYear);
}
