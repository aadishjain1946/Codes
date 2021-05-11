#ifndef DB_H
#define DB_H
#include <iostream>
#include "node.cpp"
using namespace std;
//db class to store node in stack
class DB
{
private:
    Node *front;
    int size;

public:
    DB();
    ~DB();
    void push(int);
    void pop();
    void display(ostream &);
};
#endif