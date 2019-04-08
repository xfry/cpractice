#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point function
 * @void no parameters.
 *
 * description: implementing the OS file open and write commands
 * Return an integer number.
 */
int main(void)
{
	int file_descriptor; /* a non negative file descriptor */
	char text[] = "A text to write inside a file.\n";
	unsigned long int text_size = sizeof(text) / sizeof(text[0]);

	file_descriptor = open("a_file.txt", O_CREAT | O_WRONLY, 0600);

	if (file_descriptor == -1)
	{
		printf("there was an erro reading file... \n");
		exit(1);
	}

	write(file_descriptor, text, text_size); /* you need unistd.h to do it works. */

	close(file_descriptor);
	return (0);
}
