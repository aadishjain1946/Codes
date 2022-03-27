#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Input: ";
    cin >> str;
    string output = "";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            output += str[i];
        }
    }
    cout << "Output: " << output;
    return 0;
}
