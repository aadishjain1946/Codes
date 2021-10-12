#include <bits/stdc++.h>
using namespace std;

class Search
{
public:
    int *arr;

    Search(int a[], int n)
    {
        //Fill your code here
        this->arr = a;
    }

    int search(int n, int k)
    {
        //Fill your code here
        int start = 0, end = n - 1;
        int mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (this->arr[mid] == k)
            {
                return 1;
            }
            else if (k < this->arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return 0;
    }
};
