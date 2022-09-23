#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
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
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow !! can't push %d in the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow");
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
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 15;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("stack has been created successfully\n");
    printf("Before pushing,Full: %d\n", isFull(s));
    printf("Before poping,Empty: %d\n", isEmpty(s));
    push(s, 23);
    push(s, 43);
    push(s, 53);
    push(s, 13);
    push(s, 23);
    push(s, 33);
    push(s, 63);
    push(s, 83);
    push(s, 93);
    push(s, 43);
    push(s, 103);
    printf("After pushing,Full: %d\n", isFull(s));
    printf("After poping,Empty: %d\n", isEmpty(s));
    printf("Poped %d from the stack\n", pop(s));
    printf("Poped %d from the stack\n", pop(s));
    printf("Poped %d from the stack\n", pop(s));
}