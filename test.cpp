#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 7 == 0)
    {
        cout << "Divided!\n";
    }
    else
    {
        cout << "Not Divided!\n";
    }
    return 0;
}
