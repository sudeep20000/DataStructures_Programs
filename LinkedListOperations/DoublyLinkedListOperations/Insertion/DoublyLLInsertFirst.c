#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
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

struct node *DoublyLLInsertFirst(struct node *head, int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = head;
    p->prev = NULL;
    return p;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocated memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Linked First and Second node
    head->prev = NULL;
    head->data = 7;
    head->next = second;

    // Linked second and Third node
    second->prev = head;
    second->data = 11;
    second->next = third;

    // Linked Third and Fourth node
    third->prev = second;
    third->data = 23;
    third->next = fourth;

    // Terminates the list at the Fourth node
    fourth->prev = third;
    fourth->data = 33;
    fourth->next = NULL;

    printf("Linked list before insertion:\n");
    LinkedListTraversal(head);
    head = DoublyLLInsertFirst(head, 3);
    head = DoublyLLInsertFirst(head, 13);
    printf("Linked list after insertion:\n");
    LinkedListTraversal(head);
    return 0;
}