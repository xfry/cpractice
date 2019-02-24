#include <stdio.h>
/**
 * main - entry point function
 *
 * description: first time with pointers example
 * return: integer value
 */
int main()
{
	int x =1, y = 0, z[10] = {1,2,3,4,5,6,7,8,9,10};
	int *ip;

	ip = &x; /** points to x which one value is 1*/
	printf("ip: %d\n", *ip);
	y = *ip; /** get the value of ip, which one is pointing to x*/
	printf("y: %d\n", y);
	*ip = 0; /** set the value of p = to 0, now x value change*/
	printf("x: %d\n", x);
	ip = &z[0]; /** points to the first position of the array z*/
	printf("z[0]: %d\n", z[0]);

	*ip = *ip + 10; /**increase the value of p, wich one points to z[0]*/
	printf("z0: %d\n", z[0]);
	*ip += 1; /**increase the value of p pointing to*/
	printf("ip increment: %d\n", *ip);
	++*ip; /**pointer pre increment notation*/
	printf("++ip: %d\n", *ip);
	printf("z0: %d\n", z[0]);
	(*ip)++; /**pointer post increment notation*/
	printf("z0: %d\n", z[0]);

	return (0);
}
