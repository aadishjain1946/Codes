#include <stdio.h>
#include <math.h>
int countDigit(int num)
{
    if (num <= 0)
    {
        return 0;
    }
    return countDigit(num / 10) + 1;
}
int main()
{
    int num;
    printf("Input a number: ");
    scanf("%d", &num);
    printf("The number of digits in the number is: %d", countDigit(num));
}
