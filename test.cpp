#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'ch' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
int mchin()
{
    vector<string> inputWord(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> inputWord[i];
    }
    sort(inputWord.begin(), inputWord.end());
    for (int i = 0; i < 10; i++)
    {
        if (checkVowel(inputWord[i][0]) || checkVowel(inputWord[i][inputWord[i].length() - 1]))
        {
            continue;
        }
        cout << inputWord[i] << '\n';
    }
}
