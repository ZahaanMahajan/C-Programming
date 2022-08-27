#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
}*top = NULL;

int isEmpty(){
       if(top == NULL)
              return 1;
       return 0;
}

int pop(){
       if(isEmpty())
              printf("Stack UnderFlow! \n");
       else{
              struct node *ptr = top;
              top = top->link;
              free(ptr);
       }
       // return top;
}

void push(int data){
       struct node *temp = malloc(sizeof(struct node));
       if(temp == NULL){
              printf("Stack OverFlow!\n");
              exit(1);
       }
       temp->data = data;
       temp->link = top;

       top = temp;

}

void print(){
       struct node *ptr = top;
       while(ptr != NULL){
              printf("%d  ",ptr->data);
              ptr = ptr->link;
       }
       printf("\n");
}

int main(){
       struct node *top = NULL;
       int deleted;

       push(1);
       push(12);
       push(13);
       push(14);
       push(15);
       push(18);

       print();

       deleted = pop();
       deleted = pop();
       deleted = pop();
       deleted = pop();

       print();

}