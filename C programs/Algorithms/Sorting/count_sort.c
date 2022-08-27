

//       ********Count Sort Algorithm********

#include<stdio.h>
#include<stdlib.h>

void print(int *array, int size){

       for (int i = 0; i < size; i++)
              printf("%d ",array[i]);
       printf("\n");     

}

int maxVal(int *array , int size){
       int max = array[0];
       for (int i = 0; i < size; i++)
              if(array[i] > max)
                     max = array[i];
       return max;       
}

void countSort(int *array , int size){

       int max = maxVal(array,size);
       int *count = (int*)malloc((max+1)*sizeof(int));

       for (int i = 0; i < max+1; i++)
              count[i] = 0;

       for (int i = 0; i < size; i++)
              count[array[i]]++;

       int i = 0;
       int j = 0;
       
       while (i <= max)
       {
              if (count[i] > 0)
              {             
                     array[j] = i;
                     count[i]--;
                     j++;      
              }

              else
                     i++;
       }
}

int main(){

       int array[] = {3,2,4,8,6,7,9,3,4,5};
       int size = sizeof(array)/sizeof(int);
       print(array,size);
       countSort(array,size);
       print(array,size);

}
