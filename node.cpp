#include <iostream>
#include "node.h"
using namespace std;
//default constructor
Node::Node()
{
    this->data = -1;
    this->next = NULL;
    cout << " \t"
         << "Node() : " << this << '\n';
}
//parametrized
Node::Node(int data, Node *ptr)
{
    this->data = data;
    this->next = NULL;
    cout << " \t"
         << "Node(int,Node*) : " << this << '\n';
}
//destructor
Node::~Node()
{
    cout << " \t"
         << "~Node() : " << this << '\n';
}
