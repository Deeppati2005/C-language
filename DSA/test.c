#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
  int info;
  struct node *left, *right;
} node;
void *create(node *root, int n)
{
  if (root == NULL)
  {
    root = (node *)malloc(sizeof(node));
    root->info = n;
    root->left = NULL;
    root->right = NULL;
    return root;
  }
  else
  {
    if (n > root->info)
    {
      root->right = create(root->right, n);
    }
    else
    {
      root->left = create(root->left, n);
    }
    return root;
  }
}
void preorder(node *r)
{
  if (r != NULL)
  {
    printf("%4d", r->info);
    preorder(r->left);
    preorder(r->right);
  }
}
void inorder(node *r)
{
  if (r != NULL)
  {
    inorder(r->left);
    printf("%4d", r->info);
    inorder(r->right);
  }
}
void postorder(node *r)
{
  if (r != NULL)
  {
    postorder(r->left);
    postorder(r->right);
    printf("%4d", r->info);
  }
}