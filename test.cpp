#include <iostream>
using namespace std;
int main()
{
    int counter = 0;
    float n;
    cin >> n;
    while (((int)n) < n)
    {
        n *= 10;
        counter++;
    }
    cout << counter;
    return 0;
}
