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

struct node *inorderPredecessor(struct node *root) // Right most child of Left sub-tree
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{
    struct node *iPre;
    if (root == NULL) // If the node value is null
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL) // Leaf node
    {
        free(root);
        return NULL;
    }
    // Search for the node to be deleted
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value); // Small the problem
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value); // Small the problem
    }

    // Deletion strategy when the node is found
    else
    {
        iPre = inorderPredecessor(root); // Inorder predecessor of the given node
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
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

    // 1 3 4 5 6

    // Linked the root node with the left and right childern
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    InOrder(p);
    deleteNode(p, 6);
    printf("\n|Root is %d|\n", p->data);
    InOrder(p);

    return 0;
}
