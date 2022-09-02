#include<stdio.h>
#include<stdlib.h>

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

void display(struct queue *q)
{
       if (isEmpty(q))
              printf("\nQueue is Empty!!!");
       else
       {
              int i;
              printf("\nQueue elements are:\n");
              for (i = q->f + 1; i <= q->r; i++)
                     printf("%d  ", q->arr[i]);
       }
       printf("\n");
}

int main(){

       struct queue q;
       q.size = 10;
       q.r = q.f = -1;
       q.arr = (int*)malloc(q.size*sizeof(int));

       // enqueuing elements
       enqueue(&q, 12);
       enqueue(&q, 23);
       enqueue(&q, 34);
       enqueue(&q, 17);
       enqueue(&q, 15);

       display(&q);

       // dequeuing elements
       dequeue(&q);
       dequeue(&q);
       dequeue(&q);
       
       display(&q);


}