#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    return x * power(x, n - 1);
}
int main()
{
    int num = power(2, 4);
    cout << "2 power 4: " << num << '\n';
    return 0;
}
