#include<stdio.h>
#include<stdlib.h>

struct node{
       struct node *prev;
       int data;
       struct node *next;
};

struct node *addtoEmpty(struct node *head , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->prev = NULL;
       temp->data = data;
       temp->next = NULL;

       head = temp;
       return head;
}

struct node *addtoBeg(struct node *head , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->prev = NULL;
       temp->data = data;
       temp->next = NULL;

       temp->next = head;
       head->prev = temp;
       head = temp;

       return head;
}

int main(){
       struct node *head = NULL;
       struct node *ptr;
       
       head = addtoEmpty(head,54);     
       head = addtoBeg(head,32);

       ptr = head;
       while(ptr != NULL){
              printf("%d ", ptr->data);
              ptr = ptr->next;
       }
}