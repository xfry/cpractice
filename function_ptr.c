#include <stdio.h>

/**
 * sum - A function to do sum operations
 * @a: an integer param
 * @b: an integer param
 *
 * return: an integer as result of the operation
 */
int sum(int a, int b);

int main(void)
{
	/**
	 * 1. Declare the function pointer following the
	 * function signature.
	 * 2. assign the address of the function using & or
	 * the name of the function.
	 * 3. implement the function pointer
	 */
	int (*func_ptr)(int, int);
	int result = 0;
	func_ptr = sum;
	result = func_ptr(22,33);
	printf("result: %d\n", result);
	return (0);
}

int sum(int a, int b)
{
	return a + b;
}
