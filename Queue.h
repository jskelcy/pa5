#ifndef __Queue_h__
#define __Queue_h__
#include <stdlib.h>
#include <stdio.h>

typedef struct QNode QNode;
typedef struct Queue Queue;


struct QNode {
	void *data;
	QNode *next;
};
struct Queue {
	QNode *front;
	QNode *back;
	/*this needs to have a mutex in it*/
};
Queue *CreateQueue(void);
void enqueue(Queue *, void *);
void *dequeue(Queue *);
void *peek(Queue *);
void DestroyQueue(Queue *);
#endif
