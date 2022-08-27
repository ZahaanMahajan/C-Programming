
//creating a user input circular linked list 

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *addToEmpty(int data){
     struct node *temp = malloc(sizeof(struct node));
     temp->data = data;
     temp->link = temp;
     return temp;

}

struct node *addToEnd(struct node *tail , int data){
       struct node *temp = malloc(sizeof(struct node));
       temp->data = data;
       temp->link = tail->link;
       tail->link = temp;
       tail = temp;
       return tail;
}

struct node *createList(struct node *tail){
       int i , n , data;
       printf("Enter the number of node of the linked list: ");
       scanf("%d",&n);

       if(n == 0)
              return tail;
       
       printf("Enter the element 1: ");
       scanf("%d",&data);
       tail = addToEmpty(data);

       for(i=1;i<n;i++){
              printf("Enter the element %d:",i+1);
              scanf("%d",&data);
              tail = addToEnd(tail,data);
       }
       return tail;
}

void print(struct node *tail){

       struct node *ptr = tail->link;

       do{
              printf("%d ",ptr->data);
              ptr = ptr->link;
       }while (ptr != tail->link); 

       printf("\n");

}

int main(){
       struct node *tail;
       tail = createList(tail);
       print(tail);
}