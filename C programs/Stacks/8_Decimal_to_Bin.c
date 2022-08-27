#include<stdio.h>
#include<stdlib.h>

int stack_arr[16];
int top = -1;

void push(int bin){
       
       top++;
       stack_arr[top] = bin;
}

int DecToBin(int number){

       int bin;
       while(number != 0){
              bin = number % 2;
              number = number / 2;
              push(bin);
       }
}

void print(){

       int i;
       for(i = top; i >= 0; i--)
              printf("%d  ",stack_arr[i]);
       
       printf("\n");
}

int main(){

       int num;
       printf("Enter the Decimal Number : ");
       scanf("%d",&num);

       DecToBin(num);
       printf("Binary equivalent of given decimal %d is : ",num);
       print();

}