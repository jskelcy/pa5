#include <stdlib.h>
#include <stdio.h>

typedef struct book book;
typedef struct customer customer;

struct book
{
	char *title;
	float cost;
	int custID;
	char *category;
};

struct customer
{
	char *name;
	float credit;
	int custID;
	char *address;
	char *state;
	char *zip;
	book *orders;
	book *fails;
};


customer *customerInit();
book *bookInit();
