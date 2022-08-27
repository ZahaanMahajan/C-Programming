#include <stdio.h>
int main()
{
   int arr[100] = {1,2,3,4,5,6,7,8,9,10};
   int pos, i, n = 10;

   printf("\n");
   for(i=0;i<n;i++){
       printf("%d  ",arr[i]);
   }
   printf("\n");
   printf("\n");

   printf("Enter the location where you wish to delete element : ");
   scanf("%d", &pos);
   printf("\n\n");


   if (pos >= n+1)
      printf("Deletion not possible.\n\n");
   else
   {
      for (i = pos - 1; i < n - 1; i++)
         arr[i] = arr[i+1];

      printf("Resultant Array: ");

      for (i = 0; i < n - 1; i++)
         printf("%d  ", arr[i]);
      }
   printf("\n\n");
}