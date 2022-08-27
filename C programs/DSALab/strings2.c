#include<stdio.h>

void main(){
       char str1[50] = "Airaad ";
       char str2[50] = "Shiekh";
       char str3[50];
       int i = 0 , j = 0 , k = 0;

       while(str1[i] != '\0'){
              str3[k] = str1[i];
              i++;
              k++;
       } 

       while(str2[j] != '\0'){
              str3[k] = str2[j];
              j++;
              k++;
       } 

       str3[k] = '\0';

       printf("\n");
       printf("Resultant String : %s " , str3);
       printf("\n");
       printf("\n");

       
}