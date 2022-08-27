#include <stdio.h>
 
int main()
{
    int arr[100] = {1,2,3,4,5,6,7,8,9,10};
    int i, x, pos, n = 10;
    
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);     // print the original array
    printf("\n");
    printf("\n");
 
   
    x = 50;                     // element to be inserted
    pos = 1;                    // position at which element is to be inserted
    n++;                        // increase the size by 1

    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i-1];           // shift elements forward  
  
    arr[pos - 1] = x;                // insert x at pos
 
    
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]);       // print the updated array
        
    printf("\n");
    printf("\n");

}