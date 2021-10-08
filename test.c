#include <stdio.h>
#include <math.h>
int countDigit(long long int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}
int main()
{
    printf("Enter distance in miles: ");
    long long int distMiles;
    scanf("%lld", &distMiles);
    long long int distFeet = distMiles * 5280;
    if (distFeet > 15000)
    {
        printf("It might be beneficial to drive the distance.\n");
    }
    printf("Distance in feet: %lld\n", distFeet);
    int n = countDigit(distFeet) - 1;
    long long int h = pow(10, n);
    double distFe = (double)((1.0) * distFeet) / ((1.0) * h);
    printf("Distance in feet: %lf X 10^%d\n", distFe, n);
}
