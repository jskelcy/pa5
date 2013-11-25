
#include "prefixTree.h"

int main(int argc, char* argv[]){

	FILE *customerfp = fopen(argv[1], "r");
	DB *custDB;
	treeRoot *queueDB;
	int queueBuilder;
	int producerStatus;
	if (customerfp ==NULL){
		fprintf(stderr,"bro stahhhp\n");
	}
	/*all the customers are stored here(radix tree)*/
	custDB = custDBBuild(customerfp);
	/*all the queues are stored here(prefix tree)*/
	queueDB = treeInit();



	/*this just builds the queues, nothing else
	*perhaps when we build the queues we should also
	*create the consumer threads.
	*/
	for(queueBuilder =3; queueBuilder<argc; queueBuilder++){
		insertNode(queueDB, argv[queueBuilder]);
	}

	/*just something to concider, we have to have the lock as a variable
	so should we just create one lock in main and pass it around, or should 
	we have a lock for each queue*/

}
