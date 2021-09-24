#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *create()
{
    cout << "Enter an element: ";
    int num;
    cin >> num;
    node *newnode = new node(num);
    if (num == -999)
    {
        return newnode;
    }
    node *temp = create();
    newnode->next = temp;
    return newnode;
}
void print(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    print(head->next);
}
int count(node *head)
{
    if (head->data == -999)
    {
        return 0;
    }
    return count(head->next) + 1;
}
int main()
{
    cout << "Creating linked list:\n";
    node *head = create();
    cout << "\nPrinting the elements of List: ";
    print(head);
    cout << "\nCount of element in the linked list: " << count(head);
    return 0;
}
