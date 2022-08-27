#include<stdio.h>

int main(){
    int i , size , arr[100] , sum = 0 ;     // declaring variables

    printf("\n");
    printf("Enter the size of array : "); 
    scanf("%d" , &size); 

    printf("\n");
    printf("Enter the elements of the array : ");

    for(i=0;i<size;i++)
        scanf("%d" , &arr[i]);   // user input 

    printf("\n");
    printf("The Array is : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);   // displaying array

    printf("\n");
    for(i=0;i<size;i++)
        sum += arr[i];          // sum of elements of an array
    printf("\n");
    printf("Sum = %d",sum);
    printf("\n\n");
    return 0;

}