#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

void count_nodes(struct node *head){
       
       int count = 0;

       if(head == NULL){
              printf("Linked List is Empty");
       }

       else{
              
              struct node *ptr = head;
              while(ptr != NULL){
                     count++;
                     ptr = ptr->link;
              }
              printf("No of Nodes = %d",count);
       }
}

int main(){
       struct node *head = NULL;
       head = (struct node*)malloc(sizeof(struct node));
       head->data = 1;
       head->link = NULL;

       struct node *linker = (struct node*)malloc(sizeof(struct node));
       linker->data = 2;
       linker->link = NULL;
       head->link = linker;

       linker = (struct node*)malloc(sizeof(struct node));
       linker->data = 3;
       linker->link = NULL;
       head->link->link = linker;
       
       linker = (struct node*)malloc(sizeof(struct node));
       linker->data = 4;
       linker->link = NULL;
       head->link->link->link = linker;

       count_nodes(head);
}