#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int angle1, angle2, angle3;
    cout << "Enter 1st angle of the triangle: ";
    cin >> angle1;
    cout << "Enter 2nd angle of the triangle: ";
    cin >> angle2;
    angle3 = 180 - angle1 - angle2;
    cout << "The 3rd angle of the triangle is: " << angle3;
    return 0;
}
