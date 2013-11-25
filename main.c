#include "customerDB.h"

int main(int argc, char *argv[]){
    FILE *customerFile = fopen(argv[1], "r");
    DB *custDB = custDBBuild(customerFile);
    customer *testCust = (customer *)dbGet(custDB, 1);
    if(testCust == NULL){
        printf("this is null");
    }else{
        printf("its not");
    }
}
