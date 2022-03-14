#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    switch (i)
    {
    case 1:
        cout << "Hello\n";
        break;
    case 2:
        cout << "Bye\n";
        break;
    default:
        cout << "Good bye.";
        break;
    }
    return 0;
}
