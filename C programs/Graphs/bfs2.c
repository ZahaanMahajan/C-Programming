#include <stdio.h>
#include <stdlib.h>


struct queue
{
       int size;
       int r;
       int f;
       int *arr;
};

int isFull(struct queue *q)
{
       if(q->r == q->size-1)
              return 1;
       return 0;
}

int isEmpty(struct queue *q)
{
       if(q->r == q->f)
              return 1;
       return 0;
}

void enqueue(struct queue *q, int val)
{
       if(isFull(q))
              printf("The queue is full");

       else
       {
              q->r++;
              q->arr[q->r] = val;
       }
}

int dequeue(struct queue *q)
{
       if(isEmpty(q))
              printf("The queue is Empty.");

       else
       {
              q->f++;
              return q->arr[q->f];
       }
       
}



int main()
{
       struct queue q;
       q.f = q.r = -1;
       q.size = 5;
       q.arr = (int*)malloc(q.size * (sizeof(int)));
       int node, i = 0;
       int visited[5] = {0, 0, 0, 0, 0};

       int a[5][5] = {

           {0, 1, 0, 1, 0},
           {1, 0, 1, 0, 0},
           {1, 1, 0, 1, 1},
           {1, 0, 1, 0, 1},
           {0, 0, 1, 1, 0}

           };

       

       printf("%d ", i);
       visited[i] = 1;
       enqueue(&q, i);
       while (!isEmpty(&q)){
              int node = dequeue(&q);
              for (int j = 0; j < 5; j++){
                     if (a[node][j] == 1 && visited[j] == 0){
                            printf("%d ", j);
                            visited[j] = 1;
                            enqueue(&q, j);
                     }
              }
       }
}