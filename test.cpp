#include <bits/stdc++.h>
using namespace std;
bool containsDigit(int n, int y)
{
    while (n > 0)
    {
        if (n % 10 == y)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}
int getCOunt(int x, int y)
{
    int count = 0;
    int i = 1;
    while (1)
    {
        if (!containsDigit(x, y))
        {
            break;
        }
        x += i;
        i++;
        count++;
    }
    return count;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y;
        cin >> x >> y;
        cout << getCOunt(x, y) << '\n';
    }
    return 0;
}
