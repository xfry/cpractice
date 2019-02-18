#include <stdio.h>

int main()
{
	int arr[] = {1, 10, 20,30};
	char *arr2 = "hola mundo";
	printf("%lu first array length: \n", *arr+sizeof(arr) );
	printf("second array length: %lu \n", sizeof(arr2) );
	return 0;
}
