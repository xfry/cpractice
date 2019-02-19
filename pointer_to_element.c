#include <stdio.h>

void f(int *);

int main()
{
	int *p;
	int t[10] = {100, 200, 300};

	p = t;
	printf("t: %p \n", (void *)&t);
	printf("&t[0]: %p \n", (void *)&t[0]);
	printf("p: %p \n", (void *)p);
	f(t);
	printf("p: %d \n", *p);
	return (0);
}

void f(int *a)
{
	printf("value of t: %d \n", *a);
}
