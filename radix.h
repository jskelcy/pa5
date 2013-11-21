#include "customer.h"

typedef struct Node Node;
typedef struct DB DB;

struct Node
{
	void *data;
	Node *child0;
	Node *child1;
};

struct DB
{
	Node *root;
};

Node *nodeInit();
DB *dbInit();
void dbInsert(DB* DB,customer *curr);
customer *dbGetCustomer(DB *DB,int custID);
