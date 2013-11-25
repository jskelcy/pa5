#include "linkedList.h"

linkedList *LLinit(){
	linkedList *curr = (linkedList *) malloc(linkedList);
	return curr;
}

void LLinsert(linkedList *LL, void *data){
	Node *curr = (Node *) malloc(sizeof(Node));
	curr.data = (void *) node;  
	node->next = LL.front;
	LL.front -> node;
}