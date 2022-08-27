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

void inOrderTraversal(struct node *root)
{
       if(root == NULL)
              return;

       inOrderTraversal(root->left);
       printf(" %d -> ", root->data);
       inOrderTraversal(root->right);
}

bool search(struct node *root, int target)
{
       if(root == NULL || root->data == target)
              return root;

       if(root->data < target)
              return search(root->right,target);

       else
              return search(root->left,target);

}

int main()
{
       struct node *root = NULL;
       root = insert(root, 12);
       insert(root, 13);
       insert(root, 11);
       insert(root, 14);
       insert(root, 15);
       insert(root, 10);
       insert(root, 9);
       insert(root, 16);
       insert(root, 17);
       insert(root, 8);
       insert(root, 7);

       inOrderTraversal(root);

       if(search(root,1098))
              printf("\nThe target is present in BST.");
       else
              printf("\nThe target is not present in BST.");

}