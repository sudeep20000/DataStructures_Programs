#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack overflow!! can't push the value %d\n", x);
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct node *t)
{
    if (isEmpty(t))
    {
        printf("Stack underFlow\n");
    }
    else
    {
        struct node *n = t;
        top = t->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(int pos)
{
    struct node *ptr = top;
    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    return -1;
}

int stackTop()
{
    return top->data;
}

int stackBottom()
{
    struct node *p = top;
    while (p->next != NULL)
    {
        p = p->next;
    }
    return p->data;
}

int main()
{

    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);
    linkedListTraversal(top);
    for (int i = 1; i <= 4; i++)
    {
        printf("The value of position %d is: %d\n", i, peek(i));
    }
    printf("The top of the stack is:%d\n", stackTop());
    printf("The bottom of the stack is:%d\n", stackBottom());
    return 0;
}