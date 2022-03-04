#include <iostream>
#include <vector>
using namespace std;
class calculations
{
public:
    void factorial(int n)
    {
        int result = n;
        for (int i = n - 1; i > 0; i--)
        {
            result *= i;
        }
        cout << "Fact of " << n << " " << result << "\n";
    }
    void print(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            factorial(arr[i]);
        }
    }
};
int main()
{
    calculations c1;
    int arr[] = {1, 2, 3, 4, 5};
    c1.print(arr, 5);
    return 0;
}
