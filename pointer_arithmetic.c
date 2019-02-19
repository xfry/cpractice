#include<stdio.h>

int main()
{
	int *p;
	int a[2] = {100, 200};
	int n;

	p = &n;

	printf("p = &n; \np: %p\n", (void *)p);
	printf("p + 1: %p\n", ((void *)(p + 1 )));
	printf("p + 2: %p\n", ((void *)(p + 2 )));
	printf("p + 10: %p\n", ((void *)(p +10 )));
	/* possible since a is evaluated */
	/* as an int * in this context */
	p = a;
	printf("p = a;\np: %p\np + 1: %p\n", (void *)p, ((void *)(p +1)));
	printf("a1: %d\n,a2: %d\n", *(p+0), *(p+1));

	return (0);
}
