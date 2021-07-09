#include <iostream>
using namespace std;
//bubble sort function to sort the given array using bubble sort algorithm
void bubble_Sort(string arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                string sudo = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = sudo;
            }
        }
    }
}
int main()
{
    string arr[] = {"QR", "XH", "ÇW", "ÖS", "ÖJ", "ŞA", "ÜĞ", "QT", "ÇQ"};
    int n = sizeof(arr) / sizeof(int);
    cout << "Input: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    bubble_Sort(arr, n);
    cout << "\nOutput: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
