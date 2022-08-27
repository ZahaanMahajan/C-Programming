#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int *array, int low, int high) {
  int pivot = array[low];
  int i = high;

  for (int j = high; j > low; j--) {
    if (array[j] <= pivot) {
      i--;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i+1], &array[low]);
  return (i-1);
}

void quickSort(int *array, int low, int high){
     if (low < high)
     {
          int part = partition(array , low , high);
          quickSort(array, low, part-1);
          quickSort(array, part+1, high);
     }
}

void printArray(int array[], int size) {
     for (int i = 0; i < size; ++i) {
          printf("%d  ", array[i]);
     }
     printf("\n");
}


int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  int n = sizeof(data) / sizeof(data[0]);
  printf("Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}