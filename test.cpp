#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4;
    cout << "Enter 4 numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;
    int sum = n1 + n2 + n3 + n4;
    int diff = n1 - n2 - n3 - n4;
    int product = n1 * n2 * n3 * n4;
    int quotient = n1 / n2;
    quotient /= n3;
    quotient /= n4;
    cout << "Sum of 4 numbers: " << sum << '\n';
    cout << "Difference of 4 numbers: " << diff << '\n';
    cout << "Product of 4 numbers: " << product << '\n';
    cout << "Quotient of 4 numbers: " << quotient << '\n';
    return 0;
}
