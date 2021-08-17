#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, num3;
    //prompt user to enter 3 integers
    printf("Enter 3 integers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    //calculate the result
    int output = (num1 + num2) * abs(num2 - num3);
    //print the output
    printf("The result is %d", output);
}
