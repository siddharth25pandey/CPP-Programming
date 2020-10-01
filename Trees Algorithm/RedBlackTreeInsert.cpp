//By: fawadmirza32@gmail.com
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int key;
    int color;
    struct Node *left;
    struct Node *right;
    struct Node *parent;
} node;
node *NewNode(int key);
void bstInsert(node *head, node *n);
node *LeftChild(node *x);
node *RightChild(node *x);
node *Parent(node *x);
node *GrandParent(node *x);
node *Sibling(node *x);
node *Uncle(node *x);
void leftRotate(node *x);
void rightRotate(node *x);
node *RBInsert(node *root, node *n)
{
    if (root == NULL)
    {
        n->color = 0;
        return n;
    }
    bstInsert(root, n);
    //fix double red problems if any
    node *x = n;
    while (x != root && Parent(x)->color == 1)
    {
        //uncle is also riitiited, make black black children of grandparent(x) and make grandparent red
        //this elevates up
        if (Uncle(x) != NULL && Uncle(x)->color == 1)
        {
            GrandParent(x)->color = 1;
            Uncle(x)->color = 0;
            Parent(x)->color = 0;
            x = GrandParent(x);
            continue;
        }
        //if uncle is black or uncle is null
        //we can rotate the tree at grandparent and do recoloring
        if (Uncle(x) == NULL || Uncle(x)->color == 0)
        {
            //rotation depends on relative position of x,Parent(x),GrandParent(x)
            //lr or ll case
            if (Parent(x) == LeftChild(GrandParent(x)))
            {
                //if its lr then rotate and make it ll
                if (x == RightChild(Parent(x)))
                {
                    leftRotate(Parent(x));
                    x = LeftChild(x);
                }
                //now its ll, with x and parent(x) colored red
                //right rotate grandparent of x and do recoloring
                rightRotate(GrandParent(x));
                Parent(x)->color = 0;
                //change silbing color to red
                Sibling(x)->color = 1;
                x = Parent(x);
                break;
            }
            //rl or rr case
            if (Parent(x) == RightChild(GrandParent(x)))
            {
                //if its rl then rotate and make it rr
                if (x == LeftChild(Parent(x)))
                {
                    rightRotate(Parent(x));
                    x = RightChild(x);
                }
                //now its rr form, with x and parent(x) colored red
                GrandParent(x)->color = 1;
                Parent(x)->color = 0;
                leftRotate(GrandParent(x));
                x = Parent(x);
                break;
            }
        }
    }
    n = x;
    while (Parent(n) != NULL)
    {
        n = Parent(n);
    }
    if (n->color == 1)
        n->color = 0;
    return n;
}
void printt(node *n)
{
    if (n == NULL)
        return;
    printt(n->left);
    printf("%d(%d){l=%d p=%d r=%d} ", n->key, n->color, n->left != NULL ? n->left->key : -1, n->parent != NULL ? n->parent->key : -1, n->right != NULL ? n->right->key : -1);
    printt(n->right);
}
void print(node *n)
{
    if (n == NULL)
        return;
    print(n->left);
    printf("%d(%d) ", n->key, n->color);
    print(n->right);
}
int main()
{
    node *root = NULL;
    while (1)
    {
        printf("Enter key to insert : ");
        int x;
        scanf("%d", &x);
        root = RBInsert(root, NewNode(x));
        printf("root key is %d\n", root->key);
        print(root);
        printf("\n");
    }
}
node *NewNode(int key)
{
    node *n = (node *)malloc(sizeof(node));
    n->key = key;
    n->color = 1;
    n->left = NULL;
    n->right = NULL;
    n->parent = NULL;
    return n;
}
void bstInsert(node *head, node *n)
{
    if (head->left == NULL && n->key < head->key)
    {
        head->left = n;
        n->parent = head;
        return;
    }
    if (head->right == NULL && n->key >= head->key)
    {
        head->right = n;
        n->parent = head;
        return;
    }
    if (n->key < head->key)
    {
        bstInsert(head->left, n);
    }
    else
    {
        bstInsert(head->right, n);
    }
}
node *LeftChild(node *x)
{
    return x->left;
}
node *RightChild(node *x)
{
    return x->right;
}
node *Parent(node *x)
{
    if (x == NULL)
        return NULL;
    return x->parent;
}
node *GrandParent(node *x)
{
    return Parent(Parent(x));
}
node *Uncle(node *x)
{
    if (Parent(x) == NULL || GrandParent(x) == NULL)
        return NULL;
    if (Parent(x) == LeftChild(GrandParent(x)))
        return RightChild(GrandParent(x));
    else
        return LeftChild(GrandParent(x));
}
void leftRotate(node *a)
{
    node *b = a->right;
    node *bl = b->left;
    node *ap = a->parent;

    //change of nodes
    b->parent = ap;
    b->left = a;
    a->right = bl;

    if (bl != NULL)
        bl->parent = a;
    a->parent = b;
    if (ap != NULL)
    {
        //if a was a right child
        if (a == RightChild(ap))
        {
            ap->right = b;
        }
        else
            ap->left = b;
    }
}
void rightRotate(node *a)
{
    node *b = a->left;
    node *br = b->right;
    node *ap = a->parent;

    //change of nodes
    b->parent = ap;
    b->right = a;
    a->left = br;

    if (br != NULL)
        br->parent = a;
    a->parent = b;
    if (ap != NULL)
    {
        //if a was a right child
        if (a == RightChild(ap))
        {
            ap->right = b;
        }
        else
            ap->left = b;
    }
}
node *Sibling(node *x)
{
    if (x == NULL || Parent(x) == NULL)
        return NULL;
    if (x == LeftChild(Parent(x)))
        return RightChild(Parent(x));
    else
        return LeftChild(Parent(x));
}
