#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

// Arrow Operator(->):1st Dereference Then Add .operator

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

void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack overflow!!! you can't push %d in stack\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow!!!\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 9;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("The stack was created succsessfully!!!\n");
    printf("The stack is empty %d\n", isEmpty(s));
    printf("The stack is full %d\n", isFull(s));
    /*push(s, 34);
    push(s, 30);
    push(s, 39);
    push(s, 35);
    push(s, 35);
    push(s, 35);
    push(s, 35);
    push(s, 35);
    push(s, 31);
    push(s, 32);
    push(s, 33);
    push(s, 34);
    push(s, 38);*/
    printf("After pushing ,full:%d\n", isFull(s));
    printf("After pushing ,empty:%d\n", isEmpty(s));
    printf("Poped %d in the stack\n", pop(s));
}