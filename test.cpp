#include <iostream>
#include <algorithm>
using namespace std;
bool comparator(int a, int b)
{
    return a > b;
}
int main()
{
    int n = 12;
    int arr[n], even[n], odd[n];
    bool flag = true;
    int j = 0, k = 0;
    cout << "Input: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
        if (arr[i] < 0)
        {
            flag = false;
        }
    }
    if (flag == false)
    {
        cout << "ERROR! Please input a positive whole number only.\n";
        exit(0);
    }
    sort(even, even + j);
    sort(odd, odd + j, comparator);
    cout << "Even: ";
    for (int i = 0; i < j; i++)
    {
        cout << even[i] << " ";
    }
    cout << "\nOdd: ";
    for (int i = 0; i < k; i++)
    {
        cout << odd[i] << " ";
    }
    return 0;
}
