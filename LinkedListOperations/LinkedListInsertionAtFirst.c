#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element=%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *LinkListInsertionAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 45;
    third->next = NULL;
    printf("Linked list before insertion:\n");
    LinkedListTraversal(head);
    head = LinkListInsertionAtFirst(head, 33);
    printf("Linked list after insertion:\n");
    LinkedListTraversal(head);
    return 0;
}
