#include <iostream>
using namespace std;
//stack class to push and pop element in stack
class stack
{
    int top;
    int *arr;
    int size;

public:
    stack(int size)
    {
        top = -1;
        arr = new int[size];
        this->size = size;
    }
    void push(int ele)
    {
        if (size <= 0)
        {
            return;
        }
        top++;
        arr[top] = ele;
        size--;
    }
    int pop()
    {
        if (top == -1)
        {
            return -1;
        }
        int output = arr[top];
        top--;
        size++;
        return output;
    }
};

//queue class to push and pop element in queue
class queue
{
    int front, rear;
    int *arr;
    int size;

public:
    queue(int size)
    {
        front = rear = 0;
        arr = new int[size];
        this->size = size;
    }
    void push(int ele)
    {
        if (size <= 0)
        {
            return;
        }
        arr[rear] = ele;
        rear++;
        size--;
    }
    int pop()
    {
        if (front == rear)
        {
            front = rear = 0;
            return -1;
        }
        int output = arr[front];
        front++;
        size++;
        return output;
    }
};
int main()
{
    stack s1(10);
    cout << "Stack: \n";
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.pop() << "\n";
    cout << s1.pop() << "\n";
    cout << s1.pop() << "\n";
    queue q1(10);
    cout << "Queue: \n";
    q1.push(1);
    q1.push(2);
    q1.push(3);
    cout << q1.pop() << "\n";
    cout << q1.pop() << "\n";
    cout << q1.pop() << "\n";
}
