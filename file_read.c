#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
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

	for(count = 0; count < buff_size; count ++)
	{
		if(buff[count] == '\0')
			break;
		printf("%c", buff[count]);
	}

	(void)readed_bytes; /* compiler ignores this unused variable */
	printf("size of buffer: %lu \n", buff_size);

	close(file_descriptor);

	return (0);
}
