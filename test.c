#include <stdio.h>
#include <string.h>
// function to return start index of string 1 that matches string 2
int strFindSimilar(char str1[], char str2[])
{
    if (strlen(str1) < strlen(str2))
    {
        return -1;
    }
    int start = -1, commonEle = -1;
    //checking for each characters if str2 is similar to str1
    //and updating the count
    for (int i = 0; i < strlen(str1) - strlen(str2) + 1; i++)
    {
        int sudo = 0, k = 0;
        for (int j = i; j < strlen(str1) && k < strlen(str2); j++, k++)
        {
            if (str1[j] == str2[k])
            {
                sudo++;
            }
        }
        if (sudo > (strlen(str2) / 2) && sudo > commonEle)
        {
            start = i;
            commonEle = sudo;
        }
    }
    return start;
}
int main()
{
    char str1[] = "FifthOfNovember";
    // char str1[] = "Seventh";
    char str2[] = "September";
    printf("INPUT:\n %d \n %d \n", str1, str2);
    printf("Output: %d", strFindSimilar(str1, str2));
}
