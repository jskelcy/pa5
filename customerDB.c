#include "customerDB.h"



DB *custDBInit(FILE *customerFile){
	DB *database = dbInit();
	if (customerFile != NULL) {
		char c;
		int printI;
		char *floatBuffer = malloc(10*sizeof(char));
		int status = 0;
		customer *cust = customerInit();
		c = fgetc(customerFile);
		printf("this should work\n");
		while (c != EOF) {
			int i;
			printI = 0;
			for( i = 0; c !='\n'; i++){
				if(c == ' '){
					continue;
				}
				if(c !='|'){
					switch (status){
						case 0:
							cust->name[printI] = c;
							printI++;
							break;
						case 1:
							cust->custID*= 10;
							cust->custID += atoi(&c);
							break;
						case 2:
							floatBuffer[printI] = c;
							printI++;
							break;
						case 3:
							cust->address[printI] = c;
							printI++;
							break;
						case 4:
							cust->state[printI] =c;
							printI++;
							break;
						case 5:
							cust->zip[printI]= c;
							printI++;
							break;
					}
				}else{
					switch(status){
						case 0:
							cust->name[printI] ='\0';
							status++;
							break;
						case 1:
							status ++;
							break;
						case 2:
							cust->credit = atof(floatBuffer);
							status++;
							break;
						case 3:
							cust->address[printI] ='\0';
							status++;
							break;
						case 4:
							cust->state[printI]='\0';
							status++;
							break;
						case 5:
							cust->zip[printI] ='\0';
							status++;
							break;
					}
				}
			}
		}
		dbInsert(database, cust);
		}
	return database;
}
