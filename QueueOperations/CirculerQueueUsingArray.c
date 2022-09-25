#include <stdio.h>
#include <stdlib.h>

struct CirculerQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct CirculerQueue *q)
{
    if ((q->r + 1) % (q->size) == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct CirculerQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct CirculerQueue *q, int val)
{
    if (isFull(q))
    {
        printf("The CirculerQueue is full");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqueued element %d\n", val);
    }
}

int dequeue(struct CirculerQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("The CirculerQueue is empty");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
        return a;
    }
}

int main()
{
    struct CirculerQueue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 25);
    printf("Dequeue element %d\n", dequeue(&q));
    printf("Dequeue element %d\n", dequeue(&q));
    printf("Dequeue element %d\n", dequeue(&q));
    enqueue(&q, 35);
    enqueue(&q, 65);
    enqueue(&q, 36);
    enqueue(&q, 15);
    enqueue(&q, 31);
    if (isEmpty(&q))
    {
        printf("The CirculerQueue is empty\n");
    }
    if (isFull(&q))
    {
        printf("The CirculerQueue is full\n");
    }
    return 0;
}