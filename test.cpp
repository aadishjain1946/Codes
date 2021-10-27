#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        unordered_set<int> myset;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            myset.insert(arr[i]);
        }
        int outstanding = 0, average = 0;
        for (auto i : myset)
        {
            outstanding = max(outstanding, i);
        }
        average = n - outstanding;
        if (outstanding > n || outstanding < 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << average << '\n';
        }
    }
    return 0;
}
