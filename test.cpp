#include <iostream>
using namespace std;

int countSwaps(int inputArray[], int n)
{
    int result = 0;
    int zeros = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (inputArray[i] == 0)
            zeros += 1;
        else
            result += zeros;
    }
    return result;
}

int main()
{
    cout << "Input:\n";
    int n;
    cin >> n;
    int *inputArray = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inputArray[i];
    }
    cout << "Output:\n";
    cout << countSwaps(inputArray, n);
    return 0;
}
