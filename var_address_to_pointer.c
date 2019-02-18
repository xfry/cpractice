#include <stdio.h>

int main()
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("%p \n", (void *)p );
	return (0);
}
