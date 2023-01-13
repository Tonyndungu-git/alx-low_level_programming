#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned int input b.
 * Return: a void pointer.
 */
void *malloc_checked(unsigned int b)
{

	void *n;

	if (b == 0)
		exit(98);

	n = calloc(1, b);

	if (n == NULL)
	{
		exit(98);

	}
	return (n);
}
