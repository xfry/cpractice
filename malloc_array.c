#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 *
 * description: a function that create a dinamic array :D
 * Return: integer lvalue
 */
int main(void)
{
	int n;
	int i = 0;

	printf("write the size of the array\n");
	scanf("%d", &n);

	int *Arr = (int *) malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		Arr[i] = i + 1;
	}

	free(Arr);

	for (int j = 0; j < n; j++)
	{
		printf("%d\n", Arr[j]);
	}

	return (0);
}
