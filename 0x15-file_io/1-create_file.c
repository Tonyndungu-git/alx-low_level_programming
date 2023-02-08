#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * create_file - funtion that creates a file.
 * @filename:pointer to the name of the new file.
 * @text_content:content to be written to the file.
 * Return: an int.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, fd_write;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0644);



	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	fd_write = write(fd, text_content, len);

	close(fd_write);
	return (1);
}
