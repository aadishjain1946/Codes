#include <iostream>
using namespace std;
class DoublyLinkedList
{

public:
    int data;
    DoublyLinkedList *next, *prev;
    DoublyLinkedList(int data)
    {
        this->data = data;
        this->next = this->prev = NULL;
    }
};
void insert(DoublyLinkedList **head, DoublyLinkedList **tail, int data)
{
    // if ((*tail))
    //     cout << (*tail)->data << '\n';
    DoublyLinkedList *temp = new DoublyLinkedList(data);
    if ((*head) == NULL && (*tail) == NULL)
    {
        (*head) = temp;
        (*tail) = temp;
    }
    else
    {
        (*tail)->next = temp;
        temp->prev = (*tail);
        (*tail) = temp;
    }
}
void print(DoublyLinkedList *head)
{
    DoublyLinkedList *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    DoublyLinkedList *list1Head = NULL, *list1Tail = NULL, *list2Head = NULL, *list2Tail = NULL, *list3Head = NULL, *list3Tail = NULL;
    insert(&list1Head, &list1Tail, 5);
    insert(&list1Head, &list1Tail, 6);
    insert(&list1Head, &list1Tail, 7);
    insert(&list1Head, &list1Tail, 8);
    insert(&list1Head, &list1Tail, 9);
    insert(&list2Head, &list2Tail, 1);
    insert(&list2Head, &list2Tail, 2);
    insert(&list2Head, &list2Tail, 3);
    insert(&list2Head, &list2Tail, 4);
    insert(&list2Head, &list2Tail, 5);
    print(list1Head);
    cout << "\n";
    print(list2Head);
    cout << "\n";
    DoublyLinkedList *temp1 = list1Head, *temp2 = list2Tail;
    while (temp1 != NULL && temp2 != NULL)
    {
        insert(&list3Head, &list3Tail, temp1->data + temp2->data);
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    print(list3Head);
    cout << "\n";
    return 0;
}
