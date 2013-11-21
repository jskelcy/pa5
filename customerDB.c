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
			for( i = 0; status <=5; i++){
				if(c == ' '){
					c = fgetc(customerFile);
					continue;
				}
				if((c !='|') && (c != '\n')){
					switch (status){
						case 0:
						printf("this should work1\n");
							cust->name[printI] = c;
							printI++;
							break;
						case 1:
						printf("this should work2\n");
							cust->custID*= 10;
							cust->custID += atoi(&c);
							break;
						case 2:
						printf("this should work3\n");
							floatBuffer[printI] = c;
							printI++;
							break;
						case 3:
						printf("this should work4\n");
							cust->address[printI] = c;
							printI++;
							break;
						case 4:
							printf("this should work5\n");
							cust->state[printI] =c;
							printI++;
							break;
						case 5:
						printf("this should work6\n");
							cust->zip[printI]= c;
							printI++;
							break;
					}
				}else{
					switch(status){
						case 0:
						printf("this should work7\n");
							cust->name[printI] ='\0';
							printI =0;
							status++;
							break;
						case 1:
						printf("this should work8\n");
							status ++;
							printI=0;
							break;
						case 2:
						printf("this should work9\n");
							cust->credit = atof(floatBuffer);
							status++;
							printI =0;
							break;
						case 3:
						printf("this should work10\n");
							cust->address[printI] ='\0';
							status++;
							printI =0;
							break;
						case 4:
						printf("this should work11\n");
							cust->state[printI]='\0';
							status++;
							printI =0;
							break;
						case 5:
						printf("this should work12\n");
							cust->zip[printI] ='\0';
							status++;
							printI =0;
							break;
					}
				}
				c = fgetc(customerFile);
			}
			dbInsert(database, cust);
			status = 0;
		}
	}
	return database;
}
