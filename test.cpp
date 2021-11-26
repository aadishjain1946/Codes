#include <iostream>
using namespace std;
int main()
{
    string referenceStr = "abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba";
    cout << "Enter a letter: ";
    char inputCh;
    cin >> inputCh;
    cout << "Output: ";
    bool isFound = false;
    for (int i = 0; i < referenceStr.length(); i++)
    {
        if (!isFound)
            cout << referenceStr[i];

        if (referenceStr[i] == inputCh)
        {
            isFound = !isFound;
        }
    }
}