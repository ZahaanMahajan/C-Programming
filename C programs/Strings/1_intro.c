#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
       char str[] = "zahaan ";
       char str2[] = "javaid";
       char str3[10];
       char str4[10];

       printf("%zu \n",strlen(str));
       puts(str);

       strcpy(str3, str2);
       puts(str3);

       int comp = strcmp(str2, str3);
       int comp2 = strcmp(str3, str);

       printf("%d  %d  \n",comp, comp2);

       strcat(str , str2);

       puts(str);
       puts(str2);

       strrev(str3);
       puts(str3);

       strupr(str2);
       puts(str2);

       strlwr(str2);
       puts(str2);

       gets(str4);
       puts(str4);
}

// string functions are :  gets, puts, 
// strlen, strcpy, strcmp, strcat, strrev, strlwr, strupr.

