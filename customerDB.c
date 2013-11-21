#include "customerDB.h"

Node *nodeInit(){
	Node *curr = (Node) malloc(sizeof(Node));
	book = customerInit();
	return Node;
}

void BSTadd(Node *curr, custDB *DB){
	Node *ptr =root; 
	while(ptr != NULL){
		if(curr->ID > ptr->ID){
			ptr = ptr->right;
		}else{
			ptr = ptr->left;
		}
	}
	ptr = curr;
}

custDB *custDBInit(FILE *customerFile){
	DB *database = dbInit();
	if (customerFile != NULL) {
		char c;
		customer *cust = customerInit();
		while ((c = fgetc(customerFile)) != EOF) {
			fscanf(customerFile, "%s[^|] %d[^|] %f[^|] %s[^|] %s[^|] %s[^\n]", cust->name, cust->custID, cust->credit, cust->address, cust->state, cust->zip);
			dbInsert(database, cust);
		}
	}
	return database;
}
