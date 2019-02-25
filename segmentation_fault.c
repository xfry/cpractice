#include <stdio.h>
/**
 * main - entry point
 *
 * description: a program to generate a segmentation fault
 * return: void, nothing
 */
int main()
{
	int *p = NULL;
	*p = 10;
	return (0);
}
