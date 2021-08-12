#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //creating max priority queue
    priority_queue<int> maxpq;
    //storing some integers in the priority queue
    maxpq.push(10);
    maxpq.push(20);
    maxpq.push(30);
    maxpq.push(40);
    //displaying the top element
    while (!maxpq.empty())
    {
        cout << "Top Element: " << maxpq.top() << '\n';
        cout << "Deleting top element!!\n";
        maxpq.pop();
    }
}
