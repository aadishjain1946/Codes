#include <iostream>
using namespace std;
bool extractDebugOption(int n, char **str)
{
    string comp = "/debug yes";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; str[i][j] != '\0'; i++)
        {
            bool flag = true;
            cout << str[i] << "\n";
            for (int k = 0; k < comp.length(); k++, j++)
            {
                cout << "a";
                if (str[i][j] != comp[k] || str[i][j] == '\0')
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                return true;
            }
        }
    }
    return false;
}
int main(int argv, char **argc)
{
    cout << ((extractDebugOption(argv, argc)) ? "True" : "False");
    return 0;
}
