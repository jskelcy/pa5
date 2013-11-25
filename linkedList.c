#include "linkedList.h"

void LLinsert(linkedList *, book *node){
	Node *curr = (Node *) malloc(sizeof(Node));
	curr.data = (void) node;  
	node->next = LL.front;
	LL.front -> node;
}