#ifndef __Queue_h__
#define __Queue_h__
#include "customerDB.h"
typedef struct QNode QNode;
typedef struct Queue Queue;
typedef struct QueueBlob QueueBlob;

struct QueueBlob{
	Queue *Queue1;
	Queue *Queue2;
};

struct QNode {
	void *data;
	QNode *next;
};
struct Queue {
	QNode *front;
	QNode *back;
};
QueueBlob *QueueBlobInit(void);
Queue *CreateQueue(void);
void enqueue(Queue *, void *);
void *dequeue(Queue *);
void *peek(Queue *);
void DestroyQueue(Queue *);
#endif
