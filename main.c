
#include "costomerDB.h"

int main(int argc, char* argv[]){

	FILE *customerfp = fopen(argv[1], "r");
	custDB *custDB = custDBInit(customerfp);
}
