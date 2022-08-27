
// call by reference 

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

void add_at_begg(struct node **head, int data){
       struct node *ptr = malloc(sizeof(struct node));
       ptr->data = data;
       ptr->link = *head;
       *head = ptr;
}

int main(){
       struct node *head = malloc(sizeof(struct node));
       head->data = 14;
       head->link = NULL;

       struct node *ptr = malloc(sizeof(struct node));
       ptr->data = 15;
       ptr->link = NULL;
       head->link = ptr;
       
       ptr = malloc(sizeof(struct node));
       ptr->data = 16;
       ptr->link = NULL;
       head->link->link = ptr;

       ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }
       printf("\n");

       int num = 12;
       int num2 = 13;
       add_at_begg(&head,num2);
       add_at_begg(&head,num);
       
       ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }
}