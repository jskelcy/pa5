#include <stdlib.h>

typedef struct customer
{
	char *name;
	float credit;
	int custID;
	Order *orders;
	Order *fails;
}customer;

typedef struct book
{
	char *title;
	float cost;
	int custID;
	char *category;
}book;


typedef struct Order{
	customer *buyer;
	book *book;
}Order;