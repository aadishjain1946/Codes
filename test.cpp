#include <iostream>
using namespace std;
bool under_age(int age, int limit = 21)
{
    if (age < limit)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool too_young = under_age(30, 20);
    cout << "too_young: " << ((too_young) ? "True" : "False");
    return 0;
}
