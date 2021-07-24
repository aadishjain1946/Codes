#include <stdio.h>
#include <stdlib.h>
//function to prnt output
void displayOutput(long int avgPop, long int maxPop)
{
    printf("Average Malaysian population between 1980-1989: %d\n", avgPop);
    printf("Highest Malaysian population between 1980-1989: %d\n", maxPop);
}
int main()
{
    //prompt user to enter malaysian populations from 1980-1989
    int n = 10;
    long int population[n];
    printf("Please enter malaysian populations from 1980-1989: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &population[i]);
    }
    //calculating average population and max population
    long int avgPop = 0;
    long int maxPop = -1;
    for (int i = 0; i < n; i++)
    {
        avgPop += population[i];
        printf("population[%d]= %d\n", i, population[i]);
        if (population[i] > maxPop)
        {
            maxPop = population[i];
        }
    }
    avgPop /= n;
    displayOutput(avgPop, maxPop);
}

// INPUT: 13798085 14134058 14471211 14819424 15192298 15598927 16043731 16522000 17022465 17528961
