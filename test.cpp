#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a character and the side length: ";
    string str;
    cin >> str;
    for (int i = '0'; i < str[1]; i++)
    {
        for (int j = '0'; j < str[1]; j++)
        {
            cout << str[0];
        }
        cout << '\n';
    }
    return 0;
}
