#include <iostream>
using namespace std;
class box
{
    int height, width, depth;

public:
    box(int height, int width, int depth)
    {
        this->height = height;
        this->width = width;
        this->depth = depth;
    }
    int volume()
    {
        return height * width * depth;
    }
};
int main()
{
    box b1(10, 20, 30);
    box b2(4, 7, 9);
    cout << "Volume of box 1: " << b1.volume() << '\n';
    cout << "Volume of box 2: " << b2.volume();
    return 0;
}
