#include <iostream>
using namespace std;
int main()
{
    int n;
    //prompt user to enter input
    cout << "Input: ";
    cin >> n;
    long long int ans = 0;
    //using for loop to calculate answer
    for (int i = 1; i <= n; i++)
    {
        ans += i * i;
    }
    //printing output
    cout << "Output: " << ans << '\n';
}
