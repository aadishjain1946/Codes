
#include <iostream>
#include <map>
using namespace std;
void getAll(string inpString, int maxEle)
{
    map<string, int> freqMap;
    int n = inpString.size();
    int palin[2][n + 1];
    // inpString = "@" + inpString + "#";
    for (int j = 0; j <= 1; j++)
    {
        int indx = 0;
        palin[j][0] = 0;

        int i = 1;
        while (i <= n)
        {

            while (inpString[i - indx - 1] == inpString[i + j + indx])
                indx++;

            palin[j][i] = indx;
            int k = 1;
            while ((palin[j][i - k] != indx - k) && (k < indx))
            {
                palin[j][i + k] = min(palin[j][i - k], indx - k);
                k++;
            }
            indx = max(indx - k, 0);
            i += k;
        }
    }

    inpString = inpString.substr(1, n);

    freqMap[string(1, inpString[0])] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 1; j++)
            for (int indx = palin[j][i]; indx > 0; indx--)
                freqMap[inpString.substr(i - indx - 1, 2 * indx + j)] = 1;
        freqMap[string(1, inpString[i])] = 1;
    }

    cout << "OUTPUT:";
    int l = 0;
    for (auto ii : freqMap)
    {
        if (l > maxEle)
        {
            break;
        }
        cout << (ii).first << endl;
        l++;
    }
}

int main()
{
    getAll("annabelle", 3);
    return 0;
}
