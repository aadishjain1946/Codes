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
node *insert(node *head, int data, int index)
{
    if (index == 0)
    {
        node *newNode = new node(data);
        newNode->next = head;
        return newNode;
    }
    if (head == NULL)
    {
        node *newNode = new node(data);
        return newNode;
    }
    head->next = insert(head->next, data, index - 1);
    return head;
}
node *deleteData(node *head, int data)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == data)
    {
        return head->next;
    }
    head->next = deleteData(head->next, data);
    return head;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << '\n';
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    cout << "Linked List: ";
    print(head);
    head = insert(head, 50, 2);
    cout << "Linked List: ";
    print(head);
    head = insert(head, 60, 3);
    cout << "Linked List: ";
    print(head);
    head = deleteData(head, 50);
    cout << "Linked List: ";
    print(head);
    return 0;
}
