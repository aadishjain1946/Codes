#include <iostream>
#include <math.h>
using namespace std;
//function to check if the given num is a perfect square or not
bool checkPerfctSqr(int num)
{
    int squr = sqrt(num);
    return (squr * squr == num);
}
//function to check if the given number is fibonacci number or not
bool checkFib(int num)
{
    return checkPerfctSqr(5 * num * num + 4) || checkPerfctSqr(5 * num * num - 4);
}
int main()
{
    //prompt user to enter an integer
    int num;
    cout << "Enter a number: ";
    cin >> num;
    //prinit the result
    if (checkFib(num))
    {
        cout << num << " is a Fibonacci Number \n";
    }
    else
    {
        cout << num << " is a not Fibonacci Number \n";
    }
    return 0;
}
