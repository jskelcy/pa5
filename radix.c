#include "radix.h"


radixNode *radixNodeInit(){
    radixNode *curr = (radixNode *) malloc(sizeof(radixNode));
    return curr;
}

DB *dbInit(){
    DB *curr = (DB *) malloc(sizeof(DB));
    curr->root = radixNodeInit();
    return curr;
}


void dbInsert(DB *DB, customer *curr){
    int map = curr->custID;
    radixNode *ptr = DB->root;
    while(map != 0){
        if((map%2) == 1){
            ptr = ptr->child0;
            map/=2;
        }else{
            ptr = ptr->child1;
            map/=2;
        }
        if(ptr == NULL){
            ptr = radixNodeInit();
        }
    }
    ptr->data = (void *) curr;
}

customer *dbGetCustomer(DB *DB, int custID){
    radixNode *ptr = DB->root;
    while(custID !=0){
        if((custID%2) == 1){
            ptr = ptr->child0;
            custID/=2;
        }
        if((custID%2) ==0){
            ptr = ptr->child1;
            custID/=2;
        }
    }
    return (customer *)ptr->data;
}
