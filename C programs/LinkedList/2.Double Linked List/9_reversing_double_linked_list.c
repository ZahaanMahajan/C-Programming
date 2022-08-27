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

struct node *addtoEnd(struct node *head , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->prev = NULL;
       temp->data = data;
       temp->next = NULL;

       struct node *ptr = head;
       while(ptr->next != NULL){
              ptr = ptr->next;
       }
       ptr->next = temp;
       temp->prev = ptr;
       
       return head;
}

struct node *reverse_list(struct node *head){
       struct node *temp1 = head;
       struct node *temp2 = temp1->next;

       temp1->next = NULL;
       temp1->prev = temp2;

       while(temp2 != NULL){

              temp2->prev = temp2->next;
              temp2->next = temp1;
              temp1 = temp2;
              temp2 = temp1->prev;

       }

       head = temp1;
       return head;

}

void print(struct node *head){

       struct node *ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->next;
       }
       printf("\n");
}

int main(){
       struct node *head = NULL;
       head = addtoEmpty(head,45);
       addtoEnd(head,19);
       addtoEnd(head,87);
       addtoEnd(head,12);
       addtoEnd(head,100);

       print(head);
       head = reverse_list(head);
       print(head);

}