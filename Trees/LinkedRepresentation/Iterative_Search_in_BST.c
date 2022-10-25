#include <stdio.h>
#include <malloc.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->left = NULL;
    n->data = data;
    n->right = NULL;
    return n;
}

void InOrder(struct node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
        return 1;
}

struct node *searchItr(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
            return root;
        else if (key < root->data)
            return searchItr(root->left, key);
        else
            return searchItr(root->right, key);
    }
    return NULL;
}

int main()
{
    // Constructing the root node using functions(Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    // Finally the tree looks like this
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4

    // 5 1 2 4 6

    // Linked the root node with the left and right childern
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    InOrder(p);
    printf("\n%d\n", isBST(p));
    struct node *ptr = searchItr(p, 6);
    if (ptr != NULL)
        printf("Found:%d\n", ptr->data);
    else
        printf("Searched element is not found");
    return 0;
}
// TC:- O(log N)