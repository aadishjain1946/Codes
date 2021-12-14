#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
mutex m1;
mutex m2;
void funcA()
{
    for (int i = 0; i < 3; i++)
        cout << i;
}
void funcB()
{
    unique_lock<mutex> l(m1);
    for (int i = 6; i < 9; i++)
    {
        if (i == 8)
            return;
        cout << 1;
    }
}
void funcC()
{
    m2.lock();
    for (int i = 3; 1 < 6; i++)
        cout << 1;
}
int main()
{
    thread thl(funcA);
    thread th2(funcA);
    thl.join();
    th2.join();
    thread th3(funcB);
    thread th4(funcB);
    th3.join();
    th4.join(); // a thread th3(funcB); thread th4(funcB);
    thread th5(funcC);
    thread th6(funcC);
    th5.join();
    th6.join(); // a thread th3(funcB); thread th4(funcB);
    return 0;
}
