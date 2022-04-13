#include <iostream>
using namespace std;
int main()
{
    cout << "Even numbers(2 - 128) are:\n";
    for (int i = 2; i <= 128; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
