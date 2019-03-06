#include <stdio.h>
/**
 * main - entry point
 *
 * description: a function that fails when try to modify
 * a literal string using a pointer.
 * return: an integer value
 */
int main(void)
{
	char *p = "Hola mundo";
	printf("%s\n", p);
	*++p = 'c';
	printf("%s\n", p);

	return (0);
}
