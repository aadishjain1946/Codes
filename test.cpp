#include <iostream>
using namespace std;
struct Product
{
    string description; // Product description
    int partNum;        // Part number
    double cost;        // Product cost
};
int main()
{
    struct Product p1[100];
    for (int i = 0; i < 100; i++)
    {
        p1[i].description = "";
        p1[i].partNum = 0;
        p1[i].cost = 0;
        cout << p1[i].description << " " << p1[i].partNum << " " << p1[i].cost << '\n';
    }
    return 0;
}
