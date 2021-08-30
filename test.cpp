#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    char result = str[0];
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] < result)
        {
            result = str[i];
        }
    }
    cout << "Output: " << result << " with ASCII value: " << (int)result << '\n';
    return 0;
}
