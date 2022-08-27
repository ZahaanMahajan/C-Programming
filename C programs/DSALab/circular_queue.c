#include <stdio.h>
#include <stdlib.h>

struct queue{
       
       int size;     
       int f;
       int r;
       int *arr;
};

int Show(struct queue *q){

       printf("\n");
       int i=q->f+1;
       while(i!=q->r)
       {
              printf("%d ", q->arr[i]);
              i=(i+1)%q->size;
       }
       printf("%d ",q->arr[i]);
       printf("\n\n");
}

int IsEmpty(struct queue *q){

       if (q->f == q->r)
       {
              return 1;
       }
       return 0;
}

int IsFull(struct queue *q){

       if ((q->r+1)%q->size == q->f)
       {
              return 1;
       }
       return 0;
}

void enqueue(struct queue *q, int val){

       if (IsFull(q))
       {
              printf("Queue is Full\n");
       }
       else
       {
              q->r=(q->r+1)%q->size;
              q->arr[q->r] = val;
              printf("%d enqueued successfully\n", val);
       }
}

int dequeue(struct queue *q){

       int a = -1;
       if (IsEmpty(q))
       {
              printf("Queue is Empty");
       }
       else
       {
              q->f=(q->f+1)%q->size;
              a = q->arr[q->f];
       }
       return a;
}

int main(){

       struct queue *q = (struct queue *)malloc(sizeof(struct queue));
       q->size = 5;
       q->f = q->r = 0;
       q->arr = (int *)malloc(q->size * sizeof(int));
       enqueue(q, 25);
       enqueue(q, 2);
       enqueue(q, 67);
       enqueue(q, 6);
       enqueue(q, 90);
       Show(q);
       printf("%d dequeued successfully\n", dequeue(q));
       printf("%d dequeued successfully\n", dequeue(q));
       enqueue(q,2);
       enqueue(q,2);
       enqueue(q,2);
       enqueue(q,2);
       enqueue(q,2);

       Show(q);
}