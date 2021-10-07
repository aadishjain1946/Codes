#include <stdio.h>
void countChanges(double amount, float denominations[], int denomCount[])
{
    int amt1 = amount * 1000;
    if (amt1 <= 0)
    {
        return;
    }
    double denm = 0;
    for (int i = 0; i < 5; i++)
    {
        float amt = (float)amount;
        if (denominations[i] <= amt)
        {
            denm = denominations[i];
            denomCount[i]++;
            break;
        }
    }
    countChanges(amount - denm, denominations, denomCount);
}
void displayChanges(double amount)
{
    float denominations[] = {1, 0.25, 0.1, 0.05, 0.01};
    int denomCount[5] = {0, 0, 0, 0, 0};
    countChanges(amount, denominations, denomCount);
    printf("%d dollars, %d quarters, %d dimes, %d nickles, %d cents.\n", denomCount[0], denomCount[1], denomCount[2], denomCount[3], denomCount[4]);
}
int main()
{
    printf("Input: $");
    double amount;
    scanf("%lf", &amount);
    printf("Output: ");
    displayChanges(amount);
}
