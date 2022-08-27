#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data){

       if(top == MAX-1){
              printf("Stack Overflow");
              return;
       }
       
       top++;
       stack_arr[top] = data;
}

int pop(){
       
       int value;
       if(top == -1){
              printf("Stack is Empty");
              
       }
       else{
              value = stack_arr[top];
              top--;
              return value;
       }
}

void print(){
       if(top == -1){
              printf("Stack UnderFlow\n");
              return;
       }
       for(int i = top; i >= 0; i--)
              printf("%d ",stack_arr[i]);
}

int main(){

       int arr[10];
       for(int i = 0; i<10;i++)
              printf("%d\n",arr);
       
}