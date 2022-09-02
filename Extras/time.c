#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h>     // for sleep()
 
// main function to find the execution time of a C program
int main()
{
    // to store the execution time of code
    double time_spent = 0.0;
 
    clock_t begin = clock();
 int count;
    // do some stuff here
       for (int i = 0; i < 1000; i++) {
           for (int j = 0; j < 10000; j++){
                for (int k = 0; k < count; k++)
                    count++;
           }
       }
       printf("%d\n",count);

    sleep(3);
 
    clock_t end = clock();
 
    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("The elapsed time is %f seconds", time_spent);
 
    return 0;
}