#include <iostream>
using namespace std;
float getMax(float a, float b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Largest value is " << getMax(getMax(a, b), getMax(c, d));
}
