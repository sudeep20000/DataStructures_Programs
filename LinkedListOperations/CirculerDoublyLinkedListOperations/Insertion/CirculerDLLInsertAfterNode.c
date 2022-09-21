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

    do
    {
        printf("Element=%d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}

struct node *CircularDLLInsertAfterNode(struct node *head, int data, struct node *GN)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    GN->next->prev = ptr;
    ptr->next = GN->next;
    GN->next = ptr;
    ptr->prev = GN;
    return head;
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
    head->prev = fourth;
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
    fourth->next = head;

    printf("Linked list before insertion:\n");
    LinkedListTraversal(head);
    head = CircularDLLInsertAfterNode(head, 3, third);
    printf("Linked list after insertion:\n");
    LinkedListTraversal(head);
    return 0;
}