#include <iostream>
using namespace std;
// node class to store doubly linked list node
class node
{
public:
    int data;
    node *next, *prev;
    //constructor to initialize object
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
node *head = NULL, *tail = NULL;
//function to insert data into linked list
void insert(int data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}
//function to count number of odd elements in the linked list
int countOdd()
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data % 2 == 1)
        {
            count++;
        }
        temp = temp->next;
    }
    return count;
}
//function to print even number elements in reverse order
void printEvenReverse()
{
    node *temp = tail;
    cout << "Nodes with even number in reverse order: ";
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            cout << temp->data << " ";
        }
        temp = temp->prev;
    }
    cout << '\n';
}
int main()
{
    insert(2);
    insert(3);
    insert(4);
    insert(3);
    insert(5);
    insert(7);
    cout << "Total odd elements in doubly linked list: " << countOdd() << '\n';
    printEvenReverse();
}