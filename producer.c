#include "producer.h"

/*for now I am just working on format, there is no actuall mutex locking*/

book *getNewOrders(FILE *orderFile, treeRoot *queueDB, int producerStatus){
	if(orderFile != NULL){
		char c;
		int printI;
		char *floatBuffer = malloc(10*sizeof(char));
		int status = 0;
		book *newBook = bookInit();
		c = fgetc(orderFile);
		while(c != EOF){
			int i;
			printI = 0;
			for(i=0; status <4; i++){
				if(c == ' '){
					c = fgetc(orderFile);
					continue;
				}
				if((c !='|') && (c != '\n') && (c != EOF)){
					switch(status){
						case 0:
							newBook->title[printI]=c;
							break;
						case 1:
							floatBuffer[printI] = c;
							break;
						case 2
							newBook->custID *=10;
							newBook->custID += atoi(&c);
							break;
						case 3:
							newBook->category[printI] = c;
							break; 
					}
					printI++;
				}else{
					switch(status){
						case 0: 
							newBook->title[printI] ='\0';
							break;
						case 1:
							newBook->cost = atof(floatBuffer);
							break;
						case 2:
							break;
						case 3
							newBook->category[printI] = '\0';
							break;
					}
					status++;
					printI =0;
				}
				c = fgetc(orderFile);
			}
			status =0;
			/*this method isnt finished, not sure who mutex will work here1*/
			QueueDBEnqueue(queueDB, newBook, newBook->category);
		}
		int producerStatus++;
	}
}