#include "linkedList.h"

linkedList *LLinit(){
	linkedList *curr = (linkedList *) malloc(sizeof(linkedList));
	return curr;
}

void LLinsert(linkedList *LL, void *data){
	Node *curr = (Node *) malloc(sizeof(Node));
	curr->data = data;
	curr->next = LL->front;
	LL->front = curr;
}
