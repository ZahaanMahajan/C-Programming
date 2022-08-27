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
struct node *del_first(struct node *head){
       struct node *ptr = head;
       head = head->next;
       head->prev = NULL;
       free(ptr);
       return head;

       // Method 2
       // free(head->prev)
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
       head = addtoEmpty(head,12);
       addtoEnd(head,34);
       addtoEnd(head,45);
       addtoEnd(head,56);
       
       print(head);

       head = del_first(head);
       print(head);
       return 0;
}