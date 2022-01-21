#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter two natural number n1 and n2: ";
    cin >> n1 >> n2;
    int count = 0;
    for (int i = n1; i <= n2; i++)
    {
        bool flag = true;
        if (i <= 1)
        {
            flag = false;
        }
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
            }
        }
        if (flag)
        {
            count++;
        }
    }
    cout << "Number of primes between " << n1 << " and " << n2 << " are " << count << '\n';
    return 0;
}
