Queue *CreateQueue(void) {
	Queue *queue = (Queue *)malloc(sizeof(Queue));
	queue->front = NULL;
	queue->back = NULL;
	return queue;
}

void enqueue(Queue *queue, Order *order) {
	QNode *node = (QNode *)malloc(sizeof(QNode));
	if (queue == NULL) {
		return;
	}
	node->order = order;
	node->next = NULL;
	if (queue->front == NULL) {
		queue->front = node;
		queue->back = node;
	} else {
		queue->back->next = node;
		queue->back = queue->back->next;
	}
}

Order *dequeue(Queue *queue) {
	QNode *node;
	Order *order = NULL;
	if (queue == NULL) {
		return NULL;
	}
	node = queue->front;
	if (node != NULL) {
		order = node->order;
		if (queue->back == node) {
			queue->front = NULL;
			queue->back = NULL;
		} else {
			queue->front = queue->front->next;
		}
		free(node);
	}
	return order;
}

void DestroyQNode(QNode *node) {
	DestroyQNode(node->next);
	free(node);
}

void DestroyQueue(Queue *queue) {
	queue->back = NULL;
	DestroyQNode(queue->front);
	free(queue);
}
