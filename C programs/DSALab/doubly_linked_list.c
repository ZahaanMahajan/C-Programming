#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *prev , *next;
};

int main(){
       struct node *head = malloc(sizeof(struct node));
       head->data = 25;
       head->prev = NULL;
       head->next = NULL;

       struct node *current = malloc(sizeof(struct node));
       current->data = 34;
       current->prev = head;
       current->next = NULL;
       head->next = current;

       struct node *ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->next;
       }
}