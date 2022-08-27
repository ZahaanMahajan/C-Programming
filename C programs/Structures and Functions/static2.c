#include<stdio.h>
#include<stdlib.h>

static int a;
static int a = 10;
static int a;

int main(){
       static int a = 100;
       printf("%d",a);
}