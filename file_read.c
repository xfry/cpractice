#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * main - a function to open and read the content of a file
 * @void: no parameters
 *
 * description: a function to open a file, store its content in to a
 * array buffer and then go through it printing every character.
 * return: 0 if it works, and -1 if it does not.
 */
int main(void)
{
	int file_descriptor;
	ssize_t readed_bytes;
	size_t count;
	char buff[100];
	unsigned long int buff_size = sizeof(buff) / sizeof(buff[0]);

	file_descriptor = open("a_file.txt", O_RDONLY, 00400);
	if (file_descriptor == -1)
	{
		printf("there was an error reading, descriptor: %d",
		       file_descriptor);
		exit(1);
	}

	/* reading the content and passing it to a buffer of char characters. */
	readed_bytes = read(file_descriptor, buff, buff_size);
	if (readed_bytes == 0)
		return (-1);

	for (count = 0; count < buff_size; count++)
	{
		if (buff[count] == '\0')
			break;
		printf("%c", buff[count]);
	}

	printf("size of buffer: %lu \n", buff_size);

	close(file_descriptor);

	return (0);
}
