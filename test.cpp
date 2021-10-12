#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include "Search.cpp"
using namespace std;
int main()
{
    //Fill your code here
    int n, k;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    Search s1(arr, n);
    if (s1.search(n, k))
    {
        cout << "Element found\n";
    }
    else
    {
        cout << "Element not found\n";
    }
}
