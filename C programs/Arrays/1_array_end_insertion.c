
//Insertion at the end of array
//When Array is not full

#include <stdio.h>
#include <stdlib.h>

int end_insertion(int a[],int freePOS , int data ){
       a[freePOS] = data;
       freePOS++;
       return freePOS;
}

int main(){

       int a[10],i,n,freePos,data;

       printf("Enter the number of elements : ");
       scanf("%d",&n);

       printf("Enter the Elements : ");
       for(i=0;i<n;i++)
              scanf("%d",&a[i]);
       
       printf("Enter the element to be added at the End : ");
       scanf("%d",&data);
       
       freePos = n;
       freePos = end_insertion(a,freePos,data);

       for(i=0;i<freePos;i++){
              printf("%d ",a[i]);
       }
}