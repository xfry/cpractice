#include <stdio.h>
#include <time.h>

/**
 * Description: A program to test asyncronous operations and
 * callback implementatios in c
 */

char *generate_data(char *str);

char *(*func_ptr)(char *str);

void shows_data( char *(*func_ptr)(char *), char *, int);

int main(void)
{
	char str[] = "{email: my@email.com, name: fredy}";
	char *str2 = "This should print first";

	func_ptr = generate_data;
	shows_data(func_ptr, str, 300);
	printf("str: %s\n", str2);

	return (0);
}

char *generate_data(char *str)
{
	return str;
}

void shows_data( char *(*func_ptr)(char *), char *str, int number_of_seconds )
{
	int mlseconds = 1000 * number_of_seconds;
	clock_t start = clock();
	char *str_aux = func_ptr(str);

	printf("start: %ld\n", clock());
	printf("time: %d\n", mlseconds);

	/** dalay for some seconds*/
	while(clock() < (start + mlseconds));

	printf("data: %s:\n", str_aux);
}
