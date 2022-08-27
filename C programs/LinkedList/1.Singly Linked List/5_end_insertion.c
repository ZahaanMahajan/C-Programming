
// Insertion at the end by Traversing the list 

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

void print_data(struct node *head){
       if(head == NULL)
              printf("Linked list is Empty\n");
       
       else{
              struct node *ptr = head;
              while(ptr != NULL){
                     printf("%d ",ptr->data);
                     ptr = ptr->link;
              }
              printf("\n");
       }
}

void end_insert(struct node *head , int data){
       struct node *temp , *ptr;
       ptr = head;
       
       temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = NULL;

       while(ptr->link != NULL){
              ptr = ptr->link;
       }
       ptr->link = temp;

}

int main(){
       struct node *head = NULL;
       head = malloc(sizeof(struct node));
       head->data = 1;
       head->link = NULL;

       struct node *next = malloc(sizeof(struct node));
       next->data = 2;
       next->link = NULL;
       head->link = next;
       
       next = malloc(sizeof(struct node));
       next->data = 3;
       next->link = NULL;
       head->link->link = next;

       print_data(head);
       end_insert(head,100);
       print_data(head);
}