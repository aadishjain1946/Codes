#include <iostream>
#include <vector>
using namespace std;
vector<string> returnNames(vector<string> &names)
{
    vector<string> nameCopy;
    for (int i = 0; i < names.size(); i++)
    {
        nameCopy.push_back(names[i]);
    }
    return nameCopy;
}
int main()
{
    vector<string> names, nameCopy;
    nameCopy = returnNames(names);
}
