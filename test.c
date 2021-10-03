#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int largest = 0;
    while (n > 0)
    {
        if (largest < n % 10)
        {
            largest = n % 10;
        }
        n /= 10;
    }
    printf("Largest Digit: %d", largest);
}
