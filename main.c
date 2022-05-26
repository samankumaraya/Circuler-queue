#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct queue{
   int count;
   int front;
   int rear;
   int qu[20];
}Queue;

void ini_queue(Queue *q){
   q->count=0;
   q->front=-1;
   q->rear=-1;
}

void IsQueueFull (Queue *q){
  return (q->count==0);
}

void insert(Queue *q, int x){
    if(IsQueueFull(q)){
        printf("Queue is full");
        exit(1);
    }
 q->rear = (q->rear+1)%20;
 //q->rear++;
 q->qu[q->rear]=x;
 q->count++;
}

int remove(Queue *q){
    int result;
    result=q->qu[q->front];
    //q->front++;
    q->front = (q->front + 1)%20;
    q->count--;
    return result;

}
