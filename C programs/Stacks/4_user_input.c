#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top = -1;

int isFull();
int isEmpty();
void push(int data);
int pop();
void print();
int printTop();

int main(){

       int choice , data;


       while(1){

              printf("\n");
              printf("1. Push\n");
              printf("2. Pop\n");
              printf("3. Print the Top Element\n");
              printf("4. Print all the Elements\n");
              printf("5. Quit\n");

              printf("\n");
              printf("Please Enter your choice: ");
              scanf("%d",&choice);

              switch(choice){

                     case 1: 
                     
                            printf("\nEnter the Element to be Pushed: ");
                            scanf("%d",&data);
                            push(data);
                            break;
                     
                     case 2 : 

                            data = pop();
                            printf("\nDeleted Element is : %d\n",data);
                            break;
                     
                     case 3 : 
                     
                            printf("\nThe topmost element of the Stack is : %d\n", printTop());
                            break;
                     
                     case 4 : 
                     
                            print();
                            break;
                     
                     case 5 : 

                            exit(1);

                     default: 

                            printf("\nWrong Choice\n");
              }
       }

       return 0;
}
       
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
       
       printf("\nThe Elements of Stack are : ");

       for(int i = top; i >= 0; i--)
              printf("%d ",stack_arr[i]);
       printf("\n");

}
int printTop(){
       
       if(isEmpty()){
              printf("Stack Underflow\n");
              exit(1);
       }

       return stack_arr[top];

}