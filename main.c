
#include "customerDB.h"

int main(int argc, char* argv[]){

	FILE *customerfp = fopen(argv[1], "r");
	if (customerfp ==NULL){
		fprintf(stderr,"bro stahhhp\n");
	}
	DB *custDB = custDBInit(customerfp);
}
