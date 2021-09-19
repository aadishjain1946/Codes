#include <iostream>
using namespace std;
class Node
{
public:
    int id;
    float cgpa;
    string name;
    Node *next;
};
void insertLL(Node **head, Node *insertNode)
{
    Node *temp;
    if (*head == NULL || (*head)->id >= insertNode->id)
    {
        insertNode->next = *head;
        *head = insertNode;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL && temp->next->id < insertNode->id)
        {
            temp = temp->next;
        }
        insertNode->next = temp->next;
        temp->next = insertNode;
    }
}
Node *newNode(int id, float cgpa, string name)
{
    Node *new_node = new Node();
    new_node->id = id;
    new_node->cgpa = cgpa;
    new_node->name = name;
    new_node->next = NULL;

    return new_node;
}
void printLL(Node *head)
{
    Node *temp = head;
    cout << "Printing Linked list: \n";
    while (temp != NULL)
    {
        cout << "Id: " << temp->id << "\n";
        cout << "Name: " << temp->name << "\n";
        cout << "Cgpa: " << temp->cgpa << "\n";
        temp = temp->next;
    }
    cout << '\n';
}
int main()
{
    cout << "Enter input: \n";
    Node *head = NULL;
    Node *nNode = NULL;
    int id = -1;
    float cgpa;
    string name;
    while (id != 0)
    {
        cout << "Enter Id: ";
        cin >> id;
        if (id == 0)
        {
            break;
        }
        cout << "Enter Cgpa: ";
        cin >> cgpa;
        cout << "Enter name: ";
        cin>>name;
        nNode = newNode(id, cgpa, name);
        insertLL(&head, nNode);
    }
    printLL(head);
    return 0;
}
