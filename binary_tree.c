#include<stdio.h>
struct node
{
    int data;
    struct node*left,*right;
}*root,*head,*temp,*newnode;
struct node* createNode(value)
{
  struct node* newNode = malloc(sizeof(struct node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}
struct node* insertLeft(struct node* root, int value)
{
  root->left = createNode(value);
  return root->left;
}
struct node* insertRight(struct node* root, int value)
{
  root->right = createNode(value);
  return root->right;
}
void inorderTraversal(struct node* root)
 {
  if (root == NULL)
  return;
  inorderTraversal(root->left);
  printf("%d ->", root->data);
  inorderTraversal(root->right);
}
int main()
{
struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);
  printf("Inorder traversal \n");
  inorderTraversal(root);
  return 0;
}
