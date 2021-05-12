#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
//function to compare two stirng and
//return result regardless of case of string
int stricmp(const char *s1, const char *s2)
{
    int n = strlen(s1);
    int m = strlen(s2);
    if (n > m)
    {
        return 1;
    }
    else if (n < m)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((char)tolower(s1[i]) > (char)tolower(s2[i]))
            {
                return 1;
            }
            else if ((char)tolower(s1[i]) < (char)tolower(s2[i]))
            {
                return -1;
            }
        }
    }
    return 0;
}
int main()
{
    char s1[100], s2[100];
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    cout << "Output: " << stricmp(s1, s2);
}