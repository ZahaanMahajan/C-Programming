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

struct node *del_list(struct node *head){
       struct node *ptr = head;

       while(ptr != NULL){
              ptr = head->link;
              free(head);
              head = ptr;
       }
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

       head = del_list(head);

       if(head == NULL)
              printf("List is deleted successfully!");

       return 0;
}