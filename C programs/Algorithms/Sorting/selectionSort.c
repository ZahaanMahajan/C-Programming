#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
       int temp = *a;
       *a = *b;
       *b = temp;
}

void print(int *arr, int length)
{
       for (int i = 0; i < length; i++)
              printf("%d  ",arr[i]);
       printf("\n");      
}

void selectionSort(int *arr, int length)
{

       for (int i = 0; i < length-1; i++)
       {
              int min = i;
              for (int j = i+1; j < length; j++)
              {
                     if(arr[min] > arr[j])
                     min = j;
              }
              swap(&arr[min], &arr[i]);              
       }
       
}

int main(){

       int arr[] = {21,-24,46,24,-35,41,0,2,1,35,57,-7};
       int length = sizeof(arr)/sizeof(int);
       printf("\nArray before sorting : ");
       print(arr,length);
       selectionSort(arr,length);
       printf("\nArray after sorting : ");
       print(arr,length);
       printf("\n");

}