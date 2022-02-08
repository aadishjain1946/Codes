#include <iostream>
#include <math.h>
using namespace std;
void printBin(int value)
{
    int maxBits = 31;
    if (value < 0)
    {
        cout << 1;
        value *= -1;
    }
    for (int index = maxBits; index >= 0; index--)
    {
        int sudo = value >> index;
        cout << (sudo & 1);
    }
}
int main()
{
    cout << "64: ";
    printBin(64);
    cout << '\n';
    cout << "0: ";
    printBin(0);
    cout << '\n';
    cout << "-64: ";
    printBin(-64);
    cout << '\n';
    return 0;
}
