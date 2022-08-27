#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};



int main(){
       struct node *head = malloc(sizeof(struct node));
       head->data = 2000;
       head->link = NULL;
       
       struct node *next = malloc(sizeof(struct node));
       next->data = 2022;
       next->link = NULL;
       head->link = next;

       next = malloc(sizeof(struct node));
       next->data = 2090;
       next->link = NULL;
       head->link->link = next;

       struct node *ptr = head;
       while(ptr != NULL){
              printf("%d ", ptr->data);
              ptr = ptr->link;
       }
       return 0;
}