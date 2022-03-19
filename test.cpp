#include <iostream>
using namespace std;
bool no_zeros(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            count++;
            i--;
        }
    }
    cout << "Output: ";
    for (int i = 0; i < n - count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    return ((count > 0) ? true : false);
}
int main()
{
    int arr[] = {5, 4, 0, 0, 1, 2, 3, 0, 6, 7, 0, 8, 0, 9};
    bool out = no_zeros(arr, 14);
    cout << ((out) ? "True" : "False");
    return 0;
}
