 #include<stdio.h>
#include<stdlib.h>
#include<math.h>

int checkArmStrong(int num){

       int actual = num;
       int temp = num;
       int count = 0;
       int sum = 0;

       while (temp > 0) {
           count++;
           temp = temp / 10;
       }

       while (num > 0) {
           int rem = num % 10;
           sum += pow(rem, count);
           num = num / 10;
       }

       if(sum == actual)
             return 1;
             
       return 0;
}

void printArmStrong(int num){
       
       for (int i = 0; i < num; i++) 
            if (checkArmStrong(i)) 
              printf("%d\n",i);
}

int main(){
       int num;
       printf("Enter the highest number : ");
       scanf("%d",&num);

       printf("ArmStrong Numbers are : ");
       printArmStrong(num);
       
}