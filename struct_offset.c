#include <stdio.h>
#include <stddef.h>

//#pragma pack(1)

struct Point
{
	short int b; //2 bytes
	float x; //4 bytes
	int y; //4 bytes
	char z; //1 bytes
	char *p; //8 bytes
};
/**
 * main - a function to check the size of a struct
 *
 * description: this function not get the real size of the struct
 * because of the way memory mapped structure members.
 * so to get the right size you need to use the macro pack(1)
 * NOTE: uncomment the line 4 to see the real size using sizeof

 * return: an integer value
 */
int main(void)
{
	unsigned long int address;

	address = sizeof(struct Point);
	printf("size of Structure: %lu\n", address);

	/**
	 * you can see the offset of a structure member in the
	 * memory layed, using the stddef.h and calling the function
	 * offsetof(struct, member)
	 */
	address = offsetof(struct Point, b);
	printf("offset in memory of B: %lu\n", address);

	address = offsetof(struct Point, x);
	printf("offset in memory of X: %lu\n", address);

	address = offsetof(struct Point, y);
	printf("offset in memory of Y: %lu\n", address);

	address = offsetof(struct Point, z);
	printf("offset in memory of Z: %lu\n", address);

	address = offsetof(struct Point, p);
	printf("offset in memory of *P: %lu\n", address);

	return (0);
}
