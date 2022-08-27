#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b);

void print(int *arr, int length)
{
       for (int i = 0; i < length; i++)
              printf("%d  ",arr[i]);
       printf("\n");      
}
 
void insertionSort(int *arr, int length)
{
       for (int i = 0; i < length - 1; i++)
       {
              for (int j = i+1; j > 0; j--)
              {
                     if(arr[j] < arr[j - 1])
                            swap(&arr[j], &arr[j-1]);
                     else
                            break;
              }              
       }
}

int main(){
       int arr[] = {21,-24,46,24,-35,41,0,2,1,35,57,-7};
       int length = sizeof(arr)/sizeof(int);
       printf("\nArray before sorting : ");
       print(arr,length);
       insertionSort(arr,length);
       printf("\nArray after sorting : ");
       print(arr,length);
       printf("\n");
}

void swap(int *a, int *b)
{
       int temp = *a;
       *a = *b;
       *b = temp;
}