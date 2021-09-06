#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Input: ");
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = a + b, difference = a - b, product = a * b, remainder = a % b;
    float quotient = (float)a / (float)b;
    printf("Output:\nSum: %d\nDifference: %d\nProduct: %d\nRemainder: %d\nQuotient: %f\n", sum, difference, product, remainder, quotient);
}
