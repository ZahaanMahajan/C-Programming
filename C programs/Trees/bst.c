#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
       printf("%d -> ",root->data);
       inOrderTraversal(root->right);

}

bool search(struct node *root, int data)
{
       if(root == NULL || root->data == data)
              return root;

       if(root->data < data)
              return search(root->right, data);

       if(root->data > data)
              return search(root->left, data);

}

struct node *insert(struct node *root, int data)
{
       if(root == NULL)
              return createNode(data);

       if (root->data < data)
              root->right = insert(root->right, data);

       else
              root->left = insert(root->left, data);
       
       return root;
}

int main(){
       struct node *root = NULL;
       root = insert(root, 50);


       insertLeft(root,40);
       insertRight(root,60);
       insertLeft(root->left,35);
       insertRight(root->left,45);
       insertLeft(root->right,55);
       insertRight(root->right,65);

       inOrderTraversal(root);

       // bool result = search(root,65);
       // printf("\n %d  ",result);

       insert(root, 47);
       printf("\n");
       inOrderTraversal(root);

}