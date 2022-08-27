#include<stdio.h>
#include<stdlib.h>

int func()
{
       static int x = 10;
       x++;
       return x;
}

int main(){
       func();
       func();
       func();
       int var = func();
       printf("%d",var);
}