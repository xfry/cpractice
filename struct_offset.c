#include <stdio.h>
#include <stddef.h>

struct Point
{
	float x;
	float *y;
};

int main(void)
{
	unsigned long int address;

	address = offsetof(struct Point, x);
	printf("x: %lu\n", address);
	address = offsetof(struct Point, y);
	printf("y: %lu\n", address);
	return (0);
}
