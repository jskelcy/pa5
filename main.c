
#include "customerDB.h"

int main(int argc, char* argv[]){

	FILE *customerfp = fopen(argv[1], "r");
	DB *custDB;
	if (customerfp ==NULL){
		fprintf(stderr,"bro stahhhp\n");
	}
	custDB = custDBInit(customerfp);
}
