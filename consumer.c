
void checkQueue(Queue *queue){

}

customer *getCutsomer(DB *customerDB,int custID){
	/*this needs to be some kind of mutex locking thing the the customer object*/
}

void processOrder(customer *customer, book *order){
	if(customer.credit > order.cost){
		customer.cost -= order.cost;
		LLinsert(customer.orders, order);
	}
	else{
		LLinsert(customer.fails, orders);
	}
}