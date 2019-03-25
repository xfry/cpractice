#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct Point
{
	float x;
	float y;
	struct Point *next;
};

typedef struct Point *List_Ptr;

void add_node(List_Ptr node, int, int);

int main(void)
{
	List_Ptr first = NULL;
	add_node(first, 200, 100);

	free(first);
	return (0);
}

void add_node(List_Ptr node, int x, int y)
{
	if(node == NULL)
	{
		node = malloc(sizeof(struct Point));
		node->x = x;
		node->y = y;
		node->next = NULL;
	}

	printf("node added: x %f, y %f\n", node->x, node->y);
}
