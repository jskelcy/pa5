#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Queue.h"

typedef struct treeRoot treeRoot;
typedef struct treeNode treeNode;

struct treeRoot{
   struct treeNode *root;
   struct treeNode *ptr;
};

struct treeNode{
    void *data;
    struct treeNode** branches;
    char isWord;
};

treeRoot *treeInit();
void traverse(treeRoot *,char);
void insertNode(treeRoot *, char *);
void freeTree(treeRoot *);
