#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    int priority;
    Node *next;
    Node(int data, int priority)
    {
        this->data = data;
        this->priority = priority;
        this->next = NULL;
    }
};
void deQueue(Node **front)
{
    Node *sudo = *front;
    (*front) = (*front)->next;
    free(sudo);
}
void enQueue(Node **front, int data, int priority)
{
    Node *temp = (*front);
    Node *sudo = new Node(data, priority);
    if ((*front)->priority > priority)
    {
        sudo->next = *front;
        (*front) = sudo;
    }
    else
    {
        while (temp->next != NULL && temp->next->priority < priority)
        {
            temp = temp->next;
        }
        sudo->next = temp->next;
        temp->next = sudo;
    }
}
int main()
{
    return 0;
}
