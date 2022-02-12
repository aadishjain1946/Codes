#include <iostream>
using namespace std;
void printTable(int num)
{
    cout << "Table " << num << '\n';
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << '\n';
    }
}
int main()
{
    int n;
    cout << "Enter a number to print multiplication table: ";
    cin >> n;
    printTable(n);
    return 0;
}
