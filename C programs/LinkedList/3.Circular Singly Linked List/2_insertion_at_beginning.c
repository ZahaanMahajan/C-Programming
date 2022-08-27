
// insertion at the beginning of a circular linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *circularSingly(int data){
     struct node *temp = malloc(sizeof(struct node));
     temp->data = data;
     temp->link = temp;
     return temp;

}

struct node *addToBeg(struct node *tail , int data){
     struct node *temp = malloc(sizeof(struct node));
     temp->data = data;
     temp->link = tail->link;
     tail->link = temp;
     return tail;
}

void print(struct node *tail){
     struct node *ptr = tail->link;
     do{
          printf("%d ",ptr->data);
          ptr = ptr->link;
     }
     while(ptr != tail->link);
}

int main(){
     struct node *tail;
     tail = circularSingly(55);
     tail = addToBeg(tail,64);

     print(tail);
     
}