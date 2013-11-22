
#include "prefixTree.h"

int main(int argc, char* argv[]){

	FILE *customerfp = fopen(argv[1], "r");
	DB *custDB;
	int queueBuilder;
	if (customerfp ==NULL){
		fprintf(stderr,"bro stahhhp\n");
	}
	custDB = custDBInit(customerfp);
	/*this just builds the queues, nothing else*/
	for(queueBuilder =3; queueBuilder<argc; queueBuilder++){
		insertNode(custDB, argv[queueBuilder]);
	}
}
