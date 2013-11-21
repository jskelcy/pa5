#include "radix.h"


Node *nodeInit(){
	Node *curr = (Node *) malloc(sizeof(Node));
	return curr;
}

DB *dbInit(){
	DB *curr = (DB *) malloc(sizeof(DB));
	curr->root = nodeInit();
	return curr;
}


void dbInsert(DB *DB, customer *curr){
	int map = curr->custID;
	Node *ptr = DB->root;
	while(map != 0){
		if((map%2) == 1){
			ptr = ptr->child0;
			map/=2;
		}
		if((map%2) ==0){
			ptr = ptr->child1;
			map/=2;
		}
		if(ptr == NULL){
		fprintf(stderr,"poop\n");
			ptr = nodeInit();
		fprintf(stderr,"%p\n",ptr);	
		}
	}
	printf("meh\n");
	ptr->data = (void *) curr;
}

customer *dbGetCustomer(DB *DB, int custID){
	Node *ptr = DB->root;
	while(custID !=0){
		if((custID%2) == 1){
			ptr = ptr->child0;
			custID/=2;
		}
		if((custID%2) ==0){
			ptr = ptr->child1;
			custID/=2;
		}
	}
	return (customer *)ptr->data;
}