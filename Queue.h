#ifndef __Queue_h__
#define __Queue_h__
#include <stdlib.h>
typedef struct QNode QNode;
typedef struct Queue Queue;
struct QNode {
	Order *order;
	QNode *next;
};
struct Queue {
	QNode *front;
	QNode *back;
};
Queue *CreateQueue(void);
void enqueue(Queue *, Order *);
Order *dequeue(Queue *);
void DestroyQueue(Queue *);
#endif
