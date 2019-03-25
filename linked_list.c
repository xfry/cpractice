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

List_Ptr add_node(List_Ptr node, int, int);

int main(void)
{
	List_Ptr first = NULL;
	List_Ptr temp = add_node(first, 200, 100);
	printf("node added: x %f, y %f\n", temp->x, temp->y);

	free(first);
	free(temp);

	return (0);
}

List_Ptr add_node(List_Ptr node, int x, int y)
{
	if(node == NULL)
	{
		node = malloc(sizeof(struct Point));
		node->x = x;
		node->y = y;
		node->next = NULL;
	}

	return node;
}
