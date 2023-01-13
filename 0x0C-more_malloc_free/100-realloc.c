#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the old memory block.
 * @old_size: int of the old_size.
 * @new_size: int of the new_size.
 * Return: void pointer.
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == 0 && ptr != NULL)
	{

		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	min_size = old_size < new_size ? old_size : new_size;

	memcpy(new_ptr, ptr, min_size);

	free(ptr);
	return (new_ptr);

}
