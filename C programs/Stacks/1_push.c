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

int main(){
       push(1);
       push(1);
       push(1);
       push(1);

       return 0;
}