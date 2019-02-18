#include <stdio.h>
#include "utils.h"

void modify_by_address(int *m)
{
	printf("Value of 'm': %d \n", *m);
	*m = 900;
	printf("Value of 'm': %d \n", *m);
}

int main()
{
	int number = 100;
	modify_by_address(&number);
	printf("%d \n", number);
	return (0);
}
