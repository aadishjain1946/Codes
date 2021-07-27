#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int arr[] = {60, 76, 45, 80, 62};
    int n = sizeof(arr) / sizeof(int);
    queue<int> srtQue, q1, q2;
    // using 2 extra queue to sort the given list of department
    for (int i = 0; i < n; i++)
    {
        if (srtQue.empty())
        {
            srtQue.push(arr[i]);
        }
        else
        {
            //storing all element less than arr[i] in q1
            while (srtQue.front() < arr[i])
            {
                q1.push(srtQue.front());
                srtQue.pop();
            }
            q1.push(arr[i]);
            //storing all remaining element in q2
            while (!srtQue.empty())
            {
                q2.push(srtQue.front());
                srtQue.pop();
            }
            //putting back all element in srtQue queue
            while (!q1.empty())
            {
                srtQue.push(q1.front());
                q1.pop();
            }
            while (!q2.empty())
            {
                srtQue.push(q2.front());
                q2.pop();
            }
        }
    }
    //printing output
    cout << "Output: ";
    while (!srtQue.empty())
    {
        cout << srtQue.front() << " ";
        srtQue.pop();
    }
}
