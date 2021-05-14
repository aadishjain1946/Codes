#include <stdio.h>
#include <stdlib.h>
//struct store linked list node
struct Node
{
    int number;
    struct Node *next;
};
typedef struct Node node;
node *head, *newNode;
//function to add element in the linked list
void addElement()
{
    int element = 0;
    scanf("%d", &element);
    while (element != -1)
    {
        newNode = (node *)malloc(1 * sizeof(node));
        newNode->number = element;
        newNode->next = NULL;
        if (head != NULL && element % 2 == 0)
        {
            node *tail = head;
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            tail->next = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        scanf("%d", &element);
    }
}
//function to cut last element of linked list and
//add it to the beginning of the list
node *cutlastaddhead(node *head)
{
    node *tail = head, *prev = NULL;
    while (tail->next != NULL)
    {
        prev = tail;
        tail = tail->next;
    }
    prev->next = NULL;
    tail->next = head;
    head = tail;
    return head;
}
//function to delete middle element of linked list
node *deleteMiddle(node *head)
{
    node *slow = head, *fast = head->next, *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (!prev)
        return head;
    prev->next = slow->next;
    return head;
}
//function to swap first and last element of linked list
node *changeFirstAndLast(node *head)
{
    node *tail = head, *prev = NULL;
    while (tail->next != NULL)
    {
        prev = tail;
        tail = tail->next;
    }
    prev->next = head;
    tail->next = head->next;
    head->next = NULL;
    return tail;
}
//function to cut first element of linked list and
//add it to the end of the list
node *cutheadaddlast(node *head)
{
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = head;
    node *headNxt = head->next;
    head->next = NULL;
    head = headNxt;
    return head;
}
//function to print linked list
void printLL(node *head)
{
    node *tail = head;
    while (tail != NULL)
    {
        printf("%d ", tail->number);
        tail = tail->next;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    printf("Input:\n");
    addElement();
    printf("Output:\n");
    printf("Linked List: ");
    printLL(head);
    head = cutlastaddhead(head);
    printf("Linked List after cutlastaddhead: ");
    printLL(head);
    head = deleteMiddle(head);
    printf("Linked List after deleteMiddle: ");
    printLL(head);
    head = changeFirstAndLast(head);
    printf("Linked List after changeFirstAndLast: ");
    printLL(head);
    head = cutheadaddlast(head);
    printf("Linked List after cutheadaddlast: ");
    printLL(head);
}
