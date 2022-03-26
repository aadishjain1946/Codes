#include <iostream>
using namespace std;
long factorial(long n)
{
    long fact = (2 * n - 1);
    for (long i = fact - 1; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    cout << "Factorial: " << factorial(5);
    return 0;
}
