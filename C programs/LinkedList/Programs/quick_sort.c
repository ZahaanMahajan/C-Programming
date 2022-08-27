#include<stdio.h>

void swap();
int partition();
void quickSort();
void printArray();


int main(){
     int arr[] = {12,54,89,32,65,90,19,73};
     int size  = sizeof arr/sizeof(int);
     printArray(arr,size);
     quickSort(arr,0,size-1);
     printArray(arr,size);
}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int *arr , int low , int high){
     int ref = arr[high];
     int i = low-1;

     for(int j=low;j<high;j++){
          if(arr[j] <= ref){
               i++;
               swap(&arr[i],&arr[j]);
          }
     }
     swap(&arr[i+1],&arr[high]);
     return i+1;
}

void quickSort(int *arr , int low , int high){
     if(low < high){
          int part = partition(arr , low , high);
          quickSort(arr , low , part-1);
          quickSort(arr , part+1 , high);
     }
}

void printArray(int *arr , int size){
     for(int i = 0 ; i < size; i++ ){
          printf("%d\t", arr[i]);
     }
     printf("\n");
}