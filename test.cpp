#include <iostream>
#include <vector>
#include <set>
using namespace std;
void unknown(char *s1, char *s2)
{
    int i = 1;
    while ((*s1) != '\0')
    {
        if (i % 2 != 0)
        {
            *s2 = *s1;
            s1++;
            s2++;
        }
        else
        {
            s1++;
        }
        i++;
    }
}
int main()
{
    char string1[] = " NOFLEXX425 ";
    char string2[100];
    unknown(string1, string2);
    puts(string1);
    puts(string2);

    return 0;
}
