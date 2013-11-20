#include <stdlib.h>
#include <stdio.h>

typedef struct customer
{
	char *name;
	float credit;
	int custID;
	char *address;
	char *state;
	char *zip;
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


typedef struct order{
	customer *buyer;
	book *book;
}order;
Customer *customerInit();
Book *bookInit();
Order *orderInit(;);