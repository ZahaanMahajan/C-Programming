#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[5];
int first = -1;

int isFull(){
       if(first == MAX-1)
              return 1;
       return 0;
}

int isEmpty(){
       if(first == -1)
              return 1;
       return 0;
}

void push(int data){

       if(isFull())
              printf("Stack Overflow !");

       else{
              int i;
              first++;
              for(i = first ; i > 0 ; i--)
                     stack_arr[i] = stack_arr[i-1];
              
              stack_arr[i] = data;
       }
}

int pop(){

       int value;

       if(isEmpty())
              printf("Stack Underflow !");

       else{
              value = stack_arr[0];
              for(int i = 0; i < first; i++){
                     stack_arr[i] = stack_arr[i+1];
              }
                     first--;
       }
}

int main(){

       int data , i , deleted;

       push(12);
       push(13);
       push(14);
       push(15);
       push(16);
       
       for(i=0;i<=first;i++)
              printf("%d  ", stack_arr[i]);
       printf("\n");

       deleted = pop();
       deleted = pop();
       deleted = pop();
       deleted = pop();

       for(i=0;i<=first;i++)
              printf("%d  ", stack_arr[i]);

       return 0;

}