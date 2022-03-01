#include <iostream>
using namespace std;
int main()
{
    int count = 1, sum = 0;
    for (; count <= 99; count++)
    {
        sum += count;
    }
    cout << "Sum: " << sum << '\n';
    return 0;
}
