#include <stdio.h>
int main()
{
    FILE *fileObj = fopen("output.txt", "w");
    if (fileObj == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    int index = 1, sum = 0;
    while (index <= 10)
    {
        sum += index;
        index++;
    }
    fprintf(fileObj, "Sum of integers between 1,10: %d\n", sum);
    return 0;
}
