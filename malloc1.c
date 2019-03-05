#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n;
	char *ar;

	n = 5;
	ar = malloc(n * sizeof(char));
	ar[0] = 'c';
	ar[1] = 'o';
	ar[2] = 'o';
	ar[3] = 'l';
	ar[4] = '\0';
	printf("%s\n", ar);

	return (0);
}
