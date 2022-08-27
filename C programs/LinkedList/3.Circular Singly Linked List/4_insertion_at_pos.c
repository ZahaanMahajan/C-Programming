
// insertion at any position other than first and last node

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *addToEmpty(int data){
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

struct node *addToPos(struct node *tail , int data , int pos){

       struct node *temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = NULL;

       struct node *ptr = tail->link;


       if(pos != 1){
              while (pos > 2){
                     ptr = ptr->link;
                     pos--;
              }
              temp->link = ptr->link;
              ptr->link = temp;
       }
       
       else{
              temp->link = tail->link;
              tail->link = temp;
       }
       
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

int main(){

       struct node *tail;

       tail = addToEmpty(11);
       tail = addToBeg(tail,33);
       tail = addToEnd(tail,34);
       tail = addToEnd(tail,65);
       tail = addToEnd(tail,98);

       print(tail);
       
       tail = addToPos(tail,23,3);
       tail = addToPos(tail,54,6);
       tail = addToPos(tail,99,7);

       print(tail);

}