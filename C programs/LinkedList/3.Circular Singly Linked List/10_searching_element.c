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

int search(struct node *tail , int data){
       struct node *ptr;
       int count = 0;

       if(tail == NULL)
              return -2;
       
       else{
              ptr = tail->link;
              do{
                     if(ptr->data == data)
                            return count;
                     ptr = ptr->link;
                     count++;
              }while(ptr != tail->link);

              return -1;
       }
       
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
       struct node *tail = NULL;
       tail = circularSingly(12);
       tail = addToEnd(tail,23);
       tail = addToEnd(tail,34);
       tail = addToEnd(tail,45);
       tail = addToEnd(tail,56);
       print(tail);

       int element ;
       printf("Enter the Element : ");
       scanf("%d",&element);

       int pos = search(tail,element);
       if(pos == -1){
              printf("Element not found!");
       }
       else if(pos == -2){
              printf("Linked List is Empty!");
       }
       else{
              printf("The element %d is present at position : %d ", element ,pos+1);
       }

       return 0;
}