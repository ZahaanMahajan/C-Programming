#include<stdio.h>
#include<stdlib.h>


int stack_arr[10];
int top = -1;

void push(int data){
       top++;
       stack_arr[top] = data;
}

void primeFactorization(int number){

       for(int i = 2; i <= number;){

              if(number % i == 0){
                     number = number / i;
                     push(i);
              }
              
              else
                     i++;
       }
}

// void PrimeFactor(int num){
//        int i = 2;
//        while(num != 1){
//               while (num % i == 0){
//                      push(i);
//                      num = num/i;
//               }
//               i++;              
//        }
// }

void print(){

       int i ;
       
       for(i = top; i >=0 ; i--){
              printf("%d ",stack_arr[i]);
       }
       printf("\n");
}

int main(){
       
       int num;

       printf("Enter the number to be Prime Factorized : ");
       scanf("%d",&num);

       printf("Prime Factors of %d are : ",num);
       primeFactorization(num);

       // PrimeFactor(num);

       print();
}