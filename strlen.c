#include <stdio.h>

/**
 * strlen prototype
 */
int _strlen(char *);

/**
 * main - entry point
 * @argc: an integer param
 * @argv: a char pointer to receive
 *
 * Return: an integer value
 */
int main(void)
{
	printf("Length of string: %d\n", _strlen("Ola ke ase!"));
	return (0);
}

/**
 * strlen - a function to get the length of one string
 * @s: a pointer
 *
 * Return: an integer value
 */
int _strlen(char *s)
{
	char *p = s;

	while(*p != '\0')
		p++;
	return p - s;
}
