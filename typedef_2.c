#include <stdio.h>
#include <stdlib.h>

struct Entity
{
	float power;
	float magic;
	char *name;
};

typedef struct Entity Enemy;

int main(void)
{
	Enemy *actor1;
	/* storage acto1 in the heap */
	actor1 = malloc(sizeof(*actor1));
	actor1->power = 300.0f;
	actor1->magic = 200.0f;
	actor1->name = "Will";


	printf("The actor: %s, has a power of: %f, with magic: %f\n",
	       actor1->name, actor1->power, actor1->magic);

	/* Free the memory used by Actor1 */
	free(actor1);
	return (0);
}
