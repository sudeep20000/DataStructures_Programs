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
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;

    // Allocated memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // Linked First and Second node
    head->data = 7;
    head->next = second;

    // Linked second and Third node
    second->data = 11;
    second->next = third;

    // Terminates the list at the Third node
    third->data = 23;
    third->next = NULL;

    LinkedListTraversal(head);

    return 0;
}
