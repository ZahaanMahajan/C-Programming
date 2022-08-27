
// call by value 

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *add_at_begg(struct node *head , int data){
       struct node*ptr = malloc(sizeof(struct node));
       ptr->data = data;
       ptr->link = head;
       head = ptr;
       return head;
};


int main(){
       struct node *head = malloc(sizeof(struct node));
       head->data = 2;
       head->link = NULL;

       struct node *ptr = malloc(sizeof(struct node));
       ptr->data = 3;
       ptr->link = NULL;
       head->link = ptr;
       
       ptr = malloc(sizeof(struct node));
       ptr->data = 4;
       ptr->link = NULL;
       head->link->link = ptr;

       int data = 1;
       head = add_at_begg(head,data);

       ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }

}