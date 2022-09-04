#include<stdio.h>
#include<stdlib.h>

struct node
{
       struct node *left;
       int data;
       struct node *right;
};

struct node *createNode(int data)
{
       struct node *ptr = malloc(sizeof(struct node));
       ptr->left = NULL;
       ptr->right = NULL;
       ptr->data = data;

       return ptr;
}

struct node *insertLeft(struct node *root, int data)
{
       root->left = createNode(data);
       return root->left;
}

struct node *insertRight(struct node *root, int data)
{
       root->right = createNode(data);
       return root->right;
}

void inOrderTraversal(struct node *root)
{
       if(root == NULL)
              return;

       inOrderTraversal(root->left);
       printf("  %d ->", root->data);
       inOrderTraversal(root->right);

}

void preOrderTraversal(struct node *root)
{
       if(root == NULL)
              return;

       printf("  %d ->", root->data);
       preOrderTraversal(root->left);
       preOrderTraversal(root->right);
}

void postOrderTraversal(struct node *root)
{
       if(root == NULL)
              return;

       postOrderTraversal(root->left);
       postOrderTraversal(root->right);
       printf("  %d ->", root->data);
}

int main(){

       struct node *root = createNode(12);
       insertLeft(root,34);
       insertRight(root,65);
       insertLeft(root->left,49);
       insertRight(root->left,99);
       insertLeft(root->right,76);
       insertRight(root->right,10);

       printf("The Inorder Traversal is : ");
       inOrderTraversal(root);
       printf("\n");

       printf("The PreOrder Traversal is : ");
       preOrderTraversal(root);
       printf("\n");

       printf("The PostOrder Traversal is : ");
       postOrderTraversal(root);
       printf("\n");

}