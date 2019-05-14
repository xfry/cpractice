#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include<string.h>

typedef struct Characters
{
	int power;
	char *name;
	struct Characters *next;

} NPCs;

void list_init(NPCs **npcs, int power, char *name);

int main(void)
{
	int power = 100;
        NPCs *list = NULL;
	list_init(&list, power, "Hogon");
	printf("List address2: %p\n", (void *)list);
	printf("power: %d\n", list->power);
	printf("power: %s\n", list->name);
	free(list);
	return (0);
}

void list_init(NPCs **npcs, int power, char *name)
{
	*npcs = malloc(sizeof(NPCs));
	(*npcs)->power = power;
	(*npcs)->name = name;
	printf("List address1: %p\n", (void *)*npcs);
}
