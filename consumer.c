#include "consumer.h"



void processOrder(customer *customer, book *order){
	/*not sure if this is how this works*/
	pthread_mutex_lock(&customer.lock);
	if(customer.credit > order.cost){
		customer.cost -= order.cost;
		LLinsert(customer.orders, order);
	}
	else{
		LLinsert(customer.fails, orders);
	}
	pthread_mutex_unlock(&customer.lock);
}