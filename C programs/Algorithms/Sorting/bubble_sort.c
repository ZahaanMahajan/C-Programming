

//       ********Bubble Sort Algorithm********


#include<stdio.h>
#include<stdlib.h>

void print(int *arr, int length)
{
       for (int i = 0; i < length; i++)
              printf("%d  ",arr[i]);

       printf("\n");
}

void swap(int *a, int *b)
{
       int temp = *a;
       *a = *b;
       *b = temp;
}

void bubbleSort(int *arr, int length)
{
       for (int i = 0; i < length-1; i++)
       {
              for (int j = 0; j < length-i-1; j++)
              {
                     if(arr[j] > arr[j+1])
                            swap(&arr[j], &arr[j+1]);
              }
       }      
}

int main(){
       
       int arr[] = {188,34,63,83,123,12,12,481,4,89,1802,26,346,68,986};
       int length = sizeof(arr)/sizeof(arr[0]);

       printf("The array before sorting : ");
       print(arr,length);

       bubbleSort(arr, length);
       
       printf("The array after sorting : ");
       print(arr,length);

}