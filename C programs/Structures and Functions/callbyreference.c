#include<stdio.h>

struct charset{
    char i;
    int n;

};

void keyValue(char* i , int* n){
    scanf("%c %d",i,n);
}

int main()
{
    struct charset cs;
    keyValue(&cs.i , &cs.n);
    printf("%c %d", cs.i , cs.n);
    return 0;
    
}