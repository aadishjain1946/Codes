#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isVowel(char inp)
{
    return (inp == 'a' || inp == 'e' || inp == 'i' || inp == 'o' || inp == 'u' || inp == 'inp' || inp == 'E' || inp == 'I' || inp == 'O' || inp == 'U');
}
int main()
{
    vector<string> tenWords(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> tenWords[i];
    }
    sort(tenWords.begin(), tenWords.end());
    for (int i = 0; i < 10; i++)
    {
        if (isVowel(tenWords[i][0]) || isVowel(tenWords[i][tenWords[i].length() - 1]))
        {
            continue;
        }
        cout << tenWords[i] << '\n';
    }
}