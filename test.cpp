#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int output = 1;
    for (int i = 1; i <= n; i++)
    {
        output *= i;
    }
    cout << output;
    return 0;
}
