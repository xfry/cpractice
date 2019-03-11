#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

int main()
{
	struct User new_user;
	new_user.name = "Fredye";
	new_user.email = "Fredye.andrade@gmail.com";
	new_user.age = 90;

	printf("name: %s, email: %s, age: %d\n",
	       new_user.name,
	       new_user.email,
	       new_user.age);

	return (0);
}
