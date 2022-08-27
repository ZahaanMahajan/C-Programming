
// Inserting element at end by not Traversing

#include <stdio.h>
#include <stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *end_insertion(struct node *head , int data){
       struct node *ptr ,*temp;
       ptr = head;

       temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = NULL;
       
       ptr->link = temp;
       return temp;
       
}

struct node *addInSortedList(struct node *head , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = NULL;

       struct node *ptr;

       if(head == NULL || temp->data < head->data){
              temp->link = head;
              head = temp;
       }
       else{
              ptr = head;
              while (ptr->link != NULL && ptr->link->data < temp->data)
                     ptr = ptr->link;
              temp->link = ptr->link;
              ptr->link = temp;
       }

       return head;
}

void print(struct node *head){
       struct node *ptr = head;

       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }
       printf("\n");
}

int main () {
       struct node *head = malloc(sizeof(struct node));
       head->data = 5;
       head->link = NULL;
       
       struct node *ptr = head;
       ptr = end_insertion(ptr,10);
       ptr = end_insertion(ptr,15);
       ptr = end_insertion(ptr,20);
       ptr = end_insertion(ptr,30);

       printf("The Sorted List before insertion is : ");
       print(head);
       printf("\n");

       int element;
       printf("Enter the element to be inserted : ");
       scanf("%d",&element);
       printf("\n");

       head = addInSortedList(head,element);
       printf("The Sorted List after insertion is : ");
       print(head);
       printf("\n");
       
       return 0;
}