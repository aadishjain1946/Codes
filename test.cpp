#include <iostream>
#include <vector>
using namespace std;
vector<int> vecout(int num)
{
    vector<int> ans;
    for (int i = 0; i <= 5; i++)
    {
        ans.push_back(num + i);
    }
    return ans;
}
int main()
{
    vector<int> ans = vecout(4);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
