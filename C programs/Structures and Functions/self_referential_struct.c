#include<stdio.h>

struct code{
       int i;
       char c;
       struct code *ptr;
};

int main(){
       struct code v1 = {10,'A', NULL};
       struct code v2 = {20,'B', NULL};
       v1.ptr = &v2;

       printf("%d\n",v1.ptr->i);
       printf("%d\n",v2.i);

}