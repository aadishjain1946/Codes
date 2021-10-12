#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *insert(struct node *head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)
    {
        return newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}
void printList(struct node *head)
{
    printf("Data in reverse order:\n");
    int i = 1;
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("Data in node %d : %d\n", i, temp->data);
        i++;
        temp = temp->next;
    }
}
int main()
{
    int n;
    printf("Input number of nodes : ");
    scanf("%d", &n);
    struct node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        int num;
        printf("Input data for node %d : ", i + 1);
        scanf("%d", &num);
        head = insert(head, num);
    }
    printf("\n");
    printList(head);
}
