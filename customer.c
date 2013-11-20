#include <stdlib.h>

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


customer *customerInit(){
	customer *curr = (customer) malloc(sizeof(customer));
	curr->name = malloc(256*sizeof(char));
	curr->address = malloc(256*sizeof(char));
	curr->state = malloc(256*sizeof(char));
	curr->zip =malloc(256*sizeof(char));
	curr->credit =0;
	curr->custID =0;
	return curr;
}

book *bookInit(){
	book *curr = (book) malloc(sizeof(book));
	curr->title = malloc(256*csizeof(char));
	return curr;
}

order *OrderInit(){
	order *curr = (order) malloc(sizeof(order));
	return curr;
}

