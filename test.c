#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
int main()
{
    int array[MAX_SIZE];
    int i;
    int N;
    int maxElement = -1;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (array[i] % 3 == 0)
        {
            if (maxElement < array[i])
            {
                maxElement = array[i];
            }
        }
    }
    if (maxElement > 0)
        printf("The largest value divisible by 3 is %d", maxElement);
    else
        printf("No value in the array is divisible by 3");
    return 0;
}
