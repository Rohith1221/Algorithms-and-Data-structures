#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node *newnode(int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->right=newnode->left=NULL;
    return(newnode);
}
void inorder(struct node *node)
{
    if(node==NULL)
    return;
    inorder(node->left);
    printf("%d ",node->data);
    inorder(node->right);
}
struct node *LCA(struct node *root,struct node *p,struct node *q)
{
    if(root==NULL)
    return NULL;

    if(root==p||root==q)
    return root;

    struct node *l,*r;
    l=LCA(root->left,p,q);
    r=LCA(root->right,p,q);
    
    if(l!=NULL&&r!=NULL)
    return root;
    else

    return (l?l:r);
}
int main()
{
    struct node *root=newnode(234);
    root->left=newnode(4);
    root->right=newnode(24);
    root->left->right=newnode(432);
    root->left->left=newnode(92);
    printf("Inorder traversal of binary tree :");
    inorder(root);
    printf("\n");
    printf("Lowest common ancestor of node p(%d) and node q(%d) : %d",root->left->right->data,root->left->left->data,LCA(root,root->left->right,root->left->left)->data);

}
