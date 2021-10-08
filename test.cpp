#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int marks[10] = {67, 34, 12, 98, 76, 9, 87, 81, 91, 23};
    float average = 0;
    for (int i = 0; i < 10; i++)
    {
        average += marks[i];
    }
    average /= 10;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < average)
        {
            count++;
        }
    }
    cout << "Count of students with below average performance: " << count << '\n';
    return 0;
}
