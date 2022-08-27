#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int *arr, int length, int target)
{
       for (int i = 0; i < length; i++)
       {
              if(arr[i] == target)
                     return i;
       }
       return -1;
}

int main(){
       
       int arr[] = {1,4,6,8,12,41,46,89,102,256,346,678,986};
       int length = sizeof(arr)/sizeof(int);
       int target;
       printf("Enter the target element : ");
       scanf("%d",&target);

       int index = LinearSearch(arr,length,target);

       if(index == -1)
              printf("The element %d is not present in the array.",target);
       else
              printf("The element %d is at the index %d.", target, index);
}