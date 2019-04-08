#include <sys/types.h>
#include <sys/stat.h>
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
	int fd; /* a non negative file descriptor */
	char text[] = "A text to write inside a file.\n";
	unsigned long int text_size = sizeof(text) / sizeof(text[0]);

	fd = open("a_file.txt", O_CREAT | O_WRONLY, 0600);
	write(fd, text, text_size); /* you need unistd.h to do it works. */

	close(fd);
	return (0);
}
