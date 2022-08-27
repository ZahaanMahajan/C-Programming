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

struct node *createList(struct node *head){
       int i , n , data;

       printf("Enter the number of nodes : ");
       scanf("%d",&n);

       if(n == 0)
              return head;

       printf("Enter the element for node 1 : ");
       scanf("%d",&data);
       head = addtoEmpty(head,data);

       for(i=1; i<n; i++){
              printf("Enter the element for node %d : ", i+1);
              scanf("%d",&data);
              head = addtoEnd(head,data);
       }
       return head;
}

int main(){
       struct node *head = NULL;
       head = createList(head);

       struct node *ptr = head;
       while(ptr != NULL){
              printf("%d ",ptr->data);
              ptr = ptr->next;
       }
       return 0;
}
