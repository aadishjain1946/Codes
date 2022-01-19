#include <iostream>
using namespace std;
void printEvenAndSum(int num, int &sum)
{
    if (num % 2 == 0)
    {
        goto Even;
    }
    else
    {
        return;
    }
Even:
    cout << num << " ";
    sum += num;
}
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int sum = 0;
    cout << "Even natural number: ";
    for (int i = 0; i < n; i++)
    {
        printEvenAndSum(i, sum);
    }
    cout << "\nSum of even natural number: " << sum << '\n';
    return 0;
}
