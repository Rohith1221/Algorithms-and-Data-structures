#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newnode(int data)
{
    struct node *newnode = (node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->right = newnode->left = NULL;
    return (newnode);
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << "\t";
    inorder(root->right);
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "\t";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "\t";
}
int main()
{
    struct node *root = newnode(12);
    root->left = newnode(1);
    root->right = newnode(2);
    root->right->left = newnode(3);
    root->left->left = newnode(4);
    inorder(root);
    cout << "\n";
    preorder(root);
    cout << "\n";
    postorder(root);
    return 0;
}
