#include <stdlib.h>
#include <stdio.h>

typedef struct Customer
{
	char *name;
	double credit;
	int custID;
	Order *orders;
	Order *fails;
}Customer;

typedef struct Book
{
	char *title;
	float cost;
	int custID;
	char *category;
}Book;


typedef struct Order{
	customer *buyer;
	book *book;
}Order;


Customer *customerInit();
Book *bookInit();
Order *orderInit(;);