#include <iostream>
struct Node
{
    int data;
    Node *next;
    Node();
    Node(int, Node *);
    ~Node();
};