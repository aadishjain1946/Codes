#include <iostream>
#include <string>
#include <vector>

using namespace std;

int binarySearch(vector<string> list, string searchItem);
void selectionSort(vector<string> &list);

int main()
{
    vector<string> nameList;
    string name;
    int index;

    cout << "Enter first names (zzz to end the input):" << endl;

    cin >> name;

    while (name != "zzz")
    {
        nameList.push_back(name);
        cin >> name;
    }

    cout << endl;

    selectionSort(nameList);

    cout << "Enter the name to be searched: ";
    cin >> name;
    cout << endl;

    index = binarySearch(nameList, name);

    if (index != -1)
        cout << name << " is found in the list." << endl;
    else
        cout << name << " is not in the list." << endl;

    return 0;
}

int binarySearch(vector<string> list, string searchItem)
{

    /*************************/
    /* Write your code here */
    /*************************/

} //end binarySearch

void selectionSort(vector<string> &list)
{
    int i, j, min_idx;
    int n = list.size();
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (list[j] < list[min_idx])
            {
                min_idx = j;
            }
        }
        string sudo = list[min_idx];
        list[min_idx] = list[i];
        list[i] = sudo;
    }
}