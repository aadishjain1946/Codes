#include <iostream>
using namespace std;
void replactCharInString(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'c')
        {
            s[i] = 'a' + 1 + (std::rand() % (26 - 1 + 1));
        }
    }
    cout << "String " << s << " converted to : " << s << '\n';
}
int main()
{
    replactCharInString("aabbcc");
    return 0;
}
