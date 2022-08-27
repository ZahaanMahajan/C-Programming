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
       while(ptr->next != NULL)
             ptr = ptr->next;

       ptr->next = temp;
       temp->prev = ptr;
 
       return head;
}

struct node *del_pos(struct node *head , int pos){
       struct node *temp1 = head;
       struct node *temp2 = head;

       while(pos > 1){
              temp1 = temp1->next;
              pos--;
       }
       
       temp2 = temp1->prev;
       temp2->next = temp1->next;
       temp1->next->prev = temp2;

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
       head = addtoEmpty(head,54);
       addtoEnd(head,34);
       addtoEnd(head,66);
       addtoEnd(head,90);
       addtoEnd(head,20);

       print(head);
       del_pos(head,4);
       print(head);
}