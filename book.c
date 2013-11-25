#include "book.h"



book *bookInit(){
	book *curr = (book *) malloc(sizeof(book));
	curr->title = malloc(256*sizeof(char));
	return curr;
}

