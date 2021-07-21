#include <stdio.h>
#include <stdlib.h>
//declaring a structure for sequence ADT
//that can store data and pointer to next node
struct sequence
{
    int data;
    struct sequence *next;
};

int size = 1;
//function to insert element at particular position in the sequence ADT
void insert(struct sequence **Head, int index, int data)
{
    if (index < 1 || index > size + 1)
    {
        printf("Invalid position!");
    }
    else
    {
        while (index--)
        {
            Head = &(*Head)->next;
        }
        if (index < 0)
        {
            struct sequence *temp = (struct sequence *)malloc(sizeof(struct sequence));
            temp->data = data;
            temp->next = NULL;

            temp->next = *Head;
            *Head = temp;
        }
        size++;
    }
}
//function to print elements in the sequence ADT
void print(struct sequence *head)
{
    struct sequence *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
//function to delete element at particular position in the sequence ADT
struct sequence *deleteNode(struct sequence *head, int i)
{
    struct sequence *sudo = head;
    int cnt = 0;
    if (i == 0)
    {
        head = sudo->next;
        return head;
    }
    while (sudo != NULL && cnt < i - 1)
    {
        cnt++;
        sudo = sudo->next;
    }
    if (sudo != NULL && sudo->next != NULL)
    {
        struct sequence *a = sudo->next;
        sudo->next = a->next;
    }
    return head;
}
int main()
{
    struct sequence *head = (struct sequence *)malloc(sizeof(struct sequence));
    head->data = 42;
    head->next = NULL;
    insert(&head, 1, 10);
    insert(&head, 2, 27);
    insert(&head, 3, 31);
    insert(&head, 4, 99);
    printf("Printing element in the sequence ADT: ");
    print(head);
    insert(&head, 2, 28);
    printf("Printing element in the sequence ADT after innserting 28 at 2nd index: ");
    print(head);
    deleteNode(head, 3);
    printf("Printing element in the sequence ADT after deleting element at 3rd index: ");
    print(head);
}
