#include <iostream>
using namespace std;
int *setup(int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    return a;
}
int main()
{
    return 0;
}
