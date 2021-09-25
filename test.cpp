#include <iostream>
using namespace std;
int main()
{
    int A1[] = {0, 0, 1, 1};
    int A2[] = {0, 1, 0, 1};
    int n = 4;
    cout << "A1 \t A2 \t OUT\n";
    for (int i = 0; i < n; i++)
    {
        cout << A1[i] << " \t " << A2[i] << " \t " << ((A1[i] && A2[i]) || (A1[i] || A2[i])) << '\n';
    }
    return 0;
}
