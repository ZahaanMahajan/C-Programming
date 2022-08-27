#include<stdio.h>
#include<stdlib.h>

struct node{
       struct node *prev;
       int data;
       struct node *next;
};

struct node *addtoEmpty(struct node *head , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->prev = NULL;
       temp->data = data;
       temp->next = NULL;

       head = temp;
       return head;
}

struct node *addtoBeg(struct node *head , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->prev = NULL;
       temp->data = data;
       temp->next = NULL;

       temp->next = head;
       head->prev = temp;
       head = temp;

       return head;
}

struct node *addtoEnd(struct node *head , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->prev = NULL;
       temp->data = data;
       temp->next = NULL;

       struct node *ptr = head;
       while(ptr->next != NULL)
             ptr = ptr->next;

       ptr->next = temp;
       temp->prev = ptr;
 
       return head;
}

struct node *addtoPos(struct node *head , int data , int pos){
       struct node *ptr = addtoEmpty(ptr,data);

       struct node *temp1 = head;
       struct node *temp2 = head;

              while(pos > 2){
                     temp1 = temp1->next;
                     pos--;
              }

              if(pos == 1)
                     head = addtoBeg(head,data);

              else if(temp1->next == NULL){
                     temp1->next = ptr;
                     ptr->prev = temp1;
              }

              else{
              temp2 = temp1->next;

              temp1->next = ptr;
              temp2->prev = ptr;
              ptr->prev = temp1;
              ptr->next = temp2;
              }

       return head;
       
}

int main(){
       struct node *head = NULL;
       head = addtoEmpty(head,12);
       head = addtoBeg(head,21);
       head = addtoEnd(head,13);
       head = addtoPos(head,99,4);

       struct node *ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->next;
       }

}
