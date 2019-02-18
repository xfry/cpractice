#include <stdio.h>
#include "utils.h"

void modify_param(int param)
{
	param = 408;
	printf("to modify: %d \n", param);
}

int main()
{
	int n = 22;
	modify_param(n);
	printf("%d \n", n);

	return (0);
}
