#include <iostream>
using namespace std;
int main()
{
    int denm = 4, numn = 3, n;
    //prompt user to enter value of n
    cout << "Enter value of n: ";
    cin >> n;
    double sum = 0;
    //finding sum of series
    for (int i = 0; i < n; i++)
    {
        sum += ((1.0) * numn / denm);
        numn += 3;
        denm += 4;
    }
    cout << "Sum of " << n << "th term is " << sum << '\n';
}
