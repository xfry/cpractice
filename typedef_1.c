#include <stdio.h>

typedef short SMALLINT;

struct Entity
{
	float pos_x;
	float pos_y;
	float size;
};

typedef struct Entity Point;

int main(void)
{
	SMALLINT a = 100;
	Point p1 = {100.0f, 200.0f, 50.0f};

	printf("%d\n", a);
	printf("%f\n", p1.pos_x);
	printf("%f\n", p1.pos_y);
	printf("%f\n", p1.size);

	return (0);
}
