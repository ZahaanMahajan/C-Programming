#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *insert_node(struct node *head ,int data, int pos){
       struct node *ptr = head;
       struct node *ptr2 = malloc(sizeof(struct node));
       ptr2->data = data;
       ptr2->link = NULL;

       // pos--; (pos != 1)
       
       while(pos != 2){
              ptr = ptr->link;
              pos--; 
       }
       
       ptr2->link = ptr->link;
       ptr->link = ptr2;

}

struct node *end_insertion(struct node *head,int data){
       struct node *ptr ,*temp;
       ptr = head;

       temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = NULL;
       
       ptr->link = temp;
       return temp;
       
}

int main(){
       struct node *head = malloc(sizeof(struct node));
       head->data = 1;
       head->link = NULL;

       struct node *ptr = head;
       ptr = end_insertion(ptr,2);
       ptr = end_insertion(ptr,3);
       ptr = end_insertion(ptr,4);
       ptr = end_insertion(ptr,6);
       ptr = end_insertion(ptr,7);

       int data = 5 , pos = 5;
       insert_node(head,data,pos);

       ptr = head; 
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }
}