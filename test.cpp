#include <iostream>
using namespace std;
int main()
{
    cout << "Input:\n";
    //prompt user to enter input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //calculating result by comparing all pairs
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int sum = arr[i] + arr[i + 1];
        int cnt = 1;
        for (int j = i + 2; j < n - i;)
        {
            if (arr[j] + arr[j + 1] == sum)
            {
                cnt++;
                j += 2;
            }
            else
            {
                j++;
            }
        }
        ans = max(ans, cnt);
    }
    //printing output
    cout << "Output: " << ans << '\n';
}
