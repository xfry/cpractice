#include <stdio.h>

int main(void)
{
	int n = 100;
	int b = 50;

	int *p = &n;
	int *p2 = &b;

	printf("Value of 'n': %d \n", n);
	printf("Adress of 'n': %p \n", (void *)&n);
	printf("Value of 'b': %d \n", b);
	printf("Address of 'p': %p \n", (void *)p);
	printf("Value of 'p': %d \n", *p);
	printf("Adress of 'p2': %p \n", (void *)p2);
	printf("Value of 'p2': %d \n", *p2);
	return (0);
}
