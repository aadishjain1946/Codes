#include <iostream>

using namespace std;

class X

{

    int m;

public:
    X() : m(10)

    {
    }

    X(int mm) : m(mm)

    {
    }

    int getm()

    {

        return m;
    }
};

class Y : public X

{

    int n;

public:
    Y(int nn) : n(nn) {}

    int getn() { return n; }
};

int main()

{

    Y yobj(100);

    cout << yobj.getm() << " " << yobj.getn() << endl;
}