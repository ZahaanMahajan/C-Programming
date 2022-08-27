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

struct node *addToEnd(struct node *tail , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = tail->link;
       tail->link = temp;
       tail = temp;
       return tail;
}

void print(struct node *tail){

       struct node *ptr = tail->link;

       do{
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }while (ptr != tail->link); 

       printf("\n");

}

struct node *delFirst(struct node *tail){
       struct node *ptr = tail->link;
       tail->link = ptr->link;
       free(ptr);
       return tail;
}

int main(){
       struct node *tail;
       tail = circularSingly(23);
       tail = addToBeg(tail,34);
       tail = addToEnd(tail,88);
       tail = addToEnd(tail,56);
       print(tail);

       tail = delFirst(tail);
       print(tail);

} 