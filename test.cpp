#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex() {}
    complex(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    complex operator-(complex c1)
    {
        complex result(this->x - c1.x, this->y - c1.y);
        return result;
    }
    void print()
    {
        cout << this->x << " + (" << this->y << ")i\n";
    }
};
int main()
{
    complex c1(50, 4), c2(18, 10);
    cout << "Complex 1: ";
    c1.print();
    cout << "Complex 2: ";
    c2.print();
    complex c3 = c1 - c2;
    cout << "Complex c1 - c2 = ";
    c3.print();
    return 0;
}
