#include <iostream>
#include "DB.h"
using namespace std;

//default constructor to declare variable
DB::DB()
{
    this->front = NULL;
    this->size = 0;
    cout << "DB() : " << this << '\n';
}
//function to push element into stack
void DB::push(int data)
{
    Node *sudo = new Node(data, NULL);
    if (!sudo)
    {
        return;
    }
    sudo->data = data;
    sudo->next = this->front;
    this->front = sudo;
    cout << "DB()::push(" << data << ")" << '\n';
}
//function to pop element from stack
void DB::pop()
{
    Node *sudo;
    if (this->front == NULL)
    {
        cout << "Underflow\n";
        return;
    }
    else
    {
        sudo = this->front;
        this->front = this->front->next;
        sudo->next = NULL;
        cout << "DB()::pop(" << sudo << ")" << '\n';
        free(sudo);
    }
}
//function to display element of stack
void DB::display(ostream &os)
{
    Node *sudo;
    if (this->front == NULL)
    {
        return;
    }
    else
    {
        sudo = this->front;
        while (sudo != NULL)
        {
            os << sudo->data << " ";
            sudo = sudo->next;
        }
    }
    os << '\n';
}
//destructor to clear all memory of stack
DB::~DB()
{
    Node *sudo = this->front;
    while (sudo != NULL)
    {
        Node *temp = sudo;
        sudo = sudo->next;
        delete temp;
    }
    cout << "~DB() : " << this << '\n';
}