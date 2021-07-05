#include <iostream>
using namespace std;
struct Node
{
    string name, gender;
    int age;
    Node *next;

} * head, *node, *tmp;

void displayList(Node *node)
{
    while (node != NULL)
    {
        cout << "Name: " << node->name << endl;
        cout << "Age: " << node->age << endl;
        cout << "Gender: " << node->gender << endl;
        node = node->next;
    }
}

//Insert 5 nodes to the linked list with the following data items:
// name: Sam
// age: 16
// gender: Female

// name: Aristotle
// age: 24
// gender: Male

// name: Bernadette
// age: 22
// gender: Fale

// name: Andy
// age: 19
// gender: Female
//
// name: Tifany
// age: 19
// gender: Female

//Procedures:
//1. Use the data items as stated above.
//2. Supply the missing codes by providing a way of inserting the nodes to the linked list
// using the data items provided above.
//3. DO NOT change the display function and the structure declaration, it is done for you.

int main()
{
    system("clear");

    //insert code here, please strictly put your codes here.
    head = new Node();
    head->name = "Sam";
    head->age = 16;
    head->gender = "Female";
    Node *n1 = new Node();
    n1->name = "Aristotle";
    n1->age = 24;
    n1->gender = "Male";
    head->next = n1;
    Node *n2 = new Node();
    n2->name = "Bernadette";
    n2->age = 22;
    n2->gender = "Fale";
    n1->next = n2;
    Node *n3 = new Node();
    n3->name = "Andy";
    n3->age = 19;
    n3->gender = "Female";
    n2->next = n3;
    Node *n4 = new Node();
    n4->name = "Tifany";
    n4->age = 19;
    n4->gender = "Female";
    n3->next = n4;
    n4->next = NULL;

    //Do not change this part:
    node = head;
    displayList(node);

    return 0;
}
