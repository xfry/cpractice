#include <stdio.h>
#include <stdlib.h>

/**
 * function to do math operations
 */
int add(int a, int b);
int multiply(int a, int b);

int main(void)
{
	int (*func_ptr_arr[])(int, int) = {add, multiply};
	int operation = 0;
	int a = 0, b = 0, result = 0;

	printf("ingrese la operacion a realizar \n");
	scanf("%d", &operation);

	printf("ingrese el valor de a: \n");
	scanf("%d", &a);

	printf("ingrese el valor de b: \n");
	scanf("%d", &b);

	result = func_ptr_arr[operation](a,b);
	printf("Resul: %d\n", result);

	return (0);
}

int add(int a, int b)
{
	return (a+b);
}

int multiply(int a, int b)
{
	return (a*b);
}
