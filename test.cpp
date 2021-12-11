#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int size = 100;
    double arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    double meanOfElements = 0;
    for (int i = 0; i < size; i++)
    {
        meanOfElements += arr[i];
    }
    meanOfElements /= size;
    double standardDeviationOfElements = 0;
    for (int i = 0; i < size; i++)
    {
        standardDeviationOfElements += (arr[i] - meanOfElements) * (arr[i] - meanOfElements);
    }
    standardDeviationOfElements = sqrt(standardDeviationOfElements);
    cout << "Mean: " << meanOfElements << " "
         << "Standard Deviation: " << standardDeviationOfElements << '\n';
    return 0;
}
