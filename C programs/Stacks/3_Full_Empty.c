#include<stdio.h>
#include<stdlib.h>
#define MAX 6

int stack_arr[MAX];
int top = -1;

int isFull(){
       if(top == MAX-1)
              return 1;
       return 0;
}

int isEmpty(){
       if(top == -1)
              return 1;
       return 0;
}

void push(int data){

       if(isFull()){
              printf("Stack Overflow\n");
              return;
       }
       
       top++;
       stack_arr[top] = data;
}

int pop(){

       int value;
       if(isEmpty()){
              printf("Stack is Empty\n");
              exit(1);
       }
       else{
              value = stack_arr[top];
              top--;
              return value;
       }
}

void print(){
       
       if(isEmpty()){
              printf("Stack UnderFlow\n");
              return;
       }
       for(int i = top; i >= 0; i--)
              printf("%d ",stack_arr[i]);
       printf("\n");

}

int main(){

       int deleted , data , n;

       printf("\n");
       for (int i = 0; i < MAX; i++){
              printf("Enter the Element %d : ",i+1);
              scanf("%d",&data);
              push(data);
       }
       
       printf("\nThe Elements Of the Stacks are : ");
       print();
       printf("\n");

       n = 1;

       while(n == 1){

              printf("Press 1 to Pop.....\n");
              scanf("%d",&n);

              if(n == 1)
                     deleted = pop();
              else
                     exit(1);

       printf("\nThe Elements Of the Stacks are : ");
       print();
       printf("\n");


       }

       return 0;
       
}