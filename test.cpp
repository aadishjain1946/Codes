#include <iostream>
using namespace std;
class node
{
public:
    int num;
    node *next;
};
int main()
{
    node *head = new node();
    node *n1 = new node();
    node *n2 = new node();
    cout << "Enter 3 node: ";
    cin >> head->num;
    cin >> n1->num;
    cin >> n2->num;
    head->next = n1;
    n1->next = n2;
    n2->next = NULL;
    node *temp = head;
    cout << "Output: ";
    while (temp)
    {
        cout << temp->num << " ";
        temp = temp->next;
    }
    return 0;
}
