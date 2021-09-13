#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n = 6;
    string strArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> strArr[i];
    }
    unordered_map<string, vector<int>> myMap;
    for (int i = 0; i < n; i++)
    {
        string temp = strArr[i];
        sort(temp.begin(), temp.end());
        if (myMap.count(temp) == 0)
        {
            vector<int> sudo;
            sudo.push_back(i);
            myMap[temp] = sudo;
        }
        else
        {
            myMap[temp].push_back(i);
        }
    }
    for (auto i : myMap)
    {
        vector<int> temp = i.second;
        for (int j = 0; j < temp.size(); j++)
        {
            cout << strArr[temp[j]] << " ";
        }
        cout << '\n';
    }
    return 0;
}
