#include <iostream>
using namespace std;
int maxContigiousSum(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    int cMax = arr[0], mxVal = arr[0], cMin = arr[0], mnVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        cMax = max(cMax + arr[i], arr[i]);
        mxVal = max(mxVal, cMax);
        cMin = min(cMin + arr[i], arr[i]);
        mnVal = min(mnVal, cMin);
    }
    if (mnVal == ans)
    {
        return mxVal;
    }
    return max(mxVal, ans - mnVal);
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the element of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum contigious sum of array is " << maxContigiousSum(arr, size) << endl;
    return 0;
}
