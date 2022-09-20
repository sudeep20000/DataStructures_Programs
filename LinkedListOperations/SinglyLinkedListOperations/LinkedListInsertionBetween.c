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

struct node *LinkedListInsertionBetween(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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

    head->data = 11;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 45;
    third->next = NULL;
    printf("Linked list before insertion:\n");
    LinkedListTraversal(head);
    head = LinkedListInsertionBetween(head, 33, 2);
    printf("Linked list after insertion:\n");
    LinkedListTraversal(head);
    return 0;
}
