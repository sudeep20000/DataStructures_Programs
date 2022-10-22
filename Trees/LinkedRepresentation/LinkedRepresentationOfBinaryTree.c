#include <stdio.h>
#include <malloc.h>

struct node
{
    struct node *left;
    int data;
    struct node *righ;
};

struct node *createNode(int data)
{
    struct node *n;                                 // Create a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->left = NULL;                                 // Setting the left childern to NULL
    n->data = 2;                                    // Setting the data
    n->righ = NULL;                                 // Setting the right childern to NULL
    return n;
}

int main()
{
    /*
    // Constructing the root node
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->left = NULL;
    p->data = 2;
    p->righ = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p1->left = NULL;
    p->data = 1;
    p1->righ = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->left = NULL;
    p->data = 4;
    p2->righ = NULL;

    // Linked the root node with the left and right childern
    p->left = p1;
    p->righ = p2;
    */

    // Constructing the root node using functions(Recommended)
    struct node *p = createNode(2);

    // Constructing the second node
    struct node *p1 = createNode(1);

    // Constructing the third node
    struct node *p2 = createNode(4);

    // Linked the root node with the left and right childern
    p->left = p1;
    p->righ = p2;
    return 0;
}