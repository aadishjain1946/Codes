
#include <bits/stdc++.h>

using namespace std;
//node class to create a node of doubly linked list
class Node
{
public:
    int data;
    Node *prev, *next;
    Node()
    {
        this->prev = this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = this->next = NULL;
    }
};
//queue class to implement queue using doubly linked list
class queueClass
{
    Node *front;
    Node *rear;
    int queueSize;

public:
    queueClass()
    {
        front = rear = NULL;
        queueSize = 0;
    }
    //function to return size of queue
    int getQueueSize()
    {
        return queueSize;
    }
    //function to insert element in a queue
    void intertQueue(int data)
    {
        Node *curr = new Node(data);
        if (curr == NULL)
            cout << "Queue OverFlow\n";
        else
        {
            if (rear == NULL)
                front = rear = curr;

            else
            {
                curr->prev = rear;
                rear->next = curr;
                rear = curr;
            }

            queueSize++;
        }
    }
    //function to delete element from queue
    void deleteQueue()
    {
        if (getQueueSize() == 0)
            cout << "Queue UnderFlow\n";

        else
        {
            Node *temp = front;
            front = front->next;

            if (front == NULL)
                rear = NULL;
            else
                front->prev = NULL;
            free(temp);

            queueSize--;
        }
    }
    //function to print element in a queue
    void printQueue()
    {

        struct Node *sudo = front;

        cout << sudo->data << " ";
        while (sudo->next != NULL)
        {
            cout << sudo->next->data << " ";
            sudo = sudo->next;
        }
        cout << "\n";
    }
};
//implementing stack class using doubly linked list
class stackClass
{
public:
    Node *top;
    stackClass()
    {
        this->top = NULL;
    }
    //function to check if stack is empty or not
    bool isStackempty()
    {
        return top->prev == NULL;
    }
    //function to insert element in a stack
    void insertStack(int data)
    {

        struct Node *curr;
        curr = new Node();

        if (!curr)
        {
            cout << "Heap Overflow" << endl;
        }

        curr->prev = top;
        curr->data = data;
        curr->next = NULL;

        top = curr;
    }
    //function to delete element from a tsack
    void deleteStack()
    {

        if (isStackempty())
        {
            cout << "Stack Underflow";
            exit(1);
        }

        struct Node *sudo;
        sudo = new Node();

        sudo->next = NULL;
        sudo->data = top->prev->data;
        sudo->prev = top->prev->prev;

        free(top);
        top = sudo;
    }

    void printStack()
    {

        struct Node *sudo = top;

        cout << sudo->data << " ";
        while (sudo->prev != NULL)
        {
            cout << sudo->prev->data << " ";
            sudo = sudo->prev;
        }
        cout << "\n";
    }
};
int main()
{
    cout << "Stack\n";
    stackClass s1;
    s1.insertStack(10);
    s1.insertStack(20);
    s1.insertStack(30);
    s1.insertStack(40);
    s1.insertStack(50);
    cout << "Stack Element: ";
    s1.printStack();
    cout << "Deleting stack Element.\n";
    s1.deleteStack();
    cout << "Stack Element: ";
    s1.printStack();
    cout << "Deleting stack Element.\n";
    s1.deleteStack();
    cout << "Stack Element: ";
    s1.printStack();
    cout << "\nQueue\n";
    queueClass q1;
    q1.intertQueue(10);
    q1.intertQueue(20);
    q1.intertQueue(30);
    q1.intertQueue(40);
    q1.intertQueue(50);
    cout << "Queue Element: ";
    q1.printQueue();
    cout << "Deleting Queue Element.\n";
    q1.deleteQueue();
    cout << "Queue Element: ";
    q1.printQueue();
    cout << "Deleting Queue Element.\n";
    q1.deleteQueue();
    cout << "Queue Element: ";
    q1.printQueue();
}
