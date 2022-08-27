#include<stdio.h>
#include<stdlib.h>

int func(int num)
{
       int count = 0;
       while(num)
       {
              count++;
              num >>= 1;
       }
       return count;
}

int main()
{
       int a = func(435);
       printf("%d" ,a);
}