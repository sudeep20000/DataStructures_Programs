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

struct node *CirculerLLInsertionBetween(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

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

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = head;

    fourth->data = 9;
    fourth->next = head;

    printf("Circuler Linked list before insertion:\n");
    LinkedListTraversal(head);
    head = CirculerLLInsertionBetween(head, 66, 2);
    head = CirculerLLInsertionBetween(head, 85, 4);
    printf("Circuler Linked list after insertion:\n");
    LinkedListTraversal(head);
    return 0;
}