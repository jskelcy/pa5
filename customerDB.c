#include "customerDB.h"

Node *nodeInit(){
	Node *curr = (Node) malloc(sizeof(Node));
	customer = customerInit();
	return Node;
}

void BSTadd(Node *curr, custDB *DB){
	Node *ptr =root; 
	while(ptr != NULL){
		if(curr->ID > ptr->ID){
			ptr = ptr->right;
		}else{
			ptr = ptr->left;
		}
	}
	ptr = curr;
}

custDB *custDBInit(FILE customerfp){
	char c;
	int len =0;
	custDB *DB = malloc(sizeof(custDB));
	char *buffer = malloc(sizeof(char));
	while(customerfp != EOF){
		//new node is created
		Node *toBeAdded = nodeInit();
		//buffer is filled with one line from the code
		while((c = fgetc(customerfp)!= '\n')){
			buffer = realloc(buffer, len +1);
			buffer[len++] = c;
		}
		//this is terrible
		int section =0;
		char *doubleConverter = malloc (sizeof(char)*7);
		int printi = 0;
		for(int i =0; i <= len; i++){
			if(buffer[i] = ' ') continue;
			if(buffer[i]!='|'){
				if(section = 0){
					toBeAdded->customer->name[printi] = buffer[i];
				}
				if(section = 1){
					toBeAdded->customer->custID *= 10;
					toBeAdded->customer->custID += (int) buffer[i];
				}
				if(section = 2){
					floatConverter[printi] = (float) buffer[i];
				}
				if(section = 3){
					toBeAdded->customer->address[printi] = buffer[i];
				}
				if(section = 4){
					toBeAdded->customer->state[printi] = buffer[i];

				}
				if(section = 5){
					toBeAdded->customer->zip [printi]= buffer[i];
				}
			}
			else{
				if(section = 0){
					toBeAdded->customer->name[i] = '\0';
					section++;
				}
				if(section = 2){
					toBeAdded->customer->credit= atof(floatConverter); 
				}
				if(section = 3){
					toBeAdded->customer->address = '\0';
					section++;
				}
				if(section = 4){
					toBeAdded->customer->state = '\0';
					section++;
				}
				if(section = 5){
					toBeAdded->customer->zip = '\0';
					section++;
				}
				if((section = 1)&&(section= 2)){
					section ++;
				}
				printi =0;
			}
		}
		toBeAdded->ID= toBeAdded->customer->custID;
		BSTadd(toBeAdded,DB);
		len =0;
	}
	return DB;
}