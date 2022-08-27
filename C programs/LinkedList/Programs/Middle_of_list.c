#include<stdio.h>
#include<stdlib.h>

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

int find_mid(struct node *head){
       struct node *ptr = head;
       int count = 0;
       int middle;
       int mid;

       if(head == NULL){
              printf("list is empty!");
       }
       else{
              while(ptr != NULL){
                     count++;
                     ptr = ptr->link;
              }
              if(count%2 == 0){
                     return mid = (count+2)/2;
              }
              else{
                     return middle = (count+1)/2;
              }
       }

}

int main(){
       struct node *head = malloc(sizeof(struct node));
       head->data = 12;
       head->link = NULL;

       struct node *ptr = head;

       ptr = end_insertion(ptr,34);
       // ptr = end_insertion(ptr,45);
       ptr = end_insertion(ptr,65);
       ptr = end_insertion(ptr,99);
       ptr = end_insertion(ptr,23);
       ptr = end_insertion(ptr,45);
       ptr = end_insertion(ptr,56);
       ptr = end_insertion(ptr,76);
       ptr = end_insertion(ptr,10);

       printf("The List is :\n ");


       ptr = head;
              while(ptr != NULL){
                     printf("%d ",ptr->data);
                     ptr = ptr->link;
              }

       int mid = find_mid(head);

       // printf("%d",mid);

       if(mid%2 == 0){
              printf("\nThe Middle nodes are present at position : %d , %d \n", mid-1 , mid);

              struct node *temp = head;
              while(mid != 2){
                     mid--;
                     temp = temp->link;
              }

              printf("The Middle nodes are : %d , %d\n",temp->data , temp->link->data);
       }

       else{
              printf("\nThe Middle node is present at position : %d \n", mid);

              struct node *temp = head;
              while(mid != 1){
                     mid--;
                     temp = temp->link;
              }
              printf("The Middle node is : %d\n", temp->data);
       
       }
       return 0;
}