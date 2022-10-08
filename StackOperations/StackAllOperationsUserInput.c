#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top >= ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int ele)
{
    if (isFull(ptr))
    {
        printf("Overflow!! you can't push %d\n", ele);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = ele;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Underflow!!!\n");
    }
    else
    {
        int ele = ptr->arr[ptr->top];
        ptr->top--;
        return ele;
    }
}

int main()
{
    int n, i = 0, ele;
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    printf("Enter the size of the Stack:");
    scanf("%d", &s->size);
    // s->size = 5;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack created!!!\n");
    printf("Stack is Full is:%d\n", isFull(s));
    printf("Stack is Empty is:%d\n", isEmpty(s));
    while (i < s->size)
    {
        printf("Enter a number: \t1 for push \t2 for pop\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Enter the element:");
            scanf("%d", &ele);
            push(s, ele);
            printf("After push Stack is Full is:%d\n", isFull(s));
            printf("After push Stack is Empty is:%d\n", isEmpty(s));
            break;
        case 2:
            pop(s);
            printf("After pop Stack is Full is:%d\n", isFull(s));
            printf("After pop Stack is Empty is:%d\n", isEmpty(s));
            break;
        }
        i++;
    }
    /* push(s, 13);
     push(s, 45);
     push(s, 23);
     push(s, 54);
     push(s, 48);
     push(s, 43);
     push(s, 83);*/

    // printf("The poped element is:%d\n", pop(s));
    return 0;
}