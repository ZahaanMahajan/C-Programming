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

struct node *del_last(struct node *head){
       struct node *temp1 = head;
       struct node *temp2 = head;

       while(temp1->next != NULL){
              temp1 = temp1->next;
       }
       temp2 = temp1->prev;
       temp2->next = NULL;
       free(temp1);
       temp1 = NULL;

}

int main(){
       struct node *head = NULL;
       head = addtoEmpty(head,22);
       addtoEnd(head,33);
       addtoEnd(head,44);
       addtoEnd(head,55);
       addtoEnd(head,66);
       addtoEnd(head,77);

       del_last(head);
       
       struct node *ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->next;
       }

       return 0;

}