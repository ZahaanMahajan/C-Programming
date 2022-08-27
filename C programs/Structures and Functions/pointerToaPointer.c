#include<stdio.h>
#include<stdlib.h>

void changeValue(int **temp){
       int b = 99;
       *temp = &b;
}

int main(){
       int a = 34;
       int *ptr = &a;
       printf("%d \n",*ptr);

       changeValue(&ptr);
       printf("%d ",*ptr);
}