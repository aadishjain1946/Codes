#include <iostream>
using namespace std;
class Object
{
    int x, y, z;

public:
    Object()
    {
        x = y = z = 0;
    }
    Object(int d)
    {
        x = y = z = d;
    }
    int x()
    {
        return x;
    }
    int y()
    {
        return y;
    }
    int z()
    {
        return z;
    }
};
template <typename Object>
void test()
{
    const Object x(2), y;
    if (x.x() == y.y())
    {
        Object z;
        if (Object::x() == z.z())
        {
            return;
        }
    }
}
int main(int argc, char **argv)
{
    test<Object>();
    return 0;
}
