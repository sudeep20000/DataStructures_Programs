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

void insertNode(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            printf("%d is already inserted ,Duplicates are not allow", key);
            return;
        }
        else if (root->data > key)
            root = root->left;
        else
            root = root->right;
    }
    struct node *new = createNode(key);
    if (key > prev->data)
        prev->right = new;
    else
        prev->left = new;
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

    insertNode(p, 7);
    printf("%d", p->right->right->data);
    return 0;
}
