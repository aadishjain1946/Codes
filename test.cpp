#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 2 * f(n - 1) + n * n * n;
}
int main()
{
    cout << "Output: " << f(5);
    return 0;
}
