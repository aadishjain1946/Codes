#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Enter length of cube: ";
    cin >> l;
    float r = l / 2;
    float residualVolume = (l * l * l) + ((4 / 3) * 3.14 * r * r * r);
    cout << "Residual Volume: " << residualVolume << '\n';
    return 0;
}
