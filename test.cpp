#include <iostream>
#include <vector>
#include <set>
using namespace std;
void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
void calculateUnion(vector<int> a, set<int> &numbers)
{
    for (int i = 0; i < a.size(); i++)
    {
        numbers.insert(a[i]);
    }
}
int main()
{
    vector<int> a, b, c;
    set<int> numbers;
    //creating set
    for (int i = 0; i < 50; i++)
    {
        if (i % 3 == 0)
        {
            a.push_back(i);
        }
    }
    for (int i = 0; i < 40; i++)
    {
        if (i % 4 == 0)
        {
            b.push_back(i);
        }
    }
    for (int i = 0; i < 45; i++)
    {
        if (i % 6 == 0)
        {
            c.push_back(i);
        }
    }
    cout << "Set A: ";
    print(a);
    cout << "\nSet B: ";
    print(b);
    cout << "\nSet C: ";
    print(c);
    //a) AUBUC
    calculateUnion(a, numbers);
    calculateUnion(b, numbers);
    calculateUnion(c, numbers);
    cout << "\na) AUBUC: ";
    for (auto i : numbers)
    {
        cout << i << " ";
    }
    return 0;
}
