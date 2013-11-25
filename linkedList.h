
typedef struct linkedList linkedList;
typedef struct Node Node;

struct linkedList
{
	Node *front;
};

struct Node
{
	void *data;
	Node *next;
};