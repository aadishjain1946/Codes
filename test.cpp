#include <iostream>
using namespace std;
int main()
{
    int numOfTestCase;
    cin >> numOfTestCase;
    while ((numOfTestCase--) > 0)
    {
        int n;
        cin >> n;
        int M;
        cin >> M;
        int *GtrNum = new int[n];
        for (int i = 0; i < n; i++)
        {
            GtrNum[i] = 0;
        }
        for (int i = 0; i < M; i++)
        {
            int rnd;
            cin >> rnd;
            int cnt = 1;
            for (int l = rnd - 1; l >= 0; l--)
            {
                GtrNum[l] = max(GtrNum[l], cnt);
                cnt++;
            }
            cnt = 1;
            for (int o = rnd + 1; o < n; o++)
            {
                GtrNum[o] = max(GtrNum[o], cnt);
                cnt++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << GtrNum[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
