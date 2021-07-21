#include <iostream>
#include <map>
using namespace std;
int main()
{
    //prompt user to enter input
    cout << "Input\n";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //declaring a hasmap to get unique element from the given array
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]] += 1;
    }
    //printing output
    cout << "Output\n";
    int index = 1;
    for (auto i : freq)
    {
        cout << index << " " << i.first << "\n";
        index++;
    }
}
