#include <stdio.h>
#include <stdlib.h>

struct node
{
       int data;
       struct node *next;
};

int map(int val)
{
       val = val % 5;
       return val;
}

struct node *create(int val)
{
       struct node *ptr = (struct node *)malloc(sizeof(struct node));
       ptr->data = val;
       ptr->next = NULL;
       return ptr;
}

int main()
{
       int arr[5] = {3, 15, 8, 0, 12};

       struct node *hash[5];

       for (int i = 0; i < 5; i++)
       {
              hash[i] = (struct node *)malloc(sizeof(struct node));
              hash[i]->next = NULL;
       }

       int val;
       struct node *ptr, *ptr2;

       for (int i = 0; i < 5; i++)
       {
              val = map(arr[i]);
              ptr = create(arr[i]);

              ptr2 = hash[val];
              while (ptr2->next != NULL)
              {
                     ptr2 = ptr2->next;
              }
              ptr2->next = ptr;
       }

       for (int i = 0; i < 5; i++)
       {

              struct node *p = hash[i]->next;

              while (p != NULL)
              {
                     printf("%d ", p->data);
                     p = p->next;
              }

              if(hash[i]->next==NULL)
              {
                     printf("NULL");
              }

              printf("\n");
       }

       return 0;
}