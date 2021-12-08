#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    cout << "Enter text: ";
    getline(cin, input);
    string output = "";
    string word = "";
    int i = 0;
    for (; i < input.length(); i++)
    {
        if (!isalnum(input[i]))
        {
            if (word[0] == toupper(word[0]))
            {
                output += word + input[i];
            }
            else
            {
                output += input[i];
            }
            word = "";
        }
        else
        {
            word += input[i];
        }
    }
    if (word[0] == toupper(word[0]))
    {
        output += word + input[i];
    }
    else
    {
        output += input[i];
    }
    cout << "Output: " << output << '\n';
    return 0;
}
