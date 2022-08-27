
// using only 1 pointer 

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *end_insertion(struct node *head,int data){
      struct node *ptr ,*temp;
      ptr = head;

      temp = malloc(sizeof(struct node));
      temp->data = data;
      temp->link = NULL;

      ptr->link = temp;
      return temp;

}

void del_last(struct node *head){
       if(head == NULL)
              printf("List is already Empty!\n");
       
       else if(head->link == NULL){
              free(head);
              head = NULL;
       }

       else{
              struct node *ptr = head;

              while(ptr->link->link != NULL){
                     ptr = ptr->link; 
              }
              free(ptr->link);
              ptr->link = NULL;
       }

}

int main(){
       struct node *head = malloc(sizeof(struct node));
       head->data = 1975;
       head->link = NULL;

       struct node *ptr = head;

       ptr = end_insertion(ptr,1);
       ptr = end_insertion(ptr,2);
       ptr = end_insertion(ptr,3);
       ptr = end_insertion(ptr,4);
       ptr = end_insertion(ptr,5);
       ptr = end_insertion(ptr,32654);

       del_last(head);

       ptr = head;
       while(ptr != NULL){
              printf("%d ", ptr->data);
              ptr = ptr->link;
       }
       return 0;
}