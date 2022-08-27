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
       
       while(i!=q->r){

              printf("%d ", q->arr[i]);
              i++;
       }

       printf("%d ",q->arr[i]);
       printf("\n\n");
}

int IsEmpty(struct queue *q){

       if (q->f == q->r)
              return 1;
       return 0;

}

int IsFull(struct queue *q){

       if (q->r == q->size-1)
              return 1;
       return 0;
}

void enqueue(struct queue *q, int val){

       if (IsFull(q))
              printf("Queue is Full\n");

       else
       {
              q->r++;
              q->arr[q->r] = val;
              printf("%d enqueued successfully\n", val);
       }
}

int dequeue(struct queue *q){

       int a = -1;

       if (IsEmpty(q))
              printf("Queue is Empty");

       else{
              q->f=(q->f+1)%q->size;
              a = q->arr[q->f];
       }

       printf("Dequeuing element %d\n",a);

       return a;
}

int main(){

       struct queue *q = (struct queue *)malloc(sizeof(struct queue));
       q->size = 5;
       q->f = q->r = -1;
       q->arr = (int *)malloc(q->size * sizeof(int));

       enqueue(q,12);
       enqueue(q,13);
       enqueue(q,14);
       enqueue(q,15);
       enqueue(q,16);
       
       dequeue(q);
       dequeue(q);
       dequeue(q);

       Show(q);
}