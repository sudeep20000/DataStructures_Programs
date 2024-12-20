#include <stdio.h>
#include <stdlib.h>
struct node

{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *LinkedListDeletionFromGivenNodeData(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 17;
    second->next = third;

    third->data = 27;
    third->next = fourth;

    fourth->data = 37;
    fourth->next = NULL;

    printf("Linked list before deletion:\n");
    LinkedListTraversal(head);
    printf("Linked list after deletion:\n");
    head = LinkedListDeletionFromGivenNodeData(head, 37);
    LinkedListTraversal(head);
    return 0;
}
