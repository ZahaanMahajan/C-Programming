
// Inserting element at end by not Traversing

#include <stdio.h>
#include <stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *end_insertion(struct node *head , int data){
       struct node *ptr ,*temp;
       ptr = head;

       temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = NULL;
       
       ptr->link = temp;
       return temp;
       
}

int main () {
       struct node *head = malloc(sizeof(struct node));
       head->data = 5;
       head->link = NULL;
       
       struct node *ptr = head;
       
       ptr = end_insertion(ptr,10);
       ptr = end_insertion(ptr,15);
       ptr = end_insertion(ptr,20);
       ptr = end_insertion(ptr,30);

       ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }

}