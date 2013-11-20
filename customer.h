#include <stdlib.h>
#include <stdio.h>

typedef struct book
{
	char *title;
	float cost;
	int custID;
	char *category;
}book;

typedef struct customer
{
	char *name;
	float credit;
	int custID;
	char *address;
	char *state;
	char *zip;
	book *orders;
	book *fails;
}customer;


customer *customerInit();
book *bookInit();
