 
// Insertion at the end of array 
// when array is full

#include <stdio.h>
#include <stdlib.h>

int end_insertion(int a[],int b[],int n,int freePOS,int data){
       int i;
       for(i=0;i<n;i++)
              b[i] = a[i];
       
       b[freePOS] = data;
       freePOS++;
       return freePOS;

}

int main (){
       int a[3],i,n,freePOS;
       printf("Enter the number of elements : ");
       scanf("%d",&n);

       if(n>3){
              printf("Max space is 3");
       }

              printf("Enter the elements : ");
              for(i=0;i<n;i++)
                     scanf("%d",&n);
              
              int data;
              printf("Enter the element to be inserted at the end : ");
              scanf("%d",&data);

              int size = sizeof (a)/sizeof(a[0]);
              freePOS = n;

              if(n == size){
                     int b[4];
                     freePOS = end_insertion(a,b,size,freePOS,data);

                     for(i=0;i<freePOS;i++)
                            printf("%d ",b[i]);
              }
             
}