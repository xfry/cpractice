#include <stdio.h>
/**
 * a program to create structures using typedef
 * to create structure alias.
 */
typedef struct Dot
{
	float x;
	float y;
} Dot;

struct Rect
{
	Dot top_left;
	Dot bottom_right;
};

Dot make_point(float x, float y);

int main(void)
{
	struct Rect screen;

	screen.top_left = make_point(0,0);
	screen.bottom_right = make_point(800, 600);

	printf("Screen top-left\n x: %f\n y: %f\n",
	       screen.top_left.x, screen.top_left.y);
	printf("Screen bottom-right\n x: %f\n y: %f\n",
	       screen.bottom_right.x, screen.bottom_right.y);

	return (0);
}

Dot make_point(float x, float y)
{
	Dot temp;

	temp.x = x;
	temp.y = y;
	return (temp);
}
