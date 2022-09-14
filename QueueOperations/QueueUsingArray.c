#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct queue *q)
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
void enqueue(struct queue *q, int val)
{
    if (isFull(q))  
    {
        printf("The Queue is Full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqueued element %d\n",val);
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("The Queue is empty");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
        return a;
    }
}
int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 25);
    printf("Dequeue element %d\n", dequeue(&q));
    printf("Dequeue element %d\n", dequeue(&q));
    printf("Dequeue element %d\n", dequeue(&q));
    if (isEmpty(&q))
    {
        printf("The queue is empty\n");
    }
    if (isFull(&q))
    {
        printf("The queue is full\n");
    }
    return 0;
}