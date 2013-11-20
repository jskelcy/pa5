#include "customer.h"

typedef struct custDB
{
	Node *root;
}custDB;

typedef struct Node
{
	int ID;
	customer *customer;
	struct Node *left;
	struct Node *right;
}Node;

Node *nodeInit();
void BSTadd(Node *curr, custDB *DB);
custDB *custDBInit(FILE customerfp);