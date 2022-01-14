#include <iostream>
using namespace std;
struct paints
{
    int id, weight, price;
    string name;
};
void printPaints(struct paints f)
{
    cout << "Id: " << f.id << "\n";
    cout << "name: " << f.name << "\n";
    cout << "weight: " << f.weight << "\n";
    cout << "price: " << f.price << "\n";
}
void printHighighestWeightedPaints(struct paints f[], int n)
{
    int minIndex = -1, minWeight = -1;
    for (int i = 0; i < n; i++)
    {
        if (minWeight < f[i].weight)
        {
            minIndex = i;
            minWeight = f[i].weight;
        }
    }
    printPaints(f[minIndex]);
}
int main()
{
    struct paints f[4];
    cout << "Enter values for 4 paints:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "\nEnter " << i + 1 << " furniture.\n";
        cout << "Enter Id: ";
        cin >> f[i].id;
        cout << "Enter name: ";
        cin >> f[i].name;
        cout << "Enter weight: ";
        cin >> f[i].weight;
        cout << "Enter price: ";
        cin >> f[i].price;
    }
    cout << "\nHighest weighted furniture: \n";
    printHighighestWeightedPaints(f, 4);
    return 0;
}
