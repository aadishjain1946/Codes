#include <bits/stdc++.h>
using namespace std;
int main()
{
    //prompt user to enter integers
    cout << "Odds and Evens\n";
    int input = -1, even = 0, odd = 0;
    while (input != 0)
    {
        cout << "Enter an integer: ";
        cin >> input;
        if (input == 0)
        {
            break;
        }
        //updating odd & even integers count
        if (input % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "You entered " << odd << " odds and " << even << " even.\n";
}
