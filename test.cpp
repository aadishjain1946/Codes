#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string data;
    ifstream fileObject;
    fileObject.open("values.txt");
    int *array;
    cout << "Output:\n";
    while (fileObject && !fileObject.eof())
    {
        // rad data from text file
        getline(fileObject, data);
        string sudo = "";
        int k = 0;
        int maxEle = -1;
        for (int i = 0; i < data.length(); i++)
        {
            if (data[i] == ';')
            {
                int n = stoi(sudo);
                array = new int[n];
                sudo = "";
                continue;
            }
            else if (data[i] == ',')
            {
                int ele = stoi(sudo);
                maxEle = max(maxEle, ele);
                array[k] = ele;
                k++;
                sudo = "";
                continue;
            }
            sudo += data[i];
        }
        int ele = stoi(sudo);
        maxEle = max(maxEle, ele);
        array[k] = ele;
        k++;
        //processing array eleement based on max element in array
        if (maxEle % 2 == 1)
        {
            for (int i = 0; i < k; i++)
            {
                array[i] = array[i] * array[i];
            }
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                array[i] = maxEle * array[i];
            }
        }
        cout << array[0];
        for (int i = 1; i < k; i++)
        {
            cout << "," << array[i];
        }
        cout << '\n';
    }
    fileObject.close();
}