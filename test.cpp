#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int temp[10];
    cout << "Enter temprature for the last 10 days: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> temp[i];
    }
    cout << "Entered temp in degree celcius or Fahrenheit? ";
    char tp;
    cin >> tp;
    double averageTemp = 0;
    for (int i = 0; i < 10; i++)
    {
        averageTemp += temp[i];
    }
    averageTemp /= 10;
    if (tp == 'c')
    {
        cout << "Average temprature in celcius: " << averageTemp << '\n';
    }
    else
    {
        double cel = (5 / 9) * (averageTemp - 32);
        cout << "Average temprature in celcius: " << cel << '\n';
    }
    return 0;
}
