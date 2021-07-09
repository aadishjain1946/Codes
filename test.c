#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    // creating file object
    FILE *out = fopen("data.txt", "w");
    //storing square root from 1 - 100 in the text file
    for (int i = 0; i < 100; i++)
    {
        float n = sqrt(i);
        char array[10];
        sprintf(array, "%f", n);
        fputs(array, out);
        fputs("\n", out);
    }
    //closing text file
    fclose(out);
}
