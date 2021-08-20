#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    node *next;
} node;
node *tail = NULL;
node *insert(int data, node *head, node *tail)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    tail->next = newNode;
    return newNode;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int removeRange(node **head, int min, int max)
{
    node *temp = (*head), *prev = NULL;
    int cnt = 0;
    while (temp != NULL)
    {
        if (temp->data >= min && temp->data <= max)
        {
            if (prev == NULL)
            {
                node *sudo = (*head);
                (*head) = (*head)->next;
                temp = temp->next;
                cnt++;
                continue;
            }
            node *sudo = temp;
            temp = temp->next;
            prev->next = temp;
            cnt++;
            continue;
        }
        prev = temp;
        temp = temp->next;
    }
    return cnt;
}
int main()
{
    node *head = (node *)malloc(sizeof(node));
    head->data = 4;
    head->next = NULL;
    tail = head;
    tail = insert(2, head, tail);
    tail = insert(1, head, tail);
    tail = insert(10, head, tail);
    tail = insert(15, head, tail);
    tail = insert(8, head, tail);
    tail = insert(7, head, tail);
    tail = insert(4, head, tail);
    tail = insert(20, head, tail);
    tail = insert(36, head, tail);
    tail = insert(-3, head, tail);
    tail = insert(40, head, tail);
    tail = insert(5, head, tail);
    print(head);
    int noRem = removeRange(&head, 4, 20);
    printf("\nOutput: %d\n", noRem);
    print(head);
}
