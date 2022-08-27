#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    printf("Enter the number of integers : ");
    scanf("%d",&n);
    int *ptr = (int*)calloc(n , sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not available");
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("Enter the numbers : ");
        scanf("%d",ptr+i);
    }

    int x;
    printf("Enter the number of integers to be added : ");
    scanf("%d",&x);

    int *p = (int*)realloc(ptr , x*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not available");
        exit(1);
    }

    for(i=n;i<x+n;i++)
    {
        printf("Enter the numbers : ");
        scanf("%d", p+i);
    }

    for(i=0;i<x+n;i++)
    {
        printf("%d\t",*(p+i));
    }


}