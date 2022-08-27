#include<stdio.h>

void bubbleSort(int a[] , int n){

       int temp , pass , i;
       for(pass = 0 ; pass < n-1 ; pass++)
       {
              for(i = 0; i < n-pass-1 ; i++)
              {
                     if(a[i] > a[i+1])
                     {
                            temp = a[i];
                            a[i] = a[i+1];
                            a[i+1] = temp;
                     }
              }
       }
}

void print(int *array , int size){
       
       for(int i = 0 ; i < size ; i++)
              printf("%d " ,array[i]);
}

int main(){

       int array[10] = {32,5,3,49,6,8,44,78,1,99};
       int size = sizeof(array)/sizeof(int);

       printf("\nThe Array before Sorting is : ");
       print(array, size);

       bubbleSort( array, size);

       printf("\nThe Sorted Array is : ");
       print(array, size);

       printf("\n");
       printf("\n");
}