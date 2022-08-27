#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int binSearch(int *arr, int length, int target)
{
       int start = 0; 
       int end = length - 1;

       bool isAsc = arr[start] < arr[end];

       while (start <= end)
       {
              
              int mid = start + (end - start) / 2;
              
              if(arr[mid] == target)
                     return mid;

              if(isAsc)
              {
                     if(target > arr[mid])
                            start = mid + 1;
                     else
                            end = mid - 1;
              }
              else
              {
                     if(target < arr[mid])
                            start = mid + 1;
                     else
                            end = mid - 1;
              }
       }
       return -1;
       
}

int main(){

       int arr[] = {1,4,6,8,12,41,46,89,102,256,346,678,986};
       int length = sizeof(arr)/sizeof(int);
       int target;
       printf("Enter the target element : ");
       scanf("%d",&target);

       int index = binSearch(arr,length,target);

       if(index == -1)
              printf("The element %d is not present in the array.",target);
       else
              printf("The element %d is at the index %d.", target, index);
              

}