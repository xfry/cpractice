#include <stdio.h>
#pragma pack(1)

typedef struct Character
{
	float power;
	char  *name;
} Enemy;

int main(void)
{
	Enemy enemy_list[] = {
		{200, "Ork"},
		{500, "Ogre"},
		{300, "Trol"},
	};

	unsigned long int length = sizeof enemy_list / sizeof(enemy_list[0]);
	unsigned long int counter;

	for(counter = 0; counter < length ; counter++)
	{
		printf("name: %s\n", enemy_list[counter].name);
		printf("power: %f\n", enemy_list[counter].power);
	}

	return (0);
}
