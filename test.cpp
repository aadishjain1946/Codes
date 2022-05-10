#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string numbers[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    for (int i = a; i <= b; i++)
    {
        if (i <= 9 && i >= 1)
        {
            cout << numbers[i - 1] << " ";
        }
        else if (i % 2 == 0)
        {
            cout << "Even ";
        }
        else
        {
            cout << "Odd ";
        }
    }
    return 0;
}
