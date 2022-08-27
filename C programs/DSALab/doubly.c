#include<stdio.h>
#include<stdlib.h>

struct node{
       struct node *prev;
       int data;
       struct node *next;
};

int main(){
       
       struct node *head = NULL;
       head = (struct node*)malloc(sizeof(struct node));
       head->prev = NULL;
       head->data = 25;
       head->next = NULL;

       struct node *current = (struct node*)malloc(sizeof(struct node));
       current->prev = head;
       current->data = 14;
       current->next = NULL;
       head->next = current;

       struct node *ptr = head;
       printf("\n");
              while(ptr != NULL){
                     printf("%d ",ptr->data);
                     ptr = ptr->next;
              }
       printf("\n");
       printf("\n");
}