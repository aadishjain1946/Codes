#include <iostream>
using namespace std;
int main()
{
    //prompt user to enter an integer
    int n;
    cout << "Enter an Integer: ";
    cin >> n;
    //shifting 2 bit to the left from right
    for (int i = 0; i < 2; i++)
    {
        n = n >> 1;
    }
    //getting the 3rd bit that is present at last now
    int ans = n & 1;
    //printing result
    cout << "3rd bit of the Integer: " << ans<< "\n";
}
