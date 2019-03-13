#include <stdio.h>
/**
 * print_msg - a function that prints a message
 *
 * return: void or nothing.
 */
void print_msg();

/**
 * get_callback - a function that receive a
 * @(*fn_ptr)(): function pointer as param.
 *
 * description: receive a function pointer address
 * then run the function stored at that address.
 * return: void or nothing.
 */
void get_callback( void (*fn_ptr)() );

int main(void)
{
	/** define the function pointer */
	void (*fn_ptr)();
	/** Assign the address of the function to the pointer*/
	fn_ptr = &print_msg;
	/**
	 * pass the function pointer as param
	 * it becomes a callback.
	 */
	get_callback(fn_ptr);

	return (0);
}

void print_msg()
{
	printf("Hello World\n");
}

void get_callback( void (*fn_ptr)() )
{
	fn_ptr();
}
