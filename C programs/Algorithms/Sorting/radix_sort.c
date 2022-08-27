#include<stdio.h>
#include<stdlib.h>

void print(int *array, int size){
       for (int i = 0; i < size; i++){
              printf("%d ",array[i]);
       }
       printf("\n");       
}

int maxVal(int *array , int size){
       int max = array[0];
       for (int i = 0; i < size; i++)
              if(array[i] > max)
                     max = array[i];
       return max;       
}

void countSort(int *array , int size , int exp){

       int output[size] , i;
       int max = maxVal(array,size);
       int count[10];

       for (i = 0; i < 10; i++)
              count[i] = 0;

       for (i = 0; i < size; i++)
            count[(array[i] / exp) % 10]++;

       for (i = 1; i < 10; i++)
            count[i] = count[i] + count[i-1];

       for (i = size - 1; i >= 0; i--) {
            output[count[(array[i] / exp) % 10]-1] = array[i];
            count[(array[i] / exp) % 10]--;
       }

       for (i = 0; i < size; i++)
            array[i] = output[i];
            
}

void radixSort(int *array , int size)
{
       int m = maxVal(array,size);

       for (int exp = 1; (m / exp) > 0; exp *= 10)
              countSort(array,size,exp);
}


int main(){
       
       int array[] = {222,773,35,578,952,100};
       int size = sizeof(array)/sizeof(int);
       print(array,size);
       radixSort(array,size);
       print(array,size);
       return 0;

}