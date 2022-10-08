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

    do
    {
        printf("Element=%d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}

struct node *CirculerLLInsertFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = head;
    
    printf("Circuler Linked list before insertion:\n");
    LinkedListTraversal(head);
    head = CirculerLLInsertFirst(head, 66);
    head = CirculerLLInsertFirst(head, 64);
    head = CirculerLLInsertFirst(head, 60);
    printf("Circuler Linked list after insertion:\n");
    LinkedListTraversal(head);
    return 0;
}
