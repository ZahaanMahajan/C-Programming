
// creating a node in a circular singly linked list

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

int main(){
       int data = 34;
       struct node *tail;
       tail = circularSingly(data);

       printf("%d\n",tail->data);
       return 0;

}