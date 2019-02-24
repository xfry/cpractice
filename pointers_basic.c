#include <stdio.h>

int main()
{
	int x =1, y = 0, z[10] = {1,2,3,4,5,6,7,8,9,10};
	int *ip;

	ip = &x;
	printf("ip: %d\n", *ip);
	y = *ip;
	printf("y: %d\n", y);
	*ip = 0;
	printf("x: %d\n", x);
	ip = &z[0];
	printf("z[0]: %d\n", z[0]);

	*ip = *ip + 10;
	printf("z0: %d\n", z[0]);
	*ip += 1;
	printf("ip increment: %d\n", *ip);
	++*ip;
	printf("++ip: %d\n", *ip);
	printf("z0: %d\n", z[0]);
	(*ip)++;
	printf("z0: %d\n", z[0]);
	return (0);
}
