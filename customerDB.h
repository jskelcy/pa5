#include "customer.h"

typedef struct Node
{
	int ID;
	customer *customer;
	struct Node *left;
	struct Node *right;
}Node;


typedef struct custDB
{
	Node *root;
}custDB;



Node *nodeInit();
void BSTadd(Node *curr, custDB *DB);
custDB *custDBInit(FILE customerfp);