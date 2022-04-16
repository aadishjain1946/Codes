#include <iostream>
using namespace std;
int main()
{
    char grade;
    float sum = 0.0;
    float count = 0.0;
    cout << "Input: \n";
    do
    {
        cin >> grade;
        switch (grade)
        {
        case 'A':
            sum += 4.0;
            count++;
            break;
        case 'B':
            sum += 3.0;
            count++;
            break;
        case 'C':
            sum += 2.0;
            count++;
            break;
        case 'D':
            sum += 1.0;
            count++;
            break;
        case 'F':
            sum += 0.0;
            count++;
            break;
        default:
            break;
        }
    } while (grade >= 'A' && grade <= 'F' && grade != 'E');
    float average = int(sum / count);
    cout << "Output: ";
    if (average == 4)
    {
        cout << "A";
    }
    else if (average == 3)
    {
        cout << "B";
    }
    else if (average == 2)
    {
        cout << "C";
    }
    else if (average == 1)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
    return 0;
}
