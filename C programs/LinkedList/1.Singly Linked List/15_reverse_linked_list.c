
// Reversing a Linked List

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

struct node *reverse_list(struct node *head){
       struct node *prev = NULL;
       struct node *next = NULL;

       while(head != NULL){
              next = head->link;
              head->link = prev;
              prev = head;
              head = next;
       }
       head = prev;
       return head;
}

int main(){
       struct node *head = malloc(sizeof(struct node));
       head->data = 1;
       head->link = NULL;

       struct node *ptr = head;
       ptr = end_insertion(ptr,2);
       ptr = end_insertion(ptr,3);
       ptr = end_insertion(ptr,4);
       ptr = end_insertion(ptr,5);
       ptr = end_insertion(ptr,6);
       ptr = end_insertion(ptr,7);
       ptr = end_insertion(ptr,8);
       ptr = end_insertion(ptr,9);
       ptr = end_insertion(ptr,10);

       head = reverse_list(head);

       ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }

       return 0;
}