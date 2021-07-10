#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //creating and store choices in the two vectors
    vector<string> v1, v2;
    for (int i = 0; i < 4; i++)
    {
        string a = "v1-Choice #";
        string c = "v2-Choice #";
        char b = char(i) + '1';
        a += b;
        c += b;
        v1.push_back(a);
        v2.push_back(c);
    }
    int choice = 0;
    while (choice != 3)
    {
        //prompt user to select a vector and display it
        cout << "Select\n";
        cout << "1. Vector - 1\n";
        cout << "2. Vector - 2\n";
        cout << "3. Exit\n";
        cout << "Enter: ";
        cin >> choice;
        if (choice == 1)
        {
            vector<int> itemSelected;
            int chs;
            //prompt user to select 5 items
            for (int k = 0; k < 5; k++)
            {
                cout << "\nMenu\n";
                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << " " << v1[i] << '\n';
                }
                cout << "Enter: ";
                cin >> chs;
                itemSelected.push_back(chs - 1);
            }
            //printing all items
            cout << "\nSelected Items from Vector 1 are: ";
            for (int i = 0; i < itemSelected.size(); i++)
            {
                cout << v1[itemSelected[i]] << " ";
            }
            cout << '\n';
        }
        else if (choice == 2)
        {
            vector<int> itemSelected;
            int chs;
            for (int k = 0; k < 5; k++)
            {
                cout << "\nMenu\n";
                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << " " << v2[i] << '\n';
                }
                cout << "Enter: ";
                cin >> chs;
                itemSelected.push_back(chs - 1);
            }
            cout << "\nSelected Items from Vector 2 are: ";
            for (int i = 0; i < itemSelected.size(); i++)
            {
                cout << v2[itemSelected[i]] << ", ";
            }
            cout << '\n';
        }
        else
        {
            break;
        }
    }
}
