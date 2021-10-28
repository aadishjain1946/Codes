#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        stack<int> mystack;
        int maxArea = 0;
        int i = 0;
        for (; i < n;)
        {
            if (mystack.empty() || arr[mystack.top()] <= arr[i])
            {
                mystack.push(i);
                i++;
            }
            else
            {
                int top = mystack.top();
                mystack.pop();
                int area = 0;
                if (mystack.empty())
                {
                    area = arr[top] * i;
                }
                else
                {
                    area = arr[top] * (i - mystack.top() - 1);
                }
                maxArea = max(maxArea, area);
            }
        }
        while (!mystack.empty())
        {
            int top = mystack.top();
            mystack.pop();
            int area = 0;
            if (mystack.empty())
            {
                area = arr[top] * i;
            }
            else
            {
                area = arr[top] * (i - mystack.top() - 1);
            }
            maxArea = max(maxArea, area);
        }
        cout << maxArea << '\n';
    }
    return 0;
}
