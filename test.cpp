#include <iostream>
#include <list>
using namespace std;

class Hash
{
    int BIB;
    list<int> *tableSize;

public:
    Hash(int V); // Constructor
    // inserts a key into hash table
    void insertItem(int x);
    // deletes a key from hash table
    void deleteItem(int key);
    // hash function to map values to key
    int hashFunction(int x)
    {
        return (x % BIB);
    }
    void displayHash();
};

Hash::Hash(int b)
{
    this->BIB = b;
    tableSize = new list<int>[BIB];
}

void Hash::insertItem(int key)
{
    int index = hashFunction(key);
    tableSize[index].push_back(key);
}

void Hash::deleteItem(int key)
{
    // get the hash index of key
    int index = hashFunction(key);
    // find the key in (index)th list
    list<int>::iterator i;
    for (i = tableSize[index].begin();
         i != tableSize[index].end(); i++)
    {
        if (*i == key)
            break;
    }
    // remove key if it is found in hash table,
    if (i != tableSize[index].end())
        tableSize[index].erase(i);
}

// function to display hash table
void Hash::displayHash()
{
    for (int i = 0; i < BIB; i++)
    {
        cout << i;
        for (auto x : tableSize[i])
            cout << " --> " << x;
        cout << endl;
    }
}

void find(int HT[], int tableSize)
{
    int num;
    cout << "Enter the BIB number : ";
    cin >> num;

    bool found = false;
    int i = 0;

    while (i < tableSize)
    {
        if (HT[i] == num)
        {
            cout << "BIB is found at index" << i << endl;
            found = true;
        }
        i++;
    }

    if (found == false)
    {
        cout << "BIB NOT FOUND" << endl;
    }
}
void displayHT(int HT[], int tableSize) //updated
{
}
int main()
{
    double a[] = {101, 102, 103, 104, 107, 111, 121, 217, 157, 185.};
    int n = sizeof(a) / sizeof(a[0]);
    double choice;
    int HT[100]; //updated
    int tableSize;

    // insert the keys into the hash table
    Hash h(13);
    for (int i = 0; i < n; i++)
        h.insertItem(a[i]);

    h.deleteItem(12);

    h.displayHash();

    do
    {
        cout << "\nACTION : ";
        cout << "\n1. Search for BIB \n2. Display hash table \n3. Exit" << endl;
        cout << "\nBIB has been stored inside, what do YOU want to do? : ";
        cin >> choice;
        cout << "\n";

        if (choice == 1)
        {
            find(HT, tableSize);
        }
        else if (choice == 2)
        {
            displayHT(HT, tableSize);
        }
        else if (choice == 3)
        {
            cout << "THANK YOU FOR USING ME";
            break;
        }
        else
        {
            cout << "WRONG CHOICE! PLEASE TRY AGAIN";
        }
    } while (choice != 3);

    return 0;
}
