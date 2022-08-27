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

struct node *addToEnd(struct node *tail , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = tail->link;
       tail->link = temp;
       tail = temp;
       return tail;
}

int count(struct node *tail){
       int count = 0;
       struct node *ptr = tail->link;

       do{
              ptr = ptr->link;
              count++;
       }while(ptr != tail->link);

       return count;

}

void print(struct node *tail){

       struct node *ptr = tail->link;

       do{
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }while (ptr != tail->link); 

       printf("\n");

}

int main(){
       struct node *tail;
       tail = circularSingly(23);
       tail = addToEnd(tail,88);
       tail = addToEnd(tail,99);
       tail = addToEnd(tail,54);
       tail = addToEnd(tail,5);
       tail = addToEnd(tail,26);
       print(tail);
       int nodes = count(tail);
       printf("The number of nodes in the linked list : %d",nodes);
}