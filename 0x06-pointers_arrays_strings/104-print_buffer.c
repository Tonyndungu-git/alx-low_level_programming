#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer.
 * @b: pointer to string b.
 * @size: integer size.
 * Returns: void
 */
void print_buffer(char *b, int size)
{

	int i = 0;

	while (*(b + i) < size)
	{

		printf("%02x", *(b + i));
		i++;

	}

}
