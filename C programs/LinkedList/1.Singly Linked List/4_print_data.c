#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

int main(){
       struct node *head = NULL;
       head = (struct node*)malloc(sizeof(struct node));
       head->data = 45;
       head->link = NULL;

       struct node *linker = (struct node*)malloc(sizeof(struct node));
       linker->data = 98;
       linker->link = NULL;
       head->link = linker;

       linker = (struct node*)malloc(sizeof(struct node));
       linker->data =12;
       linker->link = NULL;
       head->link->link = linker;

       struct node *ptr = head;
       printf("\n");
              while(ptr != NULL){
                     printf("%d ",ptr->data);
                     ptr = ptr->link;
              }
       printf("\n");
       printf("\n");
}


// void print_data(struct node *head){
//        if(head == NULL)
//               printf("Linked list is Empty\n");
       
//        else{
//               struct node *ptr = head;
//               while(ptr != NULL){
//                      printf("%d ",ptr->data);
//                      ptr = ptr->link;
//               }
//        }
// }
       // print_data(head);