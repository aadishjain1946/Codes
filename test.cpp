#include <iostream>
#include <fstream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *first;
int getOddSum(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    if ((head->data) % 2 == 0)
    {
        return getOddSum(head->next);
    }
    else
    {
        return getOddSum(head->next) + head->data;
    }
}
int main()
{
    Node *second = new Node(), *third = new Node(), *fouth = new Node();
    first = new Node();
    first->data = 1;
    second->data = 2;
    third->data = 3;
    fouth->data = 5;
    first->next = second;
    second->next = third;
    third->next = fouth;
    fouth->next = NULL;
    int oddSum = getOddSum(first);
    cout << "Summ of Odd elements: " << oddSum << '\n';
}
