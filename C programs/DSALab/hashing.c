#include<stdio.h>
#include<stdlib.h>

struct node
{
       int key;
       struct node *link;
};

int map(int key)
{
       key = key % 6;
       return key;
}

void *create(struct node *head, int key)
{
       head = malloc(sizeof(struct node));
       head->key = key;
       head->link = NULL;

}

int main(){

       int arr[] = {0,4,12,4,9,6};
       struct node *hashtable[6];

       for (int i = 0; i < 6; i++)
       {
              hashtable[i] = NULL;
       }

       struct node *head = NULL;

       for (int i = 0; i < 6; i++)
       {
              int index = map(arr[i]);
              create(head, arr[i]);
              hashtable[i]->link = head;
       }
       
       for (int i = 0; i < 6; i++)
       {

              struct node *p = hashtable[i];

              while (hashtable[i] != NULL)
              {
                     printf("%d ", p->link->key);
                     p = p->link;
              }

              if(hashtable[i] == NULL)
              {
                     printf("NULL");
              }

              printf("\n");
       }
}