#include "customer.h"

typedef struct radixNode radixNode;
typedef struct DB DB;

struct radixNode
{
	void *data;
	radixNode *child0;
	radixNode *child1;
};

struct DB
{
    radixNode *root;
};

radixNode *radixNodeInit();
DB *dbInit();
void dbInsert(DB* DB,customer *curr);
customer *dbGetCustomer(DB *DB,int custID);
