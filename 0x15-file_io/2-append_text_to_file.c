#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * append_text_to_file - funtion that appends an existing file.
 * @filename:pointer to the name of the new file.
 * @text_content:content to be written to the file.
 * Return: an int.
 */


int append_text_to_file(const char *filename, char *text_content)
{

	int fd, fd_write;

	if (filename == NULL || text_content == NULL)
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	fd_write = write(fd, text_content, strlen(text_content));

	close(fd);

	if (fd_write == -1)
		return (-1);
	return (1);


}
