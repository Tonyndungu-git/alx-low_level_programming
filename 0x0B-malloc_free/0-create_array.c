#include "main.h"
#include <stddef.h>
/**
 * create_array - function that creates an array ofa specific char.
 * @size: size of the array.
 * @c: character being created.
 * Return: charcter pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i = 0;

	if (size != 0)
		n = malloc(size * sizeof(c));
	else
		return (NULL);
	if (n == NULL)
		return (NULL);
	while (i < size)
	{
		n[i] = c;
		i++;
	}
	return (n);
}
