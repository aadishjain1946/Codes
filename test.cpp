#include <iostream>
#define MAX 9999
#define MIN -9999
#define ROW 100
#define COL 500
using namespace std;
//function to print array
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    //declaring array of give dimensions
    int array[ROW][COL];
    //storing random numbers in the above array
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            array[i][j] = (MIN + rand() % (MAX - MIN + 1));
        }
    }
    //declaring positive, negative, and zeros array to store respective numbers
    int positive[COL * ROW], negative[COL * ROW], zeros[COL * ROW];
    int p = 0, n = 0, z = 0;
    //processing each element one by one
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (array[i][j] > 0)
            {
                positive[p] = array[i][j];
                p++;
            }
            else if (array[i][j] < 0)
            {
                negative[n] = array[i][j];
                n++;
            }
            else
            {
                zeros[z] = array[i][j];
                z++;
            }
        }
    }
    //printing all the arrays
    cout << "\nPrinting positive array: ";
    printArray(positive, p);
    cout << "\n\nPrinting negative array: ";
    printArray(negative, n);
    cout << "\n\nPrinting zeros array: ";
    printArray(zeros, z);
}