#include<stdio.h>
#include<stdlib.h>

struct node{
       struct node *prev;
       int data;
       struct node *next;
};

struct node *circularDoubly(struct node *tail , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->prev = temp;
       temp->data = data;
       temp->next = temp;

       tail = temp;
       return tail;
};


struct node *addToBeg(struct node *tail , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->prev = NULL;
       temp->data = data;
       temp->next = NULL;

       struct node *ptr = tail->next;

       temp->next = ptr;
       temp->prev = tail;
       ptr->prev = temp;
       tail->next = temp;
       
       return tail;
       
}

void print(struct node *tail){
       struct node *ptr = tail->next;

       do{
              printf("%d ",ptr->data);
              ptr = ptr->next;
       }while(ptr != tail->next);
       
       printf("\n");
       
}

int main(){
       struct node *tail = NULL;
       tail = circularDoubly(tail,1);
       tail = addToBeg(tail,0);

       print(tail);
}