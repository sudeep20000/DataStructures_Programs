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
struct node *CirculerLLDeleteFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
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
    fourth->next = head;
    printf("Linked list before deletion:\n");
    LinkedListTraversal(head);
    printf("Linked list after deletion:\n");
    head = CirculerLLDeleteFirst(head);
    LinkedListTraversal(head);
    return 0;
}