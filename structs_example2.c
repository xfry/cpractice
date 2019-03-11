#include <stdio.h>
#include <stdlib.h>

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *, char *, int);

int main(void)
{
	struct User *my_user;
	my_user = new_user("Yunabe", "andrade@gmail.com", 55);

	/* Dereference the pointer to acces the data using
	 * dot notation.*/
	/* using arrow notation to acces the data of the pointer.*/

	printf("User Created!\n");
	printf("User name: %s\n", my_user->name);
	printf("User email: %s\n", my_user->email);
	printf("User email: %d\n", my_user->age);

	return (0);
}

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;
	user = malloc(sizeof(*user));
	user->name = name;
	user->email = email;
	user->age = age;

	return user;
}
