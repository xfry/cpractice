#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * description: this function prints a string copied from a source
 * Return: an integer number
 */
int main(void)
{
	char *str1 = "Hello";
	char *str2 = "hellu";

	strcpy(str2, str1);
	printf("%s \n", str2);
	printf("%s \n", str1);
	return (0);
}
