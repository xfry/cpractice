#include <stdio.h>
#include <stddef.h>
#include <string.h>

int sum (int, int);
int res (int, int);
int mult (int, int);

typedef int (*operations) (int, int);

typedef struct oper
{
	char *name;
	operations opt;
} actions;

int main (int argc, char *argv[])
{

       actions calc;

       if (argc < 1)
	      return (0);

       if (!strcmp(argv[1], "suma"))
       {
	       calc.name = "suma";
	       calc.opt = &sum;
	       printf("%i\n", calc.opt(4,3));
	       printf("funciona 2\n");
       }

       if (!strcmp(argv[1], "resta"))
       {
	       calc.name = "resta";
	       calc.opt = &res;
	       printf("%i\n", calc.opt(4,3));
       }

       if (!strcmp(argv[1], "multip"))
       {
	       calc.name = "multip";
	       calc.opt = &mult;
	       printf("%i\n", calc.opt(4,3));
       }

       return (0);
}


int sum (int A,int B)
{
	return (A + B);
}

int res (int A, int B)
{
	return (A - B);
}

int mult (int A, int B)
{
	return (A * B);
}
